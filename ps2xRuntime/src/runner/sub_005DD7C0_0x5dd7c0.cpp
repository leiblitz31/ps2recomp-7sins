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

// Function: sub_005DD7C0
// Address: 0x5dd7c0 - 0x5de5c0
void sub_005DD7C0_0x5dd7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DD7C0_0x5dd7c0");
#endif

    switch (ctx->pc) {
        case 0x5dd7c0u: goto label_5dd7c0;
        case 0x5dd7c4u: goto label_5dd7c4;
        case 0x5dd7c8u: goto label_5dd7c8;
        case 0x5dd7ccu: goto label_5dd7cc;
        case 0x5dd7d0u: goto label_5dd7d0;
        case 0x5dd7d4u: goto label_5dd7d4;
        case 0x5dd7d8u: goto label_5dd7d8;
        case 0x5dd7dcu: goto label_5dd7dc;
        case 0x5dd7e0u: goto label_5dd7e0;
        case 0x5dd7e4u: goto label_5dd7e4;
        case 0x5dd7e8u: goto label_5dd7e8;
        case 0x5dd7ecu: goto label_5dd7ec;
        case 0x5dd7f0u: goto label_5dd7f0;
        case 0x5dd7f4u: goto label_5dd7f4;
        case 0x5dd7f8u: goto label_5dd7f8;
        case 0x5dd7fcu: goto label_5dd7fc;
        case 0x5dd800u: goto label_5dd800;
        case 0x5dd804u: goto label_5dd804;
        case 0x5dd808u: goto label_5dd808;
        case 0x5dd80cu: goto label_5dd80c;
        case 0x5dd810u: goto label_5dd810;
        case 0x5dd814u: goto label_5dd814;
        case 0x5dd818u: goto label_5dd818;
        case 0x5dd81cu: goto label_5dd81c;
        case 0x5dd820u: goto label_5dd820;
        case 0x5dd824u: goto label_5dd824;
        case 0x5dd828u: goto label_5dd828;
        case 0x5dd82cu: goto label_5dd82c;
        case 0x5dd830u: goto label_5dd830;
        case 0x5dd834u: goto label_5dd834;
        case 0x5dd838u: goto label_5dd838;
        case 0x5dd83cu: goto label_5dd83c;
        case 0x5dd840u: goto label_5dd840;
        case 0x5dd844u: goto label_5dd844;
        case 0x5dd848u: goto label_5dd848;
        case 0x5dd84cu: goto label_5dd84c;
        case 0x5dd850u: goto label_5dd850;
        case 0x5dd854u: goto label_5dd854;
        case 0x5dd858u: goto label_5dd858;
        case 0x5dd85cu: goto label_5dd85c;
        case 0x5dd860u: goto label_5dd860;
        case 0x5dd864u: goto label_5dd864;
        case 0x5dd868u: goto label_5dd868;
        case 0x5dd86cu: goto label_5dd86c;
        case 0x5dd870u: goto label_5dd870;
        case 0x5dd874u: goto label_5dd874;
        case 0x5dd878u: goto label_5dd878;
        case 0x5dd87cu: goto label_5dd87c;
        case 0x5dd880u: goto label_5dd880;
        case 0x5dd884u: goto label_5dd884;
        case 0x5dd888u: goto label_5dd888;
        case 0x5dd88cu: goto label_5dd88c;
        case 0x5dd890u: goto label_5dd890;
        case 0x5dd894u: goto label_5dd894;
        case 0x5dd898u: goto label_5dd898;
        case 0x5dd89cu: goto label_5dd89c;
        case 0x5dd8a0u: goto label_5dd8a0;
        case 0x5dd8a4u: goto label_5dd8a4;
        case 0x5dd8a8u: goto label_5dd8a8;
        case 0x5dd8acu: goto label_5dd8ac;
        case 0x5dd8b0u: goto label_5dd8b0;
        case 0x5dd8b4u: goto label_5dd8b4;
        case 0x5dd8b8u: goto label_5dd8b8;
        case 0x5dd8bcu: goto label_5dd8bc;
        case 0x5dd8c0u: goto label_5dd8c0;
        case 0x5dd8c4u: goto label_5dd8c4;
        case 0x5dd8c8u: goto label_5dd8c8;
        case 0x5dd8ccu: goto label_5dd8cc;
        case 0x5dd8d0u: goto label_5dd8d0;
        case 0x5dd8d4u: goto label_5dd8d4;
        case 0x5dd8d8u: goto label_5dd8d8;
        case 0x5dd8dcu: goto label_5dd8dc;
        case 0x5dd8e0u: goto label_5dd8e0;
        case 0x5dd8e4u: goto label_5dd8e4;
        case 0x5dd8e8u: goto label_5dd8e8;
        case 0x5dd8ecu: goto label_5dd8ec;
        case 0x5dd8f0u: goto label_5dd8f0;
        case 0x5dd8f4u: goto label_5dd8f4;
        case 0x5dd8f8u: goto label_5dd8f8;
        case 0x5dd8fcu: goto label_5dd8fc;
        case 0x5dd900u: goto label_5dd900;
        case 0x5dd904u: goto label_5dd904;
        case 0x5dd908u: goto label_5dd908;
        case 0x5dd90cu: goto label_5dd90c;
        case 0x5dd910u: goto label_5dd910;
        case 0x5dd914u: goto label_5dd914;
        case 0x5dd918u: goto label_5dd918;
        case 0x5dd91cu: goto label_5dd91c;
        case 0x5dd920u: goto label_5dd920;
        case 0x5dd924u: goto label_5dd924;
        case 0x5dd928u: goto label_5dd928;
        case 0x5dd92cu: goto label_5dd92c;
        case 0x5dd930u: goto label_5dd930;
        case 0x5dd934u: goto label_5dd934;
        case 0x5dd938u: goto label_5dd938;
        case 0x5dd93cu: goto label_5dd93c;
        case 0x5dd940u: goto label_5dd940;
        case 0x5dd944u: goto label_5dd944;
        case 0x5dd948u: goto label_5dd948;
        case 0x5dd94cu: goto label_5dd94c;
        case 0x5dd950u: goto label_5dd950;
        case 0x5dd954u: goto label_5dd954;
        case 0x5dd958u: goto label_5dd958;
        case 0x5dd95cu: goto label_5dd95c;
        case 0x5dd960u: goto label_5dd960;
        case 0x5dd964u: goto label_5dd964;
        case 0x5dd968u: goto label_5dd968;
        case 0x5dd96cu: goto label_5dd96c;
        case 0x5dd970u: goto label_5dd970;
        case 0x5dd974u: goto label_5dd974;
        case 0x5dd978u: goto label_5dd978;
        case 0x5dd97cu: goto label_5dd97c;
        case 0x5dd980u: goto label_5dd980;
        case 0x5dd984u: goto label_5dd984;
        case 0x5dd988u: goto label_5dd988;
        case 0x5dd98cu: goto label_5dd98c;
        case 0x5dd990u: goto label_5dd990;
        case 0x5dd994u: goto label_5dd994;
        case 0x5dd998u: goto label_5dd998;
        case 0x5dd99cu: goto label_5dd99c;
        case 0x5dd9a0u: goto label_5dd9a0;
        case 0x5dd9a4u: goto label_5dd9a4;
        case 0x5dd9a8u: goto label_5dd9a8;
        case 0x5dd9acu: goto label_5dd9ac;
        case 0x5dd9b0u: goto label_5dd9b0;
        case 0x5dd9b4u: goto label_5dd9b4;
        case 0x5dd9b8u: goto label_5dd9b8;
        case 0x5dd9bcu: goto label_5dd9bc;
        case 0x5dd9c0u: goto label_5dd9c0;
        case 0x5dd9c4u: goto label_5dd9c4;
        case 0x5dd9c8u: goto label_5dd9c8;
        case 0x5dd9ccu: goto label_5dd9cc;
        case 0x5dd9d0u: goto label_5dd9d0;
        case 0x5dd9d4u: goto label_5dd9d4;
        case 0x5dd9d8u: goto label_5dd9d8;
        case 0x5dd9dcu: goto label_5dd9dc;
        case 0x5dd9e0u: goto label_5dd9e0;
        case 0x5dd9e4u: goto label_5dd9e4;
        case 0x5dd9e8u: goto label_5dd9e8;
        case 0x5dd9ecu: goto label_5dd9ec;
        case 0x5dd9f0u: goto label_5dd9f0;
        case 0x5dd9f4u: goto label_5dd9f4;
        case 0x5dd9f8u: goto label_5dd9f8;
        case 0x5dd9fcu: goto label_5dd9fc;
        case 0x5dda00u: goto label_5dda00;
        case 0x5dda04u: goto label_5dda04;
        case 0x5dda08u: goto label_5dda08;
        case 0x5dda0cu: goto label_5dda0c;
        case 0x5dda10u: goto label_5dda10;
        case 0x5dda14u: goto label_5dda14;
        case 0x5dda18u: goto label_5dda18;
        case 0x5dda1cu: goto label_5dda1c;
        case 0x5dda20u: goto label_5dda20;
        case 0x5dda24u: goto label_5dda24;
        case 0x5dda28u: goto label_5dda28;
        case 0x5dda2cu: goto label_5dda2c;
        case 0x5dda30u: goto label_5dda30;
        case 0x5dda34u: goto label_5dda34;
        case 0x5dda38u: goto label_5dda38;
        case 0x5dda3cu: goto label_5dda3c;
        case 0x5dda40u: goto label_5dda40;
        case 0x5dda44u: goto label_5dda44;
        case 0x5dda48u: goto label_5dda48;
        case 0x5dda4cu: goto label_5dda4c;
        case 0x5dda50u: goto label_5dda50;
        case 0x5dda54u: goto label_5dda54;
        case 0x5dda58u: goto label_5dda58;
        case 0x5dda5cu: goto label_5dda5c;
        case 0x5dda60u: goto label_5dda60;
        case 0x5dda64u: goto label_5dda64;
        case 0x5dda68u: goto label_5dda68;
        case 0x5dda6cu: goto label_5dda6c;
        case 0x5dda70u: goto label_5dda70;
        case 0x5dda74u: goto label_5dda74;
        case 0x5dda78u: goto label_5dda78;
        case 0x5dda7cu: goto label_5dda7c;
        case 0x5dda80u: goto label_5dda80;
        case 0x5dda84u: goto label_5dda84;
        case 0x5dda88u: goto label_5dda88;
        case 0x5dda8cu: goto label_5dda8c;
        case 0x5dda90u: goto label_5dda90;
        case 0x5dda94u: goto label_5dda94;
        case 0x5dda98u: goto label_5dda98;
        case 0x5dda9cu: goto label_5dda9c;
        case 0x5ddaa0u: goto label_5ddaa0;
        case 0x5ddaa4u: goto label_5ddaa4;
        case 0x5ddaa8u: goto label_5ddaa8;
        case 0x5ddaacu: goto label_5ddaac;
        case 0x5ddab0u: goto label_5ddab0;
        case 0x5ddab4u: goto label_5ddab4;
        case 0x5ddab8u: goto label_5ddab8;
        case 0x5ddabcu: goto label_5ddabc;
        case 0x5ddac0u: goto label_5ddac0;
        case 0x5ddac4u: goto label_5ddac4;
        case 0x5ddac8u: goto label_5ddac8;
        case 0x5ddaccu: goto label_5ddacc;
        case 0x5ddad0u: goto label_5ddad0;
        case 0x5ddad4u: goto label_5ddad4;
        case 0x5ddad8u: goto label_5ddad8;
        case 0x5ddadcu: goto label_5ddadc;
        case 0x5ddae0u: goto label_5ddae0;
        case 0x5ddae4u: goto label_5ddae4;
        case 0x5ddae8u: goto label_5ddae8;
        case 0x5ddaecu: goto label_5ddaec;
        case 0x5ddaf0u: goto label_5ddaf0;
        case 0x5ddaf4u: goto label_5ddaf4;
        case 0x5ddaf8u: goto label_5ddaf8;
        case 0x5ddafcu: goto label_5ddafc;
        case 0x5ddb00u: goto label_5ddb00;
        case 0x5ddb04u: goto label_5ddb04;
        case 0x5ddb08u: goto label_5ddb08;
        case 0x5ddb0cu: goto label_5ddb0c;
        case 0x5ddb10u: goto label_5ddb10;
        case 0x5ddb14u: goto label_5ddb14;
        case 0x5ddb18u: goto label_5ddb18;
        case 0x5ddb1cu: goto label_5ddb1c;
        case 0x5ddb20u: goto label_5ddb20;
        case 0x5ddb24u: goto label_5ddb24;
        case 0x5ddb28u: goto label_5ddb28;
        case 0x5ddb2cu: goto label_5ddb2c;
        case 0x5ddb30u: goto label_5ddb30;
        case 0x5ddb34u: goto label_5ddb34;
        case 0x5ddb38u: goto label_5ddb38;
        case 0x5ddb3cu: goto label_5ddb3c;
        case 0x5ddb40u: goto label_5ddb40;
        case 0x5ddb44u: goto label_5ddb44;
        case 0x5ddb48u: goto label_5ddb48;
        case 0x5ddb4cu: goto label_5ddb4c;
        case 0x5ddb50u: goto label_5ddb50;
        case 0x5ddb54u: goto label_5ddb54;
        case 0x5ddb58u: goto label_5ddb58;
        case 0x5ddb5cu: goto label_5ddb5c;
        case 0x5ddb60u: goto label_5ddb60;
        case 0x5ddb64u: goto label_5ddb64;
        case 0x5ddb68u: goto label_5ddb68;
        case 0x5ddb6cu: goto label_5ddb6c;
        case 0x5ddb70u: goto label_5ddb70;
        case 0x5ddb74u: goto label_5ddb74;
        case 0x5ddb78u: goto label_5ddb78;
        case 0x5ddb7cu: goto label_5ddb7c;
        case 0x5ddb80u: goto label_5ddb80;
        case 0x5ddb84u: goto label_5ddb84;
        case 0x5ddb88u: goto label_5ddb88;
        case 0x5ddb8cu: goto label_5ddb8c;
        case 0x5ddb90u: goto label_5ddb90;
        case 0x5ddb94u: goto label_5ddb94;
        case 0x5ddb98u: goto label_5ddb98;
        case 0x5ddb9cu: goto label_5ddb9c;
        case 0x5ddba0u: goto label_5ddba0;
        case 0x5ddba4u: goto label_5ddba4;
        case 0x5ddba8u: goto label_5ddba8;
        case 0x5ddbacu: goto label_5ddbac;
        case 0x5ddbb0u: goto label_5ddbb0;
        case 0x5ddbb4u: goto label_5ddbb4;
        case 0x5ddbb8u: goto label_5ddbb8;
        case 0x5ddbbcu: goto label_5ddbbc;
        case 0x5ddbc0u: goto label_5ddbc0;
        case 0x5ddbc4u: goto label_5ddbc4;
        case 0x5ddbc8u: goto label_5ddbc8;
        case 0x5ddbccu: goto label_5ddbcc;
        case 0x5ddbd0u: goto label_5ddbd0;
        case 0x5ddbd4u: goto label_5ddbd4;
        case 0x5ddbd8u: goto label_5ddbd8;
        case 0x5ddbdcu: goto label_5ddbdc;
        case 0x5ddbe0u: goto label_5ddbe0;
        case 0x5ddbe4u: goto label_5ddbe4;
        case 0x5ddbe8u: goto label_5ddbe8;
        case 0x5ddbecu: goto label_5ddbec;
        case 0x5ddbf0u: goto label_5ddbf0;
        case 0x5ddbf4u: goto label_5ddbf4;
        case 0x5ddbf8u: goto label_5ddbf8;
        case 0x5ddbfcu: goto label_5ddbfc;
        case 0x5ddc00u: goto label_5ddc00;
        case 0x5ddc04u: goto label_5ddc04;
        case 0x5ddc08u: goto label_5ddc08;
        case 0x5ddc0cu: goto label_5ddc0c;
        case 0x5ddc10u: goto label_5ddc10;
        case 0x5ddc14u: goto label_5ddc14;
        case 0x5ddc18u: goto label_5ddc18;
        case 0x5ddc1cu: goto label_5ddc1c;
        case 0x5ddc20u: goto label_5ddc20;
        case 0x5ddc24u: goto label_5ddc24;
        case 0x5ddc28u: goto label_5ddc28;
        case 0x5ddc2cu: goto label_5ddc2c;
        case 0x5ddc30u: goto label_5ddc30;
        case 0x5ddc34u: goto label_5ddc34;
        case 0x5ddc38u: goto label_5ddc38;
        case 0x5ddc3cu: goto label_5ddc3c;
        case 0x5ddc40u: goto label_5ddc40;
        case 0x5ddc44u: goto label_5ddc44;
        case 0x5ddc48u: goto label_5ddc48;
        case 0x5ddc4cu: goto label_5ddc4c;
        case 0x5ddc50u: goto label_5ddc50;
        case 0x5ddc54u: goto label_5ddc54;
        case 0x5ddc58u: goto label_5ddc58;
        case 0x5ddc5cu: goto label_5ddc5c;
        case 0x5ddc60u: goto label_5ddc60;
        case 0x5ddc64u: goto label_5ddc64;
        case 0x5ddc68u: goto label_5ddc68;
        case 0x5ddc6cu: goto label_5ddc6c;
        case 0x5ddc70u: goto label_5ddc70;
        case 0x5ddc74u: goto label_5ddc74;
        case 0x5ddc78u: goto label_5ddc78;
        case 0x5ddc7cu: goto label_5ddc7c;
        case 0x5ddc80u: goto label_5ddc80;
        case 0x5ddc84u: goto label_5ddc84;
        case 0x5ddc88u: goto label_5ddc88;
        case 0x5ddc8cu: goto label_5ddc8c;
        case 0x5ddc90u: goto label_5ddc90;
        case 0x5ddc94u: goto label_5ddc94;
        case 0x5ddc98u: goto label_5ddc98;
        case 0x5ddc9cu: goto label_5ddc9c;
        case 0x5ddca0u: goto label_5ddca0;
        case 0x5ddca4u: goto label_5ddca4;
        case 0x5ddca8u: goto label_5ddca8;
        case 0x5ddcacu: goto label_5ddcac;
        case 0x5ddcb0u: goto label_5ddcb0;
        case 0x5ddcb4u: goto label_5ddcb4;
        case 0x5ddcb8u: goto label_5ddcb8;
        case 0x5ddcbcu: goto label_5ddcbc;
        case 0x5ddcc0u: goto label_5ddcc0;
        case 0x5ddcc4u: goto label_5ddcc4;
        case 0x5ddcc8u: goto label_5ddcc8;
        case 0x5ddcccu: goto label_5ddccc;
        case 0x5ddcd0u: goto label_5ddcd0;
        case 0x5ddcd4u: goto label_5ddcd4;
        case 0x5ddcd8u: goto label_5ddcd8;
        case 0x5ddcdcu: goto label_5ddcdc;
        case 0x5ddce0u: goto label_5ddce0;
        case 0x5ddce4u: goto label_5ddce4;
        case 0x5ddce8u: goto label_5ddce8;
        case 0x5ddcecu: goto label_5ddcec;
        case 0x5ddcf0u: goto label_5ddcf0;
        case 0x5ddcf4u: goto label_5ddcf4;
        case 0x5ddcf8u: goto label_5ddcf8;
        case 0x5ddcfcu: goto label_5ddcfc;
        case 0x5ddd00u: goto label_5ddd00;
        case 0x5ddd04u: goto label_5ddd04;
        case 0x5ddd08u: goto label_5ddd08;
        case 0x5ddd0cu: goto label_5ddd0c;
        case 0x5ddd10u: goto label_5ddd10;
        case 0x5ddd14u: goto label_5ddd14;
        case 0x5ddd18u: goto label_5ddd18;
        case 0x5ddd1cu: goto label_5ddd1c;
        case 0x5ddd20u: goto label_5ddd20;
        case 0x5ddd24u: goto label_5ddd24;
        case 0x5ddd28u: goto label_5ddd28;
        case 0x5ddd2cu: goto label_5ddd2c;
        case 0x5ddd30u: goto label_5ddd30;
        case 0x5ddd34u: goto label_5ddd34;
        case 0x5ddd38u: goto label_5ddd38;
        case 0x5ddd3cu: goto label_5ddd3c;
        case 0x5ddd40u: goto label_5ddd40;
        case 0x5ddd44u: goto label_5ddd44;
        case 0x5ddd48u: goto label_5ddd48;
        case 0x5ddd4cu: goto label_5ddd4c;
        case 0x5ddd50u: goto label_5ddd50;
        case 0x5ddd54u: goto label_5ddd54;
        case 0x5ddd58u: goto label_5ddd58;
        case 0x5ddd5cu: goto label_5ddd5c;
        case 0x5ddd60u: goto label_5ddd60;
        case 0x5ddd64u: goto label_5ddd64;
        case 0x5ddd68u: goto label_5ddd68;
        case 0x5ddd6cu: goto label_5ddd6c;
        case 0x5ddd70u: goto label_5ddd70;
        case 0x5ddd74u: goto label_5ddd74;
        case 0x5ddd78u: goto label_5ddd78;
        case 0x5ddd7cu: goto label_5ddd7c;
        case 0x5ddd80u: goto label_5ddd80;
        case 0x5ddd84u: goto label_5ddd84;
        case 0x5ddd88u: goto label_5ddd88;
        case 0x5ddd8cu: goto label_5ddd8c;
        case 0x5ddd90u: goto label_5ddd90;
        case 0x5ddd94u: goto label_5ddd94;
        case 0x5ddd98u: goto label_5ddd98;
        case 0x5ddd9cu: goto label_5ddd9c;
        case 0x5ddda0u: goto label_5ddda0;
        case 0x5ddda4u: goto label_5ddda4;
        case 0x5ddda8u: goto label_5ddda8;
        case 0x5dddacu: goto label_5dddac;
        case 0x5dddb0u: goto label_5dddb0;
        case 0x5dddb4u: goto label_5dddb4;
        case 0x5dddb8u: goto label_5dddb8;
        case 0x5dddbcu: goto label_5dddbc;
        case 0x5dddc0u: goto label_5dddc0;
        case 0x5dddc4u: goto label_5dddc4;
        case 0x5dddc8u: goto label_5dddc8;
        case 0x5dddccu: goto label_5dddcc;
        case 0x5dddd0u: goto label_5dddd0;
        case 0x5dddd4u: goto label_5dddd4;
        case 0x5dddd8u: goto label_5dddd8;
        case 0x5ddddcu: goto label_5ddddc;
        case 0x5ddde0u: goto label_5ddde0;
        case 0x5ddde4u: goto label_5ddde4;
        case 0x5ddde8u: goto label_5ddde8;
        case 0x5dddecu: goto label_5dddec;
        case 0x5dddf0u: goto label_5dddf0;
        case 0x5dddf4u: goto label_5dddf4;
        case 0x5dddf8u: goto label_5dddf8;
        case 0x5dddfcu: goto label_5dddfc;
        case 0x5dde00u: goto label_5dde00;
        case 0x5dde04u: goto label_5dde04;
        case 0x5dde08u: goto label_5dde08;
        case 0x5dde0cu: goto label_5dde0c;
        case 0x5dde10u: goto label_5dde10;
        case 0x5dde14u: goto label_5dde14;
        case 0x5dde18u: goto label_5dde18;
        case 0x5dde1cu: goto label_5dde1c;
        case 0x5dde20u: goto label_5dde20;
        case 0x5dde24u: goto label_5dde24;
        case 0x5dde28u: goto label_5dde28;
        case 0x5dde2cu: goto label_5dde2c;
        case 0x5dde30u: goto label_5dde30;
        case 0x5dde34u: goto label_5dde34;
        case 0x5dde38u: goto label_5dde38;
        case 0x5dde3cu: goto label_5dde3c;
        case 0x5dde40u: goto label_5dde40;
        case 0x5dde44u: goto label_5dde44;
        case 0x5dde48u: goto label_5dde48;
        case 0x5dde4cu: goto label_5dde4c;
        case 0x5dde50u: goto label_5dde50;
        case 0x5dde54u: goto label_5dde54;
        case 0x5dde58u: goto label_5dde58;
        case 0x5dde5cu: goto label_5dde5c;
        case 0x5dde60u: goto label_5dde60;
        case 0x5dde64u: goto label_5dde64;
        case 0x5dde68u: goto label_5dde68;
        case 0x5dde6cu: goto label_5dde6c;
        case 0x5dde70u: goto label_5dde70;
        case 0x5dde74u: goto label_5dde74;
        case 0x5dde78u: goto label_5dde78;
        case 0x5dde7cu: goto label_5dde7c;
        case 0x5dde80u: goto label_5dde80;
        case 0x5dde84u: goto label_5dde84;
        case 0x5dde88u: goto label_5dde88;
        case 0x5dde8cu: goto label_5dde8c;
        case 0x5dde90u: goto label_5dde90;
        case 0x5dde94u: goto label_5dde94;
        case 0x5dde98u: goto label_5dde98;
        case 0x5dde9cu: goto label_5dde9c;
        case 0x5ddea0u: goto label_5ddea0;
        case 0x5ddea4u: goto label_5ddea4;
        case 0x5ddea8u: goto label_5ddea8;
        case 0x5ddeacu: goto label_5ddeac;
        case 0x5ddeb0u: goto label_5ddeb0;
        case 0x5ddeb4u: goto label_5ddeb4;
        case 0x5ddeb8u: goto label_5ddeb8;
        case 0x5ddebcu: goto label_5ddebc;
        case 0x5ddec0u: goto label_5ddec0;
        case 0x5ddec4u: goto label_5ddec4;
        case 0x5ddec8u: goto label_5ddec8;
        case 0x5ddeccu: goto label_5ddecc;
        case 0x5dded0u: goto label_5dded0;
        case 0x5dded4u: goto label_5dded4;
        case 0x5dded8u: goto label_5dded8;
        case 0x5ddedcu: goto label_5ddedc;
        case 0x5ddee0u: goto label_5ddee0;
        case 0x5ddee4u: goto label_5ddee4;
        case 0x5ddee8u: goto label_5ddee8;
        case 0x5ddeecu: goto label_5ddeec;
        case 0x5ddef0u: goto label_5ddef0;
        case 0x5ddef4u: goto label_5ddef4;
        case 0x5ddef8u: goto label_5ddef8;
        case 0x5ddefcu: goto label_5ddefc;
        case 0x5ddf00u: goto label_5ddf00;
        case 0x5ddf04u: goto label_5ddf04;
        case 0x5ddf08u: goto label_5ddf08;
        case 0x5ddf0cu: goto label_5ddf0c;
        case 0x5ddf10u: goto label_5ddf10;
        case 0x5ddf14u: goto label_5ddf14;
        case 0x5ddf18u: goto label_5ddf18;
        case 0x5ddf1cu: goto label_5ddf1c;
        case 0x5ddf20u: goto label_5ddf20;
        case 0x5ddf24u: goto label_5ddf24;
        case 0x5ddf28u: goto label_5ddf28;
        case 0x5ddf2cu: goto label_5ddf2c;
        case 0x5ddf30u: goto label_5ddf30;
        case 0x5ddf34u: goto label_5ddf34;
        case 0x5ddf38u: goto label_5ddf38;
        case 0x5ddf3cu: goto label_5ddf3c;
        case 0x5ddf40u: goto label_5ddf40;
        case 0x5ddf44u: goto label_5ddf44;
        case 0x5ddf48u: goto label_5ddf48;
        case 0x5ddf4cu: goto label_5ddf4c;
        case 0x5ddf50u: goto label_5ddf50;
        case 0x5ddf54u: goto label_5ddf54;
        case 0x5ddf58u: goto label_5ddf58;
        case 0x5ddf5cu: goto label_5ddf5c;
        case 0x5ddf60u: goto label_5ddf60;
        case 0x5ddf64u: goto label_5ddf64;
        case 0x5ddf68u: goto label_5ddf68;
        case 0x5ddf6cu: goto label_5ddf6c;
        case 0x5ddf70u: goto label_5ddf70;
        case 0x5ddf74u: goto label_5ddf74;
        case 0x5ddf78u: goto label_5ddf78;
        case 0x5ddf7cu: goto label_5ddf7c;
        case 0x5ddf80u: goto label_5ddf80;
        case 0x5ddf84u: goto label_5ddf84;
        case 0x5ddf88u: goto label_5ddf88;
        case 0x5ddf8cu: goto label_5ddf8c;
        case 0x5ddf90u: goto label_5ddf90;
        case 0x5ddf94u: goto label_5ddf94;
        case 0x5ddf98u: goto label_5ddf98;
        case 0x5ddf9cu: goto label_5ddf9c;
        case 0x5ddfa0u: goto label_5ddfa0;
        case 0x5ddfa4u: goto label_5ddfa4;
        case 0x5ddfa8u: goto label_5ddfa8;
        case 0x5ddfacu: goto label_5ddfac;
        case 0x5ddfb0u: goto label_5ddfb0;
        case 0x5ddfb4u: goto label_5ddfb4;
        case 0x5ddfb8u: goto label_5ddfb8;
        case 0x5ddfbcu: goto label_5ddfbc;
        case 0x5ddfc0u: goto label_5ddfc0;
        case 0x5ddfc4u: goto label_5ddfc4;
        case 0x5ddfc8u: goto label_5ddfc8;
        case 0x5ddfccu: goto label_5ddfcc;
        case 0x5ddfd0u: goto label_5ddfd0;
        case 0x5ddfd4u: goto label_5ddfd4;
        case 0x5ddfd8u: goto label_5ddfd8;
        case 0x5ddfdcu: goto label_5ddfdc;
        case 0x5ddfe0u: goto label_5ddfe0;
        case 0x5ddfe4u: goto label_5ddfe4;
        case 0x5ddfe8u: goto label_5ddfe8;
        case 0x5ddfecu: goto label_5ddfec;
        case 0x5ddff0u: goto label_5ddff0;
        case 0x5ddff4u: goto label_5ddff4;
        case 0x5ddff8u: goto label_5ddff8;
        case 0x5ddffcu: goto label_5ddffc;
        case 0x5de000u: goto label_5de000;
        case 0x5de004u: goto label_5de004;
        case 0x5de008u: goto label_5de008;
        case 0x5de00cu: goto label_5de00c;
        case 0x5de010u: goto label_5de010;
        case 0x5de014u: goto label_5de014;
        case 0x5de018u: goto label_5de018;
        case 0x5de01cu: goto label_5de01c;
        case 0x5de020u: goto label_5de020;
        case 0x5de024u: goto label_5de024;
        case 0x5de028u: goto label_5de028;
        case 0x5de02cu: goto label_5de02c;
        case 0x5de030u: goto label_5de030;
        case 0x5de034u: goto label_5de034;
        case 0x5de038u: goto label_5de038;
        case 0x5de03cu: goto label_5de03c;
        case 0x5de040u: goto label_5de040;
        case 0x5de044u: goto label_5de044;
        case 0x5de048u: goto label_5de048;
        case 0x5de04cu: goto label_5de04c;
        case 0x5de050u: goto label_5de050;
        case 0x5de054u: goto label_5de054;
        case 0x5de058u: goto label_5de058;
        case 0x5de05cu: goto label_5de05c;
        case 0x5de060u: goto label_5de060;
        case 0x5de064u: goto label_5de064;
        case 0x5de068u: goto label_5de068;
        case 0x5de06cu: goto label_5de06c;
        case 0x5de070u: goto label_5de070;
        case 0x5de074u: goto label_5de074;
        case 0x5de078u: goto label_5de078;
        case 0x5de07cu: goto label_5de07c;
        case 0x5de080u: goto label_5de080;
        case 0x5de084u: goto label_5de084;
        case 0x5de088u: goto label_5de088;
        case 0x5de08cu: goto label_5de08c;
        case 0x5de090u: goto label_5de090;
        case 0x5de094u: goto label_5de094;
        case 0x5de098u: goto label_5de098;
        case 0x5de09cu: goto label_5de09c;
        case 0x5de0a0u: goto label_5de0a0;
        case 0x5de0a4u: goto label_5de0a4;
        case 0x5de0a8u: goto label_5de0a8;
        case 0x5de0acu: goto label_5de0ac;
        case 0x5de0b0u: goto label_5de0b0;
        case 0x5de0b4u: goto label_5de0b4;
        case 0x5de0b8u: goto label_5de0b8;
        case 0x5de0bcu: goto label_5de0bc;
        case 0x5de0c0u: goto label_5de0c0;
        case 0x5de0c4u: goto label_5de0c4;
        case 0x5de0c8u: goto label_5de0c8;
        case 0x5de0ccu: goto label_5de0cc;
        case 0x5de0d0u: goto label_5de0d0;
        case 0x5de0d4u: goto label_5de0d4;
        case 0x5de0d8u: goto label_5de0d8;
        case 0x5de0dcu: goto label_5de0dc;
        case 0x5de0e0u: goto label_5de0e0;
        case 0x5de0e4u: goto label_5de0e4;
        case 0x5de0e8u: goto label_5de0e8;
        case 0x5de0ecu: goto label_5de0ec;
        case 0x5de0f0u: goto label_5de0f0;
        case 0x5de0f4u: goto label_5de0f4;
        case 0x5de0f8u: goto label_5de0f8;
        case 0x5de0fcu: goto label_5de0fc;
        case 0x5de100u: goto label_5de100;
        case 0x5de104u: goto label_5de104;
        case 0x5de108u: goto label_5de108;
        case 0x5de10cu: goto label_5de10c;
        case 0x5de110u: goto label_5de110;
        case 0x5de114u: goto label_5de114;
        case 0x5de118u: goto label_5de118;
        case 0x5de11cu: goto label_5de11c;
        case 0x5de120u: goto label_5de120;
        case 0x5de124u: goto label_5de124;
        case 0x5de128u: goto label_5de128;
        case 0x5de12cu: goto label_5de12c;
        case 0x5de130u: goto label_5de130;
        case 0x5de134u: goto label_5de134;
        case 0x5de138u: goto label_5de138;
        case 0x5de13cu: goto label_5de13c;
        case 0x5de140u: goto label_5de140;
        case 0x5de144u: goto label_5de144;
        case 0x5de148u: goto label_5de148;
        case 0x5de14cu: goto label_5de14c;
        case 0x5de150u: goto label_5de150;
        case 0x5de154u: goto label_5de154;
        case 0x5de158u: goto label_5de158;
        case 0x5de15cu: goto label_5de15c;
        case 0x5de160u: goto label_5de160;
        case 0x5de164u: goto label_5de164;
        case 0x5de168u: goto label_5de168;
        case 0x5de16cu: goto label_5de16c;
        case 0x5de170u: goto label_5de170;
        case 0x5de174u: goto label_5de174;
        case 0x5de178u: goto label_5de178;
        case 0x5de17cu: goto label_5de17c;
        case 0x5de180u: goto label_5de180;
        case 0x5de184u: goto label_5de184;
        case 0x5de188u: goto label_5de188;
        case 0x5de18cu: goto label_5de18c;
        case 0x5de190u: goto label_5de190;
        case 0x5de194u: goto label_5de194;
        case 0x5de198u: goto label_5de198;
        case 0x5de19cu: goto label_5de19c;
        case 0x5de1a0u: goto label_5de1a0;
        case 0x5de1a4u: goto label_5de1a4;
        case 0x5de1a8u: goto label_5de1a8;
        case 0x5de1acu: goto label_5de1ac;
        case 0x5de1b0u: goto label_5de1b0;
        case 0x5de1b4u: goto label_5de1b4;
        case 0x5de1b8u: goto label_5de1b8;
        case 0x5de1bcu: goto label_5de1bc;
        case 0x5de1c0u: goto label_5de1c0;
        case 0x5de1c4u: goto label_5de1c4;
        case 0x5de1c8u: goto label_5de1c8;
        case 0x5de1ccu: goto label_5de1cc;
        case 0x5de1d0u: goto label_5de1d0;
        case 0x5de1d4u: goto label_5de1d4;
        case 0x5de1d8u: goto label_5de1d8;
        case 0x5de1dcu: goto label_5de1dc;
        case 0x5de1e0u: goto label_5de1e0;
        case 0x5de1e4u: goto label_5de1e4;
        case 0x5de1e8u: goto label_5de1e8;
        case 0x5de1ecu: goto label_5de1ec;
        case 0x5de1f0u: goto label_5de1f0;
        case 0x5de1f4u: goto label_5de1f4;
        case 0x5de1f8u: goto label_5de1f8;
        case 0x5de1fcu: goto label_5de1fc;
        case 0x5de200u: goto label_5de200;
        case 0x5de204u: goto label_5de204;
        case 0x5de208u: goto label_5de208;
        case 0x5de20cu: goto label_5de20c;
        case 0x5de210u: goto label_5de210;
        case 0x5de214u: goto label_5de214;
        case 0x5de218u: goto label_5de218;
        case 0x5de21cu: goto label_5de21c;
        case 0x5de220u: goto label_5de220;
        case 0x5de224u: goto label_5de224;
        case 0x5de228u: goto label_5de228;
        case 0x5de22cu: goto label_5de22c;
        case 0x5de230u: goto label_5de230;
        case 0x5de234u: goto label_5de234;
        case 0x5de238u: goto label_5de238;
        case 0x5de23cu: goto label_5de23c;
        case 0x5de240u: goto label_5de240;
        case 0x5de244u: goto label_5de244;
        case 0x5de248u: goto label_5de248;
        case 0x5de24cu: goto label_5de24c;
        case 0x5de250u: goto label_5de250;
        case 0x5de254u: goto label_5de254;
        case 0x5de258u: goto label_5de258;
        case 0x5de25cu: goto label_5de25c;
        case 0x5de260u: goto label_5de260;
        case 0x5de264u: goto label_5de264;
        case 0x5de268u: goto label_5de268;
        case 0x5de26cu: goto label_5de26c;
        case 0x5de270u: goto label_5de270;
        case 0x5de274u: goto label_5de274;
        case 0x5de278u: goto label_5de278;
        case 0x5de27cu: goto label_5de27c;
        case 0x5de280u: goto label_5de280;
        case 0x5de284u: goto label_5de284;
        case 0x5de288u: goto label_5de288;
        case 0x5de28cu: goto label_5de28c;
        case 0x5de290u: goto label_5de290;
        case 0x5de294u: goto label_5de294;
        case 0x5de298u: goto label_5de298;
        case 0x5de29cu: goto label_5de29c;
        case 0x5de2a0u: goto label_5de2a0;
        case 0x5de2a4u: goto label_5de2a4;
        case 0x5de2a8u: goto label_5de2a8;
        case 0x5de2acu: goto label_5de2ac;
        case 0x5de2b0u: goto label_5de2b0;
        case 0x5de2b4u: goto label_5de2b4;
        case 0x5de2b8u: goto label_5de2b8;
        case 0x5de2bcu: goto label_5de2bc;
        case 0x5de2c0u: goto label_5de2c0;
        case 0x5de2c4u: goto label_5de2c4;
        case 0x5de2c8u: goto label_5de2c8;
        case 0x5de2ccu: goto label_5de2cc;
        case 0x5de2d0u: goto label_5de2d0;
        case 0x5de2d4u: goto label_5de2d4;
        case 0x5de2d8u: goto label_5de2d8;
        case 0x5de2dcu: goto label_5de2dc;
        case 0x5de2e0u: goto label_5de2e0;
        case 0x5de2e4u: goto label_5de2e4;
        case 0x5de2e8u: goto label_5de2e8;
        case 0x5de2ecu: goto label_5de2ec;
        case 0x5de2f0u: goto label_5de2f0;
        case 0x5de2f4u: goto label_5de2f4;
        case 0x5de2f8u: goto label_5de2f8;
        case 0x5de2fcu: goto label_5de2fc;
        case 0x5de300u: goto label_5de300;
        case 0x5de304u: goto label_5de304;
        case 0x5de308u: goto label_5de308;
        case 0x5de30cu: goto label_5de30c;
        case 0x5de310u: goto label_5de310;
        case 0x5de314u: goto label_5de314;
        case 0x5de318u: goto label_5de318;
        case 0x5de31cu: goto label_5de31c;
        case 0x5de320u: goto label_5de320;
        case 0x5de324u: goto label_5de324;
        case 0x5de328u: goto label_5de328;
        case 0x5de32cu: goto label_5de32c;
        case 0x5de330u: goto label_5de330;
        case 0x5de334u: goto label_5de334;
        case 0x5de338u: goto label_5de338;
        case 0x5de33cu: goto label_5de33c;
        case 0x5de340u: goto label_5de340;
        case 0x5de344u: goto label_5de344;
        case 0x5de348u: goto label_5de348;
        case 0x5de34cu: goto label_5de34c;
        case 0x5de350u: goto label_5de350;
        case 0x5de354u: goto label_5de354;
        case 0x5de358u: goto label_5de358;
        case 0x5de35cu: goto label_5de35c;
        case 0x5de360u: goto label_5de360;
        case 0x5de364u: goto label_5de364;
        case 0x5de368u: goto label_5de368;
        case 0x5de36cu: goto label_5de36c;
        case 0x5de370u: goto label_5de370;
        case 0x5de374u: goto label_5de374;
        case 0x5de378u: goto label_5de378;
        case 0x5de37cu: goto label_5de37c;
        case 0x5de380u: goto label_5de380;
        case 0x5de384u: goto label_5de384;
        case 0x5de388u: goto label_5de388;
        case 0x5de38cu: goto label_5de38c;
        case 0x5de390u: goto label_5de390;
        case 0x5de394u: goto label_5de394;
        case 0x5de398u: goto label_5de398;
        case 0x5de39cu: goto label_5de39c;
        case 0x5de3a0u: goto label_5de3a0;
        case 0x5de3a4u: goto label_5de3a4;
        case 0x5de3a8u: goto label_5de3a8;
        case 0x5de3acu: goto label_5de3ac;
        case 0x5de3b0u: goto label_5de3b0;
        case 0x5de3b4u: goto label_5de3b4;
        case 0x5de3b8u: goto label_5de3b8;
        case 0x5de3bcu: goto label_5de3bc;
        case 0x5de3c0u: goto label_5de3c0;
        case 0x5de3c4u: goto label_5de3c4;
        case 0x5de3c8u: goto label_5de3c8;
        case 0x5de3ccu: goto label_5de3cc;
        case 0x5de3d0u: goto label_5de3d0;
        case 0x5de3d4u: goto label_5de3d4;
        case 0x5de3d8u: goto label_5de3d8;
        case 0x5de3dcu: goto label_5de3dc;
        case 0x5de3e0u: goto label_5de3e0;
        case 0x5de3e4u: goto label_5de3e4;
        case 0x5de3e8u: goto label_5de3e8;
        case 0x5de3ecu: goto label_5de3ec;
        case 0x5de3f0u: goto label_5de3f0;
        case 0x5de3f4u: goto label_5de3f4;
        case 0x5de3f8u: goto label_5de3f8;
        case 0x5de3fcu: goto label_5de3fc;
        case 0x5de400u: goto label_5de400;
        case 0x5de404u: goto label_5de404;
        case 0x5de408u: goto label_5de408;
        case 0x5de40cu: goto label_5de40c;
        case 0x5de410u: goto label_5de410;
        case 0x5de414u: goto label_5de414;
        case 0x5de418u: goto label_5de418;
        case 0x5de41cu: goto label_5de41c;
        case 0x5de420u: goto label_5de420;
        case 0x5de424u: goto label_5de424;
        case 0x5de428u: goto label_5de428;
        case 0x5de42cu: goto label_5de42c;
        case 0x5de430u: goto label_5de430;
        case 0x5de434u: goto label_5de434;
        case 0x5de438u: goto label_5de438;
        case 0x5de43cu: goto label_5de43c;
        case 0x5de440u: goto label_5de440;
        case 0x5de444u: goto label_5de444;
        case 0x5de448u: goto label_5de448;
        case 0x5de44cu: goto label_5de44c;
        case 0x5de450u: goto label_5de450;
        case 0x5de454u: goto label_5de454;
        case 0x5de458u: goto label_5de458;
        case 0x5de45cu: goto label_5de45c;
        case 0x5de460u: goto label_5de460;
        case 0x5de464u: goto label_5de464;
        case 0x5de468u: goto label_5de468;
        case 0x5de46cu: goto label_5de46c;
        case 0x5de470u: goto label_5de470;
        case 0x5de474u: goto label_5de474;
        case 0x5de478u: goto label_5de478;
        case 0x5de47cu: goto label_5de47c;
        case 0x5de480u: goto label_5de480;
        case 0x5de484u: goto label_5de484;
        case 0x5de488u: goto label_5de488;
        case 0x5de48cu: goto label_5de48c;
        case 0x5de490u: goto label_5de490;
        case 0x5de494u: goto label_5de494;
        case 0x5de498u: goto label_5de498;
        case 0x5de49cu: goto label_5de49c;
        case 0x5de4a0u: goto label_5de4a0;
        case 0x5de4a4u: goto label_5de4a4;
        case 0x5de4a8u: goto label_5de4a8;
        case 0x5de4acu: goto label_5de4ac;
        case 0x5de4b0u: goto label_5de4b0;
        case 0x5de4b4u: goto label_5de4b4;
        case 0x5de4b8u: goto label_5de4b8;
        case 0x5de4bcu: goto label_5de4bc;
        case 0x5de4c0u: goto label_5de4c0;
        case 0x5de4c4u: goto label_5de4c4;
        case 0x5de4c8u: goto label_5de4c8;
        case 0x5de4ccu: goto label_5de4cc;
        case 0x5de4d0u: goto label_5de4d0;
        case 0x5de4d4u: goto label_5de4d4;
        case 0x5de4d8u: goto label_5de4d8;
        case 0x5de4dcu: goto label_5de4dc;
        case 0x5de4e0u: goto label_5de4e0;
        case 0x5de4e4u: goto label_5de4e4;
        case 0x5de4e8u: goto label_5de4e8;
        case 0x5de4ecu: goto label_5de4ec;
        case 0x5de4f0u: goto label_5de4f0;
        case 0x5de4f4u: goto label_5de4f4;
        case 0x5de4f8u: goto label_5de4f8;
        case 0x5de4fcu: goto label_5de4fc;
        case 0x5de500u: goto label_5de500;
        case 0x5de504u: goto label_5de504;
        case 0x5de508u: goto label_5de508;
        case 0x5de50cu: goto label_5de50c;
        case 0x5de510u: goto label_5de510;
        case 0x5de514u: goto label_5de514;
        case 0x5de518u: goto label_5de518;
        case 0x5de51cu: goto label_5de51c;
        case 0x5de520u: goto label_5de520;
        case 0x5de524u: goto label_5de524;
        case 0x5de528u: goto label_5de528;
        case 0x5de52cu: goto label_5de52c;
        case 0x5de530u: goto label_5de530;
        case 0x5de534u: goto label_5de534;
        case 0x5de538u: goto label_5de538;
        case 0x5de53cu: goto label_5de53c;
        case 0x5de540u: goto label_5de540;
        case 0x5de544u: goto label_5de544;
        case 0x5de548u: goto label_5de548;
        case 0x5de54cu: goto label_5de54c;
        case 0x5de550u: goto label_5de550;
        case 0x5de554u: goto label_5de554;
        case 0x5de558u: goto label_5de558;
        case 0x5de55cu: goto label_5de55c;
        case 0x5de560u: goto label_5de560;
        case 0x5de564u: goto label_5de564;
        case 0x5de568u: goto label_5de568;
        case 0x5de56cu: goto label_5de56c;
        case 0x5de570u: goto label_5de570;
        case 0x5de574u: goto label_5de574;
        case 0x5de578u: goto label_5de578;
        case 0x5de57cu: goto label_5de57c;
        case 0x5de580u: goto label_5de580;
        case 0x5de584u: goto label_5de584;
        case 0x5de588u: goto label_5de588;
        case 0x5de58cu: goto label_5de58c;
        case 0x5de590u: goto label_5de590;
        case 0x5de594u: goto label_5de594;
        case 0x5de598u: goto label_5de598;
        case 0x5de59cu: goto label_5de59c;
        case 0x5de5a0u: goto label_5de5a0;
        case 0x5de5a4u: goto label_5de5a4;
        case 0x5de5a8u: goto label_5de5a8;
        case 0x5de5acu: goto label_5de5ac;
        case 0x5de5b0u: goto label_5de5b0;
        case 0x5de5b4u: goto label_5de5b4;
        case 0x5de5b8u: goto label_5de5b8;
        case 0x5de5bcu: goto label_5de5bc;
        default: break;
    }

    ctx->pc = 0x5dd7c0u;

label_5dd7c0:
    // 0x5dd7c0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd7c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DD7C0 raw=0x00000001");
label_5dd7c4:
    // 0x5dd7c4: 0x0  nop
    ctx->pc = 0x5dd7c4u;
    // NOP
label_5dd7c8:
    // 0x5dd7c8: 0x0  nop
    ctx->pc = 0x5dd7c8u;
    // NOP
label_5dd7cc:
    // 0x5dd7cc: 0x0  nop
    ctx->pc = 0x5dd7ccu;
    // NOP
label_5dd7d0:
    // 0x5dd7d0: 0x0  nop
    ctx->pc = 0x5dd7d0u;
    // NOP
label_5dd7d4:
    // 0x5dd7d4: 0x0  nop
    ctx->pc = 0x5dd7d4u;
    // NOP
label_5dd7d8:
    // 0x5dd7d8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd7dc:
    // 0x5dd7dc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd7e0:
    // 0x5dd7e0: 0x0  nop
    ctx->pc = 0x5dd7e0u;
    // NOP
label_5dd7e4:
    // 0x5dd7e4: 0x0  nop
    ctx->pc = 0x5dd7e4u;
    // NOP
label_5dd7e8:
    // 0x5dd7e8: 0x0  nop
    ctx->pc = 0x5dd7e8u;
    // NOP
label_5dd7ec:
    // 0x5dd7ec: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd7f0:
    // 0x5dd7f0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd7f4:
    // 0x5dd7f4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd7f8:
    // 0x5dd7f8: 0x0  nop
    ctx->pc = 0x5dd7f8u;
    // NOP
label_5dd7fc:
    // 0x5dd7fc: 0x0  nop
    ctx->pc = 0x5dd7fcu;
    // NOP
label_5dd800:
    // 0x5dd800: 0x49544341  .word       0x49544341                   # INVALID     $t2, $s4, 0x4341 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5dd800u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5DD800 raw=0x49544341");
label_5dd804:
    // 0x5dd804: 0x45544156  .word       0x45544156                   # INVALID     $t2, $s4, 0x4156 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5dd804u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x16 at 0x5DD804 raw=0x45544156");
label_5dd808:
    // 0x5dd808: 0x0  nop
    ctx->pc = 0x5dd808u;
    // NOP
label_5dd80c:
    // 0x5dd80c: 0x0  nop
    ctx->pc = 0x5dd80cu;
    // NOP
label_5dd810:
    // 0x5dd810: 0x454d4143  .word       0x454D4143                   # INVALID     $t2, $t5, 0x4143 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5dd810u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x3 at 0x5DD810 raw=0x454D4143");
label_5dd814:
    // 0x5dd814: 0x4f4c4152  .word       0x4F4C4152                   # INVALID     $k0, $t4, 0x4152 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd814u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DD814 raw=0x4F4C4152");
label_5dd818:
    // 0x5dd818: 0x4b43  sra         $t1, $zero, 13
    ctx->pc = 0x5dd818u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), 13));
label_5dd81c:
    // 0x5dd81c: 0x0  nop
    ctx->pc = 0x5dd81cu;
    // NOP
label_5dd820:
    // 0x5dd820: 0x43414f44  .word       0x43414F44                   # INVALID     $k0, $at, 0x4F44 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dd820u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5DD820 raw=0x43414F44");
label_5dd824:
    // 0x5dd824: 0x4e4f4954  .word       0x4E4F4954                   # INVALID     $s2, $t7, 0x4954 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd824u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DD824 raw=0x4E4F4954");
label_5dd828:
    // 0x5dd828: 0x0  nop
    ctx->pc = 0x5dd828u;
    // NOP
label_5dd82c:
    // 0x5dd82c: 0x0  nop
    ctx->pc = 0x5dd82cu;
    // NOP
label_5dd830:
    // 0x5dd830: 0x45564f4d  .word       0x45564F4D                   # INVALID     $t2, $s6, 0x4F4D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5dd830u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x5DD830 raw=0x45564F4D");
label_5dd834:
    // 0x5dd834: 0x41444e41  .word       0x41444E41                   # INVALID     $t2, $a0, 0x4E41 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dd834u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5DD834 raw=0x41444E41");
label_5dd838:
    // 0x5dd838: 0x4f495443  .word       0x4F495443                   # INVALID     $k0, $t1, 0x5443 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd838u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DD838 raw=0x4F495443");
label_5dd83c:
    // 0x5dd83c: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd83cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x5DD83C raw=0x0000004E");
label_5dd840:
    // 0x5dd840: 0x59414c50  .word       0x59414C50                   # blezl       $t2, . + 4 + (0x4C50 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_5dd844:
    if (ctx->pc == 0x5DD844u) {
        ctx->pc = 0x5DD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD840u;
        // 0x5dd844: 0x4d494e41  .word       0x4D494E41                   # INVALID     $t2, $t1, 0x4E41 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DD844 raw=0x4D494E41");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DD848u;
        goto label_5dd848;
    }
    ctx->pc = 0x5DD840u;
    {
        const bool branch_taken_0x5dd840 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x5dd840) {
            ctx->pc = 0x5DD844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DD840u;
            // 0x5dd844: 0x4d494e41  .word       0x4D494E41                   # INVALID     $t2, $t1, 0x4E41 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DD844 raw=0x4D494E41");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F0984u;
            return;
        }
    }
    ctx->pc = 0x5DD848u;
label_5dd848:
    // 0x5dd848: 0x0  nop
    ctx->pc = 0x5dd848u;
    // NOP
label_5dd84c:
    // 0x5dd84c: 0x0  nop
    ctx->pc = 0x5dd84cu;
    // NOP
label_5dd850:
    // 0x5dd850: 0x59414c50  .word       0x59414C50                   # blezl       $t2, . + 4 + (0x4C50 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_5dd854:
    if (ctx->pc == 0x5DD854u) {
        ctx->pc = 0x5DD854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD850u;
        // 0x5dd854: 0x4e554f53  .word       0x4E554F53                   # INVALID     $s2, $s5, 0x4F53 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DD854 raw=0x4E554F53");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DD858u;
        goto label_5dd858;
    }
    ctx->pc = 0x5DD850u;
    {
        const bool branch_taken_0x5dd850 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x5dd850) {
            ctx->pc = 0x5DD854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DD850u;
            // 0x5dd854: 0x4e554f53  .word       0x4E554F53                   # INVALID     $s2, $s5, 0x4F53 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DD854 raw=0x4E554F53");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F0994u;
            return;
        }
    }
    ctx->pc = 0x5DD858u;
label_5dd858:
    // 0x5dd858: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd858u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5dd85c:
    // 0x5dd85c: 0x0  nop
    ctx->pc = 0x5dd85cu;
    // NOP
label_5dd860:
    // 0x5dd860: 0x59414c50  .word       0x59414C50                   # blezl       $t2, . + 4 + (0x4C50 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_5dd864:
    if (ctx->pc == 0x5DD864u) {
        ctx->pc = 0x5DD864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD860u;
        // 0x5dd864: 0x454e4943  .word       0x454E4943                   # INVALID     $t2, $t6, 0x4943 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x3 at 0x5DD864 raw=0x454E4943");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DD868u;
        goto label_5dd868;
    }
    ctx->pc = 0x5DD860u;
    {
        const bool branch_taken_0x5dd860 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x5dd860) {
            ctx->pc = 0x5DD864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DD860u;
            // 0x5dd864: 0x454e4943  .word       0x454E4943                   # INVALID     $t2, $t6, 0x4943 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x3 at 0x5DD864 raw=0x454E4943");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F09A4u;
            return;
        }
    }
    ctx->pc = 0x5DD868u;
label_5dd868:
    // 0x5dd868: 0x0  nop
    ctx->pc = 0x5dd868u;
    // NOP
label_5dd86c:
    // 0x5dd86c: 0x0  nop
    ctx->pc = 0x5dd86cu;
    // NOP
label_5dd870:
    // 0x5dd870: 0x44414f4c  .word       0x44414F4C                   # cfc1        $at, $9 # 0000074C <InstrIdType: R5900_COP1>
    ctx->pc = 0x5dd870u;
    SET_GPR_U32(ctx, 1, 0); // Unimplemented FCR9
label_5dd874:
    // 0x5dd874: 0x4556454c  .word       0x4556454C                   # INVALID     $t2, $s6, 0x454C # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5dd874u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xC at 0x5DD874 raw=0x4556454C");
label_5dd878:
    // 0x5dd878: 0x4c  syscall     1
    ctx->pc = 0x5dd878u;
    ctx->pc = 0x5DD87Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5dd87c:
    // 0x5dd87c: 0x0  nop
    ctx->pc = 0x5dd87cu;
    // NOP
label_5dd880:
    // 0x5dd880: 0x5dd800  .word       0x005DD800                   # sll         $k1, $sp, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd880u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 29), 0));
label_5dd884:
    // 0x5dd884: 0x5dd810  .word       0x005DD810                   # mfhi        $k1 # 005D0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd884u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_5dd888:
    // 0x5dd888: 0x609eb0  tge         $v1, $zero, 634
    ctx->pc = 0x5dd888u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dd88c:
    // 0x5dd88c: 0x5dd820  add         $k1, $v0, $sp
    ctx->pc = 0x5dd88cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_5dd890:
    // 0x5dd890: 0x609eb8  .word       0x00609EB8                   # dsll        $s3, $zero, 26 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd890u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << 26);
label_5dd894:
    // 0x5dd894: 0x609ec0  .word       0x00609EC0                   # sll         $s3, $zero, 27 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd894u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_5dd898:
    // 0x5dd898: 0x609ec8  .word       0x00609EC8                   # jr          $v1 # 00009EC0 <InstrIdType: CPU_SPECIAL>
label_5dd89c:
    if (ctx->pc == 0x5DD89Cu) {
        ctx->pc = 0x5DD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD898u;
        // 0x5dd89c: 0x5dd830  tge         $v0, $sp, 864 (Delay Slot)
        if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DD8A0u;
        goto label_5dd8a0;
    }
    ctx->pc = 0x5DD898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x5DD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD898u;
        // 0x5dd89c: 0x5dd830  tge         $v0, $sp, 864 (Delay Slot)
        if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5DD898u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5DD8A0u;
label_5dd8a0:
    // 0x5dd8a0: 0x5dd840  .word       0x005DD840                   # sll         $k1, $sp, 1 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd8a0u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 29), 1));
label_5dd8a4:
    // 0x5dd8a4: 0x609ed0  .word       0x00609ED0                   # mfhi        $s3 # 006006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd8a4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_5dd8a8:
    // 0x5dd8a8: 0x5dd850  .word       0x005DD850                   # mfhi        $k1 # 005D0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd8a8u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_5dd8ac:
    // 0x5dd8ac: 0x609ed8  .word       0x00609ED8                   # mult        $s3, $v1, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd8acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_5dd8b0:
    // 0x5dd8b0: 0x609ee0  .word       0x00609EE0                   # add         $s3, $v1, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd8b0u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_5dd8b4:
    // 0x5dd8b4: 0x609ee8  .word       0x00609EE8                   # mfsa        $s3 # 006006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd8b4u;
    SET_GPR_U32(ctx, 19, ctx->sa);
label_5dd8b8:
    // 0x5dd8b8: 0x609ef0  tge         $v1, $zero, 635
    ctx->pc = 0x5dd8b8u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dd8bc:
    // 0x5dd8bc: 0x609ef8  .word       0x00609EF8                   # dsll        $s3, $zero, 27 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd8bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << 27);
label_5dd8c0:
    // 0x5dd8c0: 0x5dd860  .word       0x005DD860                   # add         $k1, $v0, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd8c0u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_5dd8c4:
    // 0x5dd8c4: 0x5dd870  tge         $v0, $sp, 865
    ctx->pc = 0x5dd8c4u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_5dd8c8:
    // 0x5dd8c8: 0x0  nop
    ctx->pc = 0x5dd8c8u;
    // NOP
label_5dd8cc:
    // 0x5dd8cc: 0x0  nop
    ctx->pc = 0x5dd8ccu;
    // NOP
label_5dd8d0:
    // 0x5dd8d0: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5dd8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5dd8d4:
    // 0x5dd8d4: 0x7463416e  .word       0x7463416E                   # INVALID     $v1, $v1, 0x416E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd8d4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DD8D4 raw=0x7463416E");
label_5dd8d8:
    // 0x5dd8d8: 0x2e6e6f69  sltiu       $t6, $s3, 0x6F69
    ctx->pc = 0x5dd8d8u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28521) ? 1 : 0);
label_5dd8dc:
    // 0x5dd8dc: 0x707063  .word       0x00707063                   # subu        $t6, $v1, $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd8dcu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_5dd8e0:
    // 0x5dd8e0: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5dd8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5dd8e4:
    // 0x5dd8e4: 0x7463416e  .word       0x7463416E                   # INVALID     $v1, $v1, 0x416E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd8e4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DD8E4 raw=0x7463416E");
label_5dd8e8:
    // 0x5dd8e8: 0x3a6e6f69  xori        $t6, $s3, 0x6F69
    ctx->pc = 0x5dd8e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28521);
label_5dd8ec:
    // 0x5dd8ec: 0x7465473a  .word       0x7465473A                   # INVALID     $v1, $a1, 0x473A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd8ecu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DD8EC raw=0x7465473A");
label_5dd8f0:
    // 0x5dd8f0: 0x69746341  ldl         $s4, 0x6341($t3)
    ctx->pc = 0x5dd8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25409); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5dd8f4:
    // 0x5dd8f4: 0x73416e6f  .word       0x73416E6F                   # INVALID     $k0, $at, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dd8f4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DD8F4 raw=0x73416E6F");
label_5dd8f8:
    // 0x5dd8f8: 0x4e696963  .word       0x4E696963                   # INVALID     $s3, $t1, 0x6963 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd8f8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DD8F8 raw=0x4E696963");
label_5dd8fc:
    // 0x5dd8fc: 0x20656d61  addi        $a1, $v1, 0x6D61
    ctx->pc = 0x5dd8fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28001, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5dd900:
    // 0x5dd900: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5dd900u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_5dd904:
    // 0x5dd904: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5dd904u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_5dd908:
    // 0x5dd908: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5dd908u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5dd90c:
    // 0x5dd90c: 0x69746361  ldl         $s4, 0x6361($t3)
    ctx->pc = 0x5dd90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5dd910:
    // 0x5dd910: 0x74206e6f  .word       0x74206E6F                   # INVALID     $at, $zero, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd910u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DD910 raw=0x74206E6F");
label_5dd914:
    // 0x5dd914: 0x20657079  addi        $a1, $v1, 0x7079
    ctx->pc = 0x5dd914u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5dd918:
    // 0x5dd918: 0x756c6176  .word       0x756C6176                   # INVALID     $t3, $t4, 0x6176 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd918u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DD918 raw=0x756C6176");
label_5dd91c:
    // 0x5dd91c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd91cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5dd920:
    // 0x5dd920: 0x7079545f  .word       0x7079545F                   # INVALID     $v1, $t9, 0x545F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dd920u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x5DD920 raw=0x7079545F");
label_5dd924:
    // 0x5dd924: 0x203c2065  addi        $gp, $at, 0x2065
    ctx->pc = 0x5dd924u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
label_5dd928:
    // 0x5dd928: 0x5f4d554e  .word       0x5F4D554E                   # bgtzl       $k0, . + 4 + (0x554E << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
label_5dd92c:
    if (ctx->pc == 0x5DD92Cu) {
        ctx->pc = 0x5DD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD928u;
        // 0x5dd92c: 0x49435444  .word       0x49435444                   # INVALID     $t2, $v1, 0x5444 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
        throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5DD92C raw=0x49435444");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DD930u;
        goto label_5dd930;
    }
    ctx->pc = 0x5DD928u;
    {
        const bool branch_taken_0x5dd928 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5dd928) {
            ctx->pc = 0x5DD92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DD928u;
            // 0x5dd92c: 0x49435444  .word       0x49435444                   # INVALID     $t2, $v1, 0x5444 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5DD92C raw=0x49435444");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F2E64u;
            return;
        }
    }
    ctx->pc = 0x5DD930u;
label_5dd930:
    // 0x5dd930: 0x43415f4e  .word       0x43415F4E                   # INVALID     $k0, $at, 0x5F4E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dd930u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5DD930 raw=0x43415F4E");
label_5dd934:
    // 0x5dd934: 0x4e4f4954  .word       0x4E4F4954                   # INVALID     $s2, $t7, 0x4954 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd934u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DD934 raw=0x4E4F4954");
label_5dd938:
    // 0x5dd938: 0x53  .word       0x00000053                   # mtlo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd938u;
    ctx->lo = GPR_U64(ctx, 0);
label_5dd93c:
    // 0x5dd93c: 0x0  nop
    ctx->pc = 0x5dd93cu;
    // NOP
label_5dd940:
    // 0x5dd940: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5dd940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5dd944:
    // 0x5dd944: 0x7463416e  .word       0x7463416E                   # INVALID     $v1, $v1, 0x416E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd944u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DD944 raw=0x7463416E");
label_5dd948:
    // 0x5dd948: 0x3a6e6f69  xori        $t6, $s3, 0x6F69
    ctx->pc = 0x5dd948u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28521);
label_5dd94c:
    // 0x5dd94c: 0x7465473a  .word       0x7465473A                   # INVALID     $v1, $a1, 0x473A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd94cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DD94C raw=0x7465473A");
label_5dd950:
    // 0x5dd950: 0x69746341  ldl         $s4, 0x6341($t3)
    ctx->pc = 0x5dd950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25409); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5dd954:
    // 0x5dd954: 0x65546e6f  daddiu      $s4, $t2, 0x6E6F
    ctx->pc = 0x5dd954u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)28271);
label_5dd958:
    // 0x5dd958: 0x726f706d  .word       0x726F706D                   # INVALID     $s3, $t7, 0x706D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dd958u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x5DD958 raw=0x726F706D");
label_5dd95c:
    // 0x5dd95c: 0x74696c61  .word       0x74696C61                   # INVALID     $v1, $t1, 0x6C61 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd95cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DD95C raw=0x74696C61");
label_5dd960:
    // 0x5dd960: 0x203a2079  addi        $k0, $at, 0x2079
    ctx->pc = 0x5dd960u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8313, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5dd964:
    // 0x5dd964: 0x20746f67  addi        $s4, $v1, 0x6F67
    ctx->pc = 0x5dd964u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28519, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5dd968:
    // 0x5dd968: 0x69206e61  ldl         $zero, 0x6E61($t1)
    ctx->pc = 0x5dd968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_5dd96c:
    // 0x5dd96c: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x5dd96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5dd970:
    // 0x5dd970: 0x28206469  slti        $zero, $at, 0x6469
    ctx->pc = 0x5dd970u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25705) ? 1 : 0);
label_5dd974:
    // 0x5dd974: 0x2074756f  addi        $s4, $v1, 0x756F
    ctx->pc = 0x5dd974u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30063, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5dd978:
    // 0x5dd978: 0x7220666f  .word       0x7220666F                   # INVALID     $s1, $zero, 0x666F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dd978u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DD978 raw=0x7220666F");
label_5dd97c:
    // 0x5dd97c: 0x65676e61  daddiu      $a3, $t3, 0x6E61
    ctx->pc = 0x5dd97cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28257);
label_5dd980:
    // 0x5dd980: 0x63612029  daddi       $at, $k1, 0x2029
    ctx->pc = 0x5dd980u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_5dd984:
    // 0x5dd984: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5dd984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5dd988:
    // 0x5dd988: 0x70797420  .word       0x70797420                   # madd1       $t6, $v1, $t9 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dd988u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 25); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_5dd98c:
    // 0x5dd98c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd98cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5dd990:
    // 0x5dd990: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5dd990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5dd994:
    // 0x5dd994: 0x6e69436e  ldr         $t1, 0x436E($s3)
    ctx->pc = 0x5dd994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5dd998:
    // 0x5dd998: 0x74616d65  .word       0x74616D65                   # INVALID     $v1, $at, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd998u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DD998 raw=0x74616D65");
label_5dd99c:
    // 0x5dd99c: 0x65757169  daddiu      $s5, $t3, 0x7169
    ctx->pc = 0x5dd99cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29033);
label_5dd9a0:
    // 0x5dd9a0: 0x7070632e  .word       0x7070632E                   # INVALID     $v1, $s0, 0x632E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dd9a0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DD9A0 raw=0x7070632E");
label_5dd9a4:
    // 0x5dd9a4: 0x0  nop
    ctx->pc = 0x5dd9a4u;
    // NOP
label_5dd9a8:
    // 0x5dd9a8: 0x0  nop
    ctx->pc = 0x5dd9a8u;
    // NOP
label_5dd9ac:
    // 0x5dd9ac: 0x0  nop
    ctx->pc = 0x5dd9acu;
    // NOP
label_5dd9b0:
    // 0x5dd9b0: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5dd9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5dd9b4:
    // 0x5dd9b4: 0x6e69436e  ldr         $t1, 0x436E($s3)
    ctx->pc = 0x5dd9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5dd9b8:
    // 0x5dd9b8: 0x74616d65  .word       0x74616D65                   # INVALID     $v1, $at, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd9b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DD9B8 raw=0x74616D65");
label_5dd9bc:
    // 0x5dd9bc: 0x65757169  daddiu      $s5, $t3, 0x7169
    ctx->pc = 0x5dd9bcu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29033);
label_5dd9c0:
    // 0x5dd9c0: 0x65473a3a  daddiu      $a3, $t2, 0x3A3A
    ctx->pc = 0x5dd9c0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14906);
label_5dd9c4:
    // 0x5dd9c4: 0x71655374  .word       0x71655374                   # psllh       $t2, $a1, 13 # 01600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dd9c4u;
    SET_GPR_VEC(ctx, 10, _mm_slli_epi16(GPR_VEC(ctx, 5), 13));
label_5dd9c8:
    // 0x5dd9c8: 0x636e6575  daddi       $t6, $k1, 0x6575
    ctx->pc = 0x5dd9c8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25973; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5dd9cc:
    // 0x5dd9cc: 0x2d2d2065  sltiu       $t5, $t1, 0x2065
    ctx->pc = 0x5dd9ccu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8293) ? 1 : 0);
label_5dd9d0:
    // 0x5dd9d0: 0x6e49203e  ldr         $t1, 0x203E($s2)
    ctx->pc = 0x5dd9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8254); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5dd9d4:
    // 0x5dd9d4: 0x696c6176  ldl         $t4, 0x6176($t3)
    ctx->pc = 0x5dd9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_5dd9d8:
    // 0x5dd9d8: 0x6e692064  ldr         $t1, 0x2064($s3)
    ctx->pc = 0x5dd9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5dd9dc:
    // 0x5dd9dc: 0x786564  .word       0x00786564                   # and         $t4, $v1, $t8 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd9dcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & GPR_U64(ctx, 24));
label_5dd9e0:
    // 0x5dd9e0: 0x6553705f  daddiu      $s3, $t2, 0x705F
    ctx->pc = 0x5dd9e0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)28767);
label_5dd9e4:
    // 0x5dd9e4: 0x6e657571  ldr         $a1, 0x7571($s3)
    ctx->pc = 0x5dd9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30065); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_5dd9e8:
    // 0x5dd9e8: 0x21206563  addi        $zero, $t1, 0x6563
    ctx->pc = 0x5dd9e8u;
    // NOP (addi to $zero)
label_5dd9ec:
    // 0x5dd9ec: 0x554e203d  bnel        $t2, $t6, . + 4 + (0x203D << 2)
label_5dd9f0:
    if (ctx->pc == 0x5DD9F0u) {
        ctx->pc = 0x5DD9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD9ECu;
        // 0x5dd9f0: 0x4c4c  syscall     305 (Delay Slot)
        ctx->pc = 0x5DD9F4u;
        runtime->handleSyscall(rdram, ctx, 0x131u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DD9F4u;
        goto label_5dd9f4;
    }
    ctx->pc = 0x5DD9ECu;
    {
        const bool branch_taken_0x5dd9ec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5dd9ec) {
            ctx->pc = 0x5DD9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DD9ECu;
            // 0x5dd9f0: 0x4c4c  syscall     305 (Delay Slot)
            ctx->pc = 0x5DD9F4u;
            runtime->handleSyscall(rdram, ctx, 0x131u);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E5AE4u;
            return;
        }
    }
    ctx->pc = 0x5DD9F4u;
label_5dd9f4:
    // 0x5dd9f4: 0x0  nop
    ctx->pc = 0x5dd9f4u;
    // NOP
label_5dd9f8:
    // 0x5dd9f8: 0x0  nop
    ctx->pc = 0x5dd9f8u;
    // NOP
label_5dd9fc:
    // 0x5dd9fc: 0x0  nop
    ctx->pc = 0x5dd9fcu;
    // NOP
label_5dda00:
    // 0x5dda00: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5dda00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5dda04:
    // 0x5dda04: 0x6e69436e  ldr         $t1, 0x436E($s3)
    ctx->pc = 0x5dda04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5dda08:
    // 0x5dda08: 0x74616d65  .word       0x74616D65                   # INVALID     $v1, $at, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dda08u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDA08 raw=0x74616D65");
label_5dda0c:
    // 0x5dda0c: 0x65757169  daddiu      $s5, $t3, 0x7169
    ctx->pc = 0x5dda0cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29033);
label_5dda10:
    // 0x5dda10: 0x64413a3a  daddiu      $at, $v0, 0x3A3A
    ctx->pc = 0x5dda10u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)14906);
label_5dda14:
    // 0x5dda14: 0x71655364  .word       0x71655364                   # INVALID     $t3, $a1, 0x5364 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dda14u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x5DDA14 raw=0x71655364");
label_5dda18:
    // 0x5dda18: 0x636e6575  daddi       $t6, $k1, 0x6575
    ctx->pc = 0x5dda18u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25973; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5dda1c:
    // 0x5dda1c: 0x2d2d2065  sltiu       $t5, $t1, 0x2065
    ctx->pc = 0x5dda1cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8293) ? 1 : 0);
label_5dda20:
    // 0x5dda20: 0x6f67203e  ldr         $a3, 0x203E($k1)
    ctx->pc = 0x5dda20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8254); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_5dda24:
    // 0x5dda24: 0x20612074  addi        $at, $v1, 0x2074
    ctx->pc = 0x5dda24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)8308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_5dda28:
    // 0x5dda28: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dda28u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDA28 raw=0x4C4C554E");
label_5dda2c:
    // 0x5dda2c: 0x696f7020  ldl         $t7, 0x7020($t3)
    ctx->pc = 0x5dda2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_5dda30:
    // 0x5dda30: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dda30u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DDA30 raw=0x7265746E");
label_5dda34:
    // 0x5dda34: 0x72617020  madd1       $t6, $s3, $at
    ctx->pc = 0x5dda34u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_5dda38:
    // 0x5dda38: 0x6d61  .word       0x00006D61                   # addu        $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dda38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_5dda3c:
    // 0x5dda3c: 0x0  nop
    ctx->pc = 0x5dda3cu;
    // NOP
label_5dda40:
    // 0x5dda40: 0x45544e49  .word       0x45544E49                   # INVALID     $t2, $s4, 0x4E49 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5dda40u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x9 at 0x5DDA40 raw=0x45544E49");
label_5dda44:
    // 0x5dda44: 0x50555252  beql        $v0, $s5, . + 4 + (0x5252 << 2)
label_5dda48:
    if (ctx->pc == 0x5DDA48u) {
        ctx->pc = 0x5DDA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DDA44u;
        // 0x5dda48: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DDA4Cu;
        goto label_5dda4c;
    }
    ctx->pc = 0x5DDA44u;
    {
        const bool branch_taken_0x5dda44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x5dda44) {
            ctx->pc = 0x5DDA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DDA44u;
            // 0x5dda48: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F2390u;
            return;
        }
    }
    ctx->pc = 0x5DDA4Cu;
label_5dda4c:
    // 0x5dda4c: 0x0  nop
    ctx->pc = 0x5dda4cu;
    // NOP
label_5dda50:
    // 0x5dda50: 0x72754370  .word       0x72754370                   # INVALID     $s3, $s5, 0x4370 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5dda50u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0xD at 0x5DDA50 raw=0x72754370");
label_5dda54:
    // 0x5dda54: 0x746e6572  .word       0x746E6572                   # INVALID     $v1, $t6, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dda54u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDA54 raw=0x746E6572");
label_5dda58:
    // 0x5dda58: 0x75716553  .word       0x75716553                   # INVALID     $t3, $s1, 0x6553 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dda58u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDA58 raw=0x75716553");
label_5dda5c:
    // 0x5dda5c: 0x65636e65  daddiu      $v1, $t3, 0x6E65
    ctx->pc = 0x5dda5cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28261);
label_5dda60:
    // 0x5dda60: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5dda60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5dda64:
    // 0x5dda64: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dda64u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDA64 raw=0x4C4C554E");
label_5dda68:
    // 0x5dda68: 0x0  nop
    ctx->pc = 0x5dda68u;
    // NOP
label_5dda6c:
    // 0x5dda6c: 0x0  nop
    ctx->pc = 0x5dda6cu;
    // NOP
label_5dda70:
    // 0x5dda70: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5dda70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5dda74:
    // 0x5dda74: 0x6e69436e  ldr         $t1, 0x436E($s3)
    ctx->pc = 0x5dda74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5dda78:
    // 0x5dda78: 0x74616d65  .word       0x74616D65                   # INVALID     $v1, $at, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dda78u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDA78 raw=0x74616D65");
label_5dda7c:
    // 0x5dda7c: 0x65757169  daddiu      $s5, $t3, 0x7169
    ctx->pc = 0x5dda7cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29033);
label_5dda80:
    // 0x5dda80: 0x70553a3a  .word       0x70553A3A                   # INVALID     $v0, $s5, 0x3A3A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dda80u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x5DDA80 raw=0x70553A3A");
label_5dda84:
    // 0x5dda84: 0x65746164  daddiu      $s4, $t3, 0x6164
    ctx->pc = 0x5dda84u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24932);
label_5dda88:
    // 0x5dda88: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dda88u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
label_5dda8c:
    // 0x5dda8c: 0x766e4920  .word       0x766E4920                   # INVALID     $s3, $t6, 0x4920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dda8cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDA8C raw=0x766E4920");
label_5dda90:
    // 0x5dda90: 0x64696c61  daddiu      $t1, $v1, 0x6C61
    ctx->pc = 0x5dda90u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27745);
label_5dda94:
    // 0x5dda94: 0x554e2820  bnel        $t2, $t6, . + 4 + (0x2820 << 2)
label_5dda98:
    if (ctx->pc == 0x5DDA98u) {
        ctx->pc = 0x5DDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DDA94u;
        // 0x5dda98: 0x20294c4c  addi        $t1, $at, 0x4C4C (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)19532, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DDA9Cu;
        goto label_5dda9c;
    }
    ctx->pc = 0x5DDA94u;
    {
        const bool branch_taken_0x5dda94 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5dda94) {
            ctx->pc = 0x5DDA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DDA94u;
            // 0x5dda98: 0x20294c4c  addi        $t1, $at, 0x4C4C (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)19532, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E7B18u;
            return;
        }
    }
    ctx->pc = 0x5DDA9Cu;
label_5dda9c:
    // 0x5dda9c: 0x75716553  .word       0x75716553                   # INVALID     $t3, $s1, 0x6553 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dda9cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDA9C raw=0x75716553");
label_5ddaa0:
    // 0x5ddaa0: 0x65636e65  daddiu      $v1, $t3, 0x6E65
    ctx->pc = 0x5ddaa0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28261);
label_5ddaa4:
    // 0x5ddaa4: 0x696f7020  ldl         $t7, 0x7020($t3)
    ctx->pc = 0x5ddaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_5ddaa8:
    // 0x5ddaa8: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddaa8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DDAA8 raw=0x7265746E");
label_5ddaac:
    // 0x5ddaac: 0x0  nop
    ctx->pc = 0x5ddaacu;
    // NOP
label_5ddab0:
    // 0x5ddab0: 0x74634170  .word       0x74634170                   # INVALID     $v1, $v1, 0x4170 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddab0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDAB0 raw=0x74634170");
label_5ddab4:
    // 0x5ddab4: 0x206e6f69  addi        $t6, $v1, 0x6F69
    ctx->pc = 0x5ddab4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28521, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_5ddab8:
    // 0x5ddab8: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddab8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDAB8 raw=0x4E203D21");
label_5ddabc:
    // 0x5ddabc: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ddabcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5DDABC raw=0x004C4C55");
label_5ddac0:
    // 0x5ddac0: 0x656e6943  daddiu      $t6, $t3, 0x6943
    ctx->pc = 0x5ddac0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26947);
label_5ddac4:
    // 0x5ddac4: 0x6d6d6f43  ldr         $t5, 0x6F43($t3)
    ctx->pc = 0x5ddac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28483); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_5ddac8:
    // 0x5ddac8: 0x2e646e61  sltiu       $a0, $s3, 0x6E61
    ctx->pc = 0x5ddac8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28257) ? 1 : 0);
label_5ddacc:
    // 0x5ddacc: 0x74634170  .word       0x74634170                   # INVALID     $v1, $v1, 0x4170 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddaccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDACC raw=0x74634170");
label_5ddad0:
    // 0x5ddad0: 0x206e6f69  addi        $t6, $v1, 0x6F69
    ctx->pc = 0x5ddad0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28521, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_5ddad4:
    // 0x5ddad4: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddad4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDAD4 raw=0x4E203D21");
label_5ddad8:
    // 0x5ddad8: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ddad8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5DDAD8 raw=0x004C4C55");
label_5ddadc:
    // 0x5ddadc: 0x0  nop
    ctx->pc = 0x5ddadcu;
    // NOP
label_5ddae0:
    // 0x5ddae0: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5ddae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5ddae4:
    // 0x5ddae4: 0x6e69436e  ldr         $t1, 0x436E($s3)
    ctx->pc = 0x5ddae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5ddae8:
    // 0x5ddae8: 0x74616d65  .word       0x74616D65                   # INVALID     $v1, $at, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddae8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDAE8 raw=0x74616D65");
label_5ddaec:
    // 0x5ddaec: 0x65757169  daddiu      $s5, $t3, 0x7169
    ctx->pc = 0x5ddaecu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29033);
label_5ddaf0:
    // 0x5ddaf0: 0x72543a3a  .word       0x72543A3A                   # INVALID     $s2, $s4, 0x3A3A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddaf0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x5DDAF0 raw=0x72543A3A");
label_5ddaf4:
    // 0x5ddaf4: 0x65676769  daddiu      $a3, $t3, 0x6769
    ctx->pc = 0x5ddaf4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26473);
label_5ddaf8:
    // 0x5ddaf8: 0x74634172  .word       0x74634172                   # INVALID     $v1, $v1, 0x4172 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddaf8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDAF8 raw=0x74634172");
label_5ddafc:
    // 0x5ddafc: 0x286e6f69  slti        $t6, $v1, 0x6F69
    ctx->pc = 0x5ddafcu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28521) ? 1 : 0);
label_5ddb00:
    // 0x5ddb00: 0x2d2d2029  sltiu       $t5, $t1, 0x2029
    ctx->pc = 0x5ddb00u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8233) ? 1 : 0);
label_5ddb04:
    // 0x5ddb04: 0x6f66203e  ldr         $a2, 0x203E($k1)
    ctx->pc = 0x5ddb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8254); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_5ddb08:
    // 0x5ddb08: 0x20646e75  addi        $a0, $v1, 0x6E75
    ctx->pc = 0x5ddb08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28277, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5ddb0c:
    // 0x5ddb0c: 0x69206e61  ldl         $zero, 0x6E61($t1)
    ctx->pc = 0x5ddb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_5ddb10:
    // 0x5ddb10: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x5ddb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5ddb14:
    // 0x5ddb14: 0x28206469  slti        $zero, $at, 0x6469
    ctx->pc = 0x5ddb14u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25705) ? 1 : 0);
label_5ddb18:
    // 0x5ddb18: 0x6c6c756e  ldr         $t4, 0x756E($v1)
    ctx->pc = 0x5ddb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30062); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_5ddb1c:
    // 0x5ddb1c: 0x696f7020  ldl         $t7, 0x7020($t3)
    ctx->pc = 0x5ddb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_5ddb20:
    // 0x5ddb20: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddb20u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DDB20 raw=0x7265746E");
label_5ddb24:
    // 0x5ddb24: 0x69632029  ldl         $v1, 0x2029($t3)
    ctx->pc = 0x5ddb24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5ddb28:
    // 0x5ddb28: 0x616d656e  daddi       $t5, $t3, 0x656E
    ctx->pc = 0x5ddb28u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_5ddb2c:
    // 0x5ddb2c: 0x75716974  .word       0x75716974                   # INVALID     $t3, $s1, 0x6974 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddb2cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDB2C raw=0x75716974");
label_5ddb30:
    // 0x5ddb30: 0x63612065  daddi       $at, $k1, 0x2065
    ctx->pc = 0x5ddb30u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8293; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_5ddb34:
    // 0x5ddb34: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5ddb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5ddb38:
    // 0x5ddb38: 0x0  nop
    ctx->pc = 0x5ddb38u;
    // NOP
label_5ddb3c:
    // 0x5ddb3c: 0x0  nop
    ctx->pc = 0x5ddb3cu;
    // NOP
label_5ddb40:
    // 0x5ddb40: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5ddb40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5ddb44:
    // 0x5ddb44: 0x6e69436e  ldr         $t1, 0x436E($s3)
    ctx->pc = 0x5ddb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5ddb48:
    // 0x5ddb48: 0x74616d65  .word       0x74616D65                   # INVALID     $v1, $at, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddb48u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDB48 raw=0x74616D65");
label_5ddb4c:
    // 0x5ddb4c: 0x65757169  daddiu      $s5, $t3, 0x7169
    ctx->pc = 0x5ddb4cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29033);
label_5ddb50:
    // 0x5ddb50: 0x70553a3a  .word       0x70553A3A                   # INVALID     $v0, $s5, 0x3A3A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddb50u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x5DDB50 raw=0x70553A3A");
label_5ddb54:
    // 0x5ddb54: 0x65746164  daddiu      $s4, $t3, 0x6164
    ctx->pc = 0x5ddb54u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24932);
label_5ddb58:
    // 0x5ddb58: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddb58u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
label_5ddb5c:
    // 0x5ddb5c: 0x6e615220  ldr         $at, 0x5220($s3)
    ctx->pc = 0x5ddb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5ddb60:
    // 0x5ddb60: 0x746e6920  .word       0x746E6920                   # INVALID     $v1, $t6, 0x6920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddb60u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDB60 raw=0x746E6920");
label_5ddb64:
    // 0x5ddb64: 0x6e61206f  ldr         $at, 0x206F($s3)
    ctx->pc = 0x5ddb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5ddb68:
    // 0x5ddb68: 0x686e7520  ldl         $t6, 0x7520($v1)
    ctx->pc = 0x5ddb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29984); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_5ddb6c:
    // 0x5ddb6c: 0x6c646e61  ldr         $a0, 0x6E61($v1)
    ctx->pc = 0x5ddb6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_5ddb70:
    // 0x5ddb70: 0x74206465  .word       0x74206465                   # INVALID     $at, $zero, 0x6465 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddb70u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDB70 raw=0x74206465");
label_5ddb74:
    // 0x5ddb74: 0x20657079  addi        $a1, $v1, 0x7079
    ctx->pc = 0x5ddb74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5ddb78:
    // 0x5ddb78: 0x7420666f  .word       0x7420666F                   # INVALID     $at, $zero, 0x666F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddb78u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDB78 raw=0x7420666F");
label_5ddb7c:
    // 0x5ddb7c: 0x2d656d69  sltiu       $a1, $t3, 0x6D69
    ctx->pc = 0x5ddb7cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)28009) ? 1 : 0);
label_5ddb80:
    // 0x5ddb80: 0x6e756f62  ldr         $s5, 0x6F62($s3)
    ctx->pc = 0x5ddb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28514); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5ddb84:
    // 0x5ddb84: 0x20646564  addi        $a0, $v1, 0x6564
    ctx->pc = 0x5ddb84u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5ddb88:
    // 0x5ddb88: 0x656e6963  daddiu      $t6, $t3, 0x6963
    ctx->pc = 0x5ddb88u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26979);
label_5ddb8c:
    // 0x5ddb8c: 0x6974616d  ldl         $s4, 0x616D($t3)
    ctx->pc = 0x5ddb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24941); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5ddb90:
    // 0x5ddb90: 0x20657571  addi        $a1, $v1, 0x7571
    ctx->pc = 0x5ddb90u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30065, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5ddb94:
    // 0x5ddb94: 0x69746361  ldl         $s4, 0x6361($t3)
    ctx->pc = 0x5ddb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5ddb98:
    // 0x5ddb98: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ddb98u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_5ddb9c:
    // 0x5ddb9c: 0x0  nop
    ctx->pc = 0x5ddb9cu;
    // NOP
label_5ddba0:
    // 0x5ddba0: 0x74655273  .word       0x74655273                   # INVALID     $v1, $a1, 0x5273 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddba0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDBA0 raw=0x74655273");
label_5ddba4:
    // 0x5ddba4: 0x436e7275  .word       0x436E7275                   # INVALID     $k1, $t6, 0x7275 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5ddba4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5DDBA4 raw=0x436E7275");
label_5ddba8:
    // 0x5ddba8: 0x2065646f  addi        $a1, $v1, 0x646F
    ctx->pc = 0x5ddba8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25711, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5ddbac:
    // 0x5ddbac: 0x31203d3d  andi        $zero, $t1, 0x3D3D
    ctx->pc = 0x5ddbacu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15677);
label_5ddbb0:
    // 0x5ddbb0: 0x0  nop
    ctx->pc = 0x5ddbb0u;
    // NOP
label_5ddbb4:
    // 0x5ddbb4: 0x0  nop
    ctx->pc = 0x5ddbb4u;
    // NOP
label_5ddbb8:
    // 0x5ddbb8: 0x0  nop
    ctx->pc = 0x5ddbb8u;
    // NOP
label_5ddbbc:
    // 0x5ddbbc: 0x0  nop
    ctx->pc = 0x5ddbbcu;
    // NOP
label_5ddbc0:
    // 0x5ddbc0: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5ddbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5ddbc4:
    // 0x5ddbc4: 0x6e69436e  ldr         $t1, 0x436E($s3)
    ctx->pc = 0x5ddbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5ddbc8:
    // 0x5ddbc8: 0x74616d65  .word       0x74616D65                   # INVALID     $v1, $at, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddbc8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDBC8 raw=0x74616D65");
label_5ddbcc:
    // 0x5ddbcc: 0x65757169  daddiu      $s5, $t3, 0x7169
    ctx->pc = 0x5ddbccu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29033);
label_5ddbd0:
    // 0x5ddbd0: 0x70553a3a  .word       0x70553A3A                   # INVALID     $v0, $s5, 0x3A3A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddbd0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x5DDBD0 raw=0x70553A3A");
label_5ddbd4:
    // 0x5ddbd4: 0x65746164  daddiu      $s4, $t3, 0x6164
    ctx->pc = 0x5ddbd4u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24932);
label_5ddbd8:
    // 0x5ddbd8: 0x45203a20  .word       0x45203A20                   # INVALID     $t1, $zero, 0x3A20 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5ddbd8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x20 at 0x5DDBD8 raw=0x45203A20");
label_5ddbdc:
    // 0x5ddbdc: 0x63656863  daddi       $a1, $k1, 0x6863
    ctx->pc = 0x5ddbdcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26723; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_5ddbe0:
    // 0x5ddbe0: 0x20656420  addi        $a1, $v1, 0x6420
    ctx->pc = 0x5ddbe0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25632, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5ddbe4:
    // 0x5ddbe4: 0x4341276c  .word       0x4341276C                   # INVALID     $k0, $at, 0x276C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5ddbe4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5DDBE4 raw=0x4341276C");
label_5ddbe8:
    // 0x5ddbe8: 0x41564954  .word       0x41564954                   # INVALID     $t2, $s6, 0x4954 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5ddbe8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5DDBE8 raw=0x41564954");
label_5ddbec:
    // 0x5ddbec: 0x4e4f4954  .word       0x4E4F4954                   # INVALID     $s2, $t7, 0x4954 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddbecu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDBEC raw=0x4E4F4954");
label_5ddbf0:
    // 0x5ddbf0: 0x75276420  .word       0x75276420                   # INVALID     $t1, $a3, 0x6420 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddbf0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDBF0 raw=0x75276420");
label_5ddbf4:
    // 0x5ddbf4: 0x6320656e  daddi       $zero, $t9, 0x656E
    ctx->pc = 0x5ddbf4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5ddbf8:
    // 0x5ddbf8: 0x72e96d61  .word       0x72E96D61                   # maddu1      $t5, $s7, $t1 # 00000540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddbf8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 23) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5ddbfc:
    // 0x5ddbfc: 0x70612061  .word       0x70612061                   # maddu1      $a0, $v1, $at # 00000040 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddbfcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 1); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_5ddc00:
    // 0x5ddc00: 0x2073e872  addi        $s3, $v1, -0x178E
    ctx->pc = 0x5ddc00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294961266, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5ddc04:
    // 0x5ddc04: 0x52206e75  beql        $s1, $zero, . + 4 + (0x6E75 << 2)
label_5ddc08:
    if (ctx->pc == 0x5DDC08u) {
        ctx->pc = 0x5DDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DDC04u;
        // 0x5ddc08: 0x454449  .word       0x00454449                   # jalr        $t0, $v0 # 00050440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $8, $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DDC0Cu;
        goto label_5ddc0c;
    }
    ctx->pc = 0x5DDC04u;
    {
        const bool branch_taken_0x5ddc04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5ddc04) {
            ctx->pc = 0x5DDC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DDC04u;
            // 0x5ddc08: 0x454449  .word       0x00454449                   # jalr        $t0, $v0 # 00050440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            // JALR $8, $2 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F95DCu;
            return;
        }
    }
    ctx->pc = 0x5DDC0Cu;
label_5ddc0c:
    // 0x5ddc0c: 0x0  nop
    ctx->pc = 0x5ddc0cu;
    // NOP
label_5ddc10:
    // 0x5ddc10: 0x454e4943  .word       0x454E4943                   # INVALID     $t2, $t6, 0x4943 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5ddc10u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x3 at 0x5DDC10 raw=0x454E4943");
label_5ddc14:
    // 0x5ddc14: 0x4954203e  .word       0x4954203E                   # INVALID     $t2, $s4, 0x203E # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5ddc14u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5DDC14 raw=0x4954203E");
label_5ddc18:
    // 0x5ddc18: 0x4f42454d  .word       0x4F42454D                   # INVALID     $k0, $v0, 0x454D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddc18u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDC18 raw=0x4F42454D");
label_5ddc1c:
    // 0x5ddc1c: 0x20444e55  addi        $a0, $v0, 0x4E55
    ctx->pc = 0x5ddc1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)20053, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5ddc20:
    // 0x5ddc20: 0x69746361  ldl         $s4, 0x6361($t3)
    ctx->pc = 0x5ddc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5ddc24:
    // 0x5ddc24: 0x203a6e6f  addi        $k0, $at, 0x6E6F
    ctx->pc = 0x5ddc24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)28271, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5ddc28:
    // 0x5ddc28: 0x43207325  .word       0x43207325                   # INVALID     $t9, $zero, 0x7325 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5ddc28u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x5DDC28 raw=0x43207325");
label_5ddc2c:
    // 0x5ddc2c: 0x4c504d4f  .word       0x4C504D4F                   # INVALID     $v0, $s0, 0x4D4F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddc2cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDC2C raw=0x4C504D4F");
label_5ddc30:
    // 0x5ddc30: 0x44455445  .word       0x44455445                   # cfc1        $a1, $10 # 00000445 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5ddc30u;
    SET_GPR_U32(ctx, 5, 0); // Unimplemented FCR10
label_5ddc34:
    // 0x5ddc34: 0xa2e  .word       0x00000A2E                   # dsub        $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ddc34u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_5ddc38:
    // 0x5ddc38: 0x0  nop
    ctx->pc = 0x5ddc38u;
    // NOP
label_5ddc3c:
    // 0x5ddc3c: 0x0  nop
    ctx->pc = 0x5ddc3cu;
    // NOP
label_5ddc40:
    // 0x5ddc40: 0x74784570  .word       0x74784570                   # INVALID     $v1, $t8, 0x4570 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddc40u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDC40 raw=0x74784570");
label_5ddc44:
    // 0x5ddc44: 0x65646e65  daddiu      $a0, $t3, 0x6E65
    ctx->pc = 0x5ddc44u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28261);
label_5ddc48:
    // 0x5ddc48: 0x74634164  .word       0x74634164                   # INVALID     $v1, $v1, 0x4164 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddc48u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDC48 raw=0x74634164");
label_5ddc4c:
    // 0x5ddc4c: 0x206e6f69  addi        $t6, $v1, 0x6F69
    ctx->pc = 0x5ddc4cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28521, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_5ddc50:
    // 0x5ddc50: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddc50u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDC50 raw=0x4E203D21");
label_5ddc54:
    // 0x5ddc54: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ddc54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5DDC54 raw=0x004C4C55");
label_5ddc58:
    // 0x5ddc58: 0x0  nop
    ctx->pc = 0x5ddc58u;
    // NOP
label_5ddc5c:
    // 0x5ddc5c: 0x0  nop
    ctx->pc = 0x5ddc5cu;
    // NOP
label_5ddc60:
    // 0x5ddc60: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5ddc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5ddc64:
    // 0x5ddc64: 0x6e69436e  ldr         $t1, 0x436E($s3)
    ctx->pc = 0x5ddc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5ddc68:
    // 0x5ddc68: 0x74616d65  .word       0x74616D65                   # INVALID     $v1, $at, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddc68u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDC68 raw=0x74616D65");
label_5ddc6c:
    // 0x5ddc6c: 0x65757169  daddiu      $s5, $t3, 0x7169
    ctx->pc = 0x5ddc6cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29033);
label_5ddc70:
    // 0x5ddc70: 0x70553a3a  .word       0x70553A3A                   # INVALID     $v0, $s5, 0x3A3A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddc70u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x5DDC70 raw=0x70553A3A");
label_5ddc74:
    // 0x5ddc74: 0x65746164  daddiu      $s4, $t3, 0x6164
    ctx->pc = 0x5ddc74u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24932);
label_5ddc78:
    // 0x5ddc78: 0x65747845  daddiu      $s4, $t3, 0x7845
    ctx->pc = 0x5ddc78u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30789);
label_5ddc7c:
    // 0x5ddc7c: 0x6465646e  daddiu      $a1, $v1, 0x646E
    ctx->pc = 0x5ddc7cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25710);
label_5ddc80:
    // 0x5ddc80: 0x69746341  ldl         $s4, 0x6341($t3)
    ctx->pc = 0x5ddc80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25409); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5ddc84:
    // 0x5ddc84: 0x20736e6f  addi        $s3, $v1, 0x6E6F
    ctx->pc = 0x5ddc84u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28271, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5ddc88:
    // 0x5ddc88: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5ddc88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_5ddc8c:
    // 0x5ddc8c: 0x6e756f46  ldr         $s5, 0x6F46($s3)
    ctx->pc = 0x5ddc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28486); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5ddc90:
    // 0x5ddc90: 0x6e612064  ldr         $at, 0x2064($s3)
    ctx->pc = 0x5ddc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5ddc94:
    // 0x5ddc94: 0x766e4920  .word       0x766E4920                   # INVALID     $s3, $t6, 0x4920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddc94u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDC94 raw=0x766E4920");
label_5ddc98:
    // 0x5ddc98: 0x64696c61  daddiu      $t1, $v1, 0x6C61
    ctx->pc = 0x5ddc98u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27745);
label_5ddc9c:
    // 0x5ddc9c: 0x554e2820  bnel        $t2, $t6, . + 4 + (0x2820 << 2)
label_5ddca0:
    if (ctx->pc == 0x5DDCA0u) {
        ctx->pc = 0x5DDCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DDC9Cu;
        // 0x5ddca0: 0x20294c4c  addi        $t1, $at, 0x4C4C (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)19532, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DDCA4u;
        goto label_5ddca4;
    }
    ctx->pc = 0x5DDC9Cu;
    {
        const bool branch_taken_0x5ddc9c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5ddc9c) {
            ctx->pc = 0x5DDCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DDC9Cu;
            // 0x5ddca0: 0x20294c4c  addi        $t1, $at, 0x4C4C (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)19532, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E7D20u;
            return;
        }
    }
    ctx->pc = 0x5DDCA4u;
label_5ddca4:
    // 0x5ddca4: 0x69746361  ldl         $s4, 0x6361($t3)
    ctx->pc = 0x5ddca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5ddca8:
    // 0x5ddca8: 0x70206e6f  .word       0x70206E6F                   # INVALID     $at, $zero, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddca8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DDCA8 raw=0x70206E6F");
label_5ddcac:
    // 0x5ddcac: 0x746e696f  .word       0x746E696F                   # INVALID     $v1, $t6, 0x696F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddcacu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDCAC raw=0x746E696F");
label_5ddcb0:
    // 0x5ddcb0: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ddcb0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5ddcb4:
    // 0x5ddcb4: 0x0  nop
    ctx->pc = 0x5ddcb4u;
    // NOP
label_5ddcb8:
    // 0x5ddcb8: 0x0  nop
    ctx->pc = 0x5ddcb8u;
    // NOP
label_5ddcbc:
    // 0x5ddcbc: 0x0  nop
    ctx->pc = 0x5ddcbcu;
    // NOP
label_5ddcc0:
    // 0x5ddcc0: 0x66705f6d  daddiu      $s0, $s3, 0x5F6D
    ctx->pc = 0x5ddcc0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)24429);
label_5ddcc4:
    // 0x5ddcc4: 0x6d6f436e  ldr         $t7, 0x436E($t3)
    ctx->pc = 0x5ddcc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5ddcc8:
    // 0x5ddcc8: 0x646e616d  daddiu      $t6, $v1, 0x616D
    ctx->pc = 0x5ddcc8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24941);
label_5ddccc:
    // 0x5ddccc: 0x646e6148  daddiu      $t6, $v1, 0x6148
    ctx->pc = 0x5ddcccu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24904);
label_5ddcd0:
    // 0x5ddcd0: 0x2072656c  addi        $s2, $v1, 0x656C
    ctx->pc = 0x5ddcd0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25964, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_5ddcd4:
    // 0x5ddcd4: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddcd4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDCD4 raw=0x4E203D21");
label_5ddcd8:
    // 0x5ddcd8: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ddcd8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5DDCD8 raw=0x004C4C55");
label_5ddcdc:
    // 0x5ddcdc: 0x0  nop
    ctx->pc = 0x5ddcdcu;
    // NOP
label_5ddce0:
    // 0x5ddce0: 0x50705f6d  beql        $v1, $s0, . + 4 + (0x5F6D << 2)
label_5ddce4:
    if (ctx->pc == 0x5DDCE4u) {
        ctx->pc = 0x5DDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DDCE0u;
        // 0x5ddce4: 0x65737261  daddiu      $s3, $t3, 0x7261 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29281);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DDCE8u;
        goto label_5ddce8;
    }
    ctx->pc = 0x5DDCE0u;
    {
        const bool branch_taken_0x5ddce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x5ddce0) {
            ctx->pc = 0x5DDCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DDCE0u;
            // 0x5ddce4: 0x65737261  daddiu      $s3, $t3, 0x7261 (Delay Slot)
            SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29281);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F5A98u;
            return;
        }
    }
    ctx->pc = 0x5DDCE8u;
label_5ddce8:
    // 0x5ddce8: 0x3d212072  .word       0x3D212072                   # lui         $at, 0x2072 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8306 << 16));
label_5ddcec:
    // 0x5ddcec: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddcecu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDCEC raw=0x4C554E20");
label_5ddcf0:
    // 0x5ddcf0: 0x4c  syscall     1
    ctx->pc = 0x5ddcf0u;
    ctx->pc = 0x5DDCF4u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5ddcf4:
    // 0x5ddcf4: 0x0  nop
    ctx->pc = 0x5ddcf4u;
    // NOP
label_5ddcf8:
    // 0x5ddcf8: 0x0  nop
    ctx->pc = 0x5ddcf8u;
    // NOP
label_5ddcfc:
    // 0x5ddcfc: 0x0  nop
    ctx->pc = 0x5ddcfcu;
    // NOP
label_5ddd00:
    // 0x5ddd00: 0x467a735f  .word       0x467A735F                   # INVALID     $s3, $k0, 0x735F # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5ddd00u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x1F at 0x5DDD00 raw=0x467A735F");
label_5ddd04:
    // 0x5ddd04: 0x4e656c69  .word       0x4E656C69                   # INVALID     $s3, $a1, 0x6C69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddd04u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDD04 raw=0x4E656C69");
label_5ddd08:
    // 0x5ddd08: 0x4e656d61  .word       0x4E656D61                   # INVALID     $s3, $a1, 0x6D61 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddd08u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDD08 raw=0x4E656D61");
label_5ddd0c:
    // 0x5ddd0c: 0x7478456f  .word       0x7478456F                   # INVALID     $v1, $t8, 0x456F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddd0cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDD0C raw=0x7478456F");
label_5ddd10:
    // 0x5ddd10: 0x69736e65  ldl         $s3, 0x6E65($t3)
    ctx->pc = 0x5ddd10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_5ddd14:
    // 0x5ddd14: 0x21206e6f  addi        $zero, $t1, 0x6E6F
    ctx->pc = 0x5ddd14u;
    // NOP (addi to $zero)
label_5ddd18:
    // 0x5ddd18: 0x554e203d  bnel        $t2, $t6, . + 4 + (0x203D << 2)
label_5ddd1c:
    if (ctx->pc == 0x5DDD1Cu) {
        ctx->pc = 0x5DDD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DDD18u;
        // 0x5ddd1c: 0x4c4c  syscall     305 (Delay Slot)
        ctx->pc = 0x5DDD20u;
        runtime->handleSyscall(rdram, ctx, 0x131u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DDD20u;
        goto label_5ddd20;
    }
    ctx->pc = 0x5DDD18u;
    {
        const bool branch_taken_0x5ddd18 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5ddd18) {
            ctx->pc = 0x5DDD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DDD18u;
            // 0x5ddd1c: 0x4c4c  syscall     305 (Delay Slot)
            ctx->pc = 0x5DDD20u;
            runtime->handleSyscall(rdram, ctx, 0x131u);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E5E10u;
            return;
        }
    }
    ctx->pc = 0x5DDD20u;
label_5ddd20:
    // 0x5ddd20: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5ddd20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5ddd24:
    // 0x5ddd24: 0x6e69436e  ldr         $t1, 0x436E($s3)
    ctx->pc = 0x5ddd24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5ddd28:
    // 0x5ddd28: 0x74616d65  .word       0x74616D65                   # INVALID     $v1, $at, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddd28u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDD28 raw=0x74616D65");
label_5ddd2c:
    // 0x5ddd2c: 0x65757169  daddiu      $s5, $t3, 0x7169
    ctx->pc = 0x5ddd2cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29033);
label_5ddd30:
    // 0x5ddd30: 0x6f4c3a3a  ldr         $t4, 0x3A3A($k0)
    ctx->pc = 0x5ddd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 14906); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_5ddd34:
    // 0x5ddd34: 0x2d206461  sltiu       $zero, $t1, 0x6461
    ctx->pc = 0x5ddd34u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25697) ? 1 : 0);
label_5ddd38:
    // 0x5ddd38: 0x70203e2d  .word       0x70203E2D                   # INVALID     $at, $zero, 0x3E2D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddd38u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x5DDD38 raw=0x70203E2D");
label_5ddd3c:
    // 0x5ddd3c: 0x65737261  daddiu      $s3, $t3, 0x7261
    ctx->pc = 0x5ddd3cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29281);
label_5ddd40:
    // 0x5ddd40: 0x61662072  daddi       $a2, $t3, 0x2072
    ctx->pc = 0x5ddd40u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8306; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_5ddd44:
    // 0x5ddd44: 0x64656c69  daddiu      $a1, $v1, 0x6C69
    ctx->pc = 0x5ddd44u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27753);
label_5ddd48:
    // 0x5ddd48: 0x206f7420  addi        $t7, $v1, 0x7420
    ctx->pc = 0x5ddd48u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_5ddd4c:
    // 0x5ddd4c: 0x64616f6c  daddiu      $at, $v1, 0x6F6C
    ctx->pc = 0x5ddd4cu;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28524);
label_5ddd50:
    // 0x5ddd50: 0x73657220  .word       0x73657220                   # madd1       $t6, $k1, $a1 # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddd50u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_5ddd54:
    // 0x5ddd54: 0x6372756f  daddi       $s2, $k1, 0x756F
    ctx->pc = 0x5ddd54u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30063; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5ddd58:
    // 0x5ddd58: 0x69662065  ldl         $a2, 0x2065($t3)
    ctx->pc = 0x5ddd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_5ddd5c:
    // 0x5ddd5c: 0x656c  .word       0x0000656C                   # dadd        $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ddd5cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_5ddd60:
    // 0x5ddd60: 0x6341705f  daddi       $at, $k0, 0x705F
    ctx->pc = 0x5ddd60u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)28767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_5ddd64:
    // 0x5ddd64: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5ddd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5ddd68:
    // 0x5ddd68: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5ddd68u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5ddd6c:
    // 0x5ddd6c: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddd6cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDD6C raw=0x4C4C554E");
label_5ddd70:
    // 0x5ddd70: 0x0  nop
    ctx->pc = 0x5ddd70u;
    // NOP
label_5ddd74:
    // 0x5ddd74: 0x0  nop
    ctx->pc = 0x5ddd74u;
    // NOP
label_5ddd78:
    // 0x5ddd78: 0x0  nop
    ctx->pc = 0x5ddd78u;
    // NOP
label_5ddd7c:
    // 0x5ddd7c: 0x0  nop
    ctx->pc = 0x5ddd7cu;
    // NOP
label_5ddd80:
    // 0x5ddd80: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5ddd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5ddd84:
    // 0x5ddd84: 0x6e69436e  ldr         $t1, 0x436E($s3)
    ctx->pc = 0x5ddd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5ddd88:
    // 0x5ddd88: 0x74616d65  .word       0x74616D65                   # INVALID     $v1, $at, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddd88u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDD88 raw=0x74616D65");
label_5ddd8c:
    // 0x5ddd8c: 0x65757169  daddiu      $s5, $t3, 0x7169
    ctx->pc = 0x5ddd8cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29033);
label_5ddd90:
    // 0x5ddd90: 0x65523a3a  daddiu      $s2, $t2, 0x3A3A
    ctx->pc = 0x5ddd90u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14906);
label_5ddd94:
    // 0x5ddd94: 0x65766f6d  daddiu      $s6, $t3, 0x6F6D
    ctx->pc = 0x5ddd94u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28525);
label_5ddd98:
    // 0x5ddd98: 0x65747845  daddiu      $s4, $t3, 0x7845
    ctx->pc = 0x5ddd98u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30789);
label_5ddd9c:
    // 0x5ddd9c: 0x6465646e  daddiu      $a1, $v1, 0x646E
    ctx->pc = 0x5ddd9cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25710);
label_5ddda0:
    // 0x5ddda0: 0x69746341  ldl         $s4, 0x6341($t3)
    ctx->pc = 0x5ddda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25409); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5ddda4:
    // 0x5ddda4: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ddda4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_5ddda8:
    // 0x5ddda8: 0x0  nop
    ctx->pc = 0x5ddda8u;
    // NOP
label_5dddac:
    // 0x5dddac: 0x0  nop
    ctx->pc = 0x5dddacu;
    // NOP
label_5dddb0:
    // 0x5dddb0: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5dddb0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5dddb4:
    // 0x5dddb4: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5dddb4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5dddb8:
    // 0x5dddb8: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5dddb8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5dddbc:
    // 0x5dddbc: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5dddbcu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5dddc0:
    // 0x5dddc0: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5dddc0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5dddc4:
    // 0x5dddc4: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5dddc4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5dddc8:
    // 0x5dddc8: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5dddc8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5dddcc:
    // 0x5dddcc: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5dddccu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5dddd0:
    // 0x5dddd0: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5dddd0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5dddd4:
    // 0x5dddd4: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5dddd4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5dddd8:
    // 0x5dddd8: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5dddd8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5ddddc:
    // 0x5ddddc: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5ddddcu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5ddde0:
    // 0x5ddde0: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5ddde0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5ddde4:
    // 0x5ddde4: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5ddde4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5ddde8:
    // 0x5ddde8: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5ddde8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5dddec:
    // 0x5dddec: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x5dddecu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
label_5dddf0:
    // 0x5dddf0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5dddf0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5dddf4:
    // 0x5dddf4: 0x0  nop
    ctx->pc = 0x5dddf4u;
    // NOP
label_5dddf8:
    // 0x5dddf8: 0x0  nop
    ctx->pc = 0x5dddf8u;
    // NOP
label_5dddfc:
    // 0x5dddfc: 0x0  nop
    ctx->pc = 0x5dddfcu;
    // NOP
label_5dde00:
    // 0x5dde00: 0x656e6963  daddiu      $t6, $t3, 0x6963
    ctx->pc = 0x5dde00u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26979);
label_5dde04:
    // 0x5dde04: 0x6974616d  ldl         $s4, 0x616D($t3)
    ctx->pc = 0x5dde04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24941); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5dde08:
    // 0x5dde08: 0x3a657571  xori        $a1, $s3, 0x7571
    ctx->pc = 0x5dde08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)30065);
label_5dde0c:
    // 0x5dde0c: 0x73252220  .word       0x73252220                   # madd1       $a0, $t9, $a1 # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dde0cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_5dde10:
    // 0x5dde10: 0x5b202022  blezl       $t9, . + 4 + (0x2022 << 2)
label_5dde14:
    if (ctx->pc == 0x5DDE14u) {
        ctx->pc = 0x5DDE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DDE10u;
        // 0x5dde14: 0x73207525  .word       0x73207525                   # INVALID     $t9, $zero, 0x7525 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DDE14 raw=0x73207525");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DDE18u;
        goto label_5dde18;
    }
    ctx->pc = 0x5DDE10u;
    {
        const bool branch_taken_0x5dde10 = (GPR_S32(ctx, 25) <= 0);
        if (branch_taken_0x5dde10) {
            ctx->pc = 0x5DDE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DDE10u;
            // 0x5dde14: 0x73207525  .word       0x73207525                   # INVALID     $t9, $zero, 0x7525 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DDE14 raw=0x73207525");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E5E9Cu;
            return;
        }
    }
    ctx->pc = 0x5DDE18u;
label_5dde18:
    // 0x5dde18: 0x65757165  daddiu      $s5, $t3, 0x7165
    ctx->pc = 0x5dde18u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29029);
label_5dde1c:
    // 0x5dde1c: 0x7365636e  .word       0x7365636E                   # INVALID     $k1, $a1, 0x636E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dde1cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DDE1C raw=0x7365636E");
label_5dde20:
    // 0x5dde20: 0xa5d  .word       0x00000A5D                   # dmultu      $zero, $zero # 00000A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dde20u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x5DDE20 raw=0x00000A5D");
label_5dde24:
    // 0x5dde24: 0x0  nop
    ctx->pc = 0x5dde24u;
    // NOP
label_5dde28:
    // 0x5dde28: 0x0  nop
    ctx->pc = 0x5dde28u;
    // NOP
label_5dde2c:
    // 0x5dde2c: 0x0  nop
    ctx->pc = 0x5dde2cu;
    // NOP
label_5dde30:
    // 0x5dde30: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde30u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde34:
    // 0x5dde34: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde34u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde38:
    // 0x5dde38: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde38u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde3c:
    // 0x5dde3c: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde3cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde40:
    // 0x5dde40: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde40u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde44:
    // 0x5dde44: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde44u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde48:
    // 0x5dde48: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde48u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde4c:
    // 0x5dde4c: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde4cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde50:
    // 0x5dde50: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde50u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde54:
    // 0x5dde54: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde54u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde58:
    // 0x5dde58: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde58u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde5c:
    // 0x5dde5c: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde5cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde60:
    // 0x5dde60: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde60u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde64:
    // 0x5dde64: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde64u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde68:
    // 0x5dde68: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde68u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde6c:
    // 0x5dde6c: 0x2d2d2d2d  sltiu       $t5, $t1, 0x2D2D
    ctx->pc = 0x5dde6cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)11565) ? 1 : 0);
label_5dde70:
    // 0x5dde70: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5dde70u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5dde74:
    // 0x5dde74: 0x0  nop
    ctx->pc = 0x5dde74u;
    // NOP
label_5dde78:
    // 0x5dde78: 0x0  nop
    ctx->pc = 0x5dde78u;
    // NOP
label_5dde7c:
    // 0x5dde7c: 0x0  nop
    ctx->pc = 0x5dde7cu;
    // NOP
label_5dde80:
    // 0x5dde80: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5dde80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5dde84:
    // 0x5dde84: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dde84u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DDE84 raw=0x7261506E");
label_5dde88:
    // 0x5dde88: 0x2e726573  sltiu       $s2, $s3, 0x6573
    ctx->pc = 0x5dde88u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25971) ? 1 : 0);
label_5dde8c:
    // 0x5dde8c: 0x707063  .word       0x00707063                   # subu        $t6, $v1, $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dde8cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_5dde90:
    // 0x5dde90: 0x65527473  daddiu      $s2, $t2, 0x7473
    ctx->pc = 0x5dde90u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)29811);
label_5dde94:
    // 0x5dde94: 0x6c694673  ldr         $t1, 0x4673($v1)
    ctx->pc = 0x5dde94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 18035); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5dde98:
    // 0x5dde98: 0x65705365  daddiu      $s0, $t3, 0x5365
    ctx->pc = 0x5dde98u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)21349);
label_5dde9c:
    // 0x5dde9c: 0x656c2e63  daddiu      $t4, $t3, 0x2E63
    ctx->pc = 0x5dde9cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11875);
label_5ddea0:
    // 0x5ddea0: 0x6874676e  ldl         $s4, 0x676E($v1)
    ctx->pc = 0x5ddea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26478); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5ddea4:
    // 0x5ddea4: 0x3e202928  .word       0x3E202928                   # lui         $zero, 0x2928 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddea4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)10536 << 16));
label_5ddea8:
    // 0x5ddea8: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x5ddea8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_5ddeac:
    // 0x5ddeac: 0x0  nop
    ctx->pc = 0x5ddeacu;
    // NOP
label_5ddeb0:
    // 0x5ddeb0: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5ddeb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5ddeb4:
    // 0x5ddeb4: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddeb4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DDEB4 raw=0x7261506E");
label_5ddeb8:
    // 0x5ddeb8: 0x3a726573  xori        $s2, $s3, 0x6573
    ctx->pc = 0x5ddeb8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25971);
label_5ddebc:
    // 0x5ddebc: 0x616f4c3a  daddi       $t7, $t3, 0x4C3A
    ctx->pc = 0x5ddebcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)19514; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5ddec0:
    // 0x5ddec0: 0x73655264  .word       0x73655264                   # INVALID     $k1, $a1, 0x5264 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddec0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x5DDEC0 raw=0x73655264");
label_5ddec4:
    // 0x5ddec4: 0x6372756f  daddi       $s2, $k1, 0x756F
    ctx->pc = 0x5ddec4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30063; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5ddec8:
    // 0x5ddec8: 0x69467365  ldl         $a2, 0x7365($t2)
    ctx->pc = 0x5ddec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_5ddecc:
    // 0x5ddecc: 0x2d20656c  sltiu       $zero, $t1, 0x656C
    ctx->pc = 0x5ddeccu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_5dded0:
    // 0x5dded0: 0x49203e2d  .word       0x49203E2D                   # INVALID     $t1, $zero, 0x3E2D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5dded0u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5DDED0 raw=0x49203E2D");
label_5dded4:
    // 0x5dded4: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x5dded4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5dded8:
    // 0x5dded8: 0x66206469  daddiu      $zero, $s1, 0x6469
    ctx->pc = 0x5dded8u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)25705);
label_5ddedc:
    // 0x5ddedc: 0x20656c69  addi        $a1, $v1, 0x6C69
    ctx->pc = 0x5ddedcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27753, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5ddee0:
    // 0x5ddee0: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x5ddee0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
label_5ddee4:
    // 0x5ddee4: 0x0  nop
    ctx->pc = 0x5ddee4u;
    // NOP
label_5ddee8:
    // 0x5ddee8: 0x0  nop
    ctx->pc = 0x5ddee8u;
    // NOP
label_5ddeec:
    // 0x5ddeec: 0x0  nop
    ctx->pc = 0x5ddeecu;
    // NOP
label_5ddef0:
    // 0x5ddef0: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5ddef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5ddef4:
    // 0x5ddef4: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddef4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DDEF4 raw=0x7261506E");
label_5ddef8:
    // 0x5ddef8: 0x3a726573  xori        $s2, $s3, 0x6573
    ctx->pc = 0x5ddef8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25971);
label_5ddefc:
    // 0x5ddefc: 0x616f4c3a  daddi       $t7, $t3, 0x4C3A
    ctx->pc = 0x5ddefcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)19514; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5ddf00:
    // 0x5ddf00: 0x73655264  .word       0x73655264                   # INVALID     $k1, $a1, 0x5264 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddf00u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x5DDF00 raw=0x73655264");
label_5ddf04:
    // 0x5ddf04: 0x6372756f  daddi       $s2, $k1, 0x756F
    ctx->pc = 0x5ddf04u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30063; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5ddf08:
    // 0x5ddf08: 0x69467365  ldl         $a2, 0x7365($t2)
    ctx->pc = 0x5ddf08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_5ddf0c:
    // 0x5ddf0c: 0x3a20656c  xori        $zero, $s1, 0x656C
    ctx->pc = 0x5ddf0cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25964);
label_5ddf10:
    // 0x5ddf10: 0x756f6320  .word       0x756F6320                   # INVALID     $t3, $t7, 0x6320 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddf10u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDF10 raw=0x756F6320");
label_5ddf14:
    // 0x5ddf14: 0x6e20646c  ldr         $zero, 0x646C($s1)
    ctx->pc = 0x5ddf14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25708); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5ddf18:
    // 0x5ddf18: 0x6f20746f  ldr         $zero, 0x746F($t9)
    ctx->pc = 0x5ddf18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 29807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5ddf1c:
    // 0x5ddf1c: 0x206e6570  addi        $t6, $v1, 0x6570
    ctx->pc = 0x5ddf1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25968, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_5ddf20:
    // 0x5ddf20: 0x4f534552  .word       0x4F534552                   # INVALID     $k0, $s3, 0x4552 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddf20u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDF20 raw=0x4F534552");
label_5ddf24:
    // 0x5ddf24: 0x45435255  .word       0x45435255                   # INVALID     $t2, $v1, 0x5255 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5ddf24u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x15 at 0x5DDF24 raw=0x45435255");
label_5ddf28:
    // 0x5ddf28: 0x6c696620  ldr         $t1, 0x6620($v1)
    ctx->pc = 0x5ddf28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5ddf2c:
    // 0x5ddf2c: 0xa65  .word       0x00000A65                   # move        $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ddf2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5ddf30:
    // 0x5ddf30: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5ddf30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5ddf34:
    // 0x5ddf34: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddf34u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DDF34 raw=0x7261506E");
label_5ddf38:
    // 0x5ddf38: 0x3a726573  xori        $s2, $s3, 0x6573
    ctx->pc = 0x5ddf38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25971);
label_5ddf3c:
    // 0x5ddf3c: 0x616f4c3a  daddi       $t7, $t3, 0x4C3A
    ctx->pc = 0x5ddf3cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)19514; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5ddf40:
    // 0x5ddf40: 0x73655264  .word       0x73655264                   # INVALID     $k1, $a1, 0x5264 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ddf40u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x5DDF40 raw=0x73655264");
label_5ddf44:
    // 0x5ddf44: 0x6372756f  daddi       $s2, $k1, 0x756F
    ctx->pc = 0x5ddf44u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30063; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5ddf48:
    // 0x5ddf48: 0x69467365  ldl         $a2, 0x7365($t2)
    ctx->pc = 0x5ddf48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_5ddf4c:
    // 0x5ddf4c: 0x3a20656c  xori        $zero, $s1, 0x656C
    ctx->pc = 0x5ddf4cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25964);
label_5ddf50:
    // 0x5ddf50: 0x756f6320  .word       0x756F6320                   # INVALID     $t3, $t7, 0x6320 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddf50u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDF50 raw=0x756F6320");
label_5ddf54:
    // 0x5ddf54: 0x6e20646c  ldr         $zero, 0x646C($s1)
    ctx->pc = 0x5ddf54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25708); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5ddf58:
    // 0x5ddf58: 0x6c20746f  ldr         $zero, 0x746F($at)
    ctx->pc = 0x5ddf58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5ddf5c:
    // 0x5ddf5c: 0x2064616f  addi        $a0, $v1, 0x616F
    ctx->pc = 0x5ddf5cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24943, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5ddf60:
    // 0x5ddf60: 0x54442061  bnel        $v0, $a0, . + 4 + (0x2061 << 2)
label_5ddf64:
    if (ctx->pc == 0x5DDF64u) {
        ctx->pc = 0x5DDF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DDF60u;
        // 0x5ddf64: 0x45435320  .word       0x45435320                   # INVALID     $t2, $v1, 0x5320 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x20 at 0x5DDF64 raw=0x45435320");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DDF68u;
        goto label_5ddf68;
    }
    ctx->pc = 0x5DDF60u;
    {
        const bool branch_taken_0x5ddf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x5ddf60) {
            ctx->pc = 0x5DDF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DDF60u;
            // 0x5ddf64: 0x45435320  .word       0x45435320                   # INVALID     $t2, $v1, 0x5320 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x20 at 0x5DDF64 raw=0x45435320");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E60E8u;
            return;
        }
    }
    ctx->pc = 0x5DDF68u;
label_5ddf68:
    // 0x5ddf68: 0x5220454e  beql        $s1, $zero, . + 4 + (0x454E << 2)
label_5ddf6c:
    if (ctx->pc == 0x5DDF6Cu) {
        ctx->pc = 0x5DDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DDF68u;
        // 0x5ddf6c: 0x554f5345  bnel        $t2, $t7, . + 4 + (0x5345 << 2) (Delay Slot)
        // Likely branch instruction at 0x5DDF6C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DDF70u;
        goto label_5ddf70;
    }
    ctx->pc = 0x5DDF68u;
    {
        const bool branch_taken_0x5ddf68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5ddf68) {
            ctx->pc = 0x5DDF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DDF68u;
            // 0x5ddf6c: 0x554f5345  bnel        $t2, $t7, . + 4 + (0x5345 << 2) (Delay Slot)
            // Likely branch instruction at 0x5DDF6C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5EF4A4u;
            return;
        }
    }
    ctx->pc = 0x5DDF70u;
label_5ddf70:
    // 0x5ddf70: 0x20454352  addi        $a1, $v0, 0x4352
    ctx->pc = 0x5ddf70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)17234, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5ddf74:
    // 0x5ddf74: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x5ddf74u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_5ddf78:
    // 0x5ddf78: 0x203e2d20  addi        $fp, $at, 0x2D20
    ctx->pc = 0x5ddf78u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11552, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_5ddf7c:
    // 0x5ddf7c: 0x64616568  daddiu      $at, $v1, 0x6568
    ctx->pc = 0x5ddf7cu;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25960);
label_5ddf80:
    // 0x5ddf80: 0x77207265  .word       0x77207265                   # INVALID     $t9, $zero, 0x7265 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddf80u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DDF80 raw=0x77207265");
label_5ddf84:
    // 0x5ddf84: 0x676e6f72  daddiu      $t6, $k1, 0x6F72
    ctx->pc = 0x5ddf84u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28530);
label_5ddf88:
    // 0x5ddf88: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5ddf88u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5ddf8c:
    // 0x5ddf8c: 0x0  nop
    ctx->pc = 0x5ddf8cu;
    // NOP
label_5ddf90:
    // 0x5ddf90: 0x534f505b  beql        $k0, $t7, . + 4 + (0x505B << 2)
label_5ddf94:
    if (ctx->pc == 0x5DDF94u) {
        ctx->pc = 0x5DDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DDF90u;
        // 0x5ddf94: 0x4f495449  .word       0x4F495449                   # INVALID     $k0, $t1, 0x5449 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDF94 raw=0x4F495449");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DDF98u;
        goto label_5ddf98;
    }
    ctx->pc = 0x5DDF90u;
    {
        const bool branch_taken_0x5ddf90 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 15));
        if (branch_taken_0x5ddf90) {
            ctx->pc = 0x5DDF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DDF90u;
            // 0x5ddf94: 0x4f495449  .word       0x4F495449                   # INVALID     $k0, $t1, 0x5449 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDF94 raw=0x4F495449");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F2100u;
            return;
        }
    }
    ctx->pc = 0x5DDF98u;
label_5ddf98:
    // 0x5ddf98: 0x5d534e  .word       0x005D534E                   # INVALID     $v0, $sp, 0x534E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ddf98u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x5DDF98 raw=0x005D534E");
label_5ddf9c:
    // 0x5ddf9c: 0x0  nop
    ctx->pc = 0x5ddf9cu;
    // NOP
label_5ddfa0:
    // 0x5ddfa0: 0x4d41435b  .word       0x4D41435B                   # INVALID     $t2, $at, 0x435B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddfa0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDFA0 raw=0x4D41435B");
label_5ddfa4:
    // 0x5ddfa4: 0x53415245  beql        $k0, $at, . + 4 + (0x5245 << 2)
label_5ddfa8:
    if (ctx->pc == 0x5DDFA8u) {
        ctx->pc = 0x5DDFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DDFA4u;
        // 0x5ddfa8: 0x5d  .word       0x0000005D                   # dmultu      $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x5DDFA8 raw=0x0000005D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DDFACu;
        goto label_5ddfac;
    }
    ctx->pc = 0x5DDFA4u;
    {
        const bool branch_taken_0x5ddfa4 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 1));
        if (branch_taken_0x5ddfa4) {
            ctx->pc = 0x5DDFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DDFA4u;
            // 0x5ddfa8: 0x5d  .word       0x0000005D                   # dmultu      $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x5DDFA8 raw=0x0000005D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F28BCu;
            return;
        }
    }
    ctx->pc = 0x5DDFACu;
label_5ddfac:
    // 0x5ddfac: 0x0  nop
    ctx->pc = 0x5ddfacu;
    // NOP
label_5ddfb0:
    // 0x5ddfb0: 0x73655270  .word       0x73655270                   # INVALID     $k1, $a1, 0x5270 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5ddfb0u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x5DDFB0 raw=0x73655270");
label_5ddfb4:
    // 0x5ddfb4: 0x20666544  addi        $a2, $v1, 0x6544
    ctx->pc = 0x5ddfb4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25924, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_5ddfb8:
    // 0x5ddfb8: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddfb8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDFB8 raw=0x4E203D21");
label_5ddfbc:
    // 0x5ddfbc: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ddfbcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5DDFBC raw=0x004C4C55");
label_5ddfc0:
    // 0x5ddfc0: 0x73655270  .word       0x73655270                   # INVALID     $k1, $a1, 0x5270 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5ddfc0u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x5DDFC0 raw=0x73655270");
label_5ddfc4:
    // 0x5ddfc4: 0x2d666544  sltiu       $a2, $t3, 0x6544
    ctx->pc = 0x5ddfc4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)25924) ? 1 : 0);
label_5ddfc8:
    // 0x5ddfc8: 0x3376703e  andi        $s6, $k1, 0x703E
    ctx->pc = 0x5ddfc8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 27) & (uint64_t)(uint16_t)28734);
label_5ddfcc:
    // 0x5ddfcc: 0x69736f50  ldl         $s3, 0x6F50($t3)
    ctx->pc = 0x5ddfccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_5ddfd0:
    // 0x5ddfd0: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5ddfd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5ddfd4:
    // 0x5ddfd4: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5ddfd4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5ddfd8:
    // 0x5ddfd8: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ddfd8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DDFD8 raw=0x4C4C554E");
label_5ddfdc:
    // 0x5ddfdc: 0x0  nop
    ctx->pc = 0x5ddfdcu;
    // NOP
label_5ddfe0:
    // 0x5ddfe0: 0x25207325  addiu       $zero, $t1, 0x7325
    ctx->pc = 0x5ddfe0u;
    // NOP (addiu $zero, ...)
label_5ddfe4:
    // 0x5ddfe4: 0x66252066  daddiu      $a1, $s1, 0x2066
    ctx->pc = 0x5ddfe4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)8294);
label_5ddfe8:
    // 0x5ddfe8: 0x20662520  addi        $a2, $v1, 0x2520
    ctx->pc = 0x5ddfe8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9504, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_5ddfec:
    // 0x5ddfec: 0x25206625  addiu       $zero, $t1, 0x6625
    ctx->pc = 0x5ddfecu;
    // NOP (addiu $zero, ...)
label_5ddff0:
    // 0x5ddff0: 0x66252066  daddiu      $a1, $s1, 0x2066
    ctx->pc = 0x5ddff0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)8294);
label_5ddff4:
    // 0x5ddff4: 0x20662520  addi        $a2, $v1, 0x2520
    ctx->pc = 0x5ddff4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9504, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_5ddff8:
    // 0x5ddff8: 0x6625  .word       0x00006625                   # move        $t4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ddff8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5ddffc:
    // 0x5ddffc: 0x0  nop
    ctx->pc = 0x5ddffcu;
    // NOP
label_5de000:
    // 0x5de000: 0x73655270  .word       0x73655270                   # INVALID     $k1, $a1, 0x5270 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5de000u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x5DE000 raw=0x73655270");
label_5de004:
    // 0x5de004: 0x2d666544  sltiu       $a2, $t3, 0x6544
    ctx->pc = 0x5de004u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)25924) ? 1 : 0);
label_5de008:
    // 0x5de008: 0x6143703e  daddi       $v1, $t2, 0x703E
    ctx->pc = 0x5de008u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)28734; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_5de00c:
    // 0x5de00c: 0x7261506d  .word       0x7261506D                   # INVALID     $s3, $at, 0x506D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de00cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x5DE00C raw=0x7261506D");
label_5de010:
    // 0x5de010: 0x20736d61  addi        $s3, $v1, 0x6D61
    ctx->pc = 0x5de010u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28001, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5de014:
    // 0x5de014: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de014u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE014 raw=0x4E203D21");
label_5de018:
    // 0x5de018: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de018u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5DE018 raw=0x004C4C55");
label_5de01c:
    // 0x5de01c: 0x0  nop
    ctx->pc = 0x5de01cu;
    // NOP
label_5de020:
    // 0x5de020: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5de020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5de024:
    // 0x5de024: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de024u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE024 raw=0x7261506E");
label_5de028:
    // 0x5de028: 0x3a726573  xori        $s2, $s3, 0x6573
    ctx->pc = 0x5de028u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25971);
label_5de02c:
    // 0x5de02c: 0x616f4c3a  daddi       $t7, $t3, 0x4C3A
    ctx->pc = 0x5de02cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)19514; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5de030:
    // 0x5de030: 0x73655264  .word       0x73655264                   # INVALID     $k1, $a1, 0x5264 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de030u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x5DE030 raw=0x73655264");
label_5de034:
    // 0x5de034: 0x6372756f  daddi       $s2, $k1, 0x756F
    ctx->pc = 0x5de034u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30063; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5de038:
    // 0x5de038: 0x2d207365  sltiu       $zero, $t1, 0x7365
    ctx->pc = 0x5de038u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)29541) ? 1 : 0);
label_5de03c:
    // 0x5de03c: 0x55203e2d  bnel        $t1, $zero, . + 4 + (0x3E2D << 2)
label_5de040:
    if (ctx->pc == 0x5DE040u) {
        ctx->pc = 0x5DE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE03Cu;
        // 0x5de040: 0x7075736e  .word       0x7075736E                   # INVALID     $v1, $s5, 0x736E # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE040 raw=0x7075736E");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE044u;
        goto label_5de044;
    }
    ctx->pc = 0x5DE03Cu;
    {
        const bool branch_taken_0x5de03c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x5de03c) {
            ctx->pc = 0x5DE040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE03Cu;
            // 0x5de040: 0x7075736e  .word       0x7075736E                   # INVALID     $v1, $s5, 0x736E # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE040 raw=0x7075736E");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5ED8F4u;
            return;
        }
    }
    ctx->pc = 0x5DE044u;
label_5de044:
    // 0x5de044: 0x74726f70  .word       0x74726F70                   # INVALID     $v1, $s2, 0x6F70 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de044u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE044 raw=0x74726F70");
label_5de048:
    // 0x5de048: 0x72206465  .word       0x72206465                   # INVALID     $s1, $zero, 0x6465 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de048u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DE048 raw=0x72206465");
label_5de04c:
    // 0x5de04c: 0x756f7365  .word       0x756F7365                   # INVALID     $t3, $t7, 0x7365 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de04cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE04C raw=0x756F7365");
label_5de050:
    // 0x5de050: 0x20656372  addi        $a1, $v1, 0x6372
    ctx->pc = 0x5de050u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25458, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5de054:
    // 0x5de054: 0x65707974  daddiu      $s0, $t3, 0x7974
    ctx->pc = 0x5de054u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)31092);
label_5de058:
    // 0x5de058: 0x0  nop
    ctx->pc = 0x5de058u;
    // NOP
label_5de05c:
    // 0x5de05c: 0x0  nop
    ctx->pc = 0x5de05cu;
    // NOP
label_5de060:
    // 0x5de060: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5de060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5de064:
    // 0x5de064: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de064u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE064 raw=0x7261506E");
label_5de068:
    // 0x5de068: 0x3a726573  xori        $s2, $s3, 0x6573
    ctx->pc = 0x5de068u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25971);
label_5de06c:
    // 0x5de06c: 0x616f4c3a  daddi       $t7, $t3, 0x4C3A
    ctx->pc = 0x5de06cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)19514; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5de070:
    // 0x5de070: 0x2d2d2064  sltiu       $t5, $t1, 0x2064
    ctx->pc = 0x5de070u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8292) ? 1 : 0);
label_5de074:
    // 0x5de074: 0x6e49203e  ldr         $t1, 0x203E($s2)
    ctx->pc = 0x5de074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8254); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5de078:
    // 0x5de078: 0x696c6176  ldl         $t4, 0x6176($t3)
    ctx->pc = 0x5de078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_5de07c:
    // 0x5de07c: 0x69662064  ldl         $a2, 0x2064($t3)
    ctx->pc = 0x5de07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_5de080:
    // 0x5de080: 0x6e20656c  ldr         $zero, 0x656C($s1)
    ctx->pc = 0x5de080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5de084:
    // 0x5de084: 0x656d61  .word       0x00656D61                   # addu        $t5, $v1, $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de084u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_5de088:
    // 0x5de088: 0x0  nop
    ctx->pc = 0x5de088u;
    // NOP
label_5de08c:
    // 0x5de08c: 0x0  nop
    ctx->pc = 0x5de08cu;
    // NOP
label_5de090:
    // 0x5de090: 0x6943705f  ldl         $v1, 0x705F($t2)
    ctx->pc = 0x5de090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 28767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5de094:
    // 0x5de094: 0x624f656e  daddi       $t7, $s2, 0x656E
    ctx->pc = 0x5de094u;
    { int64_t src = (int64_t)GPR_S64(ctx, 18); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5de098:
    // 0x5de098: 0x3d21206a  .word       0x3D21206A                   # lui         $at, 0x206A # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8298 << 16));
label_5de09c:
    // 0x5de09c: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de09cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE09C raw=0x4C554E20");
label_5de0a0:
    // 0x5de0a0: 0x4c  syscall     1
    ctx->pc = 0x5de0a0u;
    ctx->pc = 0x5DE0A4u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5de0a4:
    // 0x5de0a4: 0x0  nop
    ctx->pc = 0x5de0a4u;
    // NOP
label_5de0a8:
    // 0x5de0a8: 0x0  nop
    ctx->pc = 0x5de0a8u;
    // NOP
label_5de0ac:
    // 0x5de0ac: 0x0  nop
    ctx->pc = 0x5de0acu;
    // NOP
label_5de0b0:
    // 0x5de0b0: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5de0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5de0b4:
    // 0x5de0b4: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de0b4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE0B4 raw=0x7261506E");
label_5de0b8:
    // 0x5de0b8: 0x3a726573  xori        $s2, $s3, 0x6573
    ctx->pc = 0x5de0b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25971);
label_5de0bc:
    // 0x5de0bc: 0x616f4c3a  daddi       $t7, $t3, 0x4C3A
    ctx->pc = 0x5de0bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)19514; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5de0c0:
    // 0x5de0c0: 0x72635364  .word       0x72635364                   # INVALID     $s3, $v1, 0x5364 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de0c0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x5DE0C0 raw=0x72635364");
label_5de0c4:
    // 0x5de0c4: 0x20747069  addi        $s4, $v1, 0x7069
    ctx->pc = 0x5de0c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28777, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5de0c8:
    // 0x5de0c8: 0x6f63203a  ldr         $v1, 0x203A($k1)
    ctx->pc = 0x5de0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_5de0cc:
    // 0x5de0cc: 0x20646c75  addi        $a0, $v1, 0x6C75
    ctx->pc = 0x5de0ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27765, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5de0d0:
    // 0x5de0d0: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x5de0d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5de0d4:
    // 0x5de0d4: 0x6e65706f  ldr         $a1, 0x706F($s3)
    ctx->pc = 0x5de0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_5de0d8:
    // 0x5de0d8: 0x52435320  beql        $s2, $v1, . + 4 + (0x5320 << 2)
label_5de0dc:
    if (ctx->pc == 0x5DE0DCu) {
        ctx->pc = 0x5DE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE0D8u;
        // 0x5de0dc: 0x20545049  addi        $s4, $v0, 0x5049 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)20553, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE0E0u;
        goto label_5de0e0;
    }
    ctx->pc = 0x5DE0D8u;
    {
        const bool branch_taken_0x5de0d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x5de0d8) {
            ctx->pc = 0x5DE0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE0D8u;
            // 0x5de0dc: 0x20545049  addi        $s4, $v0, 0x5049 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)20553, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F2D5Cu;
            return;
        }
    }
    ctx->pc = 0x5DE0E0u;
label_5de0e0:
    // 0x5de0e0: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x5de0e0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_5de0e4:
    // 0x5de0e4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5de0e4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5de0e8:
    // 0x5de0e8: 0x49435444  .word       0x49435444                   # INVALID     $t2, $v1, 0x5444 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5de0e8u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5DE0E8 raw=0x49435444");
label_5de0ec:
    // 0x5de0ec: 0x4353454e  .word       0x4353454E                   # INVALID     $k0, $s3, 0x454E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5de0ecu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5DE0EC raw=0x4353454E");
label_5de0f0:
    // 0x5de0f0: 0x54504952  bnel        $v0, $s0, . + 4 + (0x4952 << 2)
label_5de0f4:
    if (ctx->pc == 0x5DE0F4u) {
        ctx->pc = 0x5DE0F8u;
        goto label_5de0f8;
    }
    ctx->pc = 0x5DE0F0u;
    {
        const bool branch_taken_0x5de0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x5de0f0) {
            ctx->pc = 0x5F063Cu;
            return;
        }
    }
    ctx->pc = 0x5DE0F8u;
label_5de0f8:
    // 0x5de0f8: 0x0  nop
    ctx->pc = 0x5de0f8u;
    // NOP
label_5de0fc:
    // 0x5de0fc: 0x0  nop
    ctx->pc = 0x5de0fcu;
    // NOP
label_5de100:
    // 0x5de100: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5de100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5de104:
    // 0x5de104: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de104u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE104 raw=0x7261506E");
label_5de108:
    // 0x5de108: 0x3a726573  xori        $s2, $s3, 0x6573
    ctx->pc = 0x5de108u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25971);
label_5de10c:
    // 0x5de10c: 0x616f4c3a  daddi       $t7, $t3, 0x4C3A
    ctx->pc = 0x5de10cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)19514; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5de110:
    // 0x5de110: 0x203a2064  addi        $k0, $at, 0x2064
    ctx->pc = 0x5de110u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5de114:
    // 0x5de114: 0x6c756f63  ldr         $s5, 0x6F63($v1)
    ctx->pc = 0x5de114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5de118:
    // 0x5de118: 0x6f6e2064  ldr         $t6, 0x2064($k1)
    ctx->pc = 0x5de118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_5de11c:
    // 0x5de11c: 0x6f6c2074  ldr         $t4, 0x2074($k1)
    ctx->pc = 0x5de11cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_5de120:
    // 0x5de120: 0x61206461  daddi       $zero, $t1, 0x6461
    ctx->pc = 0x5de120u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25697; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5de124:
    // 0x5de124: 0x43544420  .word       0x43544420                   # INVALID     $k0, $s4, 0x4420 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5de124u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5DE124 raw=0x43544420");
label_5de128:
    // 0x5de128: 0x20454e49  addi        $a1, $v0, 0x4E49
    ctx->pc = 0x5de128u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)20041, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5de12c:
    // 0x5de12c: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x5de12cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_5de130:
    // 0x5de130: 0x203e2d20  addi        $fp, $at, 0x2D20
    ctx->pc = 0x5de130u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11552, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_5de134:
    // 0x5de134: 0x64616568  daddiu      $at, $v1, 0x6568
    ctx->pc = 0x5de134u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25960);
label_5de138:
    // 0x5de138: 0x77207265  .word       0x77207265                   # INVALID     $t9, $zero, 0x7265 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de138u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE138 raw=0x77207265");
label_5de13c:
    // 0x5de13c: 0x676e6f72  daddiu      $t6, $k1, 0x6F72
    ctx->pc = 0x5de13cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28530);
label_5de140:
    // 0x5de140: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5de140u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5de144:
    // 0x5de144: 0x0  nop
    ctx->pc = 0x5de144u;
    // NOP
label_5de148:
    // 0x5de148: 0x0  nop
    ctx->pc = 0x5de148u;
    // NOP
label_5de14c:
    // 0x5de14c: 0x0  nop
    ctx->pc = 0x5de14cu;
    // NOP
label_5de150:
    // 0x5de150: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5de150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5de154:
    // 0x5de154: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de154u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE154 raw=0x7261506E");
label_5de158:
    // 0x5de158: 0x3a726573  xori        $s2, $s3, 0x6573
    ctx->pc = 0x5de158u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25971);
label_5de15c:
    // 0x5de15c: 0x616f4c3a  daddi       $t7, $t3, 0x4C3A
    ctx->pc = 0x5de15cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)19514; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5de160:
    // 0x5de160: 0x203a2064  addi        $k0, $at, 0x2064
    ctx->pc = 0x5de160u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5de164:
    // 0x5de164: 0x69726373  ldl         $s2, 0x6373($t3)
    ctx->pc = 0x5de164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25459); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_5de168:
    // 0x5de168: 0x69207470  ldl         $zero, 0x7470($t1)
    ctx->pc = 0x5de168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_5de16c:
    // 0x5de16c: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x5de16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5de170:
    // 0x5de170: 0x2d206469  sltiu       $zero, $t1, 0x6469
    ctx->pc = 0x5de170u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25705) ? 1 : 0);
label_5de174:
    // 0x5de174: 0x61203e2d  daddi       $zero, $t1, 0x3E2D
    ctx->pc = 0x5de174u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)15917; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5de178:
    // 0x5de178: 0x6e69206e  ldr         $t1, 0x206E($s3)
    ctx->pc = 0x5de178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5de17c:
    // 0x5de17c: 0x75727473  .word       0x75727473                   # INVALID     $t3, $s2, 0x7473 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de17cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE17C raw=0x75727473");
label_5de180:
    // 0x5de180: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x5de180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5de184:
    // 0x5de184: 0x636f206e  daddi       $t7, $k1, 0x206E
    ctx->pc = 0x5de184u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8302; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5de188:
    // 0x5de188: 0x72727563  .word       0x72727563                   # INVALID     $s3, $s2, 0x7563 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de188u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x5DE188 raw=0x72727563");
label_5de18c:
    // 0x5de18c: 0x6f206465  ldr         $zero, 0x6465($t9)
    ctx->pc = 0x5de18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 25701); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5de190:
    // 0x5de190: 0x69737475  ldl         $s3, 0x7475($t3)
    ctx->pc = 0x5de190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29813); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_5de194:
    // 0x5de194: 0x6f206564  ldr         $zero, 0x6564($t9)
    ctx->pc = 0x5de194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 25956); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5de198:
    // 0x5de198: 0x20612066  addi        $at, $v1, 0x2066
    ctx->pc = 0x5de198u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)8294, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_5de19c:
    // 0x5de19c: 0x75716573  .word       0x75716573                   # INVALID     $t3, $s1, 0x6573 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de19cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE19C raw=0x75716573");
label_5de1a0:
    // 0x5de1a0: 0x65636e65  daddiu      $v1, $t3, 0x6E65
    ctx->pc = 0x5de1a0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28261);
label_5de1a4:
    // 0x5de1a4: 0x6f6c6220  ldr         $t4, 0x6220($k1)
    ctx->pc = 0x5de1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_5de1a8:
    // 0x5de1a8: 0xa6b63  .word       0x000A6B63                   # negu        $t5, $t2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de1a8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
label_5de1ac:
    // 0x5de1ac: 0x0  nop
    ctx->pc = 0x5de1acu;
    // NOP
label_5de1b0:
    // 0x5de1b0: 0x5145535b  beql        $t2, $a1, . + 4 + (0x535B << 2)
label_5de1b4:
    if (ctx->pc == 0x5DE1B4u) {
        ctx->pc = 0x5DE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE1B0u;
        // 0x5de1b4: 0x434e4555  .word       0x434E4555                   # INVALID     $k0, $t6, 0x4555 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5DE1B4 raw=0x434E4555");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE1B8u;
        goto label_5de1b8;
    }
    ctx->pc = 0x5DE1B0u;
    {
        const bool branch_taken_0x5de1b0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 5));
        if (branch_taken_0x5de1b0) {
            ctx->pc = 0x5DE1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE1B0u;
            // 0x5de1b4: 0x434e4555  .word       0x434E4555                   # INVALID     $k0, $t6, 0x4555 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5DE1B4 raw=0x434E4555");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F2F20u;
            return;
        }
    }
    ctx->pc = 0x5DE1B8u;
label_5de1b8:
    // 0x5de1b8: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de1b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DE1B8 raw=0x00000045");
label_5de1bc:
    // 0x5de1bc: 0x0  nop
    ctx->pc = 0x5de1bcu;
    // NOP
label_5de1c0:
    // 0x5de1c0: 0x63417a73  daddi       $at, $k0, 0x7A73
    ctx->pc = 0x5de1c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)31347; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_5de1c4:
    // 0x5de1c4: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5de1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5de1c8:
    // 0x5de1c8: 0x656d614e  daddiu      $t5, $t3, 0x614E
    ctx->pc = 0x5de1c8u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24910);
label_5de1cc:
    // 0x5de1cc: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5de1ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5de1d0:
    // 0x5de1d0: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de1d0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE1D0 raw=0x4C4C554E");
label_5de1d4:
    // 0x5de1d4: 0x0  nop
    ctx->pc = 0x5de1d4u;
    // NOP
label_5de1d8:
    // 0x5de1d8: 0x0  nop
    ctx->pc = 0x5de1d8u;
    // NOP
label_5de1dc:
    // 0x5de1dc: 0x0  nop
    ctx->pc = 0x5de1dcu;
    // NOP
label_5de1e0:
    // 0x5de1e0: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5de1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5de1e4:
    // 0x5de1e4: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de1e4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE1E4 raw=0x7261506E");
label_5de1e8:
    // 0x5de1e8: 0x3a726573  xori        $s2, $s3, 0x6573
    ctx->pc = 0x5de1e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25971);
label_5de1ec:
    // 0x5de1ec: 0x7465473a  .word       0x7465473A                   # INVALID     $v1, $a1, 0x473A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de1ecu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE1EC raw=0x7465473A");
label_5de1f0:
    // 0x5de1f0: 0x69746341  ldl         $s4, 0x6341($t3)
    ctx->pc = 0x5de1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25409); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5de1f4:
    // 0x5de1f4: 0x72466e6f  .word       0x72466E6F                   # INVALID     $s2, $a2, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de1f4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DE1F4 raw=0x72466E6F");
label_5de1f8:
    // 0x5de1f8: 0x74536d6f  .word       0x74536D6F                   # INVALID     $v0, $s3, 0x6D6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de1f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE1F8 raw=0x74536D6F");
label_5de1fc:
    // 0x5de1fc: 0x676e6972  daddiu      $t6, $k1, 0x6972
    ctx->pc = 0x5de1fcu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26994);
label_5de200:
    // 0x5de200: 0x66203a20  daddiu      $zero, $s1, 0x3A20
    ctx->pc = 0x5de200u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)14880);
label_5de204:
    // 0x5de204: 0x646e756f  daddiu      $t6, $v1, 0x756F
    ctx->pc = 0x5de204u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30063);
label_5de208:
    // 0x5de208: 0x64206120  daddiu      $zero, $at, 0x6120
    ctx->pc = 0x5de208u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)24864);
label_5de20c:
    // 0x5de20c: 0x6e696374  ldr         $t1, 0x6374($s3)
    ctx->pc = 0x5de20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25460); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5de210:
    // 0x5de210: 0x69746341  ldl         $s4, 0x6341($t3)
    ctx->pc = 0x5de210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25409); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5de214:
    // 0x5de214: 0x74206e6f  .word       0x74206E6F                   # INVALID     $at, $zero, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de214u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE214 raw=0x74206E6F");
label_5de218:
    // 0x5de218: 0x20657079  addi        $a1, $v1, 0x7079
    ctx->pc = 0x5de218u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5de21c:
    // 0x5de21c: 0x68746977  ldl         $s4, 0x6977($v1)
    ctx->pc = 0x5de21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26999); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5de220:
    // 0x5de220: 0x206f6e20  addi        $t7, $v1, 0x6E20
    ctx->pc = 0x5de220u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28192, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_5de224:
    // 0x5de224: 0x69637361  ldl         $v1, 0x7361($t3)
    ctx->pc = 0x5de224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29537); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5de228:
    // 0x5de228: 0x6f632069  ldr         $v1, 0x2069($k1)
    ctx->pc = 0x5de228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8297); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_5de22c:
    // 0x5de22c: 0x65746e75  daddiu      $s4, $t3, 0x6E75
    ctx->pc = 0x5de22cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28277);
label_5de230:
    // 0x5de230: 0x72617072  .word       0x72617072                   # INVALID     $s3, $at, 0x7072 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de230u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5DE230 raw=0x72617072");
label_5de234:
    // 0x5de234: 0x3f212074  .word       0x3F212074                   # lui         $at, 0x2074 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8308 << 16));
label_5de238:
    // 0x5de238: 0x0  nop
    ctx->pc = 0x5de238u;
    // NOP
label_5de23c:
    // 0x5de23c: 0x0  nop
    ctx->pc = 0x5de23cu;
    // NOP
label_5de240:
    // 0x5de240: 0x74634170  .word       0x74634170                   # INVALID     $v1, $v1, 0x4170 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de240u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE240 raw=0x74634170");
label_5de244:
    // 0x5de244: 0x206e6f69  addi        $t6, $v1, 0x6F69
    ctx->pc = 0x5de244u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28521, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_5de248:
    // 0x5de248: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de248u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE248 raw=0x4E203D21");
label_5de24c:
    // 0x5de24c: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de24cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5DE24C raw=0x004C4C55");
label_5de250:
    // 0x5de250: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5de250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5de254:
    // 0x5de254: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de254u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE254 raw=0x7261506E");
label_5de258:
    // 0x5de258: 0x3a726573  xori        $s2, $s3, 0x6573
    ctx->pc = 0x5de258u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25971);
label_5de25c:
    // 0x5de25c: 0x7465473a  .word       0x7465473A                   # INVALID     $v1, $a1, 0x473A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de25cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE25C raw=0x7465473A");
label_5de260:
    // 0x5de260: 0x69746341  ldl         $s4, 0x6341($t3)
    ctx->pc = 0x5de260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25409); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5de264:
    // 0x5de264: 0x72466e6f  .word       0x72466E6F                   # INVALID     $s2, $a2, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de264u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DE264 raw=0x72466E6F");
label_5de268:
    // 0x5de268: 0x74536d6f  .word       0x74536D6F                   # INVALID     $v0, $s3, 0x6D6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de268u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE268 raw=0x74536D6F");
label_5de26c:
    // 0x5de26c: 0x676e6972  daddiu      $t6, $k1, 0x6972
    ctx->pc = 0x5de26cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26994);
label_5de270:
    // 0x5de270: 0x63203a20  daddi       $zero, $t9, 0x3A20
    ctx->pc = 0x5de270u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)14880; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5de274:
    // 0x5de274: 0x72656d61  .word       0x72656D61                   # maddu1      $t5, $s3, $a1 # 00000540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de274u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5de278:
    // 0x5de278: 0x6f6e2061  ldr         $t6, 0x2061($k1)
    ctx->pc = 0x5de278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8289); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_5de27c:
    // 0x5de27c: 0x6f662074  ldr         $a2, 0x2074($k1)
    ctx->pc = 0x5de27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_5de280:
    // 0x5de280: 0x20646e75  addi        $a0, $v1, 0x6E75
    ctx->pc = 0x5de280u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28277, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5de284:
    // 0x5de284: 0x72206e69  .word       0x72206E69                   # INVALID     $s1, $zero, 0x6E69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x5de284u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x19 at 0x5DE284 raw=0x72206E69");
label_5de288:
    // 0x5de288: 0x756f7365  .word       0x756F7365                   # INVALID     $t3, $t7, 0x7365 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de288u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE288 raw=0x756F7365");
label_5de28c:
    // 0x5de28c: 0x20656372  addi        $a1, $v1, 0x6372
    ctx->pc = 0x5de28cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25458, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5de290:
    // 0x5de290: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x5de290u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_5de294:
    // 0x5de294: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5de294u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5de298:
    // 0x5de298: 0x43435553  .word       0x43435553                   # INVALID     $k0, $v1, 0x5553 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5de298u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5DE298 raw=0x43435553");
label_5de29c:
    // 0x5de29c: 0x3d535345  .word       0x3D535345                   # lui         $s3, 0x5345 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de29cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21317 << 16));
label_5de2a0:
    // 0x5de2a0: 0x0  nop
    ctx->pc = 0x5de2a0u;
    // NOP
label_5de2a4:
    // 0x5de2a4: 0x0  nop
    ctx->pc = 0x5de2a4u;
    // NOP
label_5de2a8:
    // 0x5de2a8: 0x4f70705f  .word       0x4F70705F                   # INVALID     $k1, $s0, 0x705F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de2a8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE2A8 raw=0x4F70705F");
label_5de2ac:
    // 0x5de2ac: 0x21207475  addi        $zero, $t1, 0x7475
    ctx->pc = 0x5de2acu;
    // NOP (addi to $zero)
label_5de2b0:
    // 0x5de2b0: 0x554e203d  bnel        $t2, $t6, . + 4 + (0x203D << 2)
label_5de2b4:
    if (ctx->pc == 0x5DE2B4u) {
        ctx->pc = 0x5DE2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE2B0u;
        // 0x5de2b4: 0x4c4c  syscall     305 (Delay Slot)
        ctx->pc = 0x5DE2B8u;
        runtime->handleSyscall(rdram, ctx, 0x131u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE2B8u;
        goto label_5de2b8;
    }
    ctx->pc = 0x5DE2B0u;
    {
        const bool branch_taken_0x5de2b0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5de2b0) {
            ctx->pc = 0x5DE2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE2B0u;
            // 0x5de2b4: 0x4c4c  syscall     305 (Delay Slot)
            ctx->pc = 0x5DE2B8u;
            runtime->handleSyscall(rdram, ctx, 0x131u);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E63A8u;
            return;
        }
    }
    ctx->pc = 0x5DE2B8u;
label_5de2b8:
    // 0x5de2b8: 0x0  nop
    ctx->pc = 0x5de2b8u;
    // NOP
label_5de2bc:
    // 0x5de2bc: 0x0  nop
    ctx->pc = 0x5de2bcu;
    // NOP
label_5de2c0:
    // 0x5de2c0: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5de2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5de2c4:
    // 0x5de2c4: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de2c4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE2C4 raw=0x7261506E");
label_5de2c8:
    // 0x5de2c8: 0x3a726573  xori        $s2, $s3, 0x6573
    ctx->pc = 0x5de2c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25971);
label_5de2cc:
    // 0x5de2cc: 0x7465473a  .word       0x7465473A                   # INVALID     $v1, $a1, 0x473A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de2ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE2CC raw=0x7465473A");
label_5de2d0:
    // 0x5de2d0: 0x656d6143  daddiu      $t5, $t3, 0x6143
    ctx->pc = 0x5de2d0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24899);
label_5de2d4:
    // 0x5de2d4: 0x61506172  daddi       $s0, $t2, 0x6172
    ctx->pc = 0x5de2d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)24946; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_5de2d8:
    // 0x5de2d8: 0x736d6172  .word       0x736D6172                   # INVALID     $k1, $t5, 0x6172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de2d8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5DE2D8 raw=0x736D6172");
label_5de2dc:
    // 0x5de2dc: 0x614e7942  daddi       $t6, $t2, 0x7942
    ctx->pc = 0x5de2dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)31042; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5de2e0:
    // 0x5de2e0: 0x3a20656d  xori        $zero, $s1, 0x656D
    ctx->pc = 0x5de2e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25965);
label_5de2e4:
    // 0x5de2e4: 0x746f6720  .word       0x746F6720                   # INVALID     $v1, $t7, 0x6720 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de2e4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE2E4 raw=0x746F6720");
label_5de2e8:
    // 0x5de2e8: 0x206e6120  addi        $t6, $v1, 0x6120
    ctx->pc = 0x5de2e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24864, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_5de2ec:
    // 0x5de2ec: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5de2ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_5de2f0:
    // 0x5de2f0: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5de2f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5de2f4:
    // 0x5de2f4: 0x4c554e28  .word       0x4C554E28                   # INVALID     $v0, $s5, 0x4E28 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de2f4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE2F4 raw=0x4C554E28");
label_5de2f8:
    // 0x5de2f8: 0x7020294c  .word       0x7020294C                   # INVALID     $at, $zero, 0x294C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de2f8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xC at 0x5DE2F8 raw=0x7020294C");
label_5de2fc:
    // 0x5de2fc: 0x6d617261  ldr         $at, 0x7261($t3)
    ctx->pc = 0x5de2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5de300:
    // 0x5de300: 0x696f7020  ldl         $t7, 0x7020($t3)
    ctx->pc = 0x5de300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_5de304:
    // 0x5de304: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de304u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE304 raw=0x7265746E");
label_5de308:
    // 0x5de308: 0x0  nop
    ctx->pc = 0x5de308u;
    // NOP
label_5de30c:
    // 0x5de30c: 0x0  nop
    ctx->pc = 0x5de30cu;
    // NOP
label_5de310:
    // 0x5de310: 0x53637464  beql        $k1, $v1, . + 4 + (0x7464 << 2)
label_5de314:
    if (ctx->pc == 0x5DE314u) {
        ctx->pc = 0x5DE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE310u;
        // 0x5de314: 0x6e697274  ldr         $t1, 0x7274($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE318u;
        goto label_5de318;
    }
    ctx->pc = 0x5DE310u;
    {
        const bool branch_taken_0x5de310 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 3));
        if (branch_taken_0x5de310) {
            ctx->pc = 0x5DE314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE310u;
            // 0x5de314: 0x6e697274  ldr         $t1, 0x7274($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FB4A4u;
            return;
        }
    }
    ctx->pc = 0x5DE318u;
label_5de318:
    // 0x5de318: 0x616c4367  daddi       $t4, $t3, 0x4367
    ctx->pc = 0x5de318u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17255; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_5de31c:
    // 0x5de31c: 0x682e7373  ldl         $t6, 0x7373($at)
    ctx->pc = 0x5de31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29555); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_5de320:
    // 0x5de320: 0x0  nop
    ctx->pc = 0x5de320u;
    // NOP
label_5de324:
    // 0x5de324: 0x0  nop
    ctx->pc = 0x5de324u;
    // NOP
label_5de328:
    // 0x5de328: 0x0  nop
    ctx->pc = 0x5de328u;
    // NOP
label_5de32c:
    // 0x5de32c: 0x0  nop
    ctx->pc = 0x5de32cu;
    // NOP
label_5de330:
    // 0x5de330: 0x72656877  .word       0x72656877                   # psrah       $t5, $a1, 1 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de330u;
    SET_GPR_VEC(ctx, 13, _mm_srai_epi16(GPR_VEC(ctx, 5), 1));
label_5de334:
    // 0x5de334: 0x203e2065  addi        $fp, $at, 0x2065
    ctx->pc = 0x5de334u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_5de338:
    // 0x5de338: 0x26262030  addiu       $a2, $s1, 0x2030
    ctx->pc = 0x5de338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8240));
label_5de33c:
    // 0x5de33c: 0x63727320  daddi       $s2, $k1, 0x7320
    ctx->pc = 0x5de33cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29472; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5de340:
    // 0x5de340: 0x6568775b  daddiu      $t0, $t3, 0x775B
    ctx->pc = 0x5de340u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30555);
label_5de344:
    // 0x5de344: 0x312d6572  andi        $t5, $t1, 0x6572
    ctx->pc = 0x5de344u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)25970);
label_5de348:
    // 0x5de348: 0x3d3d205d  .word       0x3D3D205D                   # lui         $sp, 0x205D # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de348u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)8285 << 16));
label_5de34c:
    // 0x5de34c: 0x4f555120  .word       0x4F555120                   # INVALID     $k0, $s5, 0x5120 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de34cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE34C raw=0x4F555120");
label_5de350:
    // 0x5de350: 0x534554  .word       0x00534554                   # dsllv       $t0, $s3, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de350u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << (GPR_U32(ctx, 2) & 0x3F));
label_5de354:
    // 0x5de354: 0x0  nop
    ctx->pc = 0x5de354u;
    // NOP
label_5de358:
    // 0x5de358: 0x0  nop
    ctx->pc = 0x5de358u;
    // NOP
label_5de35c:
    // 0x5de35c: 0x0  nop
    ctx->pc = 0x5de35cu;
    // NOP
label_5de360:
    // 0x5de360: 0x65746e49  daddiu      $s4, $t3, 0x6E49
    ctx->pc = 0x5de360u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28233);
label_5de364:
    // 0x5de364: 0x6c616e72  ldr         $at, 0x6E72($v1)
    ctx->pc = 0x5de364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28274); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5de368:
    // 0x5de368: 0x72724520  .word       0x72724520                   # madd1       $t0, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de368u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_5de36c:
    // 0x5de36c: 0x6920726f  ldl         $zero, 0x726F($t1)
    ctx->pc = 0x5de36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_5de370:
    // 0x5de370: 0x6552206e  daddiu      $s2, $t2, 0x206E
    ctx->pc = 0x5de370u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8302);
label_5de374:
    // 0x5de374: 0x654e6461  daddiu      $t6, $t2, 0x6461
    ctx->pc = 0x5de374u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25697);
label_5de378:
    // 0x5de378: 0x75517478  .word       0x75517478                   # INVALID     $t2, $s1, 0x7478 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de378u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE378 raw=0x75517478");
label_5de37c:
    // 0x5de37c: 0x6465746f  daddiu      $a1, $v1, 0x746F
    ctx->pc = 0x5de37cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29807);
label_5de380:
    // 0x5de380: 0x64726f57  daddiu      $s2, $v1, 0x6F57
    ctx->pc = 0x5de380u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28503);
label_5de384:
    // 0x5de384: 0x2928  .word       0x00002928                   # mfsa        $a1 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5de384u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_5de388:
    // 0x5de388: 0x0  nop
    ctx->pc = 0x5de388u;
    // NOP
label_5de38c:
    // 0x5de38c: 0x0  nop
    ctx->pc = 0x5de38cu;
    // NOP
label_5de390:
    // 0x5de390: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5de390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5de394:
    // 0x5de394: 0x7165536e  .word       0x7165536E                   # INVALID     $t3, $a1, 0x536E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de394u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE394 raw=0x7165536E");
label_5de398:
    // 0x5de398: 0x636e6575  daddi       $t6, $k1, 0x6575
    ctx->pc = 0x5de398u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25973; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5de39c:
    // 0x5de39c: 0x70632e65  .word       0x70632E65                   # INVALID     $v1, $v1, 0x2E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de39cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DE39C raw=0x70632E65");
label_5de3a0:
    // 0x5de3a0: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x5de3a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5de3a4:
    // 0x5de3a4: 0x0  nop
    ctx->pc = 0x5de3a4u;
    // NOP
label_5de3a8:
    // 0x5de3a8: 0x0  nop
    ctx->pc = 0x5de3a8u;
    // NOP
label_5de3ac:
    // 0x5de3ac: 0x0  nop
    ctx->pc = 0x5de3acu;
    // NOP
label_5de3b0:
    // 0x5de3b0: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5de3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5de3b4:
    // 0x5de3b4: 0x7165536e  .word       0x7165536E                   # INVALID     $t3, $a1, 0x536E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de3b4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE3B4 raw=0x7165536E");
label_5de3b8:
    // 0x5de3b8: 0x636e6575  daddi       $t6, $k1, 0x6575
    ctx->pc = 0x5de3b8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25973; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5de3bc:
    // 0x5de3bc: 0x473a3a65  .word       0x473A3A65                   # INVALID     $t9, $k0, 0x3A65 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5de3bcu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x25 at 0x5DE3BC raw=0x473A3A65");
label_5de3c0:
    // 0x5de3c0: 0x63417465  daddi       $at, $k0, 0x7465
    ctx->pc = 0x5de3c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29797; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_5de3c4:
    // 0x5de3c4: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5de3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5de3c8:
    // 0x5de3c8: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de3c8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
label_5de3cc:
    // 0x5de3cc: 0x766e4920  .word       0x766E4920                   # INVALID     $s3, $t6, 0x4920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de3ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE3CC raw=0x766E4920");
label_5de3d0:
    // 0x5de3d0: 0x64696c61  daddiu      $t1, $v1, 0x6C61
    ctx->pc = 0x5de3d0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27745);
label_5de3d4:
    // 0x5de3d4: 0x646e6920  daddiu      $t6, $v1, 0x6920
    ctx->pc = 0x5de3d4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26912);
label_5de3d8:
    // 0x5de3d8: 0x7865  .word       0x00007865                   # move        $t7, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de3d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5de3dc:
    // 0x5de3dc: 0x0  nop
    ctx->pc = 0x5de3dcu;
    // NOP
label_5de3e0:
    // 0x5de3e0: 0x32337528  andi        $s3, $s1, 0x7528
    ctx->pc = 0x5de3e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)29992);
label_5de3e4:
    // 0x5de3e4: 0x49735f29  .word       0x49735F29                   # INVALID     $t3, $s3, 0x5F29 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5de3e4u;
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x5DE3E4 raw=0x49735F29");
label_5de3e8:
    // 0x5de3e8: 0x7865646e  lq          $a1, 0x646E($v1)
    ctx->pc = 0x5de3e8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 25710)));
label_5de3ec:
    // 0x5de3ec: 0x47203c20  .word       0x47203C20                   # INVALID     $t9, $zero, 0x3C20 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5de3ecu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x20 at 0x5DE3EC raw=0x47203C20");
label_5de3f0:
    // 0x5de3f0: 0x754e7465  .word       0x754E7465                   # INVALID     $t2, $t6, 0x7465 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de3f0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE3F0 raw=0x754E7465");
label_5de3f4:
    // 0x5de3f4: 0x7463416d  .word       0x7463416D                   # INVALID     $v1, $v1, 0x416D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de3f4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE3F4 raw=0x7463416D");
label_5de3f8:
    // 0x5de3f8: 0x736e6f69  .word       0x736E6F69                   # INVALID     $k1, $t6, 0x6F69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x5de3f8u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x1D at 0x5DE3F8 raw=0x736E6F69");
label_5de3fc:
    // 0x5de3fc: 0x2928  .word       0x00002928                   # mfsa        $a1 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5de3fcu;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_5de400:
    // 0x5de400: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5de400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5de404:
    // 0x5de404: 0x7165536e  .word       0x7165536E                   # INVALID     $t3, $a1, 0x536E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de404u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE404 raw=0x7165536E");
label_5de408:
    // 0x5de408: 0x636e6575  daddi       $t6, $k1, 0x6575
    ctx->pc = 0x5de408u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25973; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5de40c:
    // 0x5de40c: 0x413a3a65  .word       0x413A3A65                   # INVALID     $t1, $k0, 0x3A65 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5de40cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x5DE40C raw=0x413A3A65");
label_5de410:
    // 0x5de410: 0x63416464  daddi       $at, $k0, 0x6464
    ctx->pc = 0x5de410u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)25700; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_5de414:
    // 0x5de414: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5de414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5de418:
    // 0x5de418: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de418u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
label_5de41c:
    // 0x5de41c: 0x766e4920  .word       0x766E4920                   # INVALID     $s3, $t6, 0x4920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de41cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE41C raw=0x766E4920");
label_5de420:
    // 0x5de420: 0x64696c61  daddiu      $t1, $v1, 0x6C61
    ctx->pc = 0x5de420u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27745);
label_5de424:
    // 0x5de424: 0x646e6920  daddiu      $t6, $v1, 0x6920
    ctx->pc = 0x5de424u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26912);
label_5de428:
    // 0x5de428: 0x7865  .word       0x00007865                   # move        $t7, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de428u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5de42c:
    // 0x5de42c: 0x0  nop
    ctx->pc = 0x5de42cu;
    // NOP
label_5de430:
    // 0x5de430: 0x6341705f  daddi       $at, $k0, 0x705F
    ctx->pc = 0x5de430u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)28767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_5de434:
    // 0x5de434: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5de434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5de438:
    // 0x5de438: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5de438u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5de43c:
    // 0x5de43c: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de43cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE43C raw=0x4C4C554E");
label_5de440:
    // 0x5de440: 0x0  nop
    ctx->pc = 0x5de440u;
    // NOP
label_5de444:
    // 0x5de444: 0x0  nop
    ctx->pc = 0x5de444u;
    // NOP
label_5de448:
    // 0x5de448: 0x0  nop
    ctx->pc = 0x5de448u;
    // NOP
label_5de44c:
    // 0x5de44c: 0x0  nop
    ctx->pc = 0x5de44cu;
    // NOP
label_5de450:
    // 0x5de450: 0x69637464  ldl         $v1, 0x7464($t3)
    ctx->pc = 0x5de450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5de454:
    // 0x5de454: 0x7165536e  .word       0x7165536E                   # INVALID     $t3, $a1, 0x536E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de454u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE454 raw=0x7165536E");
label_5de458:
    // 0x5de458: 0x636e6575  daddi       $t6, $k1, 0x6575
    ctx->pc = 0x5de458u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25973; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5de45c:
    // 0x5de45c: 0x413a3a65  .word       0x413A3A65                   # INVALID     $t1, $k0, 0x3A65 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5de45cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x5DE45C raw=0x413A3A65");
label_5de460:
    // 0x5de460: 0x63416464  daddi       $at, $k0, 0x6464
    ctx->pc = 0x5de460u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)25700; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_5de464:
    // 0x5de464: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5de464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5de468:
    // 0x5de468: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de468u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
label_5de46c:
    // 0x5de46c: 0x746f6720  .word       0x746F6720                   # INVALID     $v1, $t7, 0x6720 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de46cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE46C raw=0x746F6720");
label_5de470:
    // 0x5de470: 0x4e206120  .word       0x4E206120                   # INVALID     $s1, $zero, 0x6120 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de470u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE470 raw=0x4E206120");
label_5de474:
    // 0x5de474: 0x204c4c55  addi        $t4, $v0, 0x4C55
    ctx->pc = 0x5de474u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19541, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_5de478:
    // 0x5de478: 0x61726170  daddi       $s2, $t3, 0x6170
    ctx->pc = 0x5de478u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24944; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5de47c:
    // 0x5de47c: 0x6f70206d  ldr         $s0, 0x206D($k1)
    ctx->pc = 0x5de47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8301); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_5de480:
    // 0x5de480: 0x65746e69  daddiu      $s4, $t3, 0x6E69
    ctx->pc = 0x5de480u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_5de484:
    // 0x5de484: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x5de484u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5de488:
    // 0x5de488: 0x0  nop
    ctx->pc = 0x5de488u;
    // NOP
label_5de48c:
    // 0x5de48c: 0x0  nop
    ctx->pc = 0x5de48cu;
    // NOP
label_5de490:
    // 0x5de490: 0x65732020  daddiu      $s3, $t3, 0x2020
    ctx->pc = 0x5de490u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8224);
label_5de494:
    // 0x5de494: 0x75252071  .word       0x75252071                   # INVALID     $t1, $a1, 0x2071 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de494u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE494 raw=0x75252071");
label_5de498:
    // 0x5de498: 0x2522203a  addiu       $v0, $t1, 0x203A
    ctx->pc = 0x5de498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 8250));
label_5de49c:
    // 0x5de49c: 0x20202273  addi        $zero, $at, 0x2273
    ctx->pc = 0x5de49cu;
    // NOP (addi to $zero)
label_5de4a0:
    // 0x5de4a0: 0x2075255b  addi        $s5, $v1, 0x255B
    ctx->pc = 0x5de4a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9563, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_5de4a4:
    // 0x5de4a4: 0x69746361  ldl         $s4, 0x6361($t3)
    ctx->pc = 0x5de4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5de4a8:
    // 0x5de4a8: 0x5d736e6f  .word       0x5D736E6F                   # bgtzl       $t3, . + 4 + (0x6E6F << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_5de4ac:
    if (ctx->pc == 0x5DE4ACu) {
        ctx->pc = 0x5DE4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE4A8u;
        // 0x5de4ac: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE4B0u;
        goto label_5de4b0;
    }
    ctx->pc = 0x5DE4A8u;
    {
        const bool branch_taken_0x5de4a8 = (GPR_S32(ctx, 11) > 0);
        if (branch_taken_0x5de4a8) {
            ctx->pc = 0x5DE4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE4A8u;
            // 0x5de4ac: 0xa  movz        $zero, $zero, $zero (Delay Slot)
            if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F9E68u;
            return;
        }
    }
    ctx->pc = 0x5DE4B0u;
label_5de4b0:
    // 0x5de4b0: 0x44637464  .word       0x44637464                   # INVALID     $v1, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5de4b0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x24 at 0x5DE4B0 raw=0x44637464");
label_5de4b4:
    // 0x5de4b4: 0x67756265  daddiu      $s5, $k1, 0x6265
    ctx->pc = 0x5de4b4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25189);
label_5de4b8:
    // 0x5de4b8: 0x7070632e  .word       0x7070632E                   # INVALID     $v1, $s0, 0x632E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de4b8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DE4B8 raw=0x7070632E");
label_5de4bc:
    // 0x5de4bc: 0x0  nop
    ctx->pc = 0x5de4bcu;
    // NOP
label_5de4c0:
    // 0x5de4c0: 0x6f625f6d  ldr         $v0, 0x5F6D($k1)
    ctx->pc = 0x5de4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24429); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_5de4c4:
    // 0x5de4c4: 0x74696e49  .word       0x74696E49                   # INVALID     $v1, $t1, 0x6E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de4c4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE4C4 raw=0x74696E49");
label_5de4c8:
    // 0x5de4c8: 0x696c6169  ldl         $t4, 0x6169($t3)
    ctx->pc = 0x5de4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_5de4cc:
    // 0x5de4cc: 0x20646573  addi        $a0, $v1, 0x6573
    ctx->pc = 0x5de4ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25971, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5de4d0:
    // 0x5de4d0: 0x46203d3d  .word       0x46203D3D                   # INVALID     $s1, $zero, 0x3D3D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5de4d0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x3D at 0x5DE4D0 raw=0x46203D3D");
label_5de4d4:
    // 0x5de4d4: 0x45534c41  .word       0x45534C41                   # INVALID     $t2, $s3, 0x4C41 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5de4d4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x1 at 0x5DE4D4 raw=0x45534C41");
label_5de4d8:
    // 0x5de4d8: 0x0  nop
    ctx->pc = 0x5de4d8u;
    // NOP
label_5de4dc:
    // 0x5de4dc: 0x0  nop
    ctx->pc = 0x5de4dcu;
    // NOP
label_5de4e0:
    // 0x5de4e0: 0x44637464  .word       0x44637464                   # INVALID     $v1, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5de4e0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x24 at 0x5DE4E0 raw=0x44637464");
label_5de4e4:
    // 0x5de4e4: 0x67756265  daddiu      $s5, $k1, 0x6265
    ctx->pc = 0x5de4e4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25189);
label_5de4e8:
    // 0x5de4e8: 0x616e614d  daddi       $t6, $t3, 0x614D
    ctx->pc = 0x5de4e8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24909; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5de4ec:
    // 0x5de4ec: 0x3a726567  xori        $s2, $s3, 0x6567
    ctx->pc = 0x5de4ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25959);
label_5de4f0:
    // 0x5de4f0: 0x696e493a  ldl         $t6, 0x493A($t3)
    ctx->pc = 0x5de4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 18746); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_5de4f4:
    // 0x5de4f4: 0x6c616974  ldr         $at, 0x6974($v1)
    ctx->pc = 0x5de4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5de4f8:
    // 0x5de4f8: 0x20657369  addi        $a1, $v1, 0x7369
    ctx->pc = 0x5de4f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29545, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5de4fc:
    // 0x5de4fc: 0x6c61203a  ldr         $at, 0x203A($v1)
    ctx->pc = 0x5de4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5de500:
    // 0x5de500: 0x64616572  daddiu      $at, $v1, 0x6572
    ctx->pc = 0x5de500u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25970);
label_5de504:
    // 0x5de504: 0x6e692079  ldr         $t1, 0x2079($s3)
    ctx->pc = 0x5de504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8313); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5de508:
    // 0x5de508: 0x61697469  daddi       $t1, $t3, 0x7469
    ctx->pc = 0x5de508u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_5de50c:
    // 0x5de50c: 0x6573696c  daddiu      $s3, $t3, 0x696C
    ctx->pc = 0x5de50cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
label_5de510:
    // 0x5de510: 0x70202c64  .word       0x70202C64                   # INVALID     $at, $zero, 0x2C64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de510u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x5DE510 raw=0x70202C64");
label_5de514:
    // 0x5de514: 0x7361656c  .word       0x7361656C                   # INVALID     $k1, $at, 0x656C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de514u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x5DE514 raw=0x7361656C");
label_5de518:
    // 0x5de518: 0x68732065  ldl         $s3, 0x2065($v1)
    ctx->pc = 0x5de518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_5de51c:
    // 0x5de51c: 0x6f647475  ldr         $a0, 0x7475($k1)
    ctx->pc = 0x5de51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29813); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_5de520:
    // 0x5de520: 0x6d206e77  ldr         $zero, 0x6E77($t1)
    ctx->pc = 0x5de520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5de524:
    // 0x5de524: 0x6c75646f  ldr         $s5, 0x646F($v1)
    ctx->pc = 0x5de524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5de528:
    // 0x5de528: 0x6e6f2065  ldr         $t7, 0x2065($s3)
    ctx->pc = 0x5de528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5de52c:
    // 0x5de52c: 0x62206563  daddi       $zero, $s1, 0x6563
    ctx->pc = 0x5de52cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)25955; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5de530:
    // 0x5de530: 0x726f6665  .word       0x726F6665                   # INVALID     $s3, $t7, 0x6665 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de530u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DE530 raw=0x726F6665");
label_5de534:
    // 0x5de534: 0x61632065  daddi       $v1, $t3, 0x2065
    ctx->pc = 0x5de534u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8293; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_5de538:
    // 0x5de538: 0x6e696c6c  ldr         $t1, 0x6C6C($s3)
    ctx->pc = 0x5de538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27756); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5de53c:
    // 0x5de53c: 0x68742067  ldl         $s4, 0x2067($v1)
    ctx->pc = 0x5de53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5de540:
    // 0x5de540: 0x66207369  daddiu      $zero, $s1, 0x7369
    ctx->pc = 0x5de540u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29545);
label_5de544:
    // 0x5de544: 0x74636e75  .word       0x74636E75                   # INVALID     $v1, $v1, 0x6E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de544u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE544 raw=0x74636E75");
label_5de548:
    // 0x5de548: 0x6e6f69  .word       0x006E6F69                   # mtsa        $v1 # 000E6F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5de548u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_5de54c:
    // 0x5de54c: 0x0  nop
    ctx->pc = 0x5de54cu;
    // NOP
label_5de550:
    // 0x5de550: 0x6f625f6d  ldr         $v0, 0x5F6D($k1)
    ctx->pc = 0x5de550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24429); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_5de554:
    // 0x5de554: 0x74696e49  .word       0x74696E49                   # INVALID     $v1, $t1, 0x6E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de554u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE554 raw=0x74696E49");
label_5de558:
    // 0x5de558: 0x696c6169  ldl         $t4, 0x6169($t3)
    ctx->pc = 0x5de558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_5de55c:
    // 0x5de55c: 0x20646573  addi        $a0, $v1, 0x6573
    ctx->pc = 0x5de55cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25971, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5de560:
    // 0x5de560: 0x74203d3d  .word       0x74203D3D                   # INVALID     $at, $zero, 0x3D3D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de560u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE560 raw=0x74203D3D");
label_5de564:
    // 0x5de564: 0x657572  tlt         $v1, $a1, 469
    ctx->pc = 0x5de564u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_5de568:
    // 0x5de568: 0x0  nop
    ctx->pc = 0x5de568u;
    // NOP
label_5de56c:
    // 0x5de56c: 0x0  nop
    ctx->pc = 0x5de56cu;
    // NOP
label_5de570:
    // 0x5de570: 0x65726e55  daddiu      $s2, $t3, 0x6E55
    ctx->pc = 0x5de570u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28245);
label_5de574:
    // 0x5de574: 0x74736967  .word       0x74736967                   # INVALID     $v1, $s3, 0x6967 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de574u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE574 raw=0x74736967");
label_5de578:
    // 0x5de578: 0x64657265  daddiu      $a1, $v1, 0x7265
    ctx->pc = 0x5de578u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29285);
label_5de57c:
    // 0x5de57c: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de57cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_5de580:
    // 0x5de580: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de580u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_5de584:
    // 0x5de584: 0x0  nop
    ctx->pc = 0x5de584u;
    // NOP
label_5de588:
    // 0x5de588: 0x0  nop
    ctx->pc = 0x5de588u;
    // NOP
label_5de58c:
    // 0x5de58c: 0x0  nop
    ctx->pc = 0x5de58cu;
    // NOP
label_5de590:
    // 0x5de590: 0x2e353125  sltiu       $s5, $s1, 0x3125
    ctx->pc = 0x5de590u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12581) ? 1 : 0);
label_5de594:
    // 0x5de594: 0x28733531  slti        $s3, $v1, 0x3531
    ctx->pc = 0x5de594u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13617) ? 1 : 0);
label_5de598:
    // 0x5de598: 0x29643325  slti        $a0, $t3, 0x3325
    ctx->pc = 0x5de598u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)13093) ? 1 : 0);
label_5de59c:
    // 0x5de59c: 0x25203a20  addiu       $zero, $t1, 0x3A20
    ctx->pc = 0x5de59cu;
    // NOP (addiu $zero, ...)
label_5de5a0:
    // 0x5de5a0: 0x3e2d2073  .word       0x3E2D2073                   # lui         $t5, 0x2073 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de5a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8307 << 16));
label_5de5a4:
    // 0x5de5a4: 0xa732520  j           func_9CC9480
label_5de5a8:
    if (ctx->pc == 0x5DE5A8u) {
        ctx->pc = 0x5DE5ACu;
        goto label_5de5ac;
    }
    ctx->pc = 0x5DE5A4u;
    ctx->pc = 0x9CC9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9CC9480u, 0x5DE5A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DE5ACu;
label_5de5ac:
    // 0x5de5ac: 0x0  nop
    ctx->pc = 0x5de5acu;
    // NOP
label_5de5b0:
    // 0x5de5b0: 0x6f727245  ldr         $s2, 0x7245($k1)
    ctx->pc = 0x5de5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29253); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_5de5b4:
    // 0x5de5b4: 0x676f4c72  daddiu      $t7, $k1, 0x4C72
    ctx->pc = 0x5de5b4u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)19570);
label_5de5b8:
    // 0x5de5b8: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de5b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE5B8 raw=0x7478742E");
label_5de5bc:
    // 0x5de5bc: 0x0  nop
    ctx->pc = 0x5de5bcu;
    // NOP
    ctx->pc = 0x5de5c0u;
}
