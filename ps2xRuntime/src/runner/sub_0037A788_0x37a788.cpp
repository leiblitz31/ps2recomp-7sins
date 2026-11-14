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

// Function: sub_0037A788
// Address: 0x37a788 - 0x37aee8
void sub_0037A788_0x37a788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A788_0x37a788");
#endif

    switch (ctx->pc) {
        case 0x37a788u: goto label_37a788;
        case 0x37a78cu: goto label_37a78c;
        case 0x37a790u: goto label_37a790;
        case 0x37a794u: goto label_37a794;
        case 0x37a798u: goto label_37a798;
        case 0x37a79cu: goto label_37a79c;
        case 0x37a7a0u: goto label_37a7a0;
        case 0x37a7a4u: goto label_37a7a4;
        case 0x37a7a8u: goto label_37a7a8;
        case 0x37a7acu: goto label_37a7ac;
        case 0x37a7b0u: goto label_37a7b0;
        case 0x37a7b4u: goto label_37a7b4;
        case 0x37a7b8u: goto label_37a7b8;
        case 0x37a7bcu: goto label_37a7bc;
        case 0x37a7c0u: goto label_37a7c0;
        case 0x37a7c4u: goto label_37a7c4;
        case 0x37a7c8u: goto label_37a7c8;
        case 0x37a7ccu: goto label_37a7cc;
        case 0x37a7d0u: goto label_37a7d0;
        case 0x37a7d4u: goto label_37a7d4;
        case 0x37a7d8u: goto label_37a7d8;
        case 0x37a7dcu: goto label_37a7dc;
        case 0x37a7e0u: goto label_37a7e0;
        case 0x37a7e4u: goto label_37a7e4;
        case 0x37a7e8u: goto label_37a7e8;
        case 0x37a7ecu: goto label_37a7ec;
        case 0x37a7f0u: goto label_37a7f0;
        case 0x37a7f4u: goto label_37a7f4;
        case 0x37a7f8u: goto label_37a7f8;
        case 0x37a7fcu: goto label_37a7fc;
        case 0x37a800u: goto label_37a800;
        case 0x37a804u: goto label_37a804;
        case 0x37a808u: goto label_37a808;
        case 0x37a80cu: goto label_37a80c;
        case 0x37a810u: goto label_37a810;
        case 0x37a814u: goto label_37a814;
        case 0x37a818u: goto label_37a818;
        case 0x37a81cu: goto label_37a81c;
        case 0x37a820u: goto label_37a820;
        case 0x37a824u: goto label_37a824;
        case 0x37a828u: goto label_37a828;
        case 0x37a82cu: goto label_37a82c;
        case 0x37a830u: goto label_37a830;
        case 0x37a834u: goto label_37a834;
        case 0x37a838u: goto label_37a838;
        case 0x37a83cu: goto label_37a83c;
        case 0x37a840u: goto label_37a840;
        case 0x37a844u: goto label_37a844;
        case 0x37a848u: goto label_37a848;
        case 0x37a84cu: goto label_37a84c;
        case 0x37a850u: goto label_37a850;
        case 0x37a854u: goto label_37a854;
        case 0x37a858u: goto label_37a858;
        case 0x37a85cu: goto label_37a85c;
        case 0x37a860u: goto label_37a860;
        case 0x37a864u: goto label_37a864;
        case 0x37a868u: goto label_37a868;
        case 0x37a86cu: goto label_37a86c;
        case 0x37a870u: goto label_37a870;
        case 0x37a874u: goto label_37a874;
        case 0x37a878u: goto label_37a878;
        case 0x37a87cu: goto label_37a87c;
        case 0x37a880u: goto label_37a880;
        case 0x37a884u: goto label_37a884;
        case 0x37a888u: goto label_37a888;
        case 0x37a88cu: goto label_37a88c;
        case 0x37a890u: goto label_37a890;
        case 0x37a894u: goto label_37a894;
        case 0x37a898u: goto label_37a898;
        case 0x37a89cu: goto label_37a89c;
        case 0x37a8a0u: goto label_37a8a0;
        case 0x37a8a4u: goto label_37a8a4;
        case 0x37a8a8u: goto label_37a8a8;
        case 0x37a8acu: goto label_37a8ac;
        case 0x37a8b0u: goto label_37a8b0;
        case 0x37a8b4u: goto label_37a8b4;
        case 0x37a8b8u: goto label_37a8b8;
        case 0x37a8bcu: goto label_37a8bc;
        case 0x37a8c0u: goto label_37a8c0;
        case 0x37a8c4u: goto label_37a8c4;
        case 0x37a8c8u: goto label_37a8c8;
        case 0x37a8ccu: goto label_37a8cc;
        case 0x37a8d0u: goto label_37a8d0;
        case 0x37a8d4u: goto label_37a8d4;
        case 0x37a8d8u: goto label_37a8d8;
        case 0x37a8dcu: goto label_37a8dc;
        case 0x37a8e0u: goto label_37a8e0;
        case 0x37a8e4u: goto label_37a8e4;
        case 0x37a8e8u: goto label_37a8e8;
        case 0x37a8ecu: goto label_37a8ec;
        case 0x37a8f0u: goto label_37a8f0;
        case 0x37a8f4u: goto label_37a8f4;
        case 0x37a8f8u: goto label_37a8f8;
        case 0x37a8fcu: goto label_37a8fc;
        case 0x37a900u: goto label_37a900;
        case 0x37a904u: goto label_37a904;
        case 0x37a908u: goto label_37a908;
        case 0x37a90cu: goto label_37a90c;
        case 0x37a910u: goto label_37a910;
        case 0x37a914u: goto label_37a914;
        case 0x37a918u: goto label_37a918;
        case 0x37a91cu: goto label_37a91c;
        case 0x37a920u: goto label_37a920;
        case 0x37a924u: goto label_37a924;
        case 0x37a928u: goto label_37a928;
        case 0x37a92cu: goto label_37a92c;
        case 0x37a930u: goto label_37a930;
        case 0x37a934u: goto label_37a934;
        case 0x37a938u: goto label_37a938;
        case 0x37a93cu: goto label_37a93c;
        case 0x37a940u: goto label_37a940;
        case 0x37a944u: goto label_37a944;
        case 0x37a948u: goto label_37a948;
        case 0x37a94cu: goto label_37a94c;
        case 0x37a950u: goto label_37a950;
        case 0x37a954u: goto label_37a954;
        case 0x37a958u: goto label_37a958;
        case 0x37a95cu: goto label_37a95c;
        case 0x37a960u: goto label_37a960;
        case 0x37a964u: goto label_37a964;
        case 0x37a968u: goto label_37a968;
        case 0x37a96cu: goto label_37a96c;
        case 0x37a970u: goto label_37a970;
        case 0x37a974u: goto label_37a974;
        case 0x37a978u: goto label_37a978;
        case 0x37a97cu: goto label_37a97c;
        case 0x37a980u: goto label_37a980;
        case 0x37a984u: goto label_37a984;
        case 0x37a988u: goto label_37a988;
        case 0x37a98cu: goto label_37a98c;
        case 0x37a990u: goto label_37a990;
        case 0x37a994u: goto label_37a994;
        case 0x37a998u: goto label_37a998;
        case 0x37a99cu: goto label_37a99c;
        case 0x37a9a0u: goto label_37a9a0;
        case 0x37a9a4u: goto label_37a9a4;
        case 0x37a9a8u: goto label_37a9a8;
        case 0x37a9acu: goto label_37a9ac;
        case 0x37a9b0u: goto label_37a9b0;
        case 0x37a9b4u: goto label_37a9b4;
        case 0x37a9b8u: goto label_37a9b8;
        case 0x37a9bcu: goto label_37a9bc;
        case 0x37a9c0u: goto label_37a9c0;
        case 0x37a9c4u: goto label_37a9c4;
        case 0x37a9c8u: goto label_37a9c8;
        case 0x37a9ccu: goto label_37a9cc;
        case 0x37a9d0u: goto label_37a9d0;
        case 0x37a9d4u: goto label_37a9d4;
        case 0x37a9d8u: goto label_37a9d8;
        case 0x37a9dcu: goto label_37a9dc;
        case 0x37a9e0u: goto label_37a9e0;
        case 0x37a9e4u: goto label_37a9e4;
        case 0x37a9e8u: goto label_37a9e8;
        case 0x37a9ecu: goto label_37a9ec;
        case 0x37a9f0u: goto label_37a9f0;
        case 0x37a9f4u: goto label_37a9f4;
        case 0x37a9f8u: goto label_37a9f8;
        case 0x37a9fcu: goto label_37a9fc;
        case 0x37aa00u: goto label_37aa00;
        case 0x37aa04u: goto label_37aa04;
        case 0x37aa08u: goto label_37aa08;
        case 0x37aa0cu: goto label_37aa0c;
        case 0x37aa10u: goto label_37aa10;
        case 0x37aa14u: goto label_37aa14;
        case 0x37aa18u: goto label_37aa18;
        case 0x37aa1cu: goto label_37aa1c;
        case 0x37aa20u: goto label_37aa20;
        case 0x37aa24u: goto label_37aa24;
        case 0x37aa28u: goto label_37aa28;
        case 0x37aa2cu: goto label_37aa2c;
        case 0x37aa30u: goto label_37aa30;
        case 0x37aa34u: goto label_37aa34;
        case 0x37aa38u: goto label_37aa38;
        case 0x37aa3cu: goto label_37aa3c;
        case 0x37aa40u: goto label_37aa40;
        case 0x37aa44u: goto label_37aa44;
        case 0x37aa48u: goto label_37aa48;
        case 0x37aa4cu: goto label_37aa4c;
        case 0x37aa50u: goto label_37aa50;
        case 0x37aa54u: goto label_37aa54;
        case 0x37aa58u: goto label_37aa58;
        case 0x37aa5cu: goto label_37aa5c;
        case 0x37aa60u: goto label_37aa60;
        case 0x37aa64u: goto label_37aa64;
        case 0x37aa68u: goto label_37aa68;
        case 0x37aa6cu: goto label_37aa6c;
        case 0x37aa70u: goto label_37aa70;
        case 0x37aa74u: goto label_37aa74;
        case 0x37aa78u: goto label_37aa78;
        case 0x37aa7cu: goto label_37aa7c;
        case 0x37aa80u: goto label_37aa80;
        case 0x37aa84u: goto label_37aa84;
        case 0x37aa88u: goto label_37aa88;
        case 0x37aa8cu: goto label_37aa8c;
        case 0x37aa90u: goto label_37aa90;
        case 0x37aa94u: goto label_37aa94;
        case 0x37aa98u: goto label_37aa98;
        case 0x37aa9cu: goto label_37aa9c;
        case 0x37aaa0u: goto label_37aaa0;
        case 0x37aaa4u: goto label_37aaa4;
        case 0x37aaa8u: goto label_37aaa8;
        case 0x37aaacu: goto label_37aaac;
        case 0x37aab0u: goto label_37aab0;
        case 0x37aab4u: goto label_37aab4;
        case 0x37aab8u: goto label_37aab8;
        case 0x37aabcu: goto label_37aabc;
        case 0x37aac0u: goto label_37aac0;
        case 0x37aac4u: goto label_37aac4;
        case 0x37aac8u: goto label_37aac8;
        case 0x37aaccu: goto label_37aacc;
        case 0x37aad0u: goto label_37aad0;
        case 0x37aad4u: goto label_37aad4;
        case 0x37aad8u: goto label_37aad8;
        case 0x37aadcu: goto label_37aadc;
        case 0x37aae0u: goto label_37aae0;
        case 0x37aae4u: goto label_37aae4;
        case 0x37aae8u: goto label_37aae8;
        case 0x37aaecu: goto label_37aaec;
        case 0x37aaf0u: goto label_37aaf0;
        case 0x37aaf4u: goto label_37aaf4;
        case 0x37aaf8u: goto label_37aaf8;
        case 0x37aafcu: goto label_37aafc;
        case 0x37ab00u: goto label_37ab00;
        case 0x37ab04u: goto label_37ab04;
        case 0x37ab08u: goto label_37ab08;
        case 0x37ab0cu: goto label_37ab0c;
        case 0x37ab10u: goto label_37ab10;
        case 0x37ab14u: goto label_37ab14;
        case 0x37ab18u: goto label_37ab18;
        case 0x37ab1cu: goto label_37ab1c;
        case 0x37ab20u: goto label_37ab20;
        case 0x37ab24u: goto label_37ab24;
        case 0x37ab28u: goto label_37ab28;
        case 0x37ab2cu: goto label_37ab2c;
        case 0x37ab30u: goto label_37ab30;
        case 0x37ab34u: goto label_37ab34;
        case 0x37ab38u: goto label_37ab38;
        case 0x37ab3cu: goto label_37ab3c;
        case 0x37ab40u: goto label_37ab40;
        case 0x37ab44u: goto label_37ab44;
        case 0x37ab48u: goto label_37ab48;
        case 0x37ab4cu: goto label_37ab4c;
        case 0x37ab50u: goto label_37ab50;
        case 0x37ab54u: goto label_37ab54;
        case 0x37ab58u: goto label_37ab58;
        case 0x37ab5cu: goto label_37ab5c;
        case 0x37ab60u: goto label_37ab60;
        case 0x37ab64u: goto label_37ab64;
        case 0x37ab68u: goto label_37ab68;
        case 0x37ab6cu: goto label_37ab6c;
        case 0x37ab70u: goto label_37ab70;
        case 0x37ab74u: goto label_37ab74;
        case 0x37ab78u: goto label_37ab78;
        case 0x37ab7cu: goto label_37ab7c;
        case 0x37ab80u: goto label_37ab80;
        case 0x37ab84u: goto label_37ab84;
        case 0x37ab88u: goto label_37ab88;
        case 0x37ab8cu: goto label_37ab8c;
        case 0x37ab90u: goto label_37ab90;
        case 0x37ab94u: goto label_37ab94;
        case 0x37ab98u: goto label_37ab98;
        case 0x37ab9cu: goto label_37ab9c;
        case 0x37aba0u: goto label_37aba0;
        case 0x37aba4u: goto label_37aba4;
        case 0x37aba8u: goto label_37aba8;
        case 0x37abacu: goto label_37abac;
        case 0x37abb0u: goto label_37abb0;
        case 0x37abb4u: goto label_37abb4;
        case 0x37abb8u: goto label_37abb8;
        case 0x37abbcu: goto label_37abbc;
        case 0x37abc0u: goto label_37abc0;
        case 0x37abc4u: goto label_37abc4;
        case 0x37abc8u: goto label_37abc8;
        case 0x37abccu: goto label_37abcc;
        case 0x37abd0u: goto label_37abd0;
        case 0x37abd4u: goto label_37abd4;
        case 0x37abd8u: goto label_37abd8;
        case 0x37abdcu: goto label_37abdc;
        case 0x37abe0u: goto label_37abe0;
        case 0x37abe4u: goto label_37abe4;
        case 0x37abe8u: goto label_37abe8;
        case 0x37abecu: goto label_37abec;
        case 0x37abf0u: goto label_37abf0;
        case 0x37abf4u: goto label_37abf4;
        case 0x37abf8u: goto label_37abf8;
        case 0x37abfcu: goto label_37abfc;
        case 0x37ac00u: goto label_37ac00;
        case 0x37ac04u: goto label_37ac04;
        case 0x37ac08u: goto label_37ac08;
        case 0x37ac0cu: goto label_37ac0c;
        case 0x37ac10u: goto label_37ac10;
        case 0x37ac14u: goto label_37ac14;
        case 0x37ac18u: goto label_37ac18;
        case 0x37ac1cu: goto label_37ac1c;
        case 0x37ac20u: goto label_37ac20;
        case 0x37ac24u: goto label_37ac24;
        case 0x37ac28u: goto label_37ac28;
        case 0x37ac2cu: goto label_37ac2c;
        case 0x37ac30u: goto label_37ac30;
        case 0x37ac34u: goto label_37ac34;
        case 0x37ac38u: goto label_37ac38;
        case 0x37ac3cu: goto label_37ac3c;
        case 0x37ac40u: goto label_37ac40;
        case 0x37ac44u: goto label_37ac44;
        case 0x37ac48u: goto label_37ac48;
        case 0x37ac4cu: goto label_37ac4c;
        case 0x37ac50u: goto label_37ac50;
        case 0x37ac54u: goto label_37ac54;
        case 0x37ac58u: goto label_37ac58;
        case 0x37ac5cu: goto label_37ac5c;
        case 0x37ac60u: goto label_37ac60;
        case 0x37ac64u: goto label_37ac64;
        case 0x37ac68u: goto label_37ac68;
        case 0x37ac6cu: goto label_37ac6c;
        case 0x37ac70u: goto label_37ac70;
        case 0x37ac74u: goto label_37ac74;
        case 0x37ac78u: goto label_37ac78;
        case 0x37ac7cu: goto label_37ac7c;
        case 0x37ac80u: goto label_37ac80;
        case 0x37ac84u: goto label_37ac84;
        case 0x37ac88u: goto label_37ac88;
        case 0x37ac8cu: goto label_37ac8c;
        case 0x37ac90u: goto label_37ac90;
        case 0x37ac94u: goto label_37ac94;
        case 0x37ac98u: goto label_37ac98;
        case 0x37ac9cu: goto label_37ac9c;
        case 0x37aca0u: goto label_37aca0;
        case 0x37aca4u: goto label_37aca4;
        case 0x37aca8u: goto label_37aca8;
        case 0x37acacu: goto label_37acac;
        case 0x37acb0u: goto label_37acb0;
        case 0x37acb4u: goto label_37acb4;
        case 0x37acb8u: goto label_37acb8;
        case 0x37acbcu: goto label_37acbc;
        case 0x37acc0u: goto label_37acc0;
        case 0x37acc4u: goto label_37acc4;
        case 0x37acc8u: goto label_37acc8;
        case 0x37acccu: goto label_37accc;
        case 0x37acd0u: goto label_37acd0;
        case 0x37acd4u: goto label_37acd4;
        case 0x37acd8u: goto label_37acd8;
        case 0x37acdcu: goto label_37acdc;
        case 0x37ace0u: goto label_37ace0;
        case 0x37ace4u: goto label_37ace4;
        case 0x37ace8u: goto label_37ace8;
        case 0x37acecu: goto label_37acec;
        case 0x37acf0u: goto label_37acf0;
        case 0x37acf4u: goto label_37acf4;
        case 0x37acf8u: goto label_37acf8;
        case 0x37acfcu: goto label_37acfc;
        case 0x37ad00u: goto label_37ad00;
        case 0x37ad04u: goto label_37ad04;
        case 0x37ad08u: goto label_37ad08;
        case 0x37ad0cu: goto label_37ad0c;
        case 0x37ad10u: goto label_37ad10;
        case 0x37ad14u: goto label_37ad14;
        case 0x37ad18u: goto label_37ad18;
        case 0x37ad1cu: goto label_37ad1c;
        case 0x37ad20u: goto label_37ad20;
        case 0x37ad24u: goto label_37ad24;
        case 0x37ad28u: goto label_37ad28;
        case 0x37ad2cu: goto label_37ad2c;
        case 0x37ad30u: goto label_37ad30;
        case 0x37ad34u: goto label_37ad34;
        case 0x37ad38u: goto label_37ad38;
        case 0x37ad3cu: goto label_37ad3c;
        case 0x37ad40u: goto label_37ad40;
        case 0x37ad44u: goto label_37ad44;
        case 0x37ad48u: goto label_37ad48;
        case 0x37ad4cu: goto label_37ad4c;
        case 0x37ad50u: goto label_37ad50;
        case 0x37ad54u: goto label_37ad54;
        case 0x37ad58u: goto label_37ad58;
        case 0x37ad5cu: goto label_37ad5c;
        case 0x37ad60u: goto label_37ad60;
        case 0x37ad64u: goto label_37ad64;
        case 0x37ad68u: goto label_37ad68;
        case 0x37ad6cu: goto label_37ad6c;
        case 0x37ad70u: goto label_37ad70;
        case 0x37ad74u: goto label_37ad74;
        case 0x37ad78u: goto label_37ad78;
        case 0x37ad7cu: goto label_37ad7c;
        case 0x37ad80u: goto label_37ad80;
        case 0x37ad84u: goto label_37ad84;
        case 0x37ad88u: goto label_37ad88;
        case 0x37ad8cu: goto label_37ad8c;
        case 0x37ad90u: goto label_37ad90;
        case 0x37ad94u: goto label_37ad94;
        case 0x37ad98u: goto label_37ad98;
        case 0x37ad9cu: goto label_37ad9c;
        case 0x37ada0u: goto label_37ada0;
        case 0x37ada4u: goto label_37ada4;
        case 0x37ada8u: goto label_37ada8;
        case 0x37adacu: goto label_37adac;
        case 0x37adb0u: goto label_37adb0;
        case 0x37adb4u: goto label_37adb4;
        case 0x37adb8u: goto label_37adb8;
        case 0x37adbcu: goto label_37adbc;
        case 0x37adc0u: goto label_37adc0;
        case 0x37adc4u: goto label_37adc4;
        case 0x37adc8u: goto label_37adc8;
        case 0x37adccu: goto label_37adcc;
        case 0x37add0u: goto label_37add0;
        case 0x37add4u: goto label_37add4;
        case 0x37add8u: goto label_37add8;
        case 0x37addcu: goto label_37addc;
        case 0x37ade0u: goto label_37ade0;
        case 0x37ade4u: goto label_37ade4;
        case 0x37ade8u: goto label_37ade8;
        case 0x37adecu: goto label_37adec;
        case 0x37adf0u: goto label_37adf0;
        case 0x37adf4u: goto label_37adf4;
        case 0x37adf8u: goto label_37adf8;
        case 0x37adfcu: goto label_37adfc;
        case 0x37ae00u: goto label_37ae00;
        case 0x37ae04u: goto label_37ae04;
        case 0x37ae08u: goto label_37ae08;
        case 0x37ae0cu: goto label_37ae0c;
        case 0x37ae10u: goto label_37ae10;
        case 0x37ae14u: goto label_37ae14;
        case 0x37ae18u: goto label_37ae18;
        case 0x37ae1cu: goto label_37ae1c;
        case 0x37ae20u: goto label_37ae20;
        case 0x37ae24u: goto label_37ae24;
        case 0x37ae28u: goto label_37ae28;
        case 0x37ae2cu: goto label_37ae2c;
        case 0x37ae30u: goto label_37ae30;
        case 0x37ae34u: goto label_37ae34;
        case 0x37ae38u: goto label_37ae38;
        case 0x37ae3cu: goto label_37ae3c;
        case 0x37ae40u: goto label_37ae40;
        case 0x37ae44u: goto label_37ae44;
        case 0x37ae48u: goto label_37ae48;
        case 0x37ae4cu: goto label_37ae4c;
        case 0x37ae50u: goto label_37ae50;
        case 0x37ae54u: goto label_37ae54;
        case 0x37ae58u: goto label_37ae58;
        case 0x37ae5cu: goto label_37ae5c;
        case 0x37ae60u: goto label_37ae60;
        case 0x37ae64u: goto label_37ae64;
        case 0x37ae68u: goto label_37ae68;
        case 0x37ae6cu: goto label_37ae6c;
        case 0x37ae70u: goto label_37ae70;
        case 0x37ae74u: goto label_37ae74;
        case 0x37ae78u: goto label_37ae78;
        case 0x37ae7cu: goto label_37ae7c;
        case 0x37ae80u: goto label_37ae80;
        case 0x37ae84u: goto label_37ae84;
        case 0x37ae88u: goto label_37ae88;
        case 0x37ae8cu: goto label_37ae8c;
        case 0x37ae90u: goto label_37ae90;
        case 0x37ae94u: goto label_37ae94;
        case 0x37ae98u: goto label_37ae98;
        case 0x37ae9cu: goto label_37ae9c;
        case 0x37aea0u: goto label_37aea0;
        case 0x37aea4u: goto label_37aea4;
        case 0x37aea8u: goto label_37aea8;
        case 0x37aeacu: goto label_37aeac;
        case 0x37aeb0u: goto label_37aeb0;
        case 0x37aeb4u: goto label_37aeb4;
        case 0x37aeb8u: goto label_37aeb8;
        case 0x37aebcu: goto label_37aebc;
        case 0x37aec0u: goto label_37aec0;
        case 0x37aec4u: goto label_37aec4;
        case 0x37aec8u: goto label_37aec8;
        case 0x37aeccu: goto label_37aecc;
        case 0x37aed0u: goto label_37aed0;
        case 0x37aed4u: goto label_37aed4;
        case 0x37aed8u: goto label_37aed8;
        case 0x37aedcu: goto label_37aedc;
        case 0x37aee0u: goto label_37aee0;
        case 0x37aee4u: goto label_37aee4;
        default: break;
    }

    ctx->pc = 0x37a788u;

label_37a788:
    // 0x37a788: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x37a788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_37a78c:
    // 0x37a78c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_37a790:
    // 0x37a790: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x37a790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_37a794:
    // 0x37a794: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37a794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37a798:
    // 0x37a798: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37a798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37a79c:
    // 0x37a79c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x37a79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_37a7a0:
    // 0x37a7a0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x37a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_37a7a4:
    // 0x37a7a4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x37a7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_37a7a8:
    // 0x37a7a8: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x37a7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_37a7ac:
    // 0x37a7ac: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x37a7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_37a7b0:
    // 0x37a7b0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x37a7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_37a7b4:
    // 0x37a7b4: 0x2473e880  addiu       $s3, $v1, -0x1780
    ctx->pc = 0x37a7b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_37a7b8:
    // 0x37a7b8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x37a7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_37a7bc:
    // 0x37a7bc: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x37a7bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37a7c0:
    // 0x37a7c0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x37a7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_37a7c4:
    // 0x37a7c4: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x37a7c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
label_37a7c8:
    // 0x37a7c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x37a7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_37a7cc:
    // 0x37a7cc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x37a7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_37a7d0:
    // 0x37a7d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_37a7d4:
    // 0x37a7d4: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x37a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_37a7d8:
    // 0x37a7d8: 0x40f809  jalr        $v0
label_37a7dc:
    if (ctx->pc == 0x37A7DCu) {
        ctx->pc = 0x37A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7D8u;
        // 0x37a7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A7E0u;
        goto label_37a7e0;
    }
    ctx->pc = 0x37A7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37A7E0u);
        ctx->pc = 0x37A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7D8u;
        // 0x37a7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A7D8u, 0x37A7E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37A7E0u;
label_37a7e0:
    // 0x37a7e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x37a7e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37a7e4:
    // 0x37a7e4: 0x16a0000c  bnez        $s5, . + 4 + (0xC << 2)
label_37a7e8:
    if (ctx->pc == 0x37A7E8u) {
        ctx->pc = 0x37A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7E4u;
        // 0x37a7e8: 0x2523018  mult        $a2, $s2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A7ECu;
        goto label_37a7ec;
    }
    ctx->pc = 0x37A7E4u;
    {
        const bool branch_taken_0x37a7e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7E4u;
        // 0x37a7e8: 0x2523018  mult        $a2, $s2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a7e4) {
            ctx->pc = 0x37A818u;
            goto label_37a818;
        }
    }
    ctx->pc = 0x37A7ECu;
label_37a7ec:
    // 0x37a7ec: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37a7f0:
    // 0x37a7f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37a7f4:
    // 0x37a7f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_37a7f8:
    // 0x37a7f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37a7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37a7fc:
    // 0x37a7fc: 0xc1035f6  jal         func_40D7D8
label_37a800:
    if (ctx->pc == 0x37A800u) {
        ctx->pc = 0x37A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7FCu;
        // 0x37a800: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A804u;
        goto label_37a804;
    }
    ctx->pc = 0x37A7FCu;
    SET_GPR_U32(ctx, 31, 0x37A804u);
    ctx->pc = 0x37A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A7FCu;
    // 0x37a800: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37A7FCu, 0x37A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A804u;
label_37a804:
    // 0x37a804: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37a804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37a808:
    // 0x37a808: 0xc103628  jal         func_40D8A0
label_37a80c:
    if (ctx->pc == 0x37A80Cu) {
        ctx->pc = 0x37A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A808u;
        // 0x37a80c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A810u;
        goto label_37a810;
    }
    ctx->pc = 0x37A808u;
    SET_GPR_U32(ctx, 31, 0x37A810u);
    ctx->pc = 0x37A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A808u;
    // 0x37a80c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37A808u, 0x37A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A810u;
label_37a810:
    // 0x37a810: 0x100001a9  b           . + 4 + (0x1A9 << 2)
label_37a814:
    if (ctx->pc == 0x37A814u) {
        ctx->pc = 0x37A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A810u;
        // 0x37a814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A818u;
        goto label_37a818;
    }
    ctx->pc = 0x37A810u;
    {
        const bool branch_taken_0x37a810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A810u;
        // 0x37a814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a810) {
            ctx->pc = 0x37AEB8u;
            goto label_37aeb8;
        }
    }
    ctx->pc = 0x37A818u;
label_37a818:
    // 0x37a818: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x37a818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_37a81c:
    // 0x37a81c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37a81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37a820:
    // 0x37a820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37a820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37a824:
    // 0x37a824: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x37a824u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37a828:
    // 0x37a828: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x37a828u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37a82c:
    // 0x37a82c: 0xc0bb7e6  jal         func_2EDF98
label_37a830:
    if (ctx->pc == 0x37A830u) {
        ctx->pc = 0x37A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A82Cu;
        // 0x37a830: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A834u;
        goto label_37a834;
    }
    ctx->pc = 0x37A82Cu;
    SET_GPR_U32(ctx, 31, 0x37A834u);
    ctx->pc = 0x37A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A82Cu;
    // 0x37a830: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x37A82Cu, 0x37A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A834u;
label_37a834:
    // 0x37a834: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x37a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_37a838:
    // 0x37a838: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37a838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37a83c:
    // 0x37a83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37a83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37a840:
    // 0x37a840: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x37a840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_37a844:
    // 0x37a844: 0x40f809  jalr        $v0
label_37a848:
    if (ctx->pc == 0x37A848u) {
        ctx->pc = 0x37A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A844u;
        // 0x37a848: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A84Cu;
        goto label_37a84c;
    }
    ctx->pc = 0x37A844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37A84Cu);
        ctx->pc = 0x37A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A844u;
        // 0x37a848: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A844u, 0x37A84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37A84Cu;
label_37a84c:
    // 0x37a84c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37a84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37a850:
    // 0x37a850: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_37a854:
    if (ctx->pc == 0x37A854u) {
        ctx->pc = 0x37A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A850u;
        // 0x37a854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A858u;
        goto label_37a858;
    }
    ctx->pc = 0x37A850u;
    {
        const bool branch_taken_0x37a850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A850u;
        // 0x37a854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a850) {
            ctx->pc = 0x37A888u;
            goto label_37a888;
        }
    }
    ctx->pc = 0x37A858u;
label_37a858:
    // 0x37a858: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37a858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37a85c:
    // 0x37a85c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37a85cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37a860:
    // 0x37a860: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x37a860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_37a864:
    // 0x37a864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37a864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37a868:
    // 0x37a868: 0xc1035f6  jal         func_40D7D8
label_37a86c:
    if (ctx->pc == 0x37A86Cu) {
        ctx->pc = 0x37A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A868u;
        // 0x37a86c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A870u;
        goto label_37a870;
    }
    ctx->pc = 0x37A868u;
    SET_GPR_U32(ctx, 31, 0x37A870u);
    ctx->pc = 0x37A86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A868u;
    // 0x37a86c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37A868u, 0x37A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A870u;
label_37a870:
    // 0x37a870: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x37a870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_37a874:
    // 0x37a874: 0xc103628  jal         func_40D8A0
label_37a878:
    if (ctx->pc == 0x37A878u) {
        ctx->pc = 0x37A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A874u;
        // 0x37a878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A87Cu;
        goto label_37a87c;
    }
    ctx->pc = 0x37A874u;
    SET_GPR_U32(ctx, 31, 0x37A87Cu);
    ctx->pc = 0x37A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A874u;
    // 0x37a878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37A874u, 0x37A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A87Cu;
label_37a87c:
    // 0x37a87c: 0x10000046  b           . + 4 + (0x46 << 2)
label_37a880:
    if (ctx->pc == 0x37A880u) {
        ctx->pc = 0x37A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A87Cu;
        // 0x37a880: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A884u;
        goto label_37a884;
    }
    ctx->pc = 0x37A87Cu;
    {
        const bool branch_taken_0x37a87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A87Cu;
        // 0x37a880: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a87c) {
            ctx->pc = 0x37A998u;
            goto label_37a998;
        }
    }
    ctx->pc = 0x37A884u;
label_37a884:
    // 0x37a884: 0x0  nop
    ctx->pc = 0x37a884u;
    // NOP
label_37a888:
    // 0x37a888: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x37a888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37a88c:
    // 0x37a88c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x37a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_37a890:
    // 0x37a890: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37a890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37a894:
    // 0x37a894: 0x116102a  slt         $v0, $t0, $s6
    ctx->pc = 0x37a894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_37a898:
    // 0x37a898: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_37a89c:
    if (ctx->pc == 0x37A89Cu) {
        ctx->pc = 0x37A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A898u;
        // 0x37a89c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A8A0u;
        goto label_37a8a0;
    }
    ctx->pc = 0x37A898u;
    {
        const bool branch_taken_0x37a898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A898u;
        // 0x37a89c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a898) {
            ctx->pc = 0x37A994u;
            goto label_37a994;
        }
    }
    ctx->pc = 0x37A8A0u;
label_37a8a0:
    // 0x37a8a0: 0x2648fffd  addiu       $t0, $s2, -0x3
    ctx->pc = 0x37a8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
label_37a8a4:
    // 0x37a8a4: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x37a8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_37a8a8:
    // 0x37a8a8: 0x81023  negu        $v0, $t0
    ctx->pc = 0x37a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_37a8ac:
    // 0x37a8ac: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x37a8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_37a8b0:
    // 0x37a8b0: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_37a8b4:
    if (ctx->pc == 0x37A8B4u) {
        ctx->pc = 0x37A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A8B0u;
        // 0x37a8b4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A8B8u;
        goto label_37a8b8;
    }
    ctx->pc = 0x37A8B0u;
    {
        const bool branch_taken_0x37a8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A8B0u;
        // 0x37a8b4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a8b0) {
            ctx->pc = 0x37A924u;
            goto label_37a924;
        }
    }
    ctx->pc = 0x37A8B8u;
label_37a8b8:
    // 0x37a8b8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x37a8b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_37a8bc:
    // 0x37a8bc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_37a8c0:
    if (ctx->pc == 0x37A8C0u) {
        ctx->pc = 0x37A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A8BCu;
        // 0x37a8c0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A8C4u;
        goto label_37a8c4;
    }
    ctx->pc = 0x37A8BCu;
    {
        const bool branch_taken_0x37a8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A8BCu;
        // 0x37a8c0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a8bc) {
            ctx->pc = 0x37A904u;
            goto label_37a904;
        }
    }
    ctx->pc = 0x37A8C4u;
label_37a8c4:
    // 0x37a8c4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_37a8c8:
    if (ctx->pc == 0x37A8C8u) {
        ctx->pc = 0x37A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A8C4u;
        // 0x37a8c8: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A8CCu;
        goto label_37a8cc;
    }
    ctx->pc = 0x37A8C4u;
    {
        const bool branch_taken_0x37a8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a8c4) {
            ctx->pc = 0x37A8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A8C4u;
            // 0x37a8c8: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A8ECu;
            goto label_37a8ec;
        }
    }
    ctx->pc = 0x37A8CCu;
label_37a8cc:
    // 0x37a8cc: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x37a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_37a8d0:
    // 0x37a8d0: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x37a8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_37a8d4:
    // 0x37a8d4: 0x8cc3fff8  lw          $v1, -0x8($a2)
    ctx->pc = 0x37a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_37a8d8:
    // 0x37a8d8: 0x2648fffc  addiu       $t0, $s2, -0x4
    ctx->pc = 0x37a8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_37a8dc:
    // 0x37a8dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37a8e0:
    // 0x37a8e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37a8e4:
    // 0x37a8e4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37a8e8:
    // 0x37a8e8: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x37a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_37a8ec:
    // 0x37a8ec: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x37a8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_37a8f0:
    // 0x37a8f0: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x37a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_37a8f4:
    // 0x37a8f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37a8f8:
    // 0x37a8f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37a8fc:
    // 0x37a8fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x37a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_37a900:
    // 0x37a900: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x37a900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_37a904:
    // 0x37a904: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x37a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_37a908:
    // 0x37a908: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x37a908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_37a90c:
    // 0x37a90c: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x37a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_37a910:
    // 0x37a910: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37a910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37a914:
    // 0x37a914: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37a914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37a918:
    // 0x37a918: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x37a918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_37a91c:
    // 0x37a91c: 0x1100001d  beqz        $t0, . + 4 + (0x1D << 2)
label_37a920:
    if (ctx->pc == 0x37A920u) {
        ctx->pc = 0x37A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A91Cu;
        // 0x37a920: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A924u;
        goto label_37a924;
    }
    ctx->pc = 0x37A91Cu;
    {
        const bool branch_taken_0x37a91c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A91Cu;
        // 0x37a920: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a91c) {
            ctx->pc = 0x37A994u;
            goto label_37a994;
        }
    }
    ctx->pc = 0x37A924u;
label_37a924:
    // 0x37a924: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x37a924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37a928:
    // 0x37a928: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x37a928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37a92c:
    // 0x37a92c: 0x0  nop
    ctx->pc = 0x37a92cu;
    // NOP
label_37a930:
    // 0x37a930: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x37a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_37a934:
    // 0x37a934: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x37a934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
label_37a938:
    // 0x37a938: 0x8ce3fff8  lw          $v1, -0x8($a3)
    ctx->pc = 0x37a938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
label_37a93c:
    // 0x37a93c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37a940:
    // 0x37a940: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37a940u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37a944:
    // 0x37a944: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x37a944u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_37a948:
    // 0x37a948: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37a948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37a94c:
    // 0x37a94c: 0x8ce3fffc  lw          $v1, -0x4($a3)
    ctx->pc = 0x37a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_37a950:
    // 0x37a950: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37a950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37a954:
    // 0x37a954: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37a954u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37a958:
    // 0x37a958: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x37a958u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_37a95c:
    // 0x37a95c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x37a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_37a960:
    // 0x37a960: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x37a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_37a964:
    // 0x37a964: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37a964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37a968:
    // 0x37a968: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37a968u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37a96c:
    // 0x37a96c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x37a96cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_37a970:
    // 0x37a970: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x37a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_37a974:
    // 0x37a974: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x37a974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_37a978:
    // 0x37a978: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x37a978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_37a97c:
    // 0x37a97c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37a980:
    // 0x37a980: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x37a980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_37a984:
    // 0x37a984: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37a984u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37a988:
    // 0x37a988: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x37a988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_37a98c:
    // 0x37a98c: 0x1500ffe8  bnez        $t0, . + 4 + (-0x18 << 2)
label_37a990:
    if (ctx->pc == 0x37A990u) {
        ctx->pc = 0x37A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A98Cu;
        // 0x37a990: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A994u;
        goto label_37a994;
    }
    ctx->pc = 0x37A98Cu;
    {
        const bool branch_taken_0x37a98c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A98Cu;
        // 0x37a990: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a98c) {
            ctx->pc = 0x37A930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a930;
        }
    }
    ctx->pc = 0x37A994u;
label_37a994:
    // 0x37a994: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37a994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37a998:
    // 0x37a998: 0x12600063  beqz        $s3, . + 4 + (0x63 << 2)
label_37a99c:
    if (ctx->pc == 0x37A99Cu) {
        ctx->pc = 0x37A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A998u;
        // 0x37a99c: 0x128880  sll         $s1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A9A0u;
        goto label_37a9a0;
    }
    ctx->pc = 0x37A998u;
    {
        const bool branch_taken_0x37a998 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A998u;
        // 0x37a99c: 0x128880  sll         $s1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a998) {
            ctx->pc = 0x37AB28u;
            goto label_37ab28;
        }
    }
    ctx->pc = 0x37A9A0u;
label_37a9a0:
    // 0x37a9a0: 0x27d0e880  addiu       $s0, $fp, -0x1780
    ctx->pc = 0x37a9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_37a9a4:
    // 0x37a9a4: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x37a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_37a9a8:
    // 0x37a9a8: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x37a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_37a9ac:
    // 0x37a9ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37a9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37a9b0:
    // 0x37a9b0: 0x60f809  jalr        $v1
label_37a9b4:
    if (ctx->pc == 0x37A9B4u) {
        ctx->pc = 0x37A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9B0u;
        // 0x37a9b4: 0x8c57fff8  lw          $s7, -0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A9B8u;
        goto label_37a9b8;
    }
    ctx->pc = 0x37A9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x37A9B8u);
        ctx->pc = 0x37A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9B0u;
        // 0x37a9b4: 0x8c57fff8  lw          $s7, -0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A9B0u, 0x37A9B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37A9B8u;
label_37a9b8:
    // 0x37a9b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x37a9b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37a9bc:
    // 0x37a9bc: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x37a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_37a9c0:
    // 0x37a9c0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37a9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37a9c4:
    // 0x37a9c4: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x37a9c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_37a9c8:
    // 0x37a9c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37a9cc:
    // 0x37a9cc: 0x40f809  jalr        $v0
label_37a9d0:
    if (ctx->pc == 0x37A9D0u) {
        ctx->pc = 0x37A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9CCu;
        // 0x37a9d0: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A9D4u;
        goto label_37a9d4;
    }
    ctx->pc = 0x37A9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37A9D4u);
        ctx->pc = 0x37A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9CCu;
        // 0x37a9d0: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A9CCu, 0x37A9D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37A9D4u;
label_37a9d4:
    // 0x37a9d4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37a9d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37a9d8:
    // 0x37a9d8: 0x1500000d  bnez        $t0, . + 4 + (0xD << 2)
label_37a9dc:
    if (ctx->pc == 0x37A9DCu) {
        ctx->pc = 0x37A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9D8u;
        // 0x37a9dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A9E0u;
        goto label_37a9e0;
    }
    ctx->pc = 0x37A9D8u;
    {
        const bool branch_taken_0x37a9d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9D8u;
        // 0x37a9dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a9d8) {
            ctx->pc = 0x37AA10u;
            goto label_37aa10;
        }
    }
    ctx->pc = 0x37A9E0u;
label_37a9e0:
    // 0x37a9e0: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x37a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_37a9e4:
    // 0x37a9e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37a9e8:
    // 0x37a9e8: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x37a9e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_37a9ec:
    // 0x37a9ec: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x37a9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_37a9f0:
    // 0x37a9f0: 0xc1035f6  jal         func_40D7D8
label_37a9f4:
    if (ctx->pc == 0x37A9F4u) {
        ctx->pc = 0x37A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9F0u;
        // 0x37a9f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37A9F8u;
        goto label_37a9f8;
    }
    ctx->pc = 0x37A9F0u;
    SET_GPR_U32(ctx, 31, 0x37A9F8u);
    ctx->pc = 0x37A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A9F0u;
    // 0x37a9f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37A9F0u, 0x37A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A9F8u;
label_37a9f8:
    // 0x37a9f8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x37a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_37a9fc:
    // 0x37a9fc: 0xc103628  jal         func_40D8A0
label_37aa00:
    if (ctx->pc == 0x37AA00u) {
        ctx->pc = 0x37AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9FCu;
        // 0x37aa00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AA04u;
        goto label_37aa04;
    }
    ctx->pc = 0x37A9FCu;
    SET_GPR_U32(ctx, 31, 0x37AA04u);
    ctx->pc = 0x37AA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A9FCu;
    // 0x37aa00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37A9FCu, 0x37AA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AA04u;
label_37aa04:
    // 0x37aa04: 0x10000046  b           . + 4 + (0x46 << 2)
label_37aa08:
    if (ctx->pc == 0x37AA08u) {
        ctx->pc = 0x37AA0Cu;
        goto label_37aa0c;
    }
    ctx->pc = 0x37AA04u;
    {
        const bool branch_taken_0x37aa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37aa04) {
            ctx->pc = 0x37AB20u;
            goto label_37ab20;
        }
    }
    ctx->pc = 0x37AA0Cu;
label_37aa0c:
    // 0x37aa0c: 0x0  nop
    ctx->pc = 0x37aa0cu;
    // NOP
label_37aa10:
    // 0x37aa10: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x37aa10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37aa14:
    // 0x37aa14: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x37aa14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_37aa18:
    // 0x37aa18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37aa1c:
    // 0x37aa1c: 0xf2102a  slt         $v0, $a3, $s2
    ctx->pc = 0x37aa1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_37aa20:
    // 0x37aa20: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_37aa24:
    if (ctx->pc == 0x37AA24u) {
        ctx->pc = 0x37AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA20u;
        // 0x37aa24: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AA28u;
        goto label_37aa28;
    }
    ctx->pc = 0x37AA20u;
    {
        const bool branch_taken_0x37aa20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA20u;
        // 0x37aa24: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aa20) {
            ctx->pc = 0x37AB1Cu;
            goto label_37ab1c;
        }
    }
    ctx->pc = 0x37AA28u;
label_37aa28:
    // 0x37aa28: 0x2647fffe  addiu       $a3, $s2, -0x2
    ctx->pc = 0x37aa28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_37aa2c:
    // 0x37aa2c: 0x25050008  addiu       $a1, $t0, 0x8
    ctx->pc = 0x37aa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_37aa30:
    // 0x37aa30: 0x71023  negu        $v0, $a3
    ctx->pc = 0x37aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_37aa34:
    // 0x37aa34: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x37aa34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_37aa38:
    // 0x37aa38: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_37aa3c:
    if (ctx->pc == 0x37AA3Cu) {
        ctx->pc = 0x37AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA38u;
        // 0x37aa3c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AA40u;
        goto label_37aa40;
    }
    ctx->pc = 0x37AA38u;
    {
        const bool branch_taken_0x37aa38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA38u;
        // 0x37aa3c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aa38) {
            ctx->pc = 0x37AAACu;
            goto label_37aaac;
        }
    }
    ctx->pc = 0x37AA40u;
label_37aa40:
    // 0x37aa40: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x37aa40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_37aa44:
    // 0x37aa44: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_37aa48:
    if (ctx->pc == 0x37AA48u) {
        ctx->pc = 0x37AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA44u;
        // 0x37aa48: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AA4Cu;
        goto label_37aa4c;
    }
    ctx->pc = 0x37AA44u;
    {
        const bool branch_taken_0x37aa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA44u;
        // 0x37aa48: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aa44) {
            ctx->pc = 0x37AA8Cu;
            goto label_37aa8c;
        }
    }
    ctx->pc = 0x37AA4Cu;
label_37aa4c:
    // 0x37aa4c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_37aa50:
    if (ctx->pc == 0x37AA50u) {
        ctx->pc = 0x37AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA4Cu;
        // 0x37aa50: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AA54u;
        goto label_37aa54;
    }
    ctx->pc = 0x37AA4Cu;
    {
        const bool branch_taken_0x37aa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37aa4c) {
            ctx->pc = 0x37AA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37AA4Cu;
            // 0x37aa50: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37AA74u;
            goto label_37aa74;
        }
    }
    ctx->pc = 0x37AA54u;
label_37aa54:
    // 0x37aa54: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x37aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_37aa58:
    // 0x37aa58: 0x2504000c  addiu       $a0, $t0, 0xC
    ctx->pc = 0x37aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_37aa5c:
    // 0x37aa5c: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x37aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_37aa60:
    // 0x37aa60: 0x2647fffd  addiu       $a3, $s2, -0x3
    ctx->pc = 0x37aa60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
label_37aa64:
    // 0x37aa64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37aa68:
    // 0x37aa68: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37aa6c:
    // 0x37aa6c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x37aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_37aa70:
    // 0x37aa70: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x37aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_37aa74:
    // 0x37aa74: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x37aa74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_37aa78:
    // 0x37aa78: 0x8c83fff8  lw          $v1, -0x8($a0)
    ctx->pc = 0x37aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_37aa7c:
    // 0x37aa7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37aa80:
    // 0x37aa80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37aa84:
    // 0x37aa84: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x37aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_37aa88:
    // 0x37aa88: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x37aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_37aa8c:
    // 0x37aa8c: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x37aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_37aa90:
    // 0x37aa90: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x37aa90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_37aa94:
    // 0x37aa94: 0x8c83fff8  lw          $v1, -0x8($a0)
    ctx->pc = 0x37aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_37aa98:
    // 0x37aa98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37aa9c:
    // 0x37aa9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37aaa0:
    // 0x37aaa0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x37aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_37aaa4:
    // 0x37aaa4: 0x10e0001d  beqz        $a3, . + 4 + (0x1D << 2)
label_37aaa8:
    if (ctx->pc == 0x37AAA8u) {
        ctx->pc = 0x37AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AAA4u;
        // 0x37aaa8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AAACu;
        goto label_37aaac;
    }
    ctx->pc = 0x37AAA4u;
    {
        const bool branch_taken_0x37aaa4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AAA4u;
        // 0x37aaa8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aaa4) {
            ctx->pc = 0x37AB1Cu;
            goto label_37ab1c;
        }
    }
    ctx->pc = 0x37AAACu;
label_37aaac:
    // 0x37aaac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x37aaacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37aab0:
    // 0x37aab0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x37aab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37aab4:
    // 0x37aab4: 0x0  nop
    ctx->pc = 0x37aab4u;
    // NOP
label_37aab8:
    // 0x37aab8: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x37aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_37aabc:
    // 0x37aabc: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x37aabcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_37aac0:
    // 0x37aac0: 0x8cc3fff8  lw          $v1, -0x8($a2)
    ctx->pc = 0x37aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_37aac4:
    // 0x37aac4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37aac8:
    // 0x37aac8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37aacc:
    // 0x37aacc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x37aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_37aad0:
    // 0x37aad0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x37aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_37aad4:
    // 0x37aad4: 0x8cc3fffc  lw          $v1, -0x4($a2)
    ctx->pc = 0x37aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_37aad8:
    // 0x37aad8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37aadc:
    // 0x37aadc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37aae0:
    // 0x37aae0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x37aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_37aae4:
    // 0x37aae4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x37aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_37aae8:
    // 0x37aae8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x37aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37aaec:
    // 0x37aaec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37aaf0:
    // 0x37aaf0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37aaf4:
    // 0x37aaf4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37aaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37aaf8:
    // 0x37aaf8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_37aafc:
    // 0x37aafc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x37aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_37ab00:
    // 0x37ab00: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x37ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_37ab04:
    // 0x37ab04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37ab08:
    // 0x37ab08: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x37ab08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_37ab0c:
    // 0x37ab0c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37ab10:
    // 0x37ab10: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x37ab10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_37ab14:
    // 0x37ab14: 0x14e0ffe8  bnez        $a3, . + 4 + (-0x18 << 2)
label_37ab18:
    if (ctx->pc == 0x37AB18u) {
        ctx->pc = 0x37AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB14u;
        // 0x37ab18: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AB1Cu;
        goto label_37ab1c;
    }
    ctx->pc = 0x37AB14u;
    {
        const bool branch_taken_0x37ab14 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB14u;
        // 0x37ab18: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab14) {
            ctx->pc = 0x37AAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37aab8;
        }
    }
    ctx->pc = 0x37AB1Cu;
label_37ab1c:
    // 0x37ab1c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x37ab1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_37ab20:
    // 0x37ab20: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_37ab24:
    if (ctx->pc == 0x37AB24u) {
        ctx->pc = 0x37AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB20u;
        // 0x37ab24: 0x2649fffe  addiu       $t1, $s2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AB28u;
        goto label_37ab28;
    }
    ctx->pc = 0x37AB20u;
    {
        const bool branch_taken_0x37ab20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB20u;
        // 0x37ab24: 0x2649fffe  addiu       $t1, $s2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab20) {
            ctx->pc = 0x37AB40u;
            goto label_37ab40;
        }
    }
    ctx->pc = 0x37AB28u;
label_37ab28:
    // 0x37ab28: 0x27c3e880  addiu       $v1, $fp, -0x1780
    ctx->pc = 0x37ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_37ab2c:
    // 0x37ab2c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x37ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_37ab30:
    // 0x37ab30: 0x40f809  jalr        $v0
label_37ab34:
    if (ctx->pc == 0x37AB34u) {
        ctx->pc = 0x37AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB30u;
        // 0x37ab34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AB38u;
        goto label_37ab38;
    }
    ctx->pc = 0x37AB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37AB38u);
        ctx->pc = 0x37AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB30u;
        // 0x37ab34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AB30u, 0x37AB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37AB38u;
label_37ab38:
    // 0x37ab38: 0x100000df  b           . + 4 + (0xDF << 2)
label_37ab3c:
    if (ctx->pc == 0x37AB3Cu) {
        ctx->pc = 0x37AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB38u;
        // 0x37ab3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AB40u;
        goto label_37ab40;
    }
    ctx->pc = 0x37AB38u;
    {
        const bool branch_taken_0x37ab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB38u;
        // 0x37ab3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab38) {
            ctx->pc = 0x37AEB8u;
            goto label_37aeb8;
        }
    }
    ctx->pc = 0x37AB40u;
label_37ab40:
    // 0x37ab40: 0x520002e  bltz        $t1, . + 4 + (0x2E << 2)
label_37ab44:
    if (ctx->pc == 0x37AB44u) {
        ctx->pc = 0x37AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB40u;
        // 0x37ab44: 0x32470001  andi        $a3, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AB48u;
        goto label_37ab48;
    }
    ctx->pc = 0x37AB40u;
    {
        const bool branch_taken_0x37ab40 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x37AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB40u;
        // 0x37ab44: 0x32470001  andi        $a3, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab40) {
            ctx->pc = 0x37ABFCu;
            goto label_37abfc;
        }
    }
    ctx->pc = 0x37AB48u;
label_37ab48:
    // 0x37ab48: 0x91827  nor         $v1, $zero, $t1
    ctx->pc = 0x37ab48u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
label_37ab4c:
    // 0x37ab4c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x37ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_37ab50:
    // 0x37ab50: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x37ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_37ab54:
    // 0x37ab54: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x37ab54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_37ab58:
    // 0x37ab58: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_37ab5c:
    if (ctx->pc == 0x37AB5Cu) {
        ctx->pc = 0x37AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB58u;
        // 0x37ab5c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AB60u;
        goto label_37ab60;
    }
    ctx->pc = 0x37AB58u;
    {
        const bool branch_taken_0x37ab58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB58u;
        // 0x37ab5c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab58) {
            ctx->pc = 0x37ABBCu;
            goto label_37abbc;
        }
    }
    ctx->pc = 0x37AB60u;
label_37ab60:
    // 0x37ab60: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x37ab60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_37ab64:
    // 0x37ab64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_37ab68:
    if (ctx->pc == 0x37AB68u) {
        ctx->pc = 0x37AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB64u;
        // 0x37ab68: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AB6Cu;
        goto label_37ab6c;
    }
    ctx->pc = 0x37AB64u;
    {
        const bool branch_taken_0x37ab64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB64u;
        // 0x37ab68: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab64) {
            ctx->pc = 0x37ABA4u;
            goto label_37aba4;
        }
    }
    ctx->pc = 0x37AB6Cu;
label_37ab6c:
    // 0x37ab6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_37ab70:
    if (ctx->pc == 0x37AB70u) {
        ctx->pc = 0x37AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB6Cu;
        // 0x37ab70: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AB74u;
        goto label_37ab74;
    }
    ctx->pc = 0x37AB6Cu;
    {
        const bool branch_taken_0x37ab6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB6Cu;
        // 0x37ab70: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab6c) {
            ctx->pc = 0x37AB90u;
            goto label_37ab90;
        }
    }
    ctx->pc = 0x37AB74u;
label_37ab74:
    // 0x37ab74: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_37ab78:
    if (ctx->pc == 0x37AB78u) {
        ctx->pc = 0x37AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB74u;
        // 0x37ab78: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AB7Cu;
        goto label_37ab7c;
    }
    ctx->pc = 0x37AB74u;
    {
        const bool branch_taken_0x37ab74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB74u;
        // 0x37ab78: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab74) {
            ctx->pc = 0x37ABC0u;
            goto label_37abc0;
        }
    }
    ctx->pc = 0x37AB7Cu;
label_37ab7c:
    // 0x37ab7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x37ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_37ab80:
    // 0x37ab80: 0x24a3fff8  addiu       $v1, $a1, -0x8
    ctx->pc = 0x37ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_37ab84:
    // 0x37ab84: 0x2649fffc  addiu       $t1, $s2, -0x4
    ctx->pc = 0x37ab84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_37ab88:
    // 0x37ab88: 0x21023  negu        $v0, $v0
    ctx->pc = 0x37ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_37ab8c:
    // 0x37ab8c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x37ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_37ab90:
    // 0x37ab90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37ab94:
    // 0x37ab94: 0x2529fffe  addiu       $t1, $t1, -0x2
    ctx->pc = 0x37ab94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967294));
label_37ab98:
    // 0x37ab98: 0x21023  negu        $v0, $v0
    ctx->pc = 0x37ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_37ab9c:
    // 0x37ab9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_37aba0:
    // 0x37aba0: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x37aba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_37aba4:
    // 0x37aba4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37aba8:
    // 0x37aba8: 0x2529fffe  addiu       $t1, $t1, -0x2
    ctx->pc = 0x37aba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967294));
label_37abac:
    // 0x37abac: 0x21023  negu        $v0, $v0
    ctx->pc = 0x37abacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_37abb0:
    // 0x37abb0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_37abb4:
    // 0x37abb4: 0x5200011  bltz        $t1, . + 4 + (0x11 << 2)
label_37abb8:
    if (ctx->pc == 0x37ABB8u) {
        ctx->pc = 0x37ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ABB4u;
        // 0x37abb8: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37ABBCu;
        goto label_37abbc;
    }
    ctx->pc = 0x37ABB4u;
    {
        const bool branch_taken_0x37abb4 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x37ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ABB4u;
        // 0x37abb8: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37abb4) {
            ctx->pc = 0x37ABFCu;
            goto label_37abfc;
        }
    }
    ctx->pc = 0x37ABBCu;
label_37abbc:
    // 0x37abbc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x37abbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37abc0:
    // 0x37abc0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x37abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37abc4:
    // 0x37abc4: 0x2529fff8  addiu       $t1, $t1, -0x8
    ctx->pc = 0x37abc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
label_37abc8:
    // 0x37abc8: 0x8cc4fff8  lw          $a0, -0x8($a2)
    ctx->pc = 0x37abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_37abcc:
    // 0x37abcc: 0x8cc5fff0  lw          $a1, -0x10($a2)
    ctx->pc = 0x37abccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_37abd0:
    // 0x37abd0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x37abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_37abd4:
    // 0x37abd4: 0x8cc2ffe8  lw          $v0, -0x18($a2)
    ctx->pc = 0x37abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967272)));
label_37abd8:
    // 0x37abd8: 0x42023  negu        $a0, $a0
    ctx->pc = 0x37abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_37abdc:
    // 0x37abdc: 0x52823  negu        $a1, $a1
    ctx->pc = 0x37abdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_37abe0:
    // 0x37abe0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x37abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_37abe4:
    // 0x37abe4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x37abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_37abe8:
    // 0x37abe8: 0xacc4fff8  sw          $a0, -0x8($a2)
    ctx->pc = 0x37abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967288), GPR_U32(ctx, 4));
label_37abec:
    // 0x37abec: 0xacc5fff0  sw          $a1, -0x10($a2)
    ctx->pc = 0x37abecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 5));
label_37abf0:
    // 0x37abf0: 0xacc2ffe8  sw          $v0, -0x18($a2)
    ctx->pc = 0x37abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967272), GPR_U32(ctx, 2));
label_37abf4:
    // 0x37abf4: 0x521fff2  bgez        $t1, . + 4 + (-0xE << 2)
label_37abf8:
    if (ctx->pc == 0x37ABF8u) {
        ctx->pc = 0x37ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ABF4u;
        // 0x37abf8: 0x24c6ffe0  addiu       $a2, $a2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37ABFCu;
        goto label_37abfc;
    }
    ctx->pc = 0x37ABF4u;
    {
        const bool branch_taken_0x37abf4 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x37ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ABF4u;
        // 0x37abf8: 0x24c6ffe0  addiu       $a2, $a2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37abf4) {
            ctx->pc = 0x37ABC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37abc0;
        }
    }
    ctx->pc = 0x37ABFCu;
label_37abfc:
    // 0x37abfc: 0x240bfffe  addiu       $t3, $zero, -0x2
    ctx->pc = 0x37abfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_37ac00:
    // 0x37ac00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37ac04:
    // 0x37ac04: 0x47580b  movn        $t3, $v0, $a3
    ctx->pc = 0x37ac04u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 2));
label_37ac08:
    // 0x37ac08: 0x1a400063  blez        $s2, . + 4 + (0x63 << 2)
label_37ac0c:
    if (ctx->pc == 0x37AC0Cu) {
        ctx->pc = 0x37AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC08u;
        // 0x37ac0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AC10u;
        goto label_37ac10;
    }
    ctx->pc = 0x37AC08u;
    {
        const bool branch_taken_0x37ac08 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x37AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC08u;
        // 0x37ac0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac08) {
            ctx->pc = 0x37AD98u;
            goto label_37ad98;
        }
    }
    ctx->pc = 0x37AC10u;
label_37ac10:
    // 0x37ac10: 0x44971800  mtc1        $s7, $f3
    ctx->pc = 0x37ac10u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_37ac14:
    // 0x37ac14: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x37ac14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_37ac18:
    // 0x37ac18: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x37ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_37ac1c:
    // 0x37ac1c: 0x0  nop
    ctx->pc = 0x37ac1cu;
    // NOP
label_37ac20:
    // 0x37ac20: 0x2492018  mult        $a0, $s2, $t1
    ctx->pc = 0x37ac20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_37ac24:
    // 0x37ac24: 0x2431023  subu        $v0, $s2, $v1
    ctx->pc = 0x37ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_37ac28:
    // 0x37ac28: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x37ac28u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37ac2c:
    // 0x37ac2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37ac30:
    // 0x37ac30: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x37ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_37ac34:
    // 0x37ac34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37ac38:
    // 0x37ac38: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x37ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_37ac3c:
    // 0x37ac3c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x37ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_37ac40:
    // 0x37ac40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ac40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ac44:
    // 0x37ac44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37ac44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37ac48:
    // 0x37ac48: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x37ac48u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
label_37ac4c:
    // 0x37ac4c: 0x1920004e  blez        $t1, . + 4 + (0x4E << 2)
label_37ac50:
    if (ctx->pc == 0x37AC50u) {
        ctx->pc = 0x37AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC4Cu;
        // 0x37ac50: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AC54u;
        goto label_37ac54;
    }
    ctx->pc = 0x37AC4Cu;
    {
        const bool branch_taken_0x37ac4c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x37AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC4Cu;
        // 0x37ac50: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac4c) {
            ctx->pc = 0x37AD88u;
            goto label_37ad88;
        }
    }
    ctx->pc = 0x37AC54u;
label_37ac54:
    // 0x37ac54: 0x91023  negu        $v0, $t1
    ctx->pc = 0x37ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
label_37ac58:
    // 0x37ac58: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x37ac58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37ac5c:
    // 0x37ac5c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x37ac5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_37ac60:
    // 0x37ac60: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x37ac60u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_37ac64:
    // 0x37ac64: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x37ac64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_37ac68:
    // 0x37ac68: 0x26660004  addiu       $a2, $s3, 0x4
    ctx->pc = 0x37ac68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_37ac6c:
    // 0x37ac6c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_37ac70:
    if (ctx->pc == 0x37AC70u) {
        ctx->pc = 0x37AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC6Cu;
        // 0x37ac70: 0x24880004  addiu       $t0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AC74u;
        goto label_37ac74;
    }
    ctx->pc = 0x37AC6Cu;
    {
        const bool branch_taken_0x37ac6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC6Cu;
        // 0x37ac70: 0x24880004  addiu       $t0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac6c) {
            ctx->pc = 0x37AD04u;
            goto label_37ad04;
        }
    }
    ctx->pc = 0x37AC74u;
label_37ac74:
    // 0x37ac74: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x37ac74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_37ac78:
    // 0x37ac78: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_37ac7c:
    if (ctx->pc == 0x37AC7Cu) {
        ctx->pc = 0x37AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC78u;
        // 0x37ac7c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AC80u;
        goto label_37ac80;
    }
    ctx->pc = 0x37AC78u;
    {
        const bool branch_taken_0x37ac78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC78u;
        // 0x37ac7c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac78) {
            ctx->pc = 0x37ACD8u;
            goto label_37acd8;
        }
    }
    ctx->pc = 0x37AC80u;
label_37ac80:
    // 0x37ac80: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_37ac84:
    if (ctx->pc == 0x37AC84u) {
        ctx->pc = 0x37AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC80u;
        // 0x37ac84: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AC88u;
        goto label_37ac88;
    }
    ctx->pc = 0x37AC80u;
    {
        const bool branch_taken_0x37ac80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ac80) {
            ctx->pc = 0x37AC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37AC80u;
            // 0x37ac84: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37ACB4u;
            goto label_37acb4;
        }
    }
    ctx->pc = 0x37AC88u;
label_37ac88:
    // 0x37ac88: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x37ac88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_37ac8c:
    // 0x37ac8c: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x37ac8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_37ac90:
    // 0x37ac90: 0x2527ffff  addiu       $a3, $t1, -0x1
    ctx->pc = 0x37ac90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_37ac94:
    // 0x37ac94: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x37ac94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_37ac98:
    // 0x37ac98: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x37ac98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37ac9c:
    // 0x37ac9c: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x37ac9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37aca0:
    // 0x37aca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37aca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37aca4:
    // 0x37aca4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37aca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37aca8:
    // 0x37aca8: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x37aca8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_37acac:
    // 0x37acac: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x37acacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_37acb0:
    // 0x37acb0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x37acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37acb4:
    // 0x37acb4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x37acb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_37acb8:
    // 0x37acb8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x37acb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_37acbc:
    // 0x37acbc: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x37acbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37acc0:
    // 0x37acc0: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x37acc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37acc4:
    // 0x37acc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37acc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37acc8:
    // 0x37acc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37acc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37accc:
    // 0x37accc: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x37acccu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_37acd0:
    // 0x37acd0: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x37acd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_37acd4:
    // 0x37acd4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x37acd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_37acd8:
    // 0x37acd8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x37acd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37acdc:
    // 0x37acdc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x37acdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_37ace0:
    // 0x37ace0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x37ace0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_37ace4:
    // 0x37ace4: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x37ace4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37ace8:
    // 0x37ace8: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x37ace8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37acec:
    // 0x37acec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37acecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37acf0:
    // 0x37acf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37acf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37acf4:
    // 0x37acf4: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x37acf4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_37acf8:
    // 0x37acf8: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x37acf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_37acfc:
    // 0x37acfc: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
label_37ad00:
    if (ctx->pc == 0x37AD00u) {
        ctx->pc = 0x37AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ACFCu;
        // 0x37ad00: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AD04u;
        goto label_37ad04;
    }
    ctx->pc = 0x37ACFCu;
    {
        const bool branch_taken_0x37acfc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ACFCu;
        // 0x37ad00: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37acfc) {
            ctx->pc = 0x37AD88u;
            goto label_37ad88;
        }
    }
    ctx->pc = 0x37AD04u;
label_37ad04:
    // 0x37ad04: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x37ad04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_37ad08:
    // 0x37ad08: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x37ad08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_37ad0c:
    // 0x37ad0c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x37ad0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_37ad10:
    // 0x37ad10: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x37ad10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37ad14:
    // 0x37ad14: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x37ad14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_37ad18:
    // 0x37ad18: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x37ad18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37ad1c:
    // 0x37ad1c: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x37ad1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37ad20:
    // 0x37ad20: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x37ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_37ad24:
    // 0x37ad24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ad24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ad28:
    // 0x37ad28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37ad28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37ad2c:
    // 0x37ad2c: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x37ad2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37ad30:
    // 0x37ad30: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x37ad30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37ad34:
    // 0x37ad34: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x37ad34u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_37ad38:
    // 0x37ad38: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x37ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_37ad3c:
    // 0x37ad3c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x37ad3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_37ad40:
    // 0x37ad40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ad40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ad44:
    // 0x37ad44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37ad44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37ad48:
    // 0x37ad48: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x37ad48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37ad4c:
    // 0x37ad4c: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x37ad4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37ad50:
    // 0x37ad50: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x37ad50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_37ad54:
    // 0x37ad54: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x37ad54u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_37ad58:
    // 0x37ad58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ad58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ad5c:
    // 0x37ad5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37ad5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37ad60:
    // 0x37ad60: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x37ad60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37ad64:
    // 0x37ad64: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x37ad64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_37ad68:
    // 0x37ad68: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x37ad68u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_37ad6c:
    // 0x37ad6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ad6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ad70:
    // 0x37ad70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37ad70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37ad74:
    // 0x37ad74: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x37ad74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_37ad78:
    // 0x37ad78: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x37ad78u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_37ad7c:
    // 0x37ad7c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x37ad7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_37ad80:
    // 0x37ad80: 0x14e0ffe1  bnez        $a3, . + 4 + (-0x1F << 2)
label_37ad84:
    if (ctx->pc == 0x37AD84u) {
        ctx->pc = 0x37AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD80u;
        // 0x37ad84: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AD88u;
        goto label_37ad88;
    }
    ctx->pc = 0x37AD80u;
    {
        const bool branch_taken_0x37ad80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD80u;
        // 0x37ad84: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ad80) {
            ctx->pc = 0x37AD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ad08;
        }
    }
    ctx->pc = 0x37AD88u;
label_37ad88:
    // 0x37ad88: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x37ad88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_37ad8c:
    // 0x37ad8c: 0x132102a  slt         $v0, $t1, $s2
    ctx->pc = 0x37ad8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_37ad90:
    // 0x37ad90: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
label_37ad94:
    if (ctx->pc == 0x37AD94u) {
        ctx->pc = 0x37AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD90u;
        // 0x37ad94: 0x25230001  addiu       $v1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AD98u;
        goto label_37ad98;
    }
    ctx->pc = 0x37AD90u;
    {
        const bool branch_taken_0x37ad90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD90u;
        // 0x37ad94: 0x25230001  addiu       $v1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ad90) {
            ctx->pc = 0x37AC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ac20;
        }
    }
    ctx->pc = 0x37AD98u;
label_37ad98:
    // 0x37ad98: 0x2521018  mult        $v0, $s2, $s2
    ctx->pc = 0x37ad98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37ad9c:
    // 0x37ad9c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x37ad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ada0:
    // 0x37ada0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37ada0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ada4:
    // 0x37ada4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37ada8:
    // 0x37ada8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x37ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_37adac:
    // 0x37adac: 0x1a40003d  blez        $s2, . + 4 + (0x3D << 2)
label_37adb0:
    if (ctx->pc == 0x37ADB0u) {
        ctx->pc = 0x37ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADACu;
        // 0x37adb0: 0xe440fffc  swc1        $f0, -0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37ADB4u;
        goto label_37adb4;
    }
    ctx->pc = 0x37ADACu;
    {
        const bool branch_taken_0x37adac = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x37ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADACu;
        // 0x37adb0: 0xe440fffc  swc1        $f0, -0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37adac) {
            ctx->pc = 0x37AEA4u;
            goto label_37aea4;
        }
    }
    ctx->pc = 0x37ADB4u;
label_37adb4:
    // 0x37adb4: 0x165880  sll         $t3, $s6, 2
    ctx->pc = 0x37adb4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_37adb8:
    // 0x37adb8: 0x165027  nor         $t2, $zero, $s6
    ctx->pc = 0x37adb8u;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
label_37adbc:
    // 0x37adbc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x37adbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_37adc0:
    // 0x37adc0: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x37adc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_37adc4:
    // 0x37adc4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_37adc8:
    if (ctx->pc == 0x37ADC8u) {
        ctx->pc = 0x37ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADC4u;
        // 0x37adc8: 0x252c0001  addiu       $t4, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37ADCCu;
        goto label_37adcc;
    }
    ctx->pc = 0x37ADC4u;
    {
        const bool branch_taken_0x37adc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADC4u;
        // 0x37adc8: 0x252c0001  addiu       $t4, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37adc4) {
            ctx->pc = 0x37AE94u;
            goto label_37ae94;
        }
    }
    ctx->pc = 0x37ADCCu;
label_37adcc:
    // 0x37adcc: 0x2492023  subu        $a0, $s2, $t1
    ctx->pc = 0x37adccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_37add0:
    // 0x37add0: 0x1321818  mult        $v1, $t1, $s2
    ctx->pc = 0x37add0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37add4:
    // 0x37add4: 0x2441018  mult        $v0, $s2, $a0
    ctx->pc = 0x37add4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37add8:
    // 0x37add8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37add8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37addc:
    // 0x37addc: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x37addcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_37ade0:
    // 0x37ade0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x37ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_37ade4:
    // 0x37ade4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x37ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_37ade8:
    // 0x37ade8: 0x1271023  subu        $v0, $t1, $a3
    ctx->pc = 0x37ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_37adec:
    // 0x37adec: 0x1633021  addu        $a2, $t3, $v1
    ctx->pc = 0x37adecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_37adf0:
    // 0x37adf0: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x37adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_37adf4:
    // 0x37adf4: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x37adf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_37adf8:
    // 0x37adf8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x37adf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37adfc:
    // 0x37adfc: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_37ae00:
    if (ctx->pc == 0x37AE00u) {
        ctx->pc = 0x37AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADFCu;
        // 0x37ae00: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AE04u;
        goto label_37ae04;
    }
    ctx->pc = 0x37ADFCu;
    {
        const bool branch_taken_0x37adfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADFCu;
        // 0x37ae00: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37adfc) {
            ctx->pc = 0x37AE5Cu;
            goto label_37ae5c;
        }
    }
    ctx->pc = 0x37AE04u;
label_37ae04:
    // 0x37ae04: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x37ae04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_37ae08:
    // 0x37ae08: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_37ae0c:
    if (ctx->pc == 0x37AE0Cu) {
        ctx->pc = 0x37AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE08u;
        // 0x37ae0c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AE10u;
        goto label_37ae10;
    }
    ctx->pc = 0x37AE08u;
    {
        const bool branch_taken_0x37ae08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE08u;
        // 0x37ae0c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae08) {
            ctx->pc = 0x37AE40u;
            goto label_37ae40;
        }
    }
    ctx->pc = 0x37AE10u;
label_37ae10:
    // 0x37ae10: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_37ae14:
    if (ctx->pc == 0x37AE14u) {
        ctx->pc = 0x37AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE10u;
        // 0x37ae14: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AE18u;
        goto label_37ae18;
    }
    ctx->pc = 0x37AE10u;
    {
        const bool branch_taken_0x37ae10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ae10) {
            ctx->pc = 0x37AE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37AE10u;
            // 0x37ae14: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x37AE30u;
            goto label_37ae30;
        }
    }
    ctx->pc = 0x37AE18u;
label_37ae18:
    // 0x37ae18: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x37ae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ae1c:
    // 0x37ae1c: 0x24c3fffc  addiu       $v1, $a2, -0x4
    ctx->pc = 0x37ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_37ae20:
    // 0x37ae20: 0x25040004  addiu       $a0, $t0, 0x4
    ctx->pc = 0x37ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_37ae24:
    // 0x37ae24: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x37ae24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_37ae28:
    // 0x37ae28: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x37ae28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_37ae2c:
    // 0x37ae2c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x37ae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ae30:
    // 0x37ae30: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x37ae30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_37ae34:
    // 0x37ae34: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x37ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_37ae38:
    // 0x37ae38: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x37ae38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_37ae3c:
    // 0x37ae3c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x37ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_37ae40:
    // 0x37ae40: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x37ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ae44:
    // 0x37ae44: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x37ae44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_37ae48:
    // 0x37ae48: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x37ae48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_37ae4c:
    // 0x37ae4c: 0x127282a  slt         $a1, $t1, $a3
    ctx->pc = 0x37ae4cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_37ae50:
    // 0x37ae50: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x37ae50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_37ae54:
    // 0x37ae54: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_37ae58:
    if (ctx->pc == 0x37AE58u) {
        ctx->pc = 0x37AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE54u;
        // 0x37ae58: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AE5Cu;
        goto label_37ae5c;
    }
    ctx->pc = 0x37AE54u;
    {
        const bool branch_taken_0x37ae54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE54u;
        // 0x37ae58: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae54) {
            ctx->pc = 0x37AE94u;
            goto label_37ae94;
        }
    }
    ctx->pc = 0x37AE5Cu;
label_37ae5c:
    // 0x37ae5c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x37ae5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37ae60:
    // 0x37ae60: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x37ae60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37ae64:
    // 0x37ae64: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x37ae64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_37ae68:
    // 0x37ae68: 0x127282a  slt         $a1, $t1, $a3
    ctx->pc = 0x37ae68u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_37ae6c:
    // 0x37ae6c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x37ae6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_37ae70:
    // 0x37ae70: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x37ae70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ae74:
    // 0x37ae74: 0xe440fffc  swc1        $f0, -0x4($v0)
    ctx->pc = 0x37ae74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
label_37ae78:
    // 0x37ae78: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x37ae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37ae7c:
    // 0x37ae7c: 0xe441fff8  swc1        $f1, -0x8($v0)
    ctx->pc = 0x37ae7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
label_37ae80:
    // 0x37ae80: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x37ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ae84:
    // 0x37ae84: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x37ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_37ae88:
    // 0x37ae88: 0xe440fff4  swc1        $f0, -0xC($v0)
    ctx->pc = 0x37ae88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), bits); }
label_37ae8c:
    // 0x37ae8c: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_37ae90:
    if (ctx->pc == 0x37AE90u) {
        ctx->pc = 0x37AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE8Cu;
        // 0x37ae90: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AE94u;
        goto label_37ae94;
    }
    ctx->pc = 0x37AE8Cu;
    {
        const bool branch_taken_0x37ae8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE8Cu;
        // 0x37ae90: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae8c) {
            ctx->pc = 0x37AE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ae60;
        }
    }
    ctx->pc = 0x37AE94u;
label_37ae94:
    // 0x37ae94: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x37ae94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_37ae98:
    // 0x37ae98: 0x132102a  slt         $v0, $t1, $s2
    ctx->pc = 0x37ae98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_37ae9c:
    // 0x37ae9c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_37aea0:
    if (ctx->pc == 0x37AEA0u) {
        ctx->pc = 0x37AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE9Cu;
        // 0x37aea0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AEA4u;
        goto label_37aea4;
    }
    ctx->pc = 0x37AE9Cu;
    {
        const bool branch_taken_0x37ae9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE9Cu;
        // 0x37aea0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae9c) {
            ctx->pc = 0x37ADC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37adc0;
        }
    }
    ctx->pc = 0x37AEA4u;
label_37aea4:
    // 0x37aea4: 0x27c3e880  addiu       $v1, $fp, -0x1780
    ctx->pc = 0x37aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_37aea8:
    // 0x37aea8: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x37aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_37aeac:
    // 0x37aeac: 0x40f809  jalr        $v0
label_37aeb0:
    if (ctx->pc == 0x37AEB0u) {
        ctx->pc = 0x37AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AEACu;
        // 0x37aeb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AEB4u;
        goto label_37aeb4;
    }
    ctx->pc = 0x37AEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37AEB4u);
        ctx->pc = 0x37AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AEACu;
        // 0x37aeb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AEACu, 0x37AEB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37AEB4u;
label_37aeb4:
    // 0x37aeb4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x37aeb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37aeb8:
    // 0x37aeb8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x37aeb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_37aebc:
    // 0x37aebc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x37aebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_37aec0:
    // 0x37aec0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x37aec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_37aec4:
    // 0x37aec4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x37aec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_37aec8:
    // 0x37aec8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x37aec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37aecc:
    // 0x37aecc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x37aeccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37aed0:
    // 0x37aed0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x37aed0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37aed4:
    // 0x37aed4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x37aed4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37aed8:
    // 0x37aed8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x37aed8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37aedc:
    // 0x37aedc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37aedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_37aee0:
    // 0x37aee0: 0x3e00008  jr          $ra
label_37aee4:
    if (ctx->pc == 0x37AEE4u) {
        ctx->pc = 0x37AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AEE0u;
        // 0x37aee4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37AEE8u;
        goto label_fallthrough_0x37aee0;
    }
    ctx->pc = 0x37AEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AEE0u;
        // 0x37aee4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37aee0:
    ctx->pc = 0x37AEE8u;
}
