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

// Function: sub_0036F4D8
// Address: 0x36f4d8 - 0x36fca8
void sub_0036F4D8_0x36f4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F4D8_0x36f4d8");
#endif

    switch (ctx->pc) {
        case 0x36f4d8u: goto label_36f4d8;
        case 0x36f4dcu: goto label_36f4dc;
        case 0x36f4e0u: goto label_36f4e0;
        case 0x36f4e4u: goto label_36f4e4;
        case 0x36f4e8u: goto label_36f4e8;
        case 0x36f4ecu: goto label_36f4ec;
        case 0x36f4f0u: goto label_36f4f0;
        case 0x36f4f4u: goto label_36f4f4;
        case 0x36f4f8u: goto label_36f4f8;
        case 0x36f4fcu: goto label_36f4fc;
        case 0x36f500u: goto label_36f500;
        case 0x36f504u: goto label_36f504;
        case 0x36f508u: goto label_36f508;
        case 0x36f50cu: goto label_36f50c;
        case 0x36f510u: goto label_36f510;
        case 0x36f514u: goto label_36f514;
        case 0x36f518u: goto label_36f518;
        case 0x36f51cu: goto label_36f51c;
        case 0x36f520u: goto label_36f520;
        case 0x36f524u: goto label_36f524;
        case 0x36f528u: goto label_36f528;
        case 0x36f52cu: goto label_36f52c;
        case 0x36f530u: goto label_36f530;
        case 0x36f534u: goto label_36f534;
        case 0x36f538u: goto label_36f538;
        case 0x36f53cu: goto label_36f53c;
        case 0x36f540u: goto label_36f540;
        case 0x36f544u: goto label_36f544;
        case 0x36f548u: goto label_36f548;
        case 0x36f54cu: goto label_36f54c;
        case 0x36f550u: goto label_36f550;
        case 0x36f554u: goto label_36f554;
        case 0x36f558u: goto label_36f558;
        case 0x36f55cu: goto label_36f55c;
        case 0x36f560u: goto label_36f560;
        case 0x36f564u: goto label_36f564;
        case 0x36f568u: goto label_36f568;
        case 0x36f56cu: goto label_36f56c;
        case 0x36f570u: goto label_36f570;
        case 0x36f574u: goto label_36f574;
        case 0x36f578u: goto label_36f578;
        case 0x36f57cu: goto label_36f57c;
        case 0x36f580u: goto label_36f580;
        case 0x36f584u: goto label_36f584;
        case 0x36f588u: goto label_36f588;
        case 0x36f58cu: goto label_36f58c;
        case 0x36f590u: goto label_36f590;
        case 0x36f594u: goto label_36f594;
        case 0x36f598u: goto label_36f598;
        case 0x36f59cu: goto label_36f59c;
        case 0x36f5a0u: goto label_36f5a0;
        case 0x36f5a4u: goto label_36f5a4;
        case 0x36f5a8u: goto label_36f5a8;
        case 0x36f5acu: goto label_36f5ac;
        case 0x36f5b0u: goto label_36f5b0;
        case 0x36f5b4u: goto label_36f5b4;
        case 0x36f5b8u: goto label_36f5b8;
        case 0x36f5bcu: goto label_36f5bc;
        case 0x36f5c0u: goto label_36f5c0;
        case 0x36f5c4u: goto label_36f5c4;
        case 0x36f5c8u: goto label_36f5c8;
        case 0x36f5ccu: goto label_36f5cc;
        case 0x36f5d0u: goto label_36f5d0;
        case 0x36f5d4u: goto label_36f5d4;
        case 0x36f5d8u: goto label_36f5d8;
        case 0x36f5dcu: goto label_36f5dc;
        case 0x36f5e0u: goto label_36f5e0;
        case 0x36f5e4u: goto label_36f5e4;
        case 0x36f5e8u: goto label_36f5e8;
        case 0x36f5ecu: goto label_36f5ec;
        case 0x36f5f0u: goto label_36f5f0;
        case 0x36f5f4u: goto label_36f5f4;
        case 0x36f5f8u: goto label_36f5f8;
        case 0x36f5fcu: goto label_36f5fc;
        case 0x36f600u: goto label_36f600;
        case 0x36f604u: goto label_36f604;
        case 0x36f608u: goto label_36f608;
        case 0x36f60cu: goto label_36f60c;
        case 0x36f610u: goto label_36f610;
        case 0x36f614u: goto label_36f614;
        case 0x36f618u: goto label_36f618;
        case 0x36f61cu: goto label_36f61c;
        case 0x36f620u: goto label_36f620;
        case 0x36f624u: goto label_36f624;
        case 0x36f628u: goto label_36f628;
        case 0x36f62cu: goto label_36f62c;
        case 0x36f630u: goto label_36f630;
        case 0x36f634u: goto label_36f634;
        case 0x36f638u: goto label_36f638;
        case 0x36f63cu: goto label_36f63c;
        case 0x36f640u: goto label_36f640;
        case 0x36f644u: goto label_36f644;
        case 0x36f648u: goto label_36f648;
        case 0x36f64cu: goto label_36f64c;
        case 0x36f650u: goto label_36f650;
        case 0x36f654u: goto label_36f654;
        case 0x36f658u: goto label_36f658;
        case 0x36f65cu: goto label_36f65c;
        case 0x36f660u: goto label_36f660;
        case 0x36f664u: goto label_36f664;
        case 0x36f668u: goto label_36f668;
        case 0x36f66cu: goto label_36f66c;
        case 0x36f670u: goto label_36f670;
        case 0x36f674u: goto label_36f674;
        case 0x36f678u: goto label_36f678;
        case 0x36f67cu: goto label_36f67c;
        case 0x36f680u: goto label_36f680;
        case 0x36f684u: goto label_36f684;
        case 0x36f688u: goto label_36f688;
        case 0x36f68cu: goto label_36f68c;
        case 0x36f690u: goto label_36f690;
        case 0x36f694u: goto label_36f694;
        case 0x36f698u: goto label_36f698;
        case 0x36f69cu: goto label_36f69c;
        case 0x36f6a0u: goto label_36f6a0;
        case 0x36f6a4u: goto label_36f6a4;
        case 0x36f6a8u: goto label_36f6a8;
        case 0x36f6acu: goto label_36f6ac;
        case 0x36f6b0u: goto label_36f6b0;
        case 0x36f6b4u: goto label_36f6b4;
        case 0x36f6b8u: goto label_36f6b8;
        case 0x36f6bcu: goto label_36f6bc;
        case 0x36f6c0u: goto label_36f6c0;
        case 0x36f6c4u: goto label_36f6c4;
        case 0x36f6c8u: goto label_36f6c8;
        case 0x36f6ccu: goto label_36f6cc;
        case 0x36f6d0u: goto label_36f6d0;
        case 0x36f6d4u: goto label_36f6d4;
        case 0x36f6d8u: goto label_36f6d8;
        case 0x36f6dcu: goto label_36f6dc;
        case 0x36f6e0u: goto label_36f6e0;
        case 0x36f6e4u: goto label_36f6e4;
        case 0x36f6e8u: goto label_36f6e8;
        case 0x36f6ecu: goto label_36f6ec;
        case 0x36f6f0u: goto label_36f6f0;
        case 0x36f6f4u: goto label_36f6f4;
        case 0x36f6f8u: goto label_36f6f8;
        case 0x36f6fcu: goto label_36f6fc;
        case 0x36f700u: goto label_36f700;
        case 0x36f704u: goto label_36f704;
        case 0x36f708u: goto label_36f708;
        case 0x36f70cu: goto label_36f70c;
        case 0x36f710u: goto label_36f710;
        case 0x36f714u: goto label_36f714;
        case 0x36f718u: goto label_36f718;
        case 0x36f71cu: goto label_36f71c;
        case 0x36f720u: goto label_36f720;
        case 0x36f724u: goto label_36f724;
        case 0x36f728u: goto label_36f728;
        case 0x36f72cu: goto label_36f72c;
        case 0x36f730u: goto label_36f730;
        case 0x36f734u: goto label_36f734;
        case 0x36f738u: goto label_36f738;
        case 0x36f73cu: goto label_36f73c;
        case 0x36f740u: goto label_36f740;
        case 0x36f744u: goto label_36f744;
        case 0x36f748u: goto label_36f748;
        case 0x36f74cu: goto label_36f74c;
        case 0x36f750u: goto label_36f750;
        case 0x36f754u: goto label_36f754;
        case 0x36f758u: goto label_36f758;
        case 0x36f75cu: goto label_36f75c;
        case 0x36f760u: goto label_36f760;
        case 0x36f764u: goto label_36f764;
        case 0x36f768u: goto label_36f768;
        case 0x36f76cu: goto label_36f76c;
        case 0x36f770u: goto label_36f770;
        case 0x36f774u: goto label_36f774;
        case 0x36f778u: goto label_36f778;
        case 0x36f77cu: goto label_36f77c;
        case 0x36f780u: goto label_36f780;
        case 0x36f784u: goto label_36f784;
        case 0x36f788u: goto label_36f788;
        case 0x36f78cu: goto label_36f78c;
        case 0x36f790u: goto label_36f790;
        case 0x36f794u: goto label_36f794;
        case 0x36f798u: goto label_36f798;
        case 0x36f79cu: goto label_36f79c;
        case 0x36f7a0u: goto label_36f7a0;
        case 0x36f7a4u: goto label_36f7a4;
        case 0x36f7a8u: goto label_36f7a8;
        case 0x36f7acu: goto label_36f7ac;
        case 0x36f7b0u: goto label_36f7b0;
        case 0x36f7b4u: goto label_36f7b4;
        case 0x36f7b8u: goto label_36f7b8;
        case 0x36f7bcu: goto label_36f7bc;
        case 0x36f7c0u: goto label_36f7c0;
        case 0x36f7c4u: goto label_36f7c4;
        case 0x36f7c8u: goto label_36f7c8;
        case 0x36f7ccu: goto label_36f7cc;
        case 0x36f7d0u: goto label_36f7d0;
        case 0x36f7d4u: goto label_36f7d4;
        case 0x36f7d8u: goto label_36f7d8;
        case 0x36f7dcu: goto label_36f7dc;
        case 0x36f7e0u: goto label_36f7e0;
        case 0x36f7e4u: goto label_36f7e4;
        case 0x36f7e8u: goto label_36f7e8;
        case 0x36f7ecu: goto label_36f7ec;
        case 0x36f7f0u: goto label_36f7f0;
        case 0x36f7f4u: goto label_36f7f4;
        case 0x36f7f8u: goto label_36f7f8;
        case 0x36f7fcu: goto label_36f7fc;
        case 0x36f800u: goto label_36f800;
        case 0x36f804u: goto label_36f804;
        case 0x36f808u: goto label_36f808;
        case 0x36f80cu: goto label_36f80c;
        case 0x36f810u: goto label_36f810;
        case 0x36f814u: goto label_36f814;
        case 0x36f818u: goto label_36f818;
        case 0x36f81cu: goto label_36f81c;
        case 0x36f820u: goto label_36f820;
        case 0x36f824u: goto label_36f824;
        case 0x36f828u: goto label_36f828;
        case 0x36f82cu: goto label_36f82c;
        case 0x36f830u: goto label_36f830;
        case 0x36f834u: goto label_36f834;
        case 0x36f838u: goto label_36f838;
        case 0x36f83cu: goto label_36f83c;
        case 0x36f840u: goto label_36f840;
        case 0x36f844u: goto label_36f844;
        case 0x36f848u: goto label_36f848;
        case 0x36f84cu: goto label_36f84c;
        case 0x36f850u: goto label_36f850;
        case 0x36f854u: goto label_36f854;
        case 0x36f858u: goto label_36f858;
        case 0x36f85cu: goto label_36f85c;
        case 0x36f860u: goto label_36f860;
        case 0x36f864u: goto label_36f864;
        case 0x36f868u: goto label_36f868;
        case 0x36f86cu: goto label_36f86c;
        case 0x36f870u: goto label_36f870;
        case 0x36f874u: goto label_36f874;
        case 0x36f878u: goto label_36f878;
        case 0x36f87cu: goto label_36f87c;
        case 0x36f880u: goto label_36f880;
        case 0x36f884u: goto label_36f884;
        case 0x36f888u: goto label_36f888;
        case 0x36f88cu: goto label_36f88c;
        case 0x36f890u: goto label_36f890;
        case 0x36f894u: goto label_36f894;
        case 0x36f898u: goto label_36f898;
        case 0x36f89cu: goto label_36f89c;
        case 0x36f8a0u: goto label_36f8a0;
        case 0x36f8a4u: goto label_36f8a4;
        case 0x36f8a8u: goto label_36f8a8;
        case 0x36f8acu: goto label_36f8ac;
        case 0x36f8b0u: goto label_36f8b0;
        case 0x36f8b4u: goto label_36f8b4;
        case 0x36f8b8u: goto label_36f8b8;
        case 0x36f8bcu: goto label_36f8bc;
        case 0x36f8c0u: goto label_36f8c0;
        case 0x36f8c4u: goto label_36f8c4;
        case 0x36f8c8u: goto label_36f8c8;
        case 0x36f8ccu: goto label_36f8cc;
        case 0x36f8d0u: goto label_36f8d0;
        case 0x36f8d4u: goto label_36f8d4;
        case 0x36f8d8u: goto label_36f8d8;
        case 0x36f8dcu: goto label_36f8dc;
        case 0x36f8e0u: goto label_36f8e0;
        case 0x36f8e4u: goto label_36f8e4;
        case 0x36f8e8u: goto label_36f8e8;
        case 0x36f8ecu: goto label_36f8ec;
        case 0x36f8f0u: goto label_36f8f0;
        case 0x36f8f4u: goto label_36f8f4;
        case 0x36f8f8u: goto label_36f8f8;
        case 0x36f8fcu: goto label_36f8fc;
        case 0x36f900u: goto label_36f900;
        case 0x36f904u: goto label_36f904;
        case 0x36f908u: goto label_36f908;
        case 0x36f90cu: goto label_36f90c;
        case 0x36f910u: goto label_36f910;
        case 0x36f914u: goto label_36f914;
        case 0x36f918u: goto label_36f918;
        case 0x36f91cu: goto label_36f91c;
        case 0x36f920u: goto label_36f920;
        case 0x36f924u: goto label_36f924;
        case 0x36f928u: goto label_36f928;
        case 0x36f92cu: goto label_36f92c;
        case 0x36f930u: goto label_36f930;
        case 0x36f934u: goto label_36f934;
        case 0x36f938u: goto label_36f938;
        case 0x36f93cu: goto label_36f93c;
        case 0x36f940u: goto label_36f940;
        case 0x36f944u: goto label_36f944;
        case 0x36f948u: goto label_36f948;
        case 0x36f94cu: goto label_36f94c;
        case 0x36f950u: goto label_36f950;
        case 0x36f954u: goto label_36f954;
        case 0x36f958u: goto label_36f958;
        case 0x36f95cu: goto label_36f95c;
        case 0x36f960u: goto label_36f960;
        case 0x36f964u: goto label_36f964;
        case 0x36f968u: goto label_36f968;
        case 0x36f96cu: goto label_36f96c;
        case 0x36f970u: goto label_36f970;
        case 0x36f974u: goto label_36f974;
        case 0x36f978u: goto label_36f978;
        case 0x36f97cu: goto label_36f97c;
        case 0x36f980u: goto label_36f980;
        case 0x36f984u: goto label_36f984;
        case 0x36f988u: goto label_36f988;
        case 0x36f98cu: goto label_36f98c;
        case 0x36f990u: goto label_36f990;
        case 0x36f994u: goto label_36f994;
        case 0x36f998u: goto label_36f998;
        case 0x36f99cu: goto label_36f99c;
        case 0x36f9a0u: goto label_36f9a0;
        case 0x36f9a4u: goto label_36f9a4;
        case 0x36f9a8u: goto label_36f9a8;
        case 0x36f9acu: goto label_36f9ac;
        case 0x36f9b0u: goto label_36f9b0;
        case 0x36f9b4u: goto label_36f9b4;
        case 0x36f9b8u: goto label_36f9b8;
        case 0x36f9bcu: goto label_36f9bc;
        case 0x36f9c0u: goto label_36f9c0;
        case 0x36f9c4u: goto label_36f9c4;
        case 0x36f9c8u: goto label_36f9c8;
        case 0x36f9ccu: goto label_36f9cc;
        case 0x36f9d0u: goto label_36f9d0;
        case 0x36f9d4u: goto label_36f9d4;
        case 0x36f9d8u: goto label_36f9d8;
        case 0x36f9dcu: goto label_36f9dc;
        case 0x36f9e0u: goto label_36f9e0;
        case 0x36f9e4u: goto label_36f9e4;
        case 0x36f9e8u: goto label_36f9e8;
        case 0x36f9ecu: goto label_36f9ec;
        case 0x36f9f0u: goto label_36f9f0;
        case 0x36f9f4u: goto label_36f9f4;
        case 0x36f9f8u: goto label_36f9f8;
        case 0x36f9fcu: goto label_36f9fc;
        case 0x36fa00u: goto label_36fa00;
        case 0x36fa04u: goto label_36fa04;
        case 0x36fa08u: goto label_36fa08;
        case 0x36fa0cu: goto label_36fa0c;
        case 0x36fa10u: goto label_36fa10;
        case 0x36fa14u: goto label_36fa14;
        case 0x36fa18u: goto label_36fa18;
        case 0x36fa1cu: goto label_36fa1c;
        case 0x36fa20u: goto label_36fa20;
        case 0x36fa24u: goto label_36fa24;
        case 0x36fa28u: goto label_36fa28;
        case 0x36fa2cu: goto label_36fa2c;
        case 0x36fa30u: goto label_36fa30;
        case 0x36fa34u: goto label_36fa34;
        case 0x36fa38u: goto label_36fa38;
        case 0x36fa3cu: goto label_36fa3c;
        case 0x36fa40u: goto label_36fa40;
        case 0x36fa44u: goto label_36fa44;
        case 0x36fa48u: goto label_36fa48;
        case 0x36fa4cu: goto label_36fa4c;
        case 0x36fa50u: goto label_36fa50;
        case 0x36fa54u: goto label_36fa54;
        case 0x36fa58u: goto label_36fa58;
        case 0x36fa5cu: goto label_36fa5c;
        case 0x36fa60u: goto label_36fa60;
        case 0x36fa64u: goto label_36fa64;
        case 0x36fa68u: goto label_36fa68;
        case 0x36fa6cu: goto label_36fa6c;
        case 0x36fa70u: goto label_36fa70;
        case 0x36fa74u: goto label_36fa74;
        case 0x36fa78u: goto label_36fa78;
        case 0x36fa7cu: goto label_36fa7c;
        case 0x36fa80u: goto label_36fa80;
        case 0x36fa84u: goto label_36fa84;
        case 0x36fa88u: goto label_36fa88;
        case 0x36fa8cu: goto label_36fa8c;
        case 0x36fa90u: goto label_36fa90;
        case 0x36fa94u: goto label_36fa94;
        case 0x36fa98u: goto label_36fa98;
        case 0x36fa9cu: goto label_36fa9c;
        case 0x36faa0u: goto label_36faa0;
        case 0x36faa4u: goto label_36faa4;
        case 0x36faa8u: goto label_36faa8;
        case 0x36faacu: goto label_36faac;
        case 0x36fab0u: goto label_36fab0;
        case 0x36fab4u: goto label_36fab4;
        case 0x36fab8u: goto label_36fab8;
        case 0x36fabcu: goto label_36fabc;
        case 0x36fac0u: goto label_36fac0;
        case 0x36fac4u: goto label_36fac4;
        case 0x36fac8u: goto label_36fac8;
        case 0x36faccu: goto label_36facc;
        case 0x36fad0u: goto label_36fad0;
        case 0x36fad4u: goto label_36fad4;
        case 0x36fad8u: goto label_36fad8;
        case 0x36fadcu: goto label_36fadc;
        case 0x36fae0u: goto label_36fae0;
        case 0x36fae4u: goto label_36fae4;
        case 0x36fae8u: goto label_36fae8;
        case 0x36faecu: goto label_36faec;
        case 0x36faf0u: goto label_36faf0;
        case 0x36faf4u: goto label_36faf4;
        case 0x36faf8u: goto label_36faf8;
        case 0x36fafcu: goto label_36fafc;
        case 0x36fb00u: goto label_36fb00;
        case 0x36fb04u: goto label_36fb04;
        case 0x36fb08u: goto label_36fb08;
        case 0x36fb0cu: goto label_36fb0c;
        case 0x36fb10u: goto label_36fb10;
        case 0x36fb14u: goto label_36fb14;
        case 0x36fb18u: goto label_36fb18;
        case 0x36fb1cu: goto label_36fb1c;
        case 0x36fb20u: goto label_36fb20;
        case 0x36fb24u: goto label_36fb24;
        case 0x36fb28u: goto label_36fb28;
        case 0x36fb2cu: goto label_36fb2c;
        case 0x36fb30u: goto label_36fb30;
        case 0x36fb34u: goto label_36fb34;
        case 0x36fb38u: goto label_36fb38;
        case 0x36fb3cu: goto label_36fb3c;
        case 0x36fb40u: goto label_36fb40;
        case 0x36fb44u: goto label_36fb44;
        case 0x36fb48u: goto label_36fb48;
        case 0x36fb4cu: goto label_36fb4c;
        case 0x36fb50u: goto label_36fb50;
        case 0x36fb54u: goto label_36fb54;
        case 0x36fb58u: goto label_36fb58;
        case 0x36fb5cu: goto label_36fb5c;
        case 0x36fb60u: goto label_36fb60;
        case 0x36fb64u: goto label_36fb64;
        case 0x36fb68u: goto label_36fb68;
        case 0x36fb6cu: goto label_36fb6c;
        case 0x36fb70u: goto label_36fb70;
        case 0x36fb74u: goto label_36fb74;
        case 0x36fb78u: goto label_36fb78;
        case 0x36fb7cu: goto label_36fb7c;
        case 0x36fb80u: goto label_36fb80;
        case 0x36fb84u: goto label_36fb84;
        case 0x36fb88u: goto label_36fb88;
        case 0x36fb8cu: goto label_36fb8c;
        case 0x36fb90u: goto label_36fb90;
        case 0x36fb94u: goto label_36fb94;
        case 0x36fb98u: goto label_36fb98;
        case 0x36fb9cu: goto label_36fb9c;
        case 0x36fba0u: goto label_36fba0;
        case 0x36fba4u: goto label_36fba4;
        case 0x36fba8u: goto label_36fba8;
        case 0x36fbacu: goto label_36fbac;
        case 0x36fbb0u: goto label_36fbb0;
        case 0x36fbb4u: goto label_36fbb4;
        case 0x36fbb8u: goto label_36fbb8;
        case 0x36fbbcu: goto label_36fbbc;
        case 0x36fbc0u: goto label_36fbc0;
        case 0x36fbc4u: goto label_36fbc4;
        case 0x36fbc8u: goto label_36fbc8;
        case 0x36fbccu: goto label_36fbcc;
        case 0x36fbd0u: goto label_36fbd0;
        case 0x36fbd4u: goto label_36fbd4;
        case 0x36fbd8u: goto label_36fbd8;
        case 0x36fbdcu: goto label_36fbdc;
        case 0x36fbe0u: goto label_36fbe0;
        case 0x36fbe4u: goto label_36fbe4;
        case 0x36fbe8u: goto label_36fbe8;
        case 0x36fbecu: goto label_36fbec;
        case 0x36fbf0u: goto label_36fbf0;
        case 0x36fbf4u: goto label_36fbf4;
        case 0x36fbf8u: goto label_36fbf8;
        case 0x36fbfcu: goto label_36fbfc;
        case 0x36fc00u: goto label_36fc00;
        case 0x36fc04u: goto label_36fc04;
        case 0x36fc08u: goto label_36fc08;
        case 0x36fc0cu: goto label_36fc0c;
        case 0x36fc10u: goto label_36fc10;
        case 0x36fc14u: goto label_36fc14;
        case 0x36fc18u: goto label_36fc18;
        case 0x36fc1cu: goto label_36fc1c;
        case 0x36fc20u: goto label_36fc20;
        case 0x36fc24u: goto label_36fc24;
        case 0x36fc28u: goto label_36fc28;
        case 0x36fc2cu: goto label_36fc2c;
        case 0x36fc30u: goto label_36fc30;
        case 0x36fc34u: goto label_36fc34;
        case 0x36fc38u: goto label_36fc38;
        case 0x36fc3cu: goto label_36fc3c;
        case 0x36fc40u: goto label_36fc40;
        case 0x36fc44u: goto label_36fc44;
        case 0x36fc48u: goto label_36fc48;
        case 0x36fc4cu: goto label_36fc4c;
        case 0x36fc50u: goto label_36fc50;
        case 0x36fc54u: goto label_36fc54;
        case 0x36fc58u: goto label_36fc58;
        case 0x36fc5cu: goto label_36fc5c;
        case 0x36fc60u: goto label_36fc60;
        case 0x36fc64u: goto label_36fc64;
        case 0x36fc68u: goto label_36fc68;
        case 0x36fc6cu: goto label_36fc6c;
        case 0x36fc70u: goto label_36fc70;
        case 0x36fc74u: goto label_36fc74;
        case 0x36fc78u: goto label_36fc78;
        case 0x36fc7cu: goto label_36fc7c;
        case 0x36fc80u: goto label_36fc80;
        case 0x36fc84u: goto label_36fc84;
        case 0x36fc88u: goto label_36fc88;
        case 0x36fc8cu: goto label_36fc8c;
        case 0x36fc90u: goto label_36fc90;
        case 0x36fc94u: goto label_36fc94;
        case 0x36fc98u: goto label_36fc98;
        case 0x36fc9cu: goto label_36fc9c;
        case 0x36fca0u: goto label_36fca0;
        case 0x36fca4u: goto label_36fca4;
        default: break;
    }

    ctx->pc = 0x36f4d8u;

label_36f4d8:
    // 0x36f4d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x36f4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_36f4dc:
    // 0x36f4dc: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x36f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
label_36f4e0:
    // 0x36f4e0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x36f4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_36f4e4:
    // 0x36f4e4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x36f4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_36f4e8:
    // 0x36f4e8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x36f4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_36f4ec:
    // 0x36f4ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36f4ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36f4f0:
    // 0x36f4f0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x36f4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_36f4f4:
    // 0x36f4f4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x36f4f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_36f4f8:
    // 0x36f4f8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x36f4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_36f4fc:
    // 0x36f4fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x36f4fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36f500:
    // 0x36f500: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x36f500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_36f504:
    // 0x36f504: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x36f504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36f508:
    // 0x36f508: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x36f508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_36f50c:
    // 0x36f50c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_36f510:
    if (ctx->pc == 0x36F510u) {
        ctx->pc = 0x36F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F50Cu;
        // 0x36f510: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F514u;
        goto label_36f514;
    }
    ctx->pc = 0x36F50Cu;
    {
        const bool branch_taken_0x36f50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F50Cu;
        // 0x36f510: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f50c) {
            ctx->pc = 0x36F528u;
            goto label_36f528;
        }
    }
    ctx->pc = 0x36F514u;
label_36f514:
    // 0x36f514: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x36f514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_36f518:
    // 0x36f518: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x36f518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_36f51c:
    // 0x36f51c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x36f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36f520:
    // 0x36f520: 0x10000003  b           . + 4 + (0x3 << 2)
label_36f524:
    if (ctx->pc == 0x36F524u) {
        ctx->pc = 0x36F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F520u;
        // 0x36f524: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F528u;
        goto label_36f528;
    }
    ctx->pc = 0x36F520u;
    {
        const bool branch_taken_0x36f520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F520u;
        // 0x36f524: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f520) {
            ctx->pc = 0x36F530u;
            goto label_36f530;
        }
    }
    ctx->pc = 0x36F528u;
label_36f528:
    // 0x36f528: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x36f528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_36f52c:
    // 0x36f52c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36f52cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36f530:
    // 0x36f530: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x36f530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_36f534:
    // 0x36f534: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x36f534u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36f538:
    // 0x36f538: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x36f538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_36f53c:
    // 0x36f53c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_36f540:
    if (ctx->pc == 0x36F540u) {
        ctx->pc = 0x36F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F53Cu;
        // 0x36f540: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F544u;
        goto label_36f544;
    }
    ctx->pc = 0x36F53Cu;
    {
        const bool branch_taken_0x36f53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F53Cu;
        // 0x36f540: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f53c) {
            ctx->pc = 0x36F56Cu;
            goto label_36f56c;
        }
    }
    ctx->pc = 0x36F544u;
label_36f544:
    // 0x36f544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36f544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36f548:
    // 0x36f548: 0xc0bb7e6  jal         func_2EDF98
label_36f54c:
    if (ctx->pc == 0x36F54Cu) {
        ctx->pc = 0x36F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F548u;
        // 0x36f54c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F550u;
        goto label_36f550;
    }
    ctx->pc = 0x36F548u;
    SET_GPR_U32(ctx, 31, 0x36F550u);
    ctx->pc = 0x36F54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F548u;
    // 0x36f54c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x36F548u, 0x36F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F550u;
label_36f550:
    // 0x36f550: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x36f550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_36f554:
    // 0x36f554: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x36f554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36f558:
    // 0x36f558: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36f558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36f55c:
    // 0x36f55c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36f55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36f560:
    // 0x36f560: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x36f560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36f564:
    // 0x36f564: 0x60f809  jalr        $v1
label_36f568:
    if (ctx->pc == 0x36F568u) {
        ctx->pc = 0x36F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F564u;
        // 0x36f568: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F56Cu;
        goto label_36f56c;
    }
    ctx->pc = 0x36F564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36F56Cu);
        ctx->pc = 0x36F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F564u;
        // 0x36f568: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F564u, 0x36F56Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36F56Cu;
label_36f56c:
    // 0x36f56c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x36f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_36f570:
    // 0x36f570: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_36f574:
    if (ctx->pc == 0x36F574u) {
        ctx->pc = 0x36F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F570u;
        // 0x36f574: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F578u;
        goto label_36f578;
    }
    ctx->pc = 0x36F570u;
    {
        const bool branch_taken_0x36f570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F570u;
        // 0x36f574: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f570) {
            ctx->pc = 0x36F594u;
            goto label_36f594;
        }
    }
    ctx->pc = 0x36F578u;
label_36f578:
    // 0x36f578: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_36f57c:
    if (ctx->pc == 0x36F57Cu) {
        ctx->pc = 0x36F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F578u;
        // 0x36f57c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F580u;
        goto label_36f580;
    }
    ctx->pc = 0x36F578u;
    {
        const bool branch_taken_0x36f578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F578u;
        // 0x36f57c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f578) {
            ctx->pc = 0x36F594u;
            goto label_36f594;
        }
    }
    ctx->pc = 0x36F580u;
label_36f580:
    // 0x36f580: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x36f580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_36f584:
    // 0x36f584: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x36f584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_36f588:
    // 0x36f588: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x36f588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36f58c:
    // 0x36f58c: 0x60f809  jalr        $v1
label_36f590:
    if (ctx->pc == 0x36F590u) {
        ctx->pc = 0x36F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F58Cu;
        // 0x36f590: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F594u;
        goto label_36f594;
    }
    ctx->pc = 0x36F58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36F594u);
        ctx->pc = 0x36F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F58Cu;
        // 0x36f590: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F58Cu, 0x36F594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36F594u;
label_36f594:
    // 0x36f594: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x36f594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_36f598:
    // 0x36f598: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_36f59c:
    if (ctx->pc == 0x36F59Cu) {
        ctx->pc = 0x36F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F598u;
        // 0x36f59c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F5A0u;
        goto label_36f5a0;
    }
    ctx->pc = 0x36F598u;
    {
        const bool branch_taken_0x36f598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F598u;
        // 0x36f59c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f598) {
            ctx->pc = 0x36F5B4u;
            goto label_36f5b4;
        }
    }
    ctx->pc = 0x36F5A0u;
label_36f5a0:
    // 0x36f5a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_36f5a4:
    if (ctx->pc == 0x36F5A4u) {
        ctx->pc = 0x36F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5A0u;
        // 0x36f5a4: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F5A8u;
        goto label_36f5a8;
    }
    ctx->pc = 0x36F5A0u;
    {
        const bool branch_taken_0x36f5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5A0u;
        // 0x36f5a4: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f5a0) {
            ctx->pc = 0x36F5B4u;
            goto label_36f5b4;
        }
    }
    ctx->pc = 0x36F5A8u;
label_36f5a8:
    // 0x36f5a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36f5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36f5ac:
    // 0x36f5ac: 0x60f809  jalr        $v1
label_36f5b0:
    if (ctx->pc == 0x36F5B0u) {
        ctx->pc = 0x36F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5ACu;
        // 0x36f5b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F5B4u;
        goto label_36f5b4;
    }
    ctx->pc = 0x36F5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36F5B4u);
        ctx->pc = 0x36F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5ACu;
        // 0x36f5b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F5ACu, 0x36F5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36F5B4u;
label_36f5b4:
    // 0x36f5b4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x36f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_36f5b8:
    // 0x36f5b8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_36f5bc:
    if (ctx->pc == 0x36F5BCu) {
        ctx->pc = 0x36F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5B8u;
        // 0x36f5bc: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F5C0u;
        goto label_36f5c0;
    }
    ctx->pc = 0x36F5B8u;
    {
        const bool branch_taken_0x36f5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5B8u;
        // 0x36f5bc: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f5b8) {
            ctx->pc = 0x36F5D4u;
            goto label_36f5d4;
        }
    }
    ctx->pc = 0x36F5C0u;
label_36f5c0:
    // 0x36f5c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_36f5c4:
    if (ctx->pc == 0x36F5C4u) {
        ctx->pc = 0x36F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5C0u;
        // 0x36f5c4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F5C8u;
        goto label_36f5c8;
    }
    ctx->pc = 0x36F5C0u;
    {
        const bool branch_taken_0x36f5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5C0u;
        // 0x36f5c4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f5c0) {
            ctx->pc = 0x36F5D4u;
            goto label_36f5d4;
        }
    }
    ctx->pc = 0x36F5C8u;
label_36f5c8:
    // 0x36f5c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36f5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36f5cc:
    // 0x36f5cc: 0x60f809  jalr        $v1
label_36f5d0:
    if (ctx->pc == 0x36F5D0u) {
        ctx->pc = 0x36F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5CCu;
        // 0x36f5d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F5D4u;
        goto label_36f5d4;
    }
    ctx->pc = 0x36F5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36F5D4u);
        ctx->pc = 0x36F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5CCu;
        // 0x36f5d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F5CCu, 0x36F5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36F5D4u;
label_36f5d4:
    // 0x36f5d4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x36f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_36f5d8:
    // 0x36f5d8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_36f5dc:
    if (ctx->pc == 0x36F5DCu) {
        ctx->pc = 0x36F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5D8u;
        // 0x36f5dc: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F5E0u;
        goto label_36f5e0;
    }
    ctx->pc = 0x36F5D8u;
    {
        const bool branch_taken_0x36f5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5D8u;
        // 0x36f5dc: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f5d8) {
            ctx->pc = 0x36F5F4u;
            goto label_36f5f4;
        }
    }
    ctx->pc = 0x36F5E0u;
label_36f5e0:
    // 0x36f5e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_36f5e4:
    if (ctx->pc == 0x36F5E4u) {
        ctx->pc = 0x36F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5E0u;
        // 0x36f5e4: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F5E8u;
        goto label_36f5e8;
    }
    ctx->pc = 0x36F5E0u;
    {
        const bool branch_taken_0x36f5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5E0u;
        // 0x36f5e4: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f5e0) {
            ctx->pc = 0x36F5F4u;
            goto label_36f5f4;
        }
    }
    ctx->pc = 0x36F5E8u;
label_36f5e8:
    // 0x36f5e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36f5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36f5ec:
    // 0x36f5ec: 0x60f809  jalr        $v1
label_36f5f0:
    if (ctx->pc == 0x36F5F0u) {
        ctx->pc = 0x36F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5ECu;
        // 0x36f5f0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F5F4u;
        goto label_36f5f4;
    }
    ctx->pc = 0x36F5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36F5F4u);
        ctx->pc = 0x36F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5ECu;
        // 0x36f5f0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F5ECu, 0x36F5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36F5F4u;
label_36f5f4:
    // 0x36f5f4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x36f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_36f5f8:
    // 0x36f5f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_36f5fc:
    if (ctx->pc == 0x36F5FCu) {
        ctx->pc = 0x36F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5F8u;
        // 0x36f5fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F600u;
        goto label_36f600;
    }
    ctx->pc = 0x36F5F8u;
    {
        const bool branch_taken_0x36f5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5F8u;
        // 0x36f5fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f5f8) {
            ctx->pc = 0x36F614u;
            goto label_36f614;
        }
    }
    ctx->pc = 0x36F600u;
label_36f600:
    // 0x36f600: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36f600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36f604:
    // 0x36f604: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x36f604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36f608:
    // 0x36f608: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x36f608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_36f60c:
    // 0x36f60c: 0x40f809  jalr        $v0
label_36f610:
    if (ctx->pc == 0x36F610u) {
        ctx->pc = 0x36F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F60Cu;
        // 0x36f610: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F614u;
        goto label_36f614;
    }
    ctx->pc = 0x36F60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36F614u);
        ctx->pc = 0x36F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F60Cu;
        // 0x36f610: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F60Cu, 0x36F614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36F614u;
label_36f614:
    // 0x36f614: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x36f614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_36f618:
    // 0x36f618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36f618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f61c:
    // 0x36f61c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x36f61cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_36f620:
    // 0x36f620: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x36f620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_36f624:
    // 0x36f624: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x36f624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_36f628:
    // 0x36f628: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x36f628u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_36f62c:
    // 0x36f62c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x36f62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_36f630:
    // 0x36f630: 0x3e00008  jr          $ra
label_36f634:
    if (ctx->pc == 0x36F634u) {
        ctx->pc = 0x36F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F630u;
        // 0x36f634: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F638u;
        goto label_36f638;
    }
    ctx->pc = 0x36F630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F630u;
        // 0x36f634: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F638u;
label_36f638:
    // 0x36f638: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36f638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_36f63c:
    // 0x36f63c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36f640:
    // 0x36f640: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36f640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_36f644:
    // 0x36f644: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36f644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36f648:
    // 0x36f648: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36f648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36f64c:
    // 0x36f64c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x36f64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_36f650:
    // 0x36f650: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x36f650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36f654:
    // 0x36f654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36f658:
    // 0x36f658: 0x2448b9e0  addiu       $t0, $v0, -0x4620
    ctx->pc = 0x36f658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949344));
label_36f65c:
    // 0x36f65c: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x36f65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_36f660:
    // 0x36f660: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x36f660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_36f664:
    // 0x36f664: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x36f664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_36f668:
    // 0x36f668: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x36f668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f66c:
    // 0x36f66c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x36f66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f670:
    // 0x36f670: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x36f670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_36f674:
    // 0x36f674: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36f674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36f678:
    // 0x36f678: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x36f678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_36f67c:
    // 0x36f67c: 0x8c50005c  lw          $s0, 0x5C($v0)
    ctx->pc = 0x36f67cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_36f680:
    // 0x36f680: 0xc0e33ee  jal         func_38CFB8
label_36f684:
    if (ctx->pc == 0x36F684u) {
        ctx->pc = 0x36F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F680u;
        // 0x36f684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F688u;
        goto label_36f688;
    }
    ctx->pc = 0x36F680u;
    SET_GPR_U32(ctx, 31, 0x36F688u);
    ctx->pc = 0x36F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F680u;
    // 0x36f684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x36F680u, 0x36F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F688u;
label_36f688:
    // 0x36f688: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x36f688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_36f68c:
    // 0x36f68c: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
label_36f690:
    if (ctx->pc == 0x36F690u) {
        ctx->pc = 0x36F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F68Cu;
        // 0x36f690: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F694u;
        goto label_36f694;
    }
    ctx->pc = 0x36F68Cu;
    {
        const bool branch_taken_0x36f68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F68Cu;
        // 0x36f690: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f68c) {
            ctx->pc = 0x36F9A8u;
            goto label_36f9a8;
        }
    }
    ctx->pc = 0x36F694u;
label_36f694:
    // 0x36f694: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x36f694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_36f698:
    // 0x36f698: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x36f698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_36f69c:
    // 0x36f69c: 0x2518823  subu        $s1, $s2, $s1
    ctx->pc = 0x36f69cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_36f6a0:
    // 0x36f6a0: 0x111023  negu        $v0, $s1
    ctx->pc = 0x36f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_36f6a4:
    // 0x36f6a4: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x36f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_36f6a8:
    // 0x36f6a8: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x36f6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_36f6ac:
    // 0x36f6ac: 0x10800055  beqz        $a0, . + 4 + (0x55 << 2)
label_36f6b0:
    if (ctx->pc == 0x36F6B0u) {
        ctx->pc = 0x36F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F6ACu;
        // 0x36f6b0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F6B4u;
        goto label_36f6b4;
    }
    ctx->pc = 0x36F6ACu;
    {
        const bool branch_taken_0x36f6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F6ACu;
        // 0x36f6b0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f6ac) {
            ctx->pc = 0x36F804u;
            goto label_36f804;
        }
    }
    ctx->pc = 0x36F6B4u;
label_36f6b4:
    // 0x36f6b4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x36f6b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_36f6b8:
    // 0x36f6b8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_36f6bc:
    if (ctx->pc == 0x36F6BCu) {
        ctx->pc = 0x36F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F6B8u;
        // 0x36f6bc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F6C0u;
        goto label_36f6c0;
    }
    ctx->pc = 0x36F6B8u;
    {
        const bool branch_taken_0x36f6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F6B8u;
        // 0x36f6bc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f6b8) {
            ctx->pc = 0x36F798u;
            goto label_36f798;
        }
    }
    ctx->pc = 0x36F6C0u;
label_36f6c0:
    // 0x36f6c0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_36f6c4:
    if (ctx->pc == 0x36F6C4u) {
        ctx->pc = 0x36F6C8u;
        goto label_36f6c8;
    }
    ctx->pc = 0x36F6C0u;
    {
        const bool branch_taken_0x36f6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f6c0) {
            ctx->pc = 0x36F730u;
            goto label_36f730;
        }
    }
    ctx->pc = 0x36F6C8u;
label_36f6c8:
    // 0x36f6c8: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x36f6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_36f6cc:
    // 0x36f6cc: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x36f6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_36f6d0:
    // 0x36f6d0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x36f6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f6d4:
    // 0x36f6d4: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x36f6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f6d8:
    // 0x36f6d8: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x36f6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f6dc:
    // 0x36f6dc: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x36f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_36f6e0:
    // 0x36f6e0: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x36f6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_36f6e4:
    // 0x36f6e4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x36f6e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_36f6e8:
    // 0x36f6e8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x36f6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_36f6ec:
    // 0x36f6ec: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x36f6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_36f6f0:
    // 0x36f6f0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x36f6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f6f4:
    // 0x36f6f4: 0xb0a20013  sdl         $v0, 0x13($a1)
    ctx->pc = 0x36f6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f6f8:
    // 0x36f6f8: 0xb4a2000c  sdr         $v0, 0xC($a1)
    ctx->pc = 0x36f6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f6fc:
    // 0x36f6fc: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x36f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
label_36f700:
    // 0x36f700: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_36f704:
    // 0x36f704: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_36f708:
    // 0x36f708: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f708u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f70c:
    // 0x36f70c: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x36f70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f710:
    // 0x36f710: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x36f710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f714:
    // 0x36f714: 0xaca90020  sw          $t1, 0x20($a1)
    ctx->pc = 0x36f714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 9));
label_36f718:
    // 0x36f718: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x36f718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_36f71c:
    // 0x36f71c: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x36f71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_36f720:
    // 0x36f720: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x36f720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f724:
    // 0x36f724: 0xb0a6002b  sdl         $a2, 0x2B($a1)
    ctx->pc = 0x36f724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f728:
    // 0x36f728: 0xb4a60024  sdr         $a2, 0x24($a1)
    ctx->pc = 0x36f728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f72c:
    // 0x36f72c: 0xaca7002c  sw          $a3, 0x2C($a1)
    ctx->pc = 0x36f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 7));
label_36f730:
    // 0x36f730: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x36f730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_36f734:
    // 0x36f734: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x36f734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_36f738:
    // 0x36f738: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x36f738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f73c:
    // 0x36f73c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x36f73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f740:
    // 0x36f740: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x36f740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f744:
    // 0x36f744: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x36f744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_36f748:
    // 0x36f748: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x36f748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_36f74c:
    // 0x36f74c: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f750:
    // 0x36f750: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f754:
    // 0x36f754: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f754u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f758:
    // 0x36f758: 0xb0670013  sdl         $a3, 0x13($v1)
    ctx->pc = 0x36f758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f75c:
    // 0x36f75c: 0xb467000c  sdr         $a3, 0xC($v1)
    ctx->pc = 0x36f75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f760:
    // 0x36f760: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x36f760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
label_36f764:
    // 0x36f764: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x36f764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_36f768:
    // 0x36f768: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x36f768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_36f76c:
    // 0x36f76c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x36f76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f770:
    // 0x36f770: 0xb064001f  sdl         $a0, 0x1F($v1)
    ctx->pc = 0x36f770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f774:
    // 0x36f774: 0xb4640018  sdr         $a0, 0x18($v1)
    ctx->pc = 0x36f774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f778:
    // 0x36f778: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x36f778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_36f77c:
    // 0x36f77c: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x36f77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_36f780:
    // 0x36f780: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x36f780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_36f784:
    // 0x36f784: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x36f784u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f788:
    // 0x36f788: 0xb068002b  sdl         $t0, 0x2B($v1)
    ctx->pc = 0x36f788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f78c:
    // 0x36f78c: 0xb4680024  sdr         $t0, 0x24($v1)
    ctx->pc = 0x36f78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f790:
    // 0x36f790: 0xac69002c  sw          $t1, 0x2C($v1)
    ctx->pc = 0x36f790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 9));
label_36f794:
    // 0x36f794: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x36f794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_36f798:
    // 0x36f798: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x36f798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_36f79c:
    // 0x36f79c: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x36f79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_36f7a0:
    // 0x36f7a0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x36f7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f7a4:
    // 0x36f7a4: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x36f7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f7a8:
    // 0x36f7a8: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x36f7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f7ac:
    // 0x36f7ac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x36f7acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_36f7b0:
    // 0x36f7b0: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x36f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_36f7b4:
    // 0x36f7b4: 0x6ba90007  ldl         $t1, 0x7($sp)
    ctx->pc = 0x36f7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_36f7b8:
    // 0x36f7b8: 0x6fa90000  ldr         $t1, 0x0($sp)
    ctx->pc = 0x36f7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_36f7bc:
    // 0x36f7bc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f7c0:
    // 0x36f7c0: 0xb0690013  sdl         $t1, 0x13($v1)
    ctx->pc = 0x36f7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f7c4:
    // 0x36f7c4: 0xb469000c  sdr         $t1, 0xC($v1)
    ctx->pc = 0x36f7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f7c8:
    // 0x36f7c8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x36f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_36f7cc:
    // 0x36f7cc: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x36f7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_36f7d0:
    // 0x36f7d0: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x36f7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_36f7d4:
    // 0x36f7d4: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x36f7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f7d8:
    // 0x36f7d8: 0xb066001f  sdl         $a2, 0x1F($v1)
    ctx->pc = 0x36f7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f7dc:
    // 0x36f7dc: 0xb4660018  sdr         $a2, 0x18($v1)
    ctx->pc = 0x36f7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f7e0:
    // 0x36f7e0: 0xac670020  sw          $a3, 0x20($v1)
    ctx->pc = 0x36f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 7));
label_36f7e4:
    // 0x36f7e4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x36f7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_36f7e8:
    // 0x36f7e8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x36f7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_36f7ec:
    // 0x36f7ec: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x36f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f7f0:
    // 0x36f7f0: 0xb062002b  sdl         $v0, 0x2B($v1)
    ctx->pc = 0x36f7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f7f4:
    // 0x36f7f4: 0xb4620024  sdr         $v0, 0x24($v1)
    ctx->pc = 0x36f7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f7f8:
    // 0x36f7f8: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x36f7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
label_36f7fc:
    // 0x36f7fc: 0x1220006a  beqz        $s1, . + 4 + (0x6A << 2)
label_36f800:
    if (ctx->pc == 0x36F800u) {
        ctx->pc = 0x36F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F7FCu;
        // 0x36f800: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F804u;
        goto label_36f804;
    }
    ctx->pc = 0x36F7FCu;
    {
        const bool branch_taken_0x36f7fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F7FCu;
        // 0x36f800: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f7fc) {
            ctx->pc = 0x36F9A8u;
            goto label_36f9a8;
        }
    }
    ctx->pc = 0x36F804u;
label_36f804:
    // 0x36f804: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x36f804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_36f808:
    // 0x36f808: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36f808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36f80c:
    // 0x36f80c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36f80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36f810:
    // 0x36f810: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f814:
    // 0x36f814: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f818:
    // 0x36f818: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f818u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f81c:
    // 0x36f81c: 0xb0670007  sdl         $a3, 0x7($v1)
    ctx->pc = 0x36f81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f820:
    // 0x36f820: 0xb4670000  sdr         $a3, 0x0($v1)
    ctx->pc = 0x36f820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f824:
    // 0x36f824: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x36f824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_36f828:
    // 0x36f828: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x36f828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
label_36f82c:
    // 0x36f82c: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f830:
    // 0x36f830: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f834:
    // 0x36f834: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f834u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f838:
    // 0x36f838: 0xb0870013  sdl         $a3, 0x13($a0)
    ctx->pc = 0x36f838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f83c:
    // 0x36f83c: 0xb487000c  sdr         $a3, 0xC($a0)
    ctx->pc = 0x36f83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f840:
    // 0x36f840: 0xac880014  sw          $t0, 0x14($a0)
    ctx->pc = 0x36f840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
label_36f844:
    // 0x36f844: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f848:
    // 0x36f848: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f84c:
    // 0x36f84c: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f84cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f850:
    // 0x36f850: 0xb0a7001f  sdl         $a3, 0x1F($a1)
    ctx->pc = 0x36f850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f854:
    // 0x36f854: 0xb4a70018  sdr         $a3, 0x18($a1)
    ctx->pc = 0x36f854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f858:
    // 0x36f858: 0xaca80020  sw          $t0, 0x20($a1)
    ctx->pc = 0x36f858u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 8));
label_36f85c:
    // 0x36f85c: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f860:
    // 0x36f860: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f864:
    // 0x36f864: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f868:
    // 0x36f868: 0xb047002b  sdl         $a3, 0x2B($v0)
    ctx->pc = 0x36f868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f86c:
    // 0x36f86c: 0xb4470024  sdr         $a3, 0x24($v0)
    ctx->pc = 0x36f86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f870:
    // 0x36f870: 0xac48002c  sw          $t0, 0x2C($v0)
    ctx->pc = 0x36f870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 8));
label_36f874:
    // 0x36f874: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f878:
    // 0x36f878: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f87c:
    // 0x36f87c: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f87cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f880:
    // 0x36f880: 0xb0670037  sdl         $a3, 0x37($v1)
    ctx->pc = 0x36f880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f884:
    // 0x36f884: 0xb4670030  sdr         $a3, 0x30($v1)
    ctx->pc = 0x36f884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f888:
    // 0x36f888: 0xac680038  sw          $t0, 0x38($v1)
    ctx->pc = 0x36f888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 8));
label_36f88c:
    // 0x36f88c: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f890:
    // 0x36f890: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f894:
    // 0x36f894: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f894u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f898:
    // 0x36f898: 0xb0870043  sdl         $a3, 0x43($a0)
    ctx->pc = 0x36f898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f89c:
    // 0x36f89c: 0xb487003c  sdr         $a3, 0x3C($a0)
    ctx->pc = 0x36f89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f8a0:
    // 0x36f8a0: 0xac880044  sw          $t0, 0x44($a0)
    ctx->pc = 0x36f8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 8));
label_36f8a4:
    // 0x36f8a4: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f8a8:
    // 0x36f8a8: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f8ac:
    // 0x36f8ac: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f8acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f8b0:
    // 0x36f8b0: 0xb0a7004f  sdl         $a3, 0x4F($a1)
    ctx->pc = 0x36f8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f8b4:
    // 0x36f8b4: 0xb4a70048  sdr         $a3, 0x48($a1)
    ctx->pc = 0x36f8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f8b8:
    // 0x36f8b8: 0xaca80050  sw          $t0, 0x50($a1)
    ctx->pc = 0x36f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 8));
label_36f8bc:
    // 0x36f8bc: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f8c0:
    // 0x36f8c0: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f8c4:
    // 0x36f8c4: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f8c8:
    // 0x36f8c8: 0xb047005b  sdl         $a3, 0x5B($v0)
    ctx->pc = 0x36f8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f8cc:
    // 0x36f8cc: 0xb4470054  sdr         $a3, 0x54($v0)
    ctx->pc = 0x36f8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f8d0:
    // 0x36f8d0: 0xac48005c  sw          $t0, 0x5C($v0)
    ctx->pc = 0x36f8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 8));
label_36f8d4:
    // 0x36f8d4: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f8d8:
    // 0x36f8d8: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f8dc:
    // 0x36f8dc: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f8e0:
    // 0x36f8e0: 0xb0670067  sdl         $a3, 0x67($v1)
    ctx->pc = 0x36f8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f8e4:
    // 0x36f8e4: 0xb4670060  sdr         $a3, 0x60($v1)
    ctx->pc = 0x36f8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f8e8:
    // 0x36f8e8: 0xac680068  sw          $t0, 0x68($v1)
    ctx->pc = 0x36f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 8));
label_36f8ec:
    // 0x36f8ec: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f8f0:
    // 0x36f8f0: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f8f4:
    // 0x36f8f4: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f8f8:
    // 0x36f8f8: 0xb0870073  sdl         $a3, 0x73($a0)
    ctx->pc = 0x36f8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f8fc:
    // 0x36f8fc: 0xb487006c  sdr         $a3, 0x6C($a0)
    ctx->pc = 0x36f8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f900:
    // 0x36f900: 0xac880074  sw          $t0, 0x74($a0)
    ctx->pc = 0x36f900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 8));
label_36f904:
    // 0x36f904: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f908:
    // 0x36f908: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f90c:
    // 0x36f90c: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f90cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f910:
    // 0x36f910: 0xb0a7007f  sdl         $a3, 0x7F($a1)
    ctx->pc = 0x36f910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f914:
    // 0x36f914: 0xb4a70078  sdr         $a3, 0x78($a1)
    ctx->pc = 0x36f914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f918:
    // 0x36f918: 0xaca80080  sw          $t0, 0x80($a1)
    ctx->pc = 0x36f918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 8));
label_36f91c:
    // 0x36f91c: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f920:
    // 0x36f920: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f924:
    // 0x36f924: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f924u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f928:
    // 0x36f928: 0xb047008b  sdl         $a3, 0x8B($v0)
    ctx->pc = 0x36f928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 139); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f92c:
    // 0x36f92c: 0xb4470084  sdr         $a3, 0x84($v0)
    ctx->pc = 0x36f92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 132); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f930:
    // 0x36f930: 0xac48008c  sw          $t0, 0x8C($v0)
    ctx->pc = 0x36f930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 8));
label_36f934:
    // 0x36f934: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f938:
    // 0x36f938: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f93c:
    // 0x36f93c: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f93cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f940:
    // 0x36f940: 0xb0670097  sdl         $a3, 0x97($v1)
    ctx->pc = 0x36f940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f944:
    // 0x36f944: 0xb4670090  sdr         $a3, 0x90($v1)
    ctx->pc = 0x36f944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f948:
    // 0x36f948: 0xac680098  sw          $t0, 0x98($v1)
    ctx->pc = 0x36f948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 8));
label_36f94c:
    // 0x36f94c: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f950:
    // 0x36f950: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f954:
    // 0x36f954: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f954u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f958:
    // 0x36f958: 0xb08700a3  sdl         $a3, 0xA3($a0)
    ctx->pc = 0x36f958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f95c:
    // 0x36f95c: 0xb487009c  sdr         $a3, 0x9C($a0)
    ctx->pc = 0x36f95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f960:
    // 0x36f960: 0xac8800a4  sw          $t0, 0xA4($a0)
    ctx->pc = 0x36f960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 8));
label_36f964:
    // 0x36f964: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x36f964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_36f968:
    // 0x36f968: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f96c:
    // 0x36f96c: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f970:
    // 0x36f970: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f974:
    // 0x36f974: 0xb0a700af  sdl         $a3, 0xAF($a1)
    ctx->pc = 0x36f974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f978:
    // 0x36f978: 0xb4a700a8  sdr         $a3, 0xA8($a1)
    ctx->pc = 0x36f978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f97c:
    // 0x36f97c: 0xaca800b0  sw          $t0, 0xB0($a1)
    ctx->pc = 0x36f97cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 8));
label_36f980:
    // 0x36f980: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x36f980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_36f984:
    // 0x36f984: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x36f984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_36f988:
    // 0x36f988: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x36f988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_36f98c:
    // 0x36f98c: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x36f98cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_36f990:
    // 0x36f990: 0xb04700bb  sdl         $a3, 0xBB($v0)
    ctx->pc = 0x36f990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 187); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f994:
    // 0x36f994: 0xb44700b4  sdr         $a3, 0xB4($v0)
    ctx->pc = 0x36f994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 180); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_36f998:
    // 0x36f998: 0xac4800bc  sw          $t0, 0xBC($v0)
    ctx->pc = 0x36f998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 8));
label_36f99c:
    // 0x36f99c: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x36f99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_36f9a0:
    // 0x36f9a0: 0x1620ff9b  bnez        $s1, . + 4 + (-0x65 << 2)
label_36f9a4:
    if (ctx->pc == 0x36F9A4u) {
        ctx->pc = 0x36F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9A0u;
        // 0x36f9a4: 0x244200c0  addiu       $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F9A8u;
        goto label_36f9a8;
    }
    ctx->pc = 0x36F9A0u;
    {
        const bool branch_taken_0x36f9a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9A0u;
        // 0x36f9a4: 0x244200c0  addiu       $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f9a0) {
            ctx->pc = 0x36F810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36f810;
        }
    }
    ctx->pc = 0x36F9A8u;
label_36f9a8:
    // 0x36f9a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36f9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_36f9ac:
    // 0x36f9ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x36f9acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36f9b0:
    // 0x36f9b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36f9b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36f9b4:
    // 0x36f9b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36f9b8:
    // 0x36f9b8: 0x3e00008  jr          $ra
label_36f9bc:
    if (ctx->pc == 0x36F9BCu) {
        ctx->pc = 0x36F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9B8u;
        // 0x36f9bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F9C0u;
        goto label_36f9c0;
    }
    ctx->pc = 0x36F9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9B8u;
        // 0x36f9bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F9C0u;
label_36f9c0:
    // 0x36f9c0: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x36f9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_36f9c4:
    // 0x36f9c4: 0x8cca0028  lw          $t2, 0x28($a2)
    ctx->pc = 0x36f9c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_36f9c8:
    // 0x36f9c8: 0x8cc90024  lw          $t1, 0x24($a2)
    ctx->pc = 0x36f9c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_36f9cc:
    // 0x36f9cc: 0x18a0004e  blez        $a1, . + 4 + (0x4E << 2)
label_36f9d0:
    if (ctx->pc == 0x36F9D0u) {
        ctx->pc = 0x36F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9CCu;
        // 0x36f9d0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F9D4u;
        goto label_36f9d4;
    }
    ctx->pc = 0x36F9CCu;
    {
        const bool branch_taken_0x36f9cc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x36F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9CCu;
        // 0x36f9d0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f9cc) {
            ctx->pc = 0x36FB08u;
            goto label_36fb08;
        }
    }
    ctx->pc = 0x36F9D4u;
label_36f9d4:
    // 0x36f9d4: 0x51023  negu        $v0, $a1
    ctx->pc = 0x36f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_36f9d8:
    // 0x36f9d8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x36f9d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36f9dc:
    // 0x36f9dc: 0x30480003  andi        $t0, $v0, 0x3
    ctx->pc = 0x36f9dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_36f9e0:
    // 0x36f9e0: 0x1100001f  beqz        $t0, . + 4 + (0x1F << 2)
label_36f9e4:
    if (ctx->pc == 0x36F9E4u) {
        ctx->pc = 0x36F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9E0u;
        // 0x36f9e4: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F9E8u;
        goto label_36f9e8;
    }
    ctx->pc = 0x36F9E0u;
    {
        const bool branch_taken_0x36f9e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9E0u;
        // 0x36f9e4: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f9e0) {
            ctx->pc = 0x36FA60u;
            goto label_36fa60;
        }
    }
    ctx->pc = 0x36F9E8u;
label_36f9e8:
    // 0x36f9e8: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x36f9e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
label_36f9ec:
    // 0x36f9ec: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_36f9f0:
    if (ctx->pc == 0x36F9F0u) {
        ctx->pc = 0x36F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9ECu;
        // 0x36f9f0: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F9F4u;
        goto label_36f9f4;
    }
    ctx->pc = 0x36F9ECu;
    {
        const bool branch_taken_0x36f9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9ECu;
        // 0x36f9f0: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f9ec) {
            ctx->pc = 0x36FA54u;
            goto label_36fa54;
        }
    }
    ctx->pc = 0x36F9F4u;
label_36f9f4:
    // 0x36f9f4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_36f9f8:
    if (ctx->pc == 0x36F9F8u) {
        ctx->pc = 0x36F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9F4u;
        // 0x36f9f8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F9FCu;
        goto label_36f9fc;
    }
    ctx->pc = 0x36F9F4u;
    {
        const bool branch_taken_0x36f9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f9f4) {
            ctx->pc = 0x36F9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F9F4u;
            // 0x36f9f8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36FA2Cu;
            goto label_36fa2c;
        }
    }
    ctx->pc = 0x36F9FCu;
label_36f9fc:
    // 0x36f9fc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x36f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_36fa00:
    // 0x36fa00: 0x12a3021  addu        $a2, $t1, $t2
    ctx->pc = 0x36fa00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_36fa04:
    // 0x36fa04: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36fa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_36fa08:
    // 0x36fa08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_36fa0c:
    // 0x36fa0c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36fa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_36fa10:
    // 0x36fa10: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36fa10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_36fa14:
    // 0x36fa14: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_36fa18:
    // 0x36fa18: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36fa18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_36fa1c:
    // 0x36fa1c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36fa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_36fa20:
    // 0x36fa20: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36fa20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_36fa24:
    // 0x36fa24: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x36fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_36fa28:
    // 0x36fa28: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fa2c:
    // 0x36fa2c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36fa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_36fa30:
    // 0x36fa30: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x36fa30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_36fa34:
    // 0x36fa34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fa38:
    // 0x36fa38: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fa3c:
    // 0x36fa3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fa40:
    // 0x36fa40: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fa44:
    // 0x36fa44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fa48:
    // 0x36fa48: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fa4c:
    // 0x36fa4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fa50:
    // 0x36fa50: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fa54:
    // 0x36fa54: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fa58:
    // 0x36fa58: 0x10000021  b           . + 4 + (0x21 << 2)
label_36fa5c:
    if (ctx->pc == 0x36FA5Cu) {
        ctx->pc = 0x36FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FA58u;
        // 0x36fa5c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FA60u;
        goto label_36fa60;
    }
    ctx->pc = 0x36FA58u;
    {
        const bool branch_taken_0x36fa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FA58u;
        // 0x36fa5c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fa58) {
            ctx->pc = 0x36FAE0u;
            goto label_36fae0;
        }
    }
    ctx->pc = 0x36FA60u;
label_36fa60:
    // 0x36fa60: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fa64:
    // 0x36fa64: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x36fa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_36fa68:
    // 0x36fa68: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x36fa68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_36fa6c:
    // 0x36fa6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fa70:
    // 0x36fa70: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fa74:
    // 0x36fa74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fa78:
    // 0x36fa78: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fa7c:
    // 0x36fa7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fa80:
    // 0x36fa80: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fa84:
    // 0x36fa84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fa88:
    // 0x36fa88: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fa8c:
    // 0x36fa8c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fa90:
    // 0x36fa90: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x36fa90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_36fa94:
    // 0x36fa94: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fa98:
    // 0x36fa98: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fa9c:
    // 0x36fa9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36faa0:
    // 0x36faa0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36faa4:
    // 0x36faa4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36faa8:
    // 0x36faa8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36faac:
    // 0x36faac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36faacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fab0:
    // 0x36fab0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fab4:
    // 0x36fab4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fab8:
    // 0x36fab8: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x36fab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_36fabc:
    // 0x36fabc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fac0:
    // 0x36fac0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fac4:
    // 0x36fac4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fac8:
    // 0x36fac8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36facc:
    // 0x36facc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36faccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fad0:
    // 0x36fad0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fad4:
    // 0x36fad4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fad8:
    // 0x36fad8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fadc:
    // 0x36fadc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fae0:
    // 0x36fae0: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x36fae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_36fae4:
    // 0x36fae4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fae8:
    // 0x36fae8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36faec:
    // 0x36faec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36faecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36faf0:
    // 0x36faf0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36faf4:
    // 0x36faf4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36faf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36faf8:
    // 0x36faf8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fafc:
    // 0x36fafc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fafcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fb00:
    // 0x36fb00: 0x14a0ffd7  bnez        $a1, . + 4 + (-0x29 << 2)
label_36fb04:
    if (ctx->pc == 0x36FB04u) {
        ctx->pc = 0x36FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB00u;
        // 0x36fb04: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FB08u;
        goto label_36fb08;
    }
    ctx->pc = 0x36FB00u;
    {
        const bool branch_taken_0x36fb00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB00u;
        // 0x36fb04: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fb00) {
            ctx->pc = 0x36FA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36fa60;
        }
    }
    ctx->pc = 0x36FB08u;
label_36fb08:
    // 0x36fb08: 0x3e00008  jr          $ra
label_36fb0c:
    if (ctx->pc == 0x36FB0Cu) {
        ctx->pc = 0x36FB10u;
        goto label_36fb10;
    }
    ctx->pc = 0x36FB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FB10u;
label_36fb10:
    // 0x36fb10: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x36fb10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_36fb14:
    // 0x36fb14: 0x8cc90030  lw          $t1, 0x30($a2)
    ctx->pc = 0x36fb14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_36fb18:
    // 0x36fb18: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x36fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_36fb1c:
    // 0x36fb1c: 0x18a00060  blez        $a1, . + 4 + (0x60 << 2)
label_36fb20:
    if (ctx->pc == 0x36FB20u) {
        ctx->pc = 0x36FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB1Cu;
        // 0x36fb20: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FB24u;
        goto label_36fb24;
    }
    ctx->pc = 0x36FB1Cu;
    {
        const bool branch_taken_0x36fb1c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x36FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB1Cu;
        // 0x36fb20: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fb1c) {
            ctx->pc = 0x36FCA0u;
            goto label_36fca0;
        }
    }
    ctx->pc = 0x36FB24u;
label_36fb24:
    // 0x36fb24: 0x493023  subu        $a2, $v0, $t1
    ctx->pc = 0x36fb24u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_36fb28:
    // 0x36fb28: 0x51023  negu        $v0, $a1
    ctx->pc = 0x36fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_36fb2c:
    // 0x36fb2c: 0x30480003  andi        $t0, $v0, 0x3
    ctx->pc = 0x36fb2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_36fb30:
    // 0x36fb30: 0x11000025  beqz        $t0, . + 4 + (0x25 << 2)
label_36fb34:
    if (ctx->pc == 0x36FB34u) {
        ctx->pc = 0x36FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB30u;
        // 0x36fb34: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FB38u;
        goto label_36fb38;
    }
    ctx->pc = 0x36FB30u;
    {
        const bool branch_taken_0x36fb30 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB30u;
        // 0x36fb34: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fb30) {
            ctx->pc = 0x36FBC8u;
            goto label_36fbc8;
        }
    }
    ctx->pc = 0x36FB38u;
label_36fb38:
    // 0x36fb38: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x36fb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
label_36fb3c:
    // 0x36fb3c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_36fb40:
    if (ctx->pc == 0x36FB40u) {
        ctx->pc = 0x36FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB3Cu;
        // 0x36fb40: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FB44u;
        goto label_36fb44;
    }
    ctx->pc = 0x36FB3Cu;
    {
        const bool branch_taken_0x36fb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB3Cu;
        // 0x36fb40: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fb3c) {
            ctx->pc = 0x36FBB8u;
            goto label_36fbb8;
        }
    }
    ctx->pc = 0x36FB44u;
label_36fb44:
    // 0x36fb44: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_36fb48:
    if (ctx->pc == 0x36FB48u) {
        ctx->pc = 0x36FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB44u;
        // 0x36fb48: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FB4Cu;
        goto label_36fb4c;
    }
    ctx->pc = 0x36FB44u;
    {
        const bool branch_taken_0x36fb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FB44u;
        // 0x36fb48: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fb44) {
            ctx->pc = 0x36FB84u;
            goto label_36fb84;
        }
    }
    ctx->pc = 0x36FB4Cu;
label_36fb4c:
    // 0x36fb4c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36fb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_36fb50:
    // 0x36fb50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fb54:
    // 0x36fb54: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36fb54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_36fb58:
    // 0x36fb58: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_36fb5c:
    // 0x36fb5c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x36fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_36fb60:
    // 0x36fb60: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36fb60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_36fb64:
    // 0x36fb64: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_36fb68:
    // 0x36fb68: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x36fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_36fb6c:
    // 0x36fb6c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_36fb70:
    // 0x36fb70: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_36fb74:
    // 0x36fb74: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x36fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_36fb78:
    // 0x36fb78: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x36fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_36fb7c:
    // 0x36fb7c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_36fb80:
    // 0x36fb80: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x36fb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_36fb84:
    // 0x36fb84: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36fb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_36fb88:
    // 0x36fb88: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fb8c:
    // 0x36fb8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fb90:
    // 0x36fb90: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fb94:
    // 0x36fb94: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x36fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_36fb98:
    // 0x36fb98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fb9c:
    // 0x36fb9c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fba0:
    // 0x36fba0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x36fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_36fba4:
    // 0x36fba4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fba8:
    // 0x36fba8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fbac:
    // 0x36fbac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x36fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_36fbb0:
    // 0x36fbb0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fbb4:
    // 0x36fbb4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fbb8:
    // 0x36fbb8: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x36fbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_36fbbc:
    // 0x36fbbc: 0x1000002b  b           . + 4 + (0x2B << 2)
label_36fbc0:
    if (ctx->pc == 0x36FBC0u) {
        ctx->pc = 0x36FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FBBCu;
        // 0x36fbc0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FBC4u;
        goto label_36fbc4;
    }
    ctx->pc = 0x36FBBCu;
    {
        const bool branch_taken_0x36fbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FBBCu;
        // 0x36fbc0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fbbc) {
            ctx->pc = 0x36FC6Cu;
            goto label_36fc6c;
        }
    }
    ctx->pc = 0x36FBC4u;
label_36fbc4:
    // 0x36fbc4: 0x0  nop
    ctx->pc = 0x36fbc4u;
    // NOP
label_36fbc8:
    // 0x36fbc8: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x36fbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_36fbcc:
    // 0x36fbcc: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x36fbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_36fbd0:
    // 0x36fbd0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fbd4:
    // 0x36fbd4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fbd8:
    // 0x36fbd8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fbdc:
    // 0x36fbdc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x36fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_36fbe0:
    // 0x36fbe0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fbe4:
    // 0x36fbe4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fbe8:
    // 0x36fbe8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x36fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_36fbec:
    // 0x36fbec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fbf0:
    // 0x36fbf0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fbf4:
    // 0x36fbf4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x36fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_36fbf8:
    // 0x36fbf8: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x36fbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_36fbfc:
    // 0x36fbfc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fc00:
    // 0x36fc00: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fc04:
    // 0x36fc04: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fc08:
    // 0x36fc08: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fc0c:
    // 0x36fc0c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fc10:
    // 0x36fc10: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x36fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_36fc14:
    // 0x36fc14: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fc18:
    // 0x36fc18: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fc1c:
    // 0x36fc1c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x36fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_36fc20:
    // 0x36fc20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fc20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fc24:
    // 0x36fc24: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fc28:
    // 0x36fc28: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x36fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_36fc2c:
    // 0x36fc2c: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x36fc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_36fc30:
    // 0x36fc30: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fc34:
    // 0x36fc34: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fc38:
    // 0x36fc38: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fc3c:
    // 0x36fc3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fc40:
    // 0x36fc40: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fc44:
    // 0x36fc44: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x36fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_36fc48:
    // 0x36fc48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fc4c:
    // 0x36fc4c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fc50:
    // 0x36fc50: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x36fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_36fc54:
    // 0x36fc54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fc58:
    // 0x36fc58: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fc5c:
    // 0x36fc5c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x36fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_36fc60:
    // 0x36fc60: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x36fc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_36fc64:
    // 0x36fc64: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fc68:
    // 0x36fc68: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fc6c:
    // 0x36fc6c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fc70:
    // 0x36fc70: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fc70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fc74:
    // 0x36fc74: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fc78:
    // 0x36fc78: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x36fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_36fc7c:
    // 0x36fc7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fc80:
    // 0x36fc80: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fc84:
    // 0x36fc84: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x36fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_36fc88:
    // 0x36fc88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fc8c:
    // 0x36fc8c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36fc90:
    // 0x36fc90: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x36fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_36fc94:
    // 0x36fc94: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36fc94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36fc98:
    // 0x36fc98: 0x14a0ffcb  bnez        $a1, . + 4 + (-0x35 << 2)
label_36fc9c:
    if (ctx->pc == 0x36FC9Cu) {
        ctx->pc = 0x36FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC98u;
        // 0x36fc9c: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FCA0u;
        goto label_36fca0;
    }
    ctx->pc = 0x36FC98u;
    {
        const bool branch_taken_0x36fc98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FC98u;
        // 0x36fc9c: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fc98) {
            ctx->pc = 0x36FBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36fbc8;
        }
    }
    ctx->pc = 0x36FCA0u;
label_36fca0:
    // 0x36fca0: 0x3e00008  jr          $ra
label_36fca4:
    if (ctx->pc == 0x36FCA4u) {
        ctx->pc = 0x36FCA8u;
        goto label_fallthrough_0x36fca0;
    }
    ctx->pc = 0x36FCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36fca0:
    ctx->pc = 0x36FCA8u;
}
