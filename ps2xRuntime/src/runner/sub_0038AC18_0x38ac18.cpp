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

// Function: sub_0038AC18
// Address: 0x38ac18 - 0x38b420
void sub_0038AC18_0x38ac18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038AC18_0x38ac18");
#endif

    switch (ctx->pc) {
        case 0x38ac18u: goto label_38ac18;
        case 0x38ac1cu: goto label_38ac1c;
        case 0x38ac20u: goto label_38ac20;
        case 0x38ac24u: goto label_38ac24;
        case 0x38ac28u: goto label_38ac28;
        case 0x38ac2cu: goto label_38ac2c;
        case 0x38ac30u: goto label_38ac30;
        case 0x38ac34u: goto label_38ac34;
        case 0x38ac38u: goto label_38ac38;
        case 0x38ac3cu: goto label_38ac3c;
        case 0x38ac40u: goto label_38ac40;
        case 0x38ac44u: goto label_38ac44;
        case 0x38ac48u: goto label_38ac48;
        case 0x38ac4cu: goto label_38ac4c;
        case 0x38ac50u: goto label_38ac50;
        case 0x38ac54u: goto label_38ac54;
        case 0x38ac58u: goto label_38ac58;
        case 0x38ac5cu: goto label_38ac5c;
        case 0x38ac60u: goto label_38ac60;
        case 0x38ac64u: goto label_38ac64;
        case 0x38ac68u: goto label_38ac68;
        case 0x38ac6cu: goto label_38ac6c;
        case 0x38ac70u: goto label_38ac70;
        case 0x38ac74u: goto label_38ac74;
        case 0x38ac78u: goto label_38ac78;
        case 0x38ac7cu: goto label_38ac7c;
        case 0x38ac80u: goto label_38ac80;
        case 0x38ac84u: goto label_38ac84;
        case 0x38ac88u: goto label_38ac88;
        case 0x38ac8cu: goto label_38ac8c;
        case 0x38ac90u: goto label_38ac90;
        case 0x38ac94u: goto label_38ac94;
        case 0x38ac98u: goto label_38ac98;
        case 0x38ac9cu: goto label_38ac9c;
        case 0x38aca0u: goto label_38aca0;
        case 0x38aca4u: goto label_38aca4;
        case 0x38aca8u: goto label_38aca8;
        case 0x38acacu: goto label_38acac;
        case 0x38acb0u: goto label_38acb0;
        case 0x38acb4u: goto label_38acb4;
        case 0x38acb8u: goto label_38acb8;
        case 0x38acbcu: goto label_38acbc;
        case 0x38acc0u: goto label_38acc0;
        case 0x38acc4u: goto label_38acc4;
        case 0x38acc8u: goto label_38acc8;
        case 0x38acccu: goto label_38accc;
        case 0x38acd0u: goto label_38acd0;
        case 0x38acd4u: goto label_38acd4;
        case 0x38acd8u: goto label_38acd8;
        case 0x38acdcu: goto label_38acdc;
        case 0x38ace0u: goto label_38ace0;
        case 0x38ace4u: goto label_38ace4;
        case 0x38ace8u: goto label_38ace8;
        case 0x38acecu: goto label_38acec;
        case 0x38acf0u: goto label_38acf0;
        case 0x38acf4u: goto label_38acf4;
        case 0x38acf8u: goto label_38acf8;
        case 0x38acfcu: goto label_38acfc;
        case 0x38ad00u: goto label_38ad00;
        case 0x38ad04u: goto label_38ad04;
        case 0x38ad08u: goto label_38ad08;
        case 0x38ad0cu: goto label_38ad0c;
        case 0x38ad10u: goto label_38ad10;
        case 0x38ad14u: goto label_38ad14;
        case 0x38ad18u: goto label_38ad18;
        case 0x38ad1cu: goto label_38ad1c;
        case 0x38ad20u: goto label_38ad20;
        case 0x38ad24u: goto label_38ad24;
        case 0x38ad28u: goto label_38ad28;
        case 0x38ad2cu: goto label_38ad2c;
        case 0x38ad30u: goto label_38ad30;
        case 0x38ad34u: goto label_38ad34;
        case 0x38ad38u: goto label_38ad38;
        case 0x38ad3cu: goto label_38ad3c;
        case 0x38ad40u: goto label_38ad40;
        case 0x38ad44u: goto label_38ad44;
        case 0x38ad48u: goto label_38ad48;
        case 0x38ad4cu: goto label_38ad4c;
        case 0x38ad50u: goto label_38ad50;
        case 0x38ad54u: goto label_38ad54;
        case 0x38ad58u: goto label_38ad58;
        case 0x38ad5cu: goto label_38ad5c;
        case 0x38ad60u: goto label_38ad60;
        case 0x38ad64u: goto label_38ad64;
        case 0x38ad68u: goto label_38ad68;
        case 0x38ad6cu: goto label_38ad6c;
        case 0x38ad70u: goto label_38ad70;
        case 0x38ad74u: goto label_38ad74;
        case 0x38ad78u: goto label_38ad78;
        case 0x38ad7cu: goto label_38ad7c;
        case 0x38ad80u: goto label_38ad80;
        case 0x38ad84u: goto label_38ad84;
        case 0x38ad88u: goto label_38ad88;
        case 0x38ad8cu: goto label_38ad8c;
        case 0x38ad90u: goto label_38ad90;
        case 0x38ad94u: goto label_38ad94;
        case 0x38ad98u: goto label_38ad98;
        case 0x38ad9cu: goto label_38ad9c;
        case 0x38ada0u: goto label_38ada0;
        case 0x38ada4u: goto label_38ada4;
        case 0x38ada8u: goto label_38ada8;
        case 0x38adacu: goto label_38adac;
        case 0x38adb0u: goto label_38adb0;
        case 0x38adb4u: goto label_38adb4;
        case 0x38adb8u: goto label_38adb8;
        case 0x38adbcu: goto label_38adbc;
        case 0x38adc0u: goto label_38adc0;
        case 0x38adc4u: goto label_38adc4;
        case 0x38adc8u: goto label_38adc8;
        case 0x38adccu: goto label_38adcc;
        case 0x38add0u: goto label_38add0;
        case 0x38add4u: goto label_38add4;
        case 0x38add8u: goto label_38add8;
        case 0x38addcu: goto label_38addc;
        case 0x38ade0u: goto label_38ade0;
        case 0x38ade4u: goto label_38ade4;
        case 0x38ade8u: goto label_38ade8;
        case 0x38adecu: goto label_38adec;
        case 0x38adf0u: goto label_38adf0;
        case 0x38adf4u: goto label_38adf4;
        case 0x38adf8u: goto label_38adf8;
        case 0x38adfcu: goto label_38adfc;
        case 0x38ae00u: goto label_38ae00;
        case 0x38ae04u: goto label_38ae04;
        case 0x38ae08u: goto label_38ae08;
        case 0x38ae0cu: goto label_38ae0c;
        case 0x38ae10u: goto label_38ae10;
        case 0x38ae14u: goto label_38ae14;
        case 0x38ae18u: goto label_38ae18;
        case 0x38ae1cu: goto label_38ae1c;
        case 0x38ae20u: goto label_38ae20;
        case 0x38ae24u: goto label_38ae24;
        case 0x38ae28u: goto label_38ae28;
        case 0x38ae2cu: goto label_38ae2c;
        case 0x38ae30u: goto label_38ae30;
        case 0x38ae34u: goto label_38ae34;
        case 0x38ae38u: goto label_38ae38;
        case 0x38ae3cu: goto label_38ae3c;
        case 0x38ae40u: goto label_38ae40;
        case 0x38ae44u: goto label_38ae44;
        case 0x38ae48u: goto label_38ae48;
        case 0x38ae4cu: goto label_38ae4c;
        case 0x38ae50u: goto label_38ae50;
        case 0x38ae54u: goto label_38ae54;
        case 0x38ae58u: goto label_38ae58;
        case 0x38ae5cu: goto label_38ae5c;
        case 0x38ae60u: goto label_38ae60;
        case 0x38ae64u: goto label_38ae64;
        case 0x38ae68u: goto label_38ae68;
        case 0x38ae6cu: goto label_38ae6c;
        case 0x38ae70u: goto label_38ae70;
        case 0x38ae74u: goto label_38ae74;
        case 0x38ae78u: goto label_38ae78;
        case 0x38ae7cu: goto label_38ae7c;
        case 0x38ae80u: goto label_38ae80;
        case 0x38ae84u: goto label_38ae84;
        case 0x38ae88u: goto label_38ae88;
        case 0x38ae8cu: goto label_38ae8c;
        case 0x38ae90u: goto label_38ae90;
        case 0x38ae94u: goto label_38ae94;
        case 0x38ae98u: goto label_38ae98;
        case 0x38ae9cu: goto label_38ae9c;
        case 0x38aea0u: goto label_38aea0;
        case 0x38aea4u: goto label_38aea4;
        case 0x38aea8u: goto label_38aea8;
        case 0x38aeacu: goto label_38aeac;
        case 0x38aeb0u: goto label_38aeb0;
        case 0x38aeb4u: goto label_38aeb4;
        case 0x38aeb8u: goto label_38aeb8;
        case 0x38aebcu: goto label_38aebc;
        case 0x38aec0u: goto label_38aec0;
        case 0x38aec4u: goto label_38aec4;
        case 0x38aec8u: goto label_38aec8;
        case 0x38aeccu: goto label_38aecc;
        case 0x38aed0u: goto label_38aed0;
        case 0x38aed4u: goto label_38aed4;
        case 0x38aed8u: goto label_38aed8;
        case 0x38aedcu: goto label_38aedc;
        case 0x38aee0u: goto label_38aee0;
        case 0x38aee4u: goto label_38aee4;
        case 0x38aee8u: goto label_38aee8;
        case 0x38aeecu: goto label_38aeec;
        case 0x38aef0u: goto label_38aef0;
        case 0x38aef4u: goto label_38aef4;
        case 0x38aef8u: goto label_38aef8;
        case 0x38aefcu: goto label_38aefc;
        case 0x38af00u: goto label_38af00;
        case 0x38af04u: goto label_38af04;
        case 0x38af08u: goto label_38af08;
        case 0x38af0cu: goto label_38af0c;
        case 0x38af10u: goto label_38af10;
        case 0x38af14u: goto label_38af14;
        case 0x38af18u: goto label_38af18;
        case 0x38af1cu: goto label_38af1c;
        case 0x38af20u: goto label_38af20;
        case 0x38af24u: goto label_38af24;
        case 0x38af28u: goto label_38af28;
        case 0x38af2cu: goto label_38af2c;
        case 0x38af30u: goto label_38af30;
        case 0x38af34u: goto label_38af34;
        case 0x38af38u: goto label_38af38;
        case 0x38af3cu: goto label_38af3c;
        case 0x38af40u: goto label_38af40;
        case 0x38af44u: goto label_38af44;
        case 0x38af48u: goto label_38af48;
        case 0x38af4cu: goto label_38af4c;
        case 0x38af50u: goto label_38af50;
        case 0x38af54u: goto label_38af54;
        case 0x38af58u: goto label_38af58;
        case 0x38af5cu: goto label_38af5c;
        case 0x38af60u: goto label_38af60;
        case 0x38af64u: goto label_38af64;
        case 0x38af68u: goto label_38af68;
        case 0x38af6cu: goto label_38af6c;
        case 0x38af70u: goto label_38af70;
        case 0x38af74u: goto label_38af74;
        case 0x38af78u: goto label_38af78;
        case 0x38af7cu: goto label_38af7c;
        case 0x38af80u: goto label_38af80;
        case 0x38af84u: goto label_38af84;
        case 0x38af88u: goto label_38af88;
        case 0x38af8cu: goto label_38af8c;
        case 0x38af90u: goto label_38af90;
        case 0x38af94u: goto label_38af94;
        case 0x38af98u: goto label_38af98;
        case 0x38af9cu: goto label_38af9c;
        case 0x38afa0u: goto label_38afa0;
        case 0x38afa4u: goto label_38afa4;
        case 0x38afa8u: goto label_38afa8;
        case 0x38afacu: goto label_38afac;
        case 0x38afb0u: goto label_38afb0;
        case 0x38afb4u: goto label_38afb4;
        case 0x38afb8u: goto label_38afb8;
        case 0x38afbcu: goto label_38afbc;
        case 0x38afc0u: goto label_38afc0;
        case 0x38afc4u: goto label_38afc4;
        case 0x38afc8u: goto label_38afc8;
        case 0x38afccu: goto label_38afcc;
        case 0x38afd0u: goto label_38afd0;
        case 0x38afd4u: goto label_38afd4;
        case 0x38afd8u: goto label_38afd8;
        case 0x38afdcu: goto label_38afdc;
        case 0x38afe0u: goto label_38afe0;
        case 0x38afe4u: goto label_38afe4;
        case 0x38afe8u: goto label_38afe8;
        case 0x38afecu: goto label_38afec;
        case 0x38aff0u: goto label_38aff0;
        case 0x38aff4u: goto label_38aff4;
        case 0x38aff8u: goto label_38aff8;
        case 0x38affcu: goto label_38affc;
        case 0x38b000u: goto label_38b000;
        case 0x38b004u: goto label_38b004;
        case 0x38b008u: goto label_38b008;
        case 0x38b00cu: goto label_38b00c;
        case 0x38b010u: goto label_38b010;
        case 0x38b014u: goto label_38b014;
        case 0x38b018u: goto label_38b018;
        case 0x38b01cu: goto label_38b01c;
        case 0x38b020u: goto label_38b020;
        case 0x38b024u: goto label_38b024;
        case 0x38b028u: goto label_38b028;
        case 0x38b02cu: goto label_38b02c;
        case 0x38b030u: goto label_38b030;
        case 0x38b034u: goto label_38b034;
        case 0x38b038u: goto label_38b038;
        case 0x38b03cu: goto label_38b03c;
        case 0x38b040u: goto label_38b040;
        case 0x38b044u: goto label_38b044;
        case 0x38b048u: goto label_38b048;
        case 0x38b04cu: goto label_38b04c;
        case 0x38b050u: goto label_38b050;
        case 0x38b054u: goto label_38b054;
        case 0x38b058u: goto label_38b058;
        case 0x38b05cu: goto label_38b05c;
        case 0x38b060u: goto label_38b060;
        case 0x38b064u: goto label_38b064;
        case 0x38b068u: goto label_38b068;
        case 0x38b06cu: goto label_38b06c;
        case 0x38b070u: goto label_38b070;
        case 0x38b074u: goto label_38b074;
        case 0x38b078u: goto label_38b078;
        case 0x38b07cu: goto label_38b07c;
        case 0x38b080u: goto label_38b080;
        case 0x38b084u: goto label_38b084;
        case 0x38b088u: goto label_38b088;
        case 0x38b08cu: goto label_38b08c;
        case 0x38b090u: goto label_38b090;
        case 0x38b094u: goto label_38b094;
        case 0x38b098u: goto label_38b098;
        case 0x38b09cu: goto label_38b09c;
        case 0x38b0a0u: goto label_38b0a0;
        case 0x38b0a4u: goto label_38b0a4;
        case 0x38b0a8u: goto label_38b0a8;
        case 0x38b0acu: goto label_38b0ac;
        case 0x38b0b0u: goto label_38b0b0;
        case 0x38b0b4u: goto label_38b0b4;
        case 0x38b0b8u: goto label_38b0b8;
        case 0x38b0bcu: goto label_38b0bc;
        case 0x38b0c0u: goto label_38b0c0;
        case 0x38b0c4u: goto label_38b0c4;
        case 0x38b0c8u: goto label_38b0c8;
        case 0x38b0ccu: goto label_38b0cc;
        case 0x38b0d0u: goto label_38b0d0;
        case 0x38b0d4u: goto label_38b0d4;
        case 0x38b0d8u: goto label_38b0d8;
        case 0x38b0dcu: goto label_38b0dc;
        case 0x38b0e0u: goto label_38b0e0;
        case 0x38b0e4u: goto label_38b0e4;
        case 0x38b0e8u: goto label_38b0e8;
        case 0x38b0ecu: goto label_38b0ec;
        case 0x38b0f0u: goto label_38b0f0;
        case 0x38b0f4u: goto label_38b0f4;
        case 0x38b0f8u: goto label_38b0f8;
        case 0x38b0fcu: goto label_38b0fc;
        case 0x38b100u: goto label_38b100;
        case 0x38b104u: goto label_38b104;
        case 0x38b108u: goto label_38b108;
        case 0x38b10cu: goto label_38b10c;
        case 0x38b110u: goto label_38b110;
        case 0x38b114u: goto label_38b114;
        case 0x38b118u: goto label_38b118;
        case 0x38b11cu: goto label_38b11c;
        case 0x38b120u: goto label_38b120;
        case 0x38b124u: goto label_38b124;
        case 0x38b128u: goto label_38b128;
        case 0x38b12cu: goto label_38b12c;
        case 0x38b130u: goto label_38b130;
        case 0x38b134u: goto label_38b134;
        case 0x38b138u: goto label_38b138;
        case 0x38b13cu: goto label_38b13c;
        case 0x38b140u: goto label_38b140;
        case 0x38b144u: goto label_38b144;
        case 0x38b148u: goto label_38b148;
        case 0x38b14cu: goto label_38b14c;
        case 0x38b150u: goto label_38b150;
        case 0x38b154u: goto label_38b154;
        case 0x38b158u: goto label_38b158;
        case 0x38b15cu: goto label_38b15c;
        case 0x38b160u: goto label_38b160;
        case 0x38b164u: goto label_38b164;
        case 0x38b168u: goto label_38b168;
        case 0x38b16cu: goto label_38b16c;
        case 0x38b170u: goto label_38b170;
        case 0x38b174u: goto label_38b174;
        case 0x38b178u: goto label_38b178;
        case 0x38b17cu: goto label_38b17c;
        case 0x38b180u: goto label_38b180;
        case 0x38b184u: goto label_38b184;
        case 0x38b188u: goto label_38b188;
        case 0x38b18cu: goto label_38b18c;
        case 0x38b190u: goto label_38b190;
        case 0x38b194u: goto label_38b194;
        case 0x38b198u: goto label_38b198;
        case 0x38b19cu: goto label_38b19c;
        case 0x38b1a0u: goto label_38b1a0;
        case 0x38b1a4u: goto label_38b1a4;
        case 0x38b1a8u: goto label_38b1a8;
        case 0x38b1acu: goto label_38b1ac;
        case 0x38b1b0u: goto label_38b1b0;
        case 0x38b1b4u: goto label_38b1b4;
        case 0x38b1b8u: goto label_38b1b8;
        case 0x38b1bcu: goto label_38b1bc;
        case 0x38b1c0u: goto label_38b1c0;
        case 0x38b1c4u: goto label_38b1c4;
        case 0x38b1c8u: goto label_38b1c8;
        case 0x38b1ccu: goto label_38b1cc;
        case 0x38b1d0u: goto label_38b1d0;
        case 0x38b1d4u: goto label_38b1d4;
        case 0x38b1d8u: goto label_38b1d8;
        case 0x38b1dcu: goto label_38b1dc;
        case 0x38b1e0u: goto label_38b1e0;
        case 0x38b1e4u: goto label_38b1e4;
        case 0x38b1e8u: goto label_38b1e8;
        case 0x38b1ecu: goto label_38b1ec;
        case 0x38b1f0u: goto label_38b1f0;
        case 0x38b1f4u: goto label_38b1f4;
        case 0x38b1f8u: goto label_38b1f8;
        case 0x38b1fcu: goto label_38b1fc;
        case 0x38b200u: goto label_38b200;
        case 0x38b204u: goto label_38b204;
        case 0x38b208u: goto label_38b208;
        case 0x38b20cu: goto label_38b20c;
        case 0x38b210u: goto label_38b210;
        case 0x38b214u: goto label_38b214;
        case 0x38b218u: goto label_38b218;
        case 0x38b21cu: goto label_38b21c;
        case 0x38b220u: goto label_38b220;
        case 0x38b224u: goto label_38b224;
        case 0x38b228u: goto label_38b228;
        case 0x38b22cu: goto label_38b22c;
        case 0x38b230u: goto label_38b230;
        case 0x38b234u: goto label_38b234;
        case 0x38b238u: goto label_38b238;
        case 0x38b23cu: goto label_38b23c;
        case 0x38b240u: goto label_38b240;
        case 0x38b244u: goto label_38b244;
        case 0x38b248u: goto label_38b248;
        case 0x38b24cu: goto label_38b24c;
        case 0x38b250u: goto label_38b250;
        case 0x38b254u: goto label_38b254;
        case 0x38b258u: goto label_38b258;
        case 0x38b25cu: goto label_38b25c;
        case 0x38b260u: goto label_38b260;
        case 0x38b264u: goto label_38b264;
        case 0x38b268u: goto label_38b268;
        case 0x38b26cu: goto label_38b26c;
        case 0x38b270u: goto label_38b270;
        case 0x38b274u: goto label_38b274;
        case 0x38b278u: goto label_38b278;
        case 0x38b27cu: goto label_38b27c;
        case 0x38b280u: goto label_38b280;
        case 0x38b284u: goto label_38b284;
        case 0x38b288u: goto label_38b288;
        case 0x38b28cu: goto label_38b28c;
        case 0x38b290u: goto label_38b290;
        case 0x38b294u: goto label_38b294;
        case 0x38b298u: goto label_38b298;
        case 0x38b29cu: goto label_38b29c;
        case 0x38b2a0u: goto label_38b2a0;
        case 0x38b2a4u: goto label_38b2a4;
        case 0x38b2a8u: goto label_38b2a8;
        case 0x38b2acu: goto label_38b2ac;
        case 0x38b2b0u: goto label_38b2b0;
        case 0x38b2b4u: goto label_38b2b4;
        case 0x38b2b8u: goto label_38b2b8;
        case 0x38b2bcu: goto label_38b2bc;
        case 0x38b2c0u: goto label_38b2c0;
        case 0x38b2c4u: goto label_38b2c4;
        case 0x38b2c8u: goto label_38b2c8;
        case 0x38b2ccu: goto label_38b2cc;
        case 0x38b2d0u: goto label_38b2d0;
        case 0x38b2d4u: goto label_38b2d4;
        case 0x38b2d8u: goto label_38b2d8;
        case 0x38b2dcu: goto label_38b2dc;
        case 0x38b2e0u: goto label_38b2e0;
        case 0x38b2e4u: goto label_38b2e4;
        case 0x38b2e8u: goto label_38b2e8;
        case 0x38b2ecu: goto label_38b2ec;
        case 0x38b2f0u: goto label_38b2f0;
        case 0x38b2f4u: goto label_38b2f4;
        case 0x38b2f8u: goto label_38b2f8;
        case 0x38b2fcu: goto label_38b2fc;
        case 0x38b300u: goto label_38b300;
        case 0x38b304u: goto label_38b304;
        case 0x38b308u: goto label_38b308;
        case 0x38b30cu: goto label_38b30c;
        case 0x38b310u: goto label_38b310;
        case 0x38b314u: goto label_38b314;
        case 0x38b318u: goto label_38b318;
        case 0x38b31cu: goto label_38b31c;
        case 0x38b320u: goto label_38b320;
        case 0x38b324u: goto label_38b324;
        case 0x38b328u: goto label_38b328;
        case 0x38b32cu: goto label_38b32c;
        case 0x38b330u: goto label_38b330;
        case 0x38b334u: goto label_38b334;
        case 0x38b338u: goto label_38b338;
        case 0x38b33cu: goto label_38b33c;
        case 0x38b340u: goto label_38b340;
        case 0x38b344u: goto label_38b344;
        case 0x38b348u: goto label_38b348;
        case 0x38b34cu: goto label_38b34c;
        case 0x38b350u: goto label_38b350;
        case 0x38b354u: goto label_38b354;
        case 0x38b358u: goto label_38b358;
        case 0x38b35cu: goto label_38b35c;
        case 0x38b360u: goto label_38b360;
        case 0x38b364u: goto label_38b364;
        case 0x38b368u: goto label_38b368;
        case 0x38b36cu: goto label_38b36c;
        case 0x38b370u: goto label_38b370;
        case 0x38b374u: goto label_38b374;
        case 0x38b378u: goto label_38b378;
        case 0x38b37cu: goto label_38b37c;
        case 0x38b380u: goto label_38b380;
        case 0x38b384u: goto label_38b384;
        case 0x38b388u: goto label_38b388;
        case 0x38b38cu: goto label_38b38c;
        case 0x38b390u: goto label_38b390;
        case 0x38b394u: goto label_38b394;
        case 0x38b398u: goto label_38b398;
        case 0x38b39cu: goto label_38b39c;
        case 0x38b3a0u: goto label_38b3a0;
        case 0x38b3a4u: goto label_38b3a4;
        case 0x38b3a8u: goto label_38b3a8;
        case 0x38b3acu: goto label_38b3ac;
        case 0x38b3b0u: goto label_38b3b0;
        case 0x38b3b4u: goto label_38b3b4;
        case 0x38b3b8u: goto label_38b3b8;
        case 0x38b3bcu: goto label_38b3bc;
        case 0x38b3c0u: goto label_38b3c0;
        case 0x38b3c4u: goto label_38b3c4;
        case 0x38b3c8u: goto label_38b3c8;
        case 0x38b3ccu: goto label_38b3cc;
        case 0x38b3d0u: goto label_38b3d0;
        case 0x38b3d4u: goto label_38b3d4;
        case 0x38b3d8u: goto label_38b3d8;
        case 0x38b3dcu: goto label_38b3dc;
        case 0x38b3e0u: goto label_38b3e0;
        case 0x38b3e4u: goto label_38b3e4;
        case 0x38b3e8u: goto label_38b3e8;
        case 0x38b3ecu: goto label_38b3ec;
        case 0x38b3f0u: goto label_38b3f0;
        case 0x38b3f4u: goto label_38b3f4;
        case 0x38b3f8u: goto label_38b3f8;
        case 0x38b3fcu: goto label_38b3fc;
        case 0x38b400u: goto label_38b400;
        case 0x38b404u: goto label_38b404;
        case 0x38b408u: goto label_38b408;
        case 0x38b40cu: goto label_38b40c;
        case 0x38b410u: goto label_38b410;
        case 0x38b414u: goto label_38b414;
        case 0x38b418u: goto label_38b418;
        case 0x38b41cu: goto label_38b41c;
        default: break;
    }

    ctx->pc = 0x38ac18u;

label_38ac18:
    // 0x38ac18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38ac18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_38ac1c:
    // 0x38ac1c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x38ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_38ac20:
    // 0x38ac20: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x38ac20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_38ac24:
    // 0x38ac24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38ac24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38ac28:
    // 0x38ac28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38ac28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38ac2c:
    // 0x38ac2c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x38ac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_38ac30:
    // 0x38ac30: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x38ac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_38ac34:
    // 0x38ac34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38ac34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38ac38:
    // 0x38ac38: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x38ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38ac3c:
    // 0x38ac3c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x38ac3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_38ac40:
    // 0x38ac40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38ac44:
    if (ctx->pc == 0x38AC44u) {
        ctx->pc = 0x38AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC40u;
        // 0x38ac44: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AC48u;
        goto label_38ac48;
    }
    ctx->pc = 0x38AC40u;
    {
        const bool branch_taken_0x38ac40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC40u;
        // 0x38ac44: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ac40) {
            ctx->pc = 0x38AC50u;
            goto label_38ac50;
        }
    }
    ctx->pc = 0x38AC48u;
label_38ac48:
    // 0x38ac48: 0x10000008  b           . + 4 + (0x8 << 2)
label_38ac4c:
    if (ctx->pc == 0x38AC4Cu) {
        ctx->pc = 0x38AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC48u;
        // 0x38ac4c: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AC50u;
        goto label_38ac50;
    }
    ctx->pc = 0x38AC48u;
    {
        const bool branch_taken_0x38ac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC48u;
        // 0x38ac4c: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ac48) {
            ctx->pc = 0x38AC6Cu;
            goto label_38ac6c;
        }
    }
    ctx->pc = 0x38AC50u;
label_38ac50:
    // 0x38ac50: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x38ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38ac54:
    // 0x38ac54: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x38ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_38ac58:
    // 0x38ac58: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x38ac58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_38ac5c:
    // 0x38ac5c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x38ac5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_38ac60:
    // 0x38ac60: 0x2452001c  addiu       $s2, $v0, 0x1C
    ctx->pc = 0x38ac60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_38ac64:
    // 0x38ac64: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x38ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_38ac68:
    // 0x38ac68: 0x44900b  movn        $s2, $v0, $a0
    ctx->pc = 0x38ac68u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_38ac6c:
    // 0x38ac6c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x38ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_38ac70:
    // 0x38ac70: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x38ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_38ac74:
    // 0x38ac74: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x38ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_38ac78:
    // 0x38ac78: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
label_38ac7c:
    if (ctx->pc == 0x38AC7Cu) {
        ctx->pc = 0x38AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC78u;
        // 0x38ac7c: 0x2428818  mult        $s1, $s2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AC80u;
        goto label_38ac80;
    }
    ctx->pc = 0x38AC78u;
    {
        const bool branch_taken_0x38ac78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC78u;
        // 0x38ac7c: 0x2428818  mult        $s1, $s2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ac78) {
            ctx->pc = 0x38AD24u;
            goto label_38ad24;
        }
    }
    ctx->pc = 0x38AC80u;
label_38ac80:
    // 0x38ac80: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_38ac84:
    // 0x38ac84: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x38ac84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_38ac88:
    // 0x38ac88: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x38ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_38ac8c:
    // 0x38ac8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38ac8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ac90:
    // 0x38ac90: 0x40f809  jalr        $v0
label_38ac94:
    if (ctx->pc == 0x38AC94u) {
        ctx->pc = 0x38AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC90u;
        // 0x38ac94: 0x34c6000f  ori         $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AC98u;
        goto label_38ac98;
    }
    ctx->pc = 0x38AC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38AC98u);
        ctx->pc = 0x38AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC90u;
        // 0x38ac94: 0x34c6000f  ori         $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AC90u, 0x38AC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38AC98u;
label_38ac98:
    // 0x38ac98: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x38ac98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38ac9c:
    // 0x38ac9c: 0x5520000a  bnel        $t1, $zero, . + 4 + (0xA << 2)
label_38aca0:
    if (ctx->pc == 0x38ACA0u) {
        ctx->pc = 0x38ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC9Cu;
        // 0x38aca0: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ACA4u;
        goto label_38aca4;
    }
    ctx->pc = 0x38AC9Cu;
    {
        const bool branch_taken_0x38ac9c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ac9c) {
            ctx->pc = 0x38ACA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AC9Cu;
            // 0x38aca0: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38ACC8u;
            goto label_38acc8;
        }
    }
    ctx->pc = 0x38ACA4u;
label_38aca4:
    // 0x38aca4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38aca8:
    // 0x38aca8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38aca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38acac:
    // 0x38acac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38acacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_38acb0:
    // 0x38acb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38acb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38acb4:
    // 0x38acb4: 0xc1035f6  jal         func_40D7D8
label_38acb8:
    if (ctx->pc == 0x38ACB8u) {
        ctx->pc = 0x38ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACB4u;
        // 0x38acb8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ACBCu;
        goto label_38acbc;
    }
    ctx->pc = 0x38ACB4u;
    SET_GPR_U32(ctx, 31, 0x38ACBCu);
    ctx->pc = 0x38ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ACB4u;
    // 0x38acb8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38ACB4u, 0x38ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ACBCu;
label_38acbc:
    // 0x38acbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38acbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38acc0:
    // 0x38acc0: 0x10000029  b           . + 4 + (0x29 << 2)
label_38acc4:
    if (ctx->pc == 0x38ACC4u) {
        ctx->pc = 0x38ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACC0u;
        // 0x38acc4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ACC8u;
        goto label_38acc8;
    }
    ctx->pc = 0x38ACC0u;
    {
        const bool branch_taken_0x38acc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACC0u;
        // 0x38acc4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38acc0) {
            ctx->pc = 0x38AD68u;
            goto label_38ad68;
        }
    }
    ctx->pc = 0x38ACC8u;
label_38acc8:
    // 0x38acc8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x38acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_38accc:
    // 0x38accc: 0x2632018  mult        $a0, $s3, $v1
    ctx->pc = 0x38acccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_38acd0:
    // 0x38acd0: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x38acd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_38acd4:
    // 0x38acd4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x38acd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_38acd8:
    // 0x38acd8: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x38acd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38acdc:
    // 0x38acdc: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x38acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_38ace0:
    // 0x38ace0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x38ace0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38ace4:
    // 0x38ace4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38ace8:
    // 0x38ace8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x38ace8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_38acec:
    // 0x38acec: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_38acf0:
    if (ctx->pc == 0x38ACF0u) {
        ctx->pc = 0x38ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACECu;
        // 0x38acf0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ACF4u;
        goto label_38acf4;
    }
    ctx->pc = 0x38ACECu;
    {
        const bool branch_taken_0x38acec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACECu;
        // 0x38acf0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38acec) {
            ctx->pc = 0x38AD78u;
            goto label_38ad78;
        }
    }
    ctx->pc = 0x38ACF4u;
label_38acf4:
    // 0x38acf4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x38acf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38acf8:
    // 0x38acf8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38acf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38acfc:
    // 0x38acfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38acfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38ad00:
    // 0x38ad00: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x38ad00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_38ad04:
    // 0x38ad04: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x38ad04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38ad08:
    // 0x38ad08: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x38ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_38ad0c:
    // 0x38ad0c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x38ad0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_38ad10:
    // 0x38ad10: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x38ad10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_38ad14:
    // 0x38ad14: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_38ad18:
    if (ctx->pc == 0x38AD18u) {
        ctx->pc = 0x38AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD14u;
        // 0x38ad18: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD1Cu;
        goto label_38ad1c;
    }
    ctx->pc = 0x38AD14u;
    {
        const bool branch_taken_0x38ad14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD14u;
        // 0x38ad18: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad14) {
            ctx->pc = 0x38AD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ad00;
        }
    }
    ctx->pc = 0x38AD1Cu;
label_38ad1c:
    // 0x38ad1c: 0x10000017  b           . + 4 + (0x17 << 2)
label_38ad20:
    if (ctx->pc == 0x38AD20u) {
        ctx->pc = 0x38AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD1Cu;
        // 0x38ad20: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD24u;
        goto label_38ad24;
    }
    ctx->pc = 0x38AD1Cu;
    {
        const bool branch_taken_0x38ad1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD1Cu;
        // 0x38ad20: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad1c) {
            ctx->pc = 0x38AD7Cu;
            goto label_38ad7c;
        }
    }
    ctx->pc = 0x38AD24u;
label_38ad24:
    // 0x38ad24: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_38ad28:
    // 0x38ad28: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x38ad28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_38ad2c:
    // 0x38ad2c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x38ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_38ad30:
    // 0x38ad30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ad30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ad34:
    // 0x38ad34: 0x40f809  jalr        $v0
label_38ad38:
    if (ctx->pc == 0x38AD38u) {
        ctx->pc = 0x38AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD34u;
        // 0x38ad38: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD3Cu;
        goto label_38ad3c;
    }
    ctx->pc = 0x38AD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38AD3Cu);
        ctx->pc = 0x38AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD34u;
        // 0x38ad38: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AD34u, 0x38AD3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38AD3Cu;
label_38ad3c:
    // 0x38ad3c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x38ad3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38ad40:
    // 0x38ad40: 0x5520000e  bnel        $t1, $zero, . + 4 + (0xE << 2)
label_38ad44:
    if (ctx->pc == 0x38AD44u) {
        ctx->pc = 0x38AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD40u;
        // 0x38ad44: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD48u;
        goto label_38ad48;
    }
    ctx->pc = 0x38AD40u;
    {
        const bool branch_taken_0x38ad40 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ad40) {
            ctx->pc = 0x38AD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AD40u;
            // 0x38ad44: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AD7Cu;
            goto label_38ad7c;
        }
    }
    ctx->pc = 0x38AD48u;
label_38ad48:
    // 0x38ad48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38ad4c:
    // 0x38ad4c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38ad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38ad50:
    // 0x38ad50: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x38ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_38ad54:
    // 0x38ad54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38ad54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ad58:
    // 0x38ad58: 0xc1035f6  jal         func_40D7D8
label_38ad5c:
    if (ctx->pc == 0x38AD5Cu) {
        ctx->pc = 0x38AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD58u;
        // 0x38ad5c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD60u;
        goto label_38ad60;
    }
    ctx->pc = 0x38AD58u;
    SET_GPR_U32(ctx, 31, 0x38AD60u);
    ctx->pc = 0x38AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AD58u;
    // 0x38ad5c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38AD58u, 0x38AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AD60u;
label_38ad60:
    // 0x38ad60: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x38ad60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_38ad64:
    // 0x38ad64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x38ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_38ad68:
    // 0x38ad68: 0xc103628  jal         func_40D8A0
label_38ad6c:
    if (ctx->pc == 0x38AD6Cu) {
        ctx->pc = 0x38AD70u;
        goto label_38ad70;
    }
    ctx->pc = 0x38AD68u;
    SET_GPR_U32(ctx, 31, 0x38AD70u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38AD68u, 0x38AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AD70u;
label_38ad70:
    // 0x38ad70: 0x100000be  b           . + 4 + (0xBE << 2)
label_38ad74:
    if (ctx->pc == 0x38AD74u) {
        ctx->pc = 0x38AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD70u;
        // 0x38ad74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD78u;
        goto label_38ad78;
    }
    ctx->pc = 0x38AD70u;
    {
        const bool branch_taken_0x38ad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD70u;
        // 0x38ad74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad70) {
            ctx->pc = 0x38B06Cu;
            goto label_38b06c;
        }
    }
    ctx->pc = 0x38AD78u;
label_38ad78:
    // 0x38ad78: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x38ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_38ad7c:
    // 0x38ad7c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x38ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_38ad80:
    // 0x38ad80: 0xae09005c  sw          $t1, 0x5C($s0)
    ctx->pc = 0x38ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 9));
label_38ad84:
    // 0x38ad84: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x38ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_38ad88:
    // 0x38ad88: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x38ad88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_38ad8c:
    // 0x38ad8c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x38ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_38ad90:
    // 0x38ad90: 0x1840006c  blez        $v0, . + 4 + (0x6C << 2)
label_38ad94:
    if (ctx->pc == 0x38AD94u) {
        ctx->pc = 0x38AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD90u;
        // 0x38ad94: 0x892821  addu        $a1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AD98u;
        goto label_38ad98;
    }
    ctx->pc = 0x38AD90u;
    {
        const bool branch_taken_0x38ad90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD90u;
        // 0x38ad94: 0x892821  addu        $a1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ad90) {
            ctx->pc = 0x38AF44u;
            goto label_38af44;
        }
    }
    ctx->pc = 0x38AD98u;
label_38ad98:
    // 0x38ad98: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x38ad98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38ad9c:
    // 0x38ad9c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x38ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_38ada0:
    // 0x38ada0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x38ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38ada4:
    // 0x38ada4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x38ada4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_38ada8:
    // 0x38ada8: 0x72023  negu        $a0, $a3
    ctx->pc = 0x38ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_38adac:
    // 0x38adac: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x38adacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_38adb0:
    // 0x38adb0: 0x434024  and         $t0, $v0, $v1
    ctx->pc = 0x38adb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_38adb4:
    // 0x38adb4: 0x30490010  andi        $t1, $v0, 0x10
    ctx->pc = 0x38adb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_38adb8:
    // 0x38adb8: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x38adb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_38adbc:
    // 0x38adbc: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
label_38adc0:
    if (ctx->pc == 0x38ADC0u) {
        ctx->pc = 0x38ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADBCu;
        // 0x38adc0: 0x24c30018  addiu       $v1, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADC4u;
        goto label_38adc4;
    }
    ctx->pc = 0x38ADBCu;
    {
        const bool branch_taken_0x38adbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADBCu;
        // 0x38adc0: 0x24c30018  addiu       $v1, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38adbc) {
            ctx->pc = 0x38AE74u;
            goto label_38ae74;
        }
    }
    ctx->pc = 0x38ADC4u;
label_38adc4:
    // 0x38adc4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x38adc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_38adc8:
    // 0x38adc8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_38adcc:
    if (ctx->pc == 0x38ADCCu) {
        ctx->pc = 0x38ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADC8u;
        // 0x38adcc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADD0u;
        goto label_38add0;
    }
    ctx->pc = 0x38ADC8u;
    {
        const bool branch_taken_0x38adc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADC8u;
        // 0x38adcc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38adc8) {
            ctx->pc = 0x38AE3Cu;
            goto label_38ae3c;
        }
    }
    ctx->pc = 0x38ADD0u;
label_38add0:
    // 0x38add0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_38add4:
    if (ctx->pc == 0x38ADD4u) {
        ctx->pc = 0x38ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADD0u;
        // 0x38add4: 0xac60fffc  sw          $zero, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADD8u;
        goto label_38add8;
    }
    ctx->pc = 0x38ADD0u;
    {
        const bool branch_taken_0x38add0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADD0u;
        // 0x38add4: 0xac60fffc  sw          $zero, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38add0) {
            ctx->pc = 0x38AE0Cu;
            goto label_38ae0c;
        }
    }
    ctx->pc = 0x38ADD8u;
label_38add8:
    // 0x38add8: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_38addc:
    if (ctx->pc == 0x38ADDCu) {
        ctx->pc = 0x38ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADD8u;
        // 0x38addc: 0xacc00018  sw          $zero, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADE0u;
        goto label_38ade0;
    }
    ctx->pc = 0x38ADD8u;
    {
        const bool branch_taken_0x38add8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x38ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADD8u;
        // 0x38addc: 0xacc00018  sw          $zero, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38add8) {
            ctx->pc = 0x38AE00u;
            goto label_38ae00;
        }
    }
    ctx->pc = 0x38ADE0u;
label_38ade0:
    // 0x38ade0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x38ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38ade4:
    // 0x38ade4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38ade8:
    if (ctx->pc == 0x38ADE8u) {
        ctx->pc = 0x38ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADE4u;
        // 0x38ade8: 0x4a1018  mult        $v0, $v0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADECu;
        goto label_38adec;
    }
    ctx->pc = 0x38ADE4u;
    {
        const bool branch_taken_0x38ade4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADE4u;
        // 0x38ade8: 0x4a1018  mult        $v0, $v0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ade4) {
            ctx->pc = 0x38AE00u;
            goto label_38ae00;
        }
    }
    ctx->pc = 0x38ADECu;
label_38adec:
    // 0x38adec: 0xac65fffc  sw          $a1, -0x4($v1)
    ctx->pc = 0x38adecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 5));
label_38adf0:
    // 0x38adf0: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_38adf4:
    if (ctx->pc == 0x38ADF4u) {
        ctx->pc = 0x38ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADF0u;
        // 0x38adf4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ADF8u;
        goto label_38adf8;
    }
    ctx->pc = 0x38ADF0u;
    {
        const bool branch_taken_0x38adf0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ADF0u;
        // 0x38adf4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38adf0) {
            ctx->pc = 0x38AE00u;
            goto label_38ae00;
        }
    }
    ctx->pc = 0x38ADF8u;
label_38adf8:
    // 0x38adf8: 0xacc50018  sw          $a1, 0x18($a2)
    ctx->pc = 0x38adf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 5));
label_38adfc:
    // 0x38adfc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x38adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_38ae00:
    // 0x38ae00: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x38ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_38ae04:
    // 0x38ae04: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x38ae04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_38ae08:
    // 0x38ae08: 0xac60fffc  sw          $zero, -0x4($v1)
    ctx->pc = 0x38ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 0));
label_38ae0c:
    // 0x38ae0c: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_38ae10:
    if (ctx->pc == 0x38AE10u) {
        ctx->pc = 0x38AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE0Cu;
        // 0x38ae10: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE14u;
        goto label_38ae14;
    }
    ctx->pc = 0x38AE0Cu;
    {
        const bool branch_taken_0x38ae0c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x38AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE0Cu;
        // 0x38ae10: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae0c) {
            ctx->pc = 0x38AE34u;
            goto label_38ae34;
        }
    }
    ctx->pc = 0x38AE14u;
label_38ae14:
    // 0x38ae14: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x38ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38ae18:
    // 0x38ae18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38ae1c:
    if (ctx->pc == 0x38AE1Cu) {
        ctx->pc = 0x38AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE18u;
        // 0x38ae1c: 0x4a1018  mult        $v0, $v0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE20u;
        goto label_38ae20;
    }
    ctx->pc = 0x38AE18u;
    {
        const bool branch_taken_0x38ae18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE18u;
        // 0x38ae1c: 0x4a1018  mult        $v0, $v0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae18) {
            ctx->pc = 0x38AE34u;
            goto label_38ae34;
        }
    }
    ctx->pc = 0x38AE20u;
label_38ae20:
    // 0x38ae20: 0xac65fffc  sw          $a1, -0x4($v1)
    ctx->pc = 0x38ae20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 5));
label_38ae24:
    // 0x38ae24: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_38ae28:
    if (ctx->pc == 0x38AE28u) {
        ctx->pc = 0x38AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE24u;
        // 0x38ae28: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE2Cu;
        goto label_38ae2c;
    }
    ctx->pc = 0x38AE24u;
    {
        const bool branch_taken_0x38ae24 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE24u;
        // 0x38ae28: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae24) {
            ctx->pc = 0x38AE34u;
            goto label_38ae34;
        }
    }
    ctx->pc = 0x38AE2Cu;
label_38ae2c:
    // 0x38ae2c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x38ae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_38ae30:
    // 0x38ae30: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x38ae30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_38ae34:
    // 0x38ae34: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x38ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_38ae38:
    // 0x38ae38: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x38ae38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_38ae3c:
    // 0x38ae3c: 0xac60fffc  sw          $zero, -0x4($v1)
    ctx->pc = 0x38ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 0));
label_38ae40:
    // 0x38ae40: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_38ae44:
    if (ctx->pc == 0x38AE44u) {
        ctx->pc = 0x38AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE40u;
        // 0x38ae44: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE48u;
        goto label_38ae48;
    }
    ctx->pc = 0x38AE40u;
    {
        const bool branch_taken_0x38ae40 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x38AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE40u;
        // 0x38ae44: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae40) {
            ctx->pc = 0x38AE68u;
            goto label_38ae68;
        }
    }
    ctx->pc = 0x38AE48u;
label_38ae48:
    // 0x38ae48: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x38ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38ae4c:
    // 0x38ae4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38ae50:
    if (ctx->pc == 0x38AE50u) {
        ctx->pc = 0x38AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE4Cu;
        // 0x38ae50: 0x4a1018  mult        $v0, $v0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE54u;
        goto label_38ae54;
    }
    ctx->pc = 0x38AE4Cu;
    {
        const bool branch_taken_0x38ae4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE4Cu;
        // 0x38ae50: 0x4a1018  mult        $v0, $v0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae4c) {
            ctx->pc = 0x38AE68u;
            goto label_38ae68;
        }
    }
    ctx->pc = 0x38AE54u;
label_38ae54:
    // 0x38ae54: 0xac65fffc  sw          $a1, -0x4($v1)
    ctx->pc = 0x38ae54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 5));
label_38ae58:
    // 0x38ae58: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_38ae5c:
    if (ctx->pc == 0x38AE5Cu) {
        ctx->pc = 0x38AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE58u;
        // 0x38ae5c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE60u;
        goto label_38ae60;
    }
    ctx->pc = 0x38AE58u;
    {
        const bool branch_taken_0x38ae58 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE58u;
        // 0x38ae5c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae58) {
            ctx->pc = 0x38AE68u;
            goto label_38ae68;
        }
    }
    ctx->pc = 0x38AE60u;
label_38ae60:
    // 0x38ae60: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x38ae60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_38ae64:
    // 0x38ae64: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x38ae64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_38ae68:
    // 0x38ae68: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x38ae68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_38ae6c:
    // 0x38ae6c: 0x10e00035  beqz        $a3, . + 4 + (0x35 << 2)
label_38ae70:
    if (ctx->pc == 0x38AE70u) {
        ctx->pc = 0x38AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE6Cu;
        // 0x38ae70: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE74u;
        goto label_38ae74;
    }
    ctx->pc = 0x38AE6Cu;
    {
        const bool branch_taken_0x38ae6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE6Cu;
        // 0x38ae70: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae6c) {
            ctx->pc = 0x38AF44u;
            goto label_38af44;
        }
    }
    ctx->pc = 0x38AE74u;
label_38ae74:
    // 0x38ae74: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x38ae74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_38ae78:
    // 0x38ae78: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x38ae78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_38ae7c:
    // 0x38ae7c: 0x0  nop
    ctx->pc = 0x38ae7cu;
    // NOP
label_38ae80:
    // 0x38ae80: 0xac80fffc  sw          $zero, -0x4($a0)
    ctx->pc = 0x38ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 0));
label_38ae84:
    // 0x38ae84: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_38ae88:
    if (ctx->pc == 0x38AE88u) {
        ctx->pc = 0x38AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE84u;
        // 0x38ae88: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE8Cu;
        goto label_38ae8c;
    }
    ctx->pc = 0x38AE84u;
    {
        const bool branch_taken_0x38ae84 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x38AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE84u;
        // 0x38ae88: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae84) {
            ctx->pc = 0x38AEACu;
            goto label_38aeac;
        }
    }
    ctx->pc = 0x38AE8Cu;
label_38ae8c:
    // 0x38ae8c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x38ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38ae90:
    // 0x38ae90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38ae94:
    if (ctx->pc == 0x38AE94u) {
        ctx->pc = 0x38AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE90u;
        // 0x38ae94: 0x4a1018  mult        $v0, $v0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AE98u;
        goto label_38ae98;
    }
    ctx->pc = 0x38AE90u;
    {
        const bool branch_taken_0x38ae90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE90u;
        // 0x38ae94: 0x4a1018  mult        $v0, $v0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae90) {
            ctx->pc = 0x38AEACu;
            goto label_38aeac;
        }
    }
    ctx->pc = 0x38AE98u;
label_38ae98:
    // 0x38ae98: 0xacc5fffc  sw          $a1, -0x4($a2)
    ctx->pc = 0x38ae98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967292), GPR_U32(ctx, 5));
label_38ae9c:
    // 0x38ae9c: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_38aea0:
    if (ctx->pc == 0x38AEA0u) {
        ctx->pc = 0x38AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE9Cu;
        // 0x38aea0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AEA4u;
        goto label_38aea4;
    }
    ctx->pc = 0x38AE9Cu;
    {
        const bool branch_taken_0x38ae9c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE9Cu;
        // 0x38aea0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae9c) {
            ctx->pc = 0x38AEACu;
            goto label_38aeac;
        }
    }
    ctx->pc = 0x38AEA4u;
label_38aea4:
    // 0x38aea4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x38aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_38aea8:
    // 0x38aea8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x38aea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_38aeac:
    // 0x38aeac: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x38aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_38aeb0:
    // 0x38aeb0: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_38aeb4:
    if (ctx->pc == 0x38AEB4u) {
        ctx->pc = 0x38AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEB0u;
        // 0x38aeb4: 0xac60001c  sw          $zero, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AEB8u;
        goto label_38aeb8;
    }
    ctx->pc = 0x38AEB0u;
    {
        const bool branch_taken_0x38aeb0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x38AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEB0u;
        // 0x38aeb4: 0xac60001c  sw          $zero, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aeb0) {
            ctx->pc = 0x38AED8u;
            goto label_38aed8;
        }
    }
    ctx->pc = 0x38AEB8u;
label_38aeb8:
    // 0x38aeb8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x38aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38aebc:
    // 0x38aebc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38aec0:
    if (ctx->pc == 0x38AEC0u) {
        ctx->pc = 0x38AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEBCu;
        // 0x38aec0: 0x4a1018  mult        $v0, $v0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AEC4u;
        goto label_38aec4;
    }
    ctx->pc = 0x38AEBCu;
    {
        const bool branch_taken_0x38aebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEBCu;
        // 0x38aec0: 0x4a1018  mult        $v0, $v0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aebc) {
            ctx->pc = 0x38AED8u;
            goto label_38aed8;
        }
    }
    ctx->pc = 0x38AEC4u;
label_38aec4:
    // 0x38aec4: 0xacc50018  sw          $a1, 0x18($a2)
    ctx->pc = 0x38aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 5));
label_38aec8:
    // 0x38aec8: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_38aecc:
    if (ctx->pc == 0x38AECCu) {
        ctx->pc = 0x38AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEC8u;
        // 0x38aecc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AED0u;
        goto label_38aed0;
    }
    ctx->pc = 0x38AEC8u;
    {
        const bool branch_taken_0x38aec8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEC8u;
        // 0x38aecc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aec8) {
            ctx->pc = 0x38AED8u;
            goto label_38aed8;
        }
    }
    ctx->pc = 0x38AED0u;
label_38aed0:
    // 0x38aed0: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x38aed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
label_38aed4:
    // 0x38aed4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x38aed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_38aed8:
    // 0x38aed8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x38aed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_38aedc:
    // 0x38aedc: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_38aee0:
    if (ctx->pc == 0x38AEE0u) {
        ctx->pc = 0x38AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEDCu;
        // 0x38aee0: 0xac600038  sw          $zero, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AEE4u;
        goto label_38aee4;
    }
    ctx->pc = 0x38AEDCu;
    {
        const bool branch_taken_0x38aedc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x38AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEDCu;
        // 0x38aee0: 0xac600038  sw          $zero, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aedc) {
            ctx->pc = 0x38AF04u;
            goto label_38af04;
        }
    }
    ctx->pc = 0x38AEE4u;
label_38aee4:
    // 0x38aee4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x38aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38aee8:
    // 0x38aee8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38aeec:
    if (ctx->pc == 0x38AEECu) {
        ctx->pc = 0x38AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEE8u;
        // 0x38aeec: 0x4a1018  mult        $v0, $v0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AEF0u;
        goto label_38aef0;
    }
    ctx->pc = 0x38AEE8u;
    {
        const bool branch_taken_0x38aee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEE8u;
        // 0x38aeec: 0x4a1018  mult        $v0, $v0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aee8) {
            ctx->pc = 0x38AF04u;
            goto label_38af04;
        }
    }
    ctx->pc = 0x38AEF0u;
label_38aef0:
    // 0x38aef0: 0xacc50034  sw          $a1, 0x34($a2)
    ctx->pc = 0x38aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 5));
label_38aef4:
    // 0x38aef4: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_38aef8:
    if (ctx->pc == 0x38AEF8u) {
        ctx->pc = 0x38AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEF4u;
        // 0x38aef8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AEFCu;
        goto label_38aefc;
    }
    ctx->pc = 0x38AEF4u;
    {
        const bool branch_taken_0x38aef4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEF4u;
        // 0x38aef8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aef4) {
            ctx->pc = 0x38AF04u;
            goto label_38af04;
        }
    }
    ctx->pc = 0x38AEFCu;
label_38aefc:
    // 0x38aefc: 0xac650038  sw          $a1, 0x38($v1)
    ctx->pc = 0x38aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 5));
label_38af00:
    // 0x38af00: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x38af00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_38af04:
    // 0x38af04: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x38af04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_38af08:
    // 0x38af08: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_38af0c:
    if (ctx->pc == 0x38AF0Cu) {
        ctx->pc = 0x38AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF08u;
        // 0x38af0c: 0xac600054  sw          $zero, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AF10u;
        goto label_38af10;
    }
    ctx->pc = 0x38AF08u;
    {
        const bool branch_taken_0x38af08 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x38AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF08u;
        // 0x38af0c: 0xac600054  sw          $zero, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38af08) {
            ctx->pc = 0x38AF30u;
            goto label_38af30;
        }
    }
    ctx->pc = 0x38AF10u;
label_38af10:
    // 0x38af10: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x38af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38af14:
    // 0x38af14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38af18:
    if (ctx->pc == 0x38AF18u) {
        ctx->pc = 0x38AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF14u;
        // 0x38af18: 0x4a1018  mult        $v0, $v0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AF1Cu;
        goto label_38af1c;
    }
    ctx->pc = 0x38AF14u;
    {
        const bool branch_taken_0x38af14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF14u;
        // 0x38af18: 0x4a1018  mult        $v0, $v0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38af14) {
            ctx->pc = 0x38AF30u;
            goto label_38af30;
        }
    }
    ctx->pc = 0x38AF1Cu;
label_38af1c:
    // 0x38af1c: 0xacc50050  sw          $a1, 0x50($a2)
    ctx->pc = 0x38af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 5));
label_38af20:
    // 0x38af20: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_38af24:
    if (ctx->pc == 0x38AF24u) {
        ctx->pc = 0x38AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF20u;
        // 0x38af24: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AF28u;
        goto label_38af28;
    }
    ctx->pc = 0x38AF20u;
    {
        const bool branch_taken_0x38af20 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF20u;
        // 0x38af24: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38af20) {
            ctx->pc = 0x38AF30u;
            goto label_38af30;
        }
    }
    ctx->pc = 0x38AF28u;
label_38af28:
    // 0x38af28: 0xac650054  sw          $a1, 0x54($v1)
    ctx->pc = 0x38af28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 5));
label_38af2c:
    // 0x38af2c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x38af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_38af30:
    // 0x38af30: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x38af30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_38af34:
    // 0x38af34: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x38af34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_38af38:
    // 0x38af38: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x38af38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_38af3c:
    // 0x38af3c: 0x14e0ffd0  bnez        $a3, . + 4 + (-0x30 << 2)
label_38af40:
    if (ctx->pc == 0x38AF40u) {
        ctx->pc = 0x38AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF3Cu;
        // 0x38af40: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AF44u;
        goto label_38af44;
    }
    ctx->pc = 0x38AF3Cu;
    {
        const bool branch_taken_0x38af3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x38AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF3Cu;
        // 0x38af40: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38af3c) {
            ctx->pc = 0x38AE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ae80;
        }
    }
    ctx->pc = 0x38AF44u;
label_38af44:
    // 0x38af44: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x38af44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_38af48:
    // 0x38af48: 0xb33823  subu        $a3, $a1, $s3
    ctx->pc = 0x38af48u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_38af4c:
    // 0x38af4c: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x38af4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_38af50:
    // 0x38af50: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
label_38af54:
    if (ctx->pc == 0x38AF54u) {
        ctx->pc = 0x38AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF50u;
        // 0x38af54: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AF58u;
        goto label_38af58;
    }
    ctx->pc = 0x38AF50u;
    {
        const bool branch_taken_0x38af50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38af50) {
            ctx->pc = 0x38AF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AF50u;
            // 0x38af54: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B068u;
            goto label_38b068;
        }
    }
    ctx->pc = 0x38AF58u;
label_38af58:
    // 0x38af58: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x38af58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_38af5c:
    // 0x38af5c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x38af5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_38af60:
    // 0x38af60: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x38af60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_38af64:
    // 0x38af64: 0xa73823  subu        $a3, $a1, $a3
    ctx->pc = 0x38af64u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_38af68:
    // 0x38af68: 0x71023  negu        $v0, $a3
    ctx->pc = 0x38af68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_38af6c:
    // 0x38af6c: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x38af6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_38af70:
    // 0x38af70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38af70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38af74:
    // 0x38af74: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
label_38af78:
    if (ctx->pc == 0x38AF78u) {
        ctx->pc = 0x38AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF74u;
        // 0x38af78: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AF7Cu;
        goto label_38af7c;
    }
    ctx->pc = 0x38AF74u;
    {
        const bool branch_taken_0x38af74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF74u;
        // 0x38af78: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38af74) {
            ctx->pc = 0x38AFE8u;
            goto label_38afe8;
        }
    }
    ctx->pc = 0x38AF7Cu;
label_38af7c:
    // 0x38af7c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x38af7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_38af80:
    // 0x38af80: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_38af84:
    if (ctx->pc == 0x38AF84u) {
        ctx->pc = 0x38AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF80u;
        // 0x38af84: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AF88u;
        goto label_38af88;
    }
    ctx->pc = 0x38AF80u;
    {
        const bool branch_taken_0x38af80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF80u;
        // 0x38af84: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38af80) {
            ctx->pc = 0x38AFC8u;
            goto label_38afc8;
        }
    }
    ctx->pc = 0x38AF88u;
label_38af88:
    // 0x38af88: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_38af8c:
    if (ctx->pc == 0x38AF8Cu) {
        ctx->pc = 0x38AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF88u;
        // 0x38af8c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AF90u;
        goto label_38af90;
    }
    ctx->pc = 0x38AF88u;
    {
        const bool branch_taken_0x38af88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38af88) {
            ctx->pc = 0x38AF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AF88u;
            // 0x38af8c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AFB0u;
            goto label_38afb0;
        }
    }
    ctx->pc = 0x38AF90u;
label_38af90:
    // 0x38af90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x38af90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_38af94:
    // 0x38af94: 0x2464001c  addiu       $a0, $v1, 0x1C
    ctx->pc = 0x38af94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_38af98:
    // 0x38af98: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x38af98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_38af9c:
    // 0x38af9c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x38af9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_38afa0:
    // 0x38afa0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x38afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_38afa4:
    // 0x38afa4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x38afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_38afa8:
    // 0x38afa8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x38afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_38afac:
    // 0x38afac: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x38afacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_38afb0:
    // 0x38afb0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x38afb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_38afb4:
    // 0x38afb4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x38afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_38afb8:
    // 0x38afb8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x38afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_38afbc:
    // 0x38afbc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x38afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_38afc0:
    // 0x38afc0: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x38afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_38afc4:
    // 0x38afc4: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x38afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_38afc8:
    // 0x38afc8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x38afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_38afcc:
    // 0x38afcc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x38afccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_38afd0:
    // 0x38afd0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x38afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_38afd4:
    // 0x38afd4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x38afd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_38afd8:
    // 0x38afd8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x38afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_38afdc:
    // 0x38afdc: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x38afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_38afe0:
    // 0x38afe0: 0x10e00020  beqz        $a3, . + 4 + (0x20 << 2)
label_38afe4:
    if (ctx->pc == 0x38AFE4u) {
        ctx->pc = 0x38AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AFE0u;
        // 0x38afe4: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AFE8u;
        goto label_38afe8;
    }
    ctx->pc = 0x38AFE0u;
    {
        const bool branch_taken_0x38afe0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AFE0u;
        // 0x38afe4: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38afe0) {
            ctx->pc = 0x38B064u;
            goto label_38b064;
        }
    }
    ctx->pc = 0x38AFE8u;
label_38afe8:
    // 0x38afe8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38afe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38afec:
    // 0x38afec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x38afecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38aff0:
    // 0x38aff0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38aff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38aff4:
    // 0x38aff4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38aff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38aff8:
    // 0x38aff8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x38aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_38affc:
    // 0x38affc: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x38affcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_38b000:
    // 0x38b000: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x38b000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_38b004:
    // 0x38b004: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x38b004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_38b008:
    // 0x38b008: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x38b008u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_38b00c:
    // 0x38b00c: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x38b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_38b010:
    // 0x38b010: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x38b010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_38b014:
    // 0x38b014: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x38b014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_38b018:
    // 0x38b018: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x38b018u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
label_38b01c:
    // 0x38b01c: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x38b01cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
label_38b020:
    // 0x38b020: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x38b020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_38b024:
    // 0x38b024: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x38b024u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
label_38b028:
    // 0x38b028: 0xacc00048  sw          $zero, 0x48($a2)
    ctx->pc = 0x38b028u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 0));
label_38b02c:
    // 0x38b02c: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x38b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
label_38b030:
    // 0x38b030: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x38b030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
label_38b034:
    // 0x38b034: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x38b034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_38b038:
    // 0x38b038: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x38b038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
label_38b03c:
    // 0x38b03c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x38b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_38b040:
    // 0x38b040: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x38b040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_38b044:
    // 0x38b044: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x38b044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_38b048:
    // 0x38b048: 0xac50001c  sw          $s0, 0x1C($v0)
    ctx->pc = 0x38b048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 16));
label_38b04c:
    // 0x38b04c: 0xac500038  sw          $s0, 0x38($v0)
    ctx->pc = 0x38b04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 16));
label_38b050:
    // 0x38b050: 0xacc00064  sw          $zero, 0x64($a2)
    ctx->pc = 0x38b050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 0));
label_38b054:
    // 0x38b054: 0xac500054  sw          $s0, 0x54($v0)
    ctx->pc = 0x38b054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 16));
label_38b058:
    // 0x38b058: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x38b058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_38b05c:
    // 0x38b05c: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
label_38b060:
    if (ctx->pc == 0x38B060u) {
        ctx->pc = 0x38B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B05Cu;
        // 0x38b060: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B064u;
        goto label_38b064;
    }
    ctx->pc = 0x38B05Cu;
    {
        const bool branch_taken_0x38b05c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B05Cu;
        // 0x38b060: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b05c) {
            ctx->pc = 0x38AFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38aff8;
        }
    }
    ctx->pc = 0x38B064u;
label_38b064:
    // 0x38b064: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x38b064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_38b068:
    // 0x38b068: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x38b068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_38b06c:
    // 0x38b06c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x38b06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38b070:
    // 0x38b070: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x38b070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38b074:
    // 0x38b074: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x38b074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38b078:
    // 0x38b078: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38b078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38b07c:
    // 0x38b07c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38b07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38b080:
    // 0x38b080: 0x3e00008  jr          $ra
label_38b084:
    if (ctx->pc == 0x38B084u) {
        ctx->pc = 0x38B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B080u;
        // 0x38b084: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B088u;
        goto label_38b088;
    }
    ctx->pc = 0x38B080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B080u;
        // 0x38b084: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B088u;
label_38b088:
    // 0x38b088: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x38b088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_38b08c:
    // 0x38b08c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x38b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_38b090:
    // 0x38b090: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x38b090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_38b094:
    // 0x38b094: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38b094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_38b098:
    // 0x38b098: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x38b098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_38b09c:
    // 0x38b09c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x38b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_38b0a0:
    // 0x38b0a0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x38b0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_38b0a4:
    // 0x38b0a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x38b0a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38b0a8:
    // 0x38b0a8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x38b0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_38b0ac:
    // 0x38b0ac: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x38b0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_38b0b0:
    // 0x38b0b0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x38b0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_38b0b4:
    // 0x38b0b4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x38b0b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38b0b8:
    // 0x38b0b8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x38b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_38b0bc:
    // 0x38b0bc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x38b0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_38b0c0:
    // 0x38b0c0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x38b0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_38b0c4:
    // 0x38b0c4: 0x34a5000f  ori         $a1, $a1, 0xF
    ctx->pc = 0x38b0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
label_38b0c8:
    // 0x38b0c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x38b0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_38b0cc:
    // 0x38b0cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38b0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38b0d0:
    // 0x38b0d0: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x38b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_38b0d4:
    // 0x38b0d4: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x38b0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_38b0d8:
    // 0x38b0d8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x38b0d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_38b0dc:
    // 0x38b0dc: 0x8ea60018  lw          $a2, 0x18($s5)
    ctx->pc = 0x38b0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_38b0e0:
    // 0x38b0e0: 0x30e70010  andi        $a3, $a3, 0x10
    ctx->pc = 0x38b0e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
label_38b0e4:
    // 0x38b0e4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x38b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_38b0e8:
    // 0x38b0e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x38b0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_38b0ec:
    // 0x38b0ec: 0x2496001c  addiu       $s6, $a0, 0x1C
    ctx->pc = 0x38b0ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_38b0f0:
    // 0x38b0f0: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x38b0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_38b0f4:
    // 0x38b0f4: 0x87b00b  movn        $s6, $a0, $a3
    ctx->pc = 0x38b0f4u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 4));
label_38b0f8:
    // 0x38b0f8: 0x2c68018  mult        $s0, $s6, $a2
    ctx->pc = 0x38b0f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_38b0fc:
    // 0x38b0fc: 0x40f809  jalr        $v0
label_38b100:
    if (ctx->pc == 0x38B100u) {
        ctx->pc = 0x38B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B0FCu;
        // 0x38b100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B104u;
        goto label_38b104;
    }
    ctx->pc = 0x38B0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38B104u);
        ctx->pc = 0x38B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B0FCu;
        // 0x38b100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B0FCu, 0x38B104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B104u;
label_38b104:
    // 0x38b104: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x38b104u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b108:
    // 0x38b108: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_38b10c:
    if (ctx->pc == 0x38B10Cu) {
        ctx->pc = 0x38B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B108u;
        // 0x38b10c: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B110u;
        goto label_38b110;
    }
    ctx->pc = 0x38B108u;
    {
        const bool branch_taken_0x38b108 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b108) {
            ctx->pc = 0x38B10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B108u;
            // 0x38b10c: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B140u;
            goto label_38b140;
        }
    }
    ctx->pc = 0x38B110u;
label_38b110:
    // 0x38b110: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38b114:
    // 0x38b114: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38b114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38b118:
    // 0x38b118: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38b118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_38b11c:
    // 0x38b11c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38b11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38b120:
    // 0x38b120: 0xc1035f6  jal         func_40D7D8
label_38b124:
    if (ctx->pc == 0x38B124u) {
        ctx->pc = 0x38B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B120u;
        // 0x38b124: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B128u;
        goto label_38b128;
    }
    ctx->pc = 0x38B120u;
    SET_GPR_U32(ctx, 31, 0x38B128u);
    ctx->pc = 0x38B124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B120u;
    // 0x38b124: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38B120u, 0x38B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B128u;
label_38b128:
    // 0x38b128: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38b128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38b12c:
    // 0x38b12c: 0xc103628  jal         func_40D8A0
label_38b130:
    if (ctx->pc == 0x38B130u) {
        ctx->pc = 0x38B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B12Cu;
        // 0x38b130: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B134u;
        goto label_38b134;
    }
    ctx->pc = 0x38B12Cu;
    SET_GPR_U32(ctx, 31, 0x38B134u);
    ctx->pc = 0x38B130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B12Cu;
    // 0x38b130: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38B12Cu, 0x38B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B134u;
label_38b134:
    // 0x38b134: 0x100000ae  b           . + 4 + (0xAE << 2)
label_38b138:
    if (ctx->pc == 0x38B138u) {
        ctx->pc = 0x38B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B134u;
        // 0x38b138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B13Cu;
        goto label_38b13c;
    }
    ctx->pc = 0x38B134u;
    {
        const bool branch_taken_0x38b134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B134u;
        // 0x38b138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b134) {
            ctx->pc = 0x38B3F0u;
            goto label_38b3f0;
        }
    }
    ctx->pc = 0x38B13Cu;
label_38b13c:
    // 0x38b13c: 0x0  nop
    ctx->pc = 0x38b13cu;
    // NOP
label_38b140:
    // 0x38b140: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38b140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38b144:
    // 0x38b144: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x38b144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38b148:
    // 0x38b148: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
label_38b14c:
    if (ctx->pc == 0x38B14Cu) {
        ctx->pc = 0x38B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B148u;
        // 0x38b14c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B150u;
        goto label_38b150;
    }
    ctx->pc = 0x38B148u;
    {
        const bool branch_taken_0x38b148 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B148u;
        // 0x38b14c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b148) {
            ctx->pc = 0x38B1C0u;
            goto label_38b1c0;
        }
    }
    ctx->pc = 0x38B150u;
label_38b150:
    // 0x38b150: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38b150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38b154:
    // 0x38b154: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x38b154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_38b158:
    // 0x38b158: 0x521e0014  beql        $s0, $fp, . + 4 + (0x14 << 2)
label_38b15c:
    if (ctx->pc == 0x38B15Cu) {
        ctx->pc = 0x38B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B158u;
        // 0x38b15c: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B160u;
        goto label_38b160;
    }
    ctx->pc = 0x38B158u;
    {
        const bool branch_taken_0x38b158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 30));
        if (branch_taken_0x38b158) {
            ctx->pc = 0x38B15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B158u;
            // 0x38b15c: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B1ACu;
            goto label_38b1ac;
        }
    }
    ctx->pc = 0x38B160u;
label_38b160:
    // 0x38b160: 0x8ea2005c  lw          $v0, 0x5C($s5)
    ctx->pc = 0x38b160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_38b164:
    // 0x38b164: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x38b164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_38b168:
    // 0x38b168: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x38b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_38b16c:
    // 0x38b16c: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x38b16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_38b170:
    // 0x38b170: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x38b170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_38b174:
    // 0x38b174: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x38b174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_38b178:
    // 0x38b178: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x38b178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_38b17c:
    // 0x38b17c: 0x68480017  ldl         $t0, 0x17($v0)
    ctx->pc = 0x38b17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_38b180:
    // 0x38b180: 0x6c480010  ldr         $t0, 0x10($v0)
    ctx->pc = 0x38b180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_38b184:
    // 0x38b184: 0x8c490018  lw          $t1, 0x18($v0)
    ctx->pc = 0x38b184u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_38b188:
    // 0x38b188: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x38b188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38b18c:
    // 0x38b18c: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x38b18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38b190:
    // 0x38b190: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x38b190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38b194:
    // 0x38b194: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x38b194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38b198:
    // 0x38b198: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x38b198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38b19c:
    // 0x38b19c: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x38b19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38b1a0:
    // 0x38b1a0: 0xac690018  sw          $t1, 0x18($v1)
    ctx->pc = 0x38b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 9));
label_38b1a4:
    // 0x38b1a4: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x38b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_38b1a8:
    // 0x38b1a8: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x38b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_38b1ac:
    // 0x38b1ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x38b1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_38b1b0:
    // 0x38b1b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x38b1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38b1b4:
    // 0x38b1b4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x38b1b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_38b1b8:
    // 0x38b1b8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_38b1bc:
    if (ctx->pc == 0x38B1BCu) {
        ctx->pc = 0x38B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1B8u;
        // 0x38b1bc: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B1C0u;
        goto label_38b1c0;
    }
    ctx->pc = 0x38B1B8u;
    {
        const bool branch_taken_0x38b1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1B8u;
        // 0x38b1bc: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b1b8) {
            ctx->pc = 0x38B158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b158;
        }
    }
    ctx->pc = 0x38B1C0u;
label_38b1c0:
    // 0x38b1c0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x38b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_38b1c4:
    // 0x38b1c4: 0x8ea4005c  lw          $a0, 0x5C($s5)
    ctx->pc = 0x38b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_38b1c8:
    // 0x38b1c8: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x38b1c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_38b1cc:
    // 0x38b1cc: 0xe22818  mult        $a1, $a3, $v0
    ctx->pc = 0x38b1ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38b1d0:
    // 0x38b1d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x38b1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38b1d4:
    // 0x38b1d4: 0xb79021  addu        $s2, $a1, $s7
    ctx->pc = 0x38b1d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
label_38b1d8:
    // 0x38b1d8: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
label_38b1dc:
    if (ctx->pc == 0x38B1DCu) {
        ctx->pc = 0x38B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1D8u;
        // 0x38b1dc: 0x838821  addu        $s1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B1E0u;
        goto label_38b1e0;
    }
    ctx->pc = 0x38B1D8u;
    {
        const bool branch_taken_0x38b1d8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x38B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1D8u;
        // 0x38b1dc: 0x838821  addu        $s1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b1d8) {
            ctx->pc = 0x38B218u;
            goto label_38b218;
        }
    }
    ctx->pc = 0x38B1E0u;
label_38b1e0:
    // 0x38b1e0: 0x26d4ffe4  addiu       $s4, $s6, -0x1C
    ctx->pc = 0x38b1e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967268));
label_38b1e4:
    // 0x38b1e4: 0x0  nop
    ctx->pc = 0x38b1e4u;
    // NOP
label_38b1e8:
    // 0x38b1e8: 0x121e0006  beq         $s0, $fp, . + 4 + (0x6 << 2)
label_38b1ec:
    if (ctx->pc == 0x38B1ECu) {
        ctx->pc = 0x38B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1E8u;
        // 0x38b1ec: 0x26d3ffe4  addiu       $s3, $s6, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B1F0u;
        goto label_38b1f0;
    }
    ctx->pc = 0x38B1E8u;
    {
        const bool branch_taken_0x38b1e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 30));
        ctx->pc = 0x38B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1E8u;
        // 0x38b1ec: 0x26d3ffe4  addiu       $s3, $s6, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b1e8) {
            ctx->pc = 0x38B204u;
            goto label_38b204;
        }
    }
    ctx->pc = 0x38B1F0u;
label_38b1f0:
    // 0x38b1f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38b1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38b1f4:
    // 0x38b1f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38b1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38b1f8:
    // 0x38b1f8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x38b1f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38b1fc:
    // 0x38b1fc: 0xc0bb778  jal         func_2EDDE0
label_38b200:
    if (ctx->pc == 0x38B200u) {
        ctx->pc = 0x38B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1FCu;
        // 0x38b200: 0x2549021  addu        $s2, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B204u;
        goto label_38b204;
    }
    ctx->pc = 0x38B1FCu;
    SET_GPR_U32(ctx, 31, 0x38B204u);
    ctx->pc = 0x38B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B1FCu;
    // 0x38b200: 0x2549021  addu        $s2, $s2, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x38B1FCu, 0x38B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B204u;
label_38b204:
    // 0x38b204: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x38b204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_38b208:
    // 0x38b208: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x38b208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_38b20c:
    // 0x38b20c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x38b20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_38b210:
    // 0x38b210: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_38b214:
    if (ctx->pc == 0x38B214u) {
        ctx->pc = 0x38B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B210u;
        // 0x38b214: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B218u;
        goto label_38b218;
    }
    ctx->pc = 0x38B210u;
    {
        const bool branch_taken_0x38b210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B210u;
        // 0x38b214: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b210) {
            ctx->pc = 0x38B1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b1e8;
        }
    }
    ctx->pc = 0x38B218u;
label_38b218:
    // 0x38b218: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x38b218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_38b21c:
    // 0x38b21c: 0x24c2e880  addiu       $v0, $a2, -0x1780
    ctx->pc = 0x38b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_38b220:
    // 0x38b220: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x38b220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_38b224:
    // 0x38b224: 0x60f809  jalr        $v1
label_38b228:
    if (ctx->pc == 0x38B228u) {
        ctx->pc = 0x38B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B224u;
        // 0x38b228: 0x8ea4005c  lw          $a0, 0x5C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B22Cu;
        goto label_38b22c;
    }
    ctx->pc = 0x38B224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38B22Cu);
        ctx->pc = 0x38B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B224u;
        // 0x38b228: 0x8ea4005c  lw          $a0, 0x5C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B224u, 0x38B22Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B22Cu;
label_38b22c:
    // 0x38b22c: 0x8ea50018  lw          $a1, 0x18($s5)
    ctx->pc = 0x38b22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_38b230:
    // 0x38b230: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x38b230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_38b234:
    // 0x38b234: 0xaeb7005c  sw          $s7, 0x5C($s5)
    ctx->pc = 0x38b234u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 23));
label_38b238:
    // 0x38b238: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x38b238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_38b23c:
    // 0x38b23c: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x38b23cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_38b240:
    // 0x38b240: 0xaea40018  sw          $a0, 0x18($s5)
    ctx->pc = 0x38b240u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 4));
label_38b244:
    // 0x38b244: 0x18800069  blez        $a0, . + 4 + (0x69 << 2)
label_38b248:
    if (ctx->pc == 0x38B248u) {
        ctx->pc = 0x38B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B244u;
        // 0x38b248: 0xd71821  addu        $v1, $a2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B24Cu;
        goto label_38b24c;
    }
    ctx->pc = 0x38B244u;
    {
        const bool branch_taken_0x38b244 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x38B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B244u;
        // 0x38b248: 0xd71821  addu        $v1, $a2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b244) {
            ctx->pc = 0x38B3ECu;
            goto label_38b3ec;
        }
    }
    ctx->pc = 0x38B24Cu;
label_38b24c:
    // 0x38b24c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x38b24cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_38b250:
    // 0x38b250: 0x41023  negu        $v0, $a0
    ctx->pc = 0x38b250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_38b254:
    // 0x38b254: 0x24b0ffff  addiu       $s0, $a1, -0x1
    ctx->pc = 0x38b254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_38b258:
    // 0x38b258: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x38b258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_38b25c:
    // 0x38b25c: 0x8ea60014  lw          $a2, 0x14($s5)
    ctx->pc = 0x38b25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_38b260:
    // 0x38b260: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x38b260u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_38b264:
    // 0x38b264: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
label_38b268:
    if (ctx->pc == 0x38B268u) {
        ctx->pc = 0x38B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B264u;
        // 0x38b268: 0x24e50018  addiu       $a1, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B26Cu;
        goto label_38b26c;
    }
    ctx->pc = 0x38B264u;
    {
        const bool branch_taken_0x38b264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B264u;
        // 0x38b268: 0x24e50018  addiu       $a1, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b264) {
            ctx->pc = 0x38B31Cu;
            goto label_38b31c;
        }
    }
    ctx->pc = 0x38B26Cu;
label_38b26c:
    // 0x38b26c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x38b26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_38b270:
    // 0x38b270: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_38b274:
    if (ctx->pc == 0x38B274u) {
        ctx->pc = 0x38B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B270u;
        // 0x38b274: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B278u;
        goto label_38b278;
    }
    ctx->pc = 0x38B270u;
    {
        const bool branch_taken_0x38b270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B270u;
        // 0x38b274: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b270) {
            ctx->pc = 0x38B2E4u;
            goto label_38b2e4;
        }
    }
    ctx->pc = 0x38B278u;
label_38b278:
    // 0x38b278: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_38b27c:
    if (ctx->pc == 0x38B27Cu) {
        ctx->pc = 0x38B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B278u;
        // 0x38b27c: 0xaca0fffc  sw          $zero, -0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B280u;
        goto label_38b280;
    }
    ctx->pc = 0x38B278u;
    {
        const bool branch_taken_0x38b278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B278u;
        // 0x38b27c: 0xaca0fffc  sw          $zero, -0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b278) {
            ctx->pc = 0x38B2B4u;
            goto label_38b2b4;
        }
    }
    ctx->pc = 0x38B280u;
label_38b280:
    // 0x38b280: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_38b284:
    if (ctx->pc == 0x38B284u) {
        ctx->pc = 0x38B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B280u;
        // 0x38b284: 0xace00018  sw          $zero, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B288u;
        goto label_38b288;
    }
    ctx->pc = 0x38B280u;
    {
        const bool branch_taken_0x38b280 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B280u;
        // 0x38b284: 0xace00018  sw          $zero, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b280) {
            ctx->pc = 0x38B2A8u;
            goto label_38b2a8;
        }
    }
    ctx->pc = 0x38B288u;
label_38b288:
    // 0x38b288: 0xc92018  mult        $a0, $a2, $t1
    ctx->pc = 0x38b288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_38b28c:
    // 0x38b28c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x38b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_38b290:
    // 0x38b290: 0xaca3fffc  sw          $v1, -0x4($a1)
    ctx->pc = 0x38b290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 3));
label_38b294:
    // 0x38b294: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x38b294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_38b298:
    // 0x38b298: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38b29c:
    if (ctx->pc == 0x38B29Cu) {
        ctx->pc = 0x38B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B298u;
        // 0x38b29c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B2A0u;
        goto label_38b2a0;
    }
    ctx->pc = 0x38B298u;
    {
        const bool branch_taken_0x38b298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B298u;
        // 0x38b29c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b298) {
            ctx->pc = 0x38B2A8u;
            goto label_38b2a8;
        }
    }
    ctx->pc = 0x38B2A0u;
label_38b2a0:
    // 0x38b2a0: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x38b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_38b2a4:
    // 0x38b2a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38b2a8:
    // 0x38b2a8: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x38b2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_38b2ac:
    // 0x38b2ac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x38b2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38b2b0:
    // 0x38b2b0: 0xaca0fffc  sw          $zero, -0x4($a1)
    ctx->pc = 0x38b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 0));
label_38b2b4:
    // 0x38b2b4: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_38b2b8:
    if (ctx->pc == 0x38B2B8u) {
        ctx->pc = 0x38B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2B4u;
        // 0x38b2b8: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B2BCu;
        goto label_38b2bc;
    }
    ctx->pc = 0x38B2B4u;
    {
        const bool branch_taken_0x38b2b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2B4u;
        // 0x38b2b8: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b2b4) {
            ctx->pc = 0x38B2DCu;
            goto label_38b2dc;
        }
    }
    ctx->pc = 0x38B2BCu;
label_38b2bc:
    // 0x38b2bc: 0xc92018  mult        $a0, $a2, $t1
    ctx->pc = 0x38b2bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_38b2c0:
    // 0x38b2c0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x38b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_38b2c4:
    // 0x38b2c4: 0xaca3fffc  sw          $v1, -0x4($a1)
    ctx->pc = 0x38b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 3));
label_38b2c8:
    // 0x38b2c8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x38b2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_38b2cc:
    // 0x38b2cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38b2d0:
    if (ctx->pc == 0x38B2D0u) {
        ctx->pc = 0x38B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2CCu;
        // 0x38b2d0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B2D4u;
        goto label_38b2d4;
    }
    ctx->pc = 0x38B2CCu;
    {
        const bool branch_taken_0x38b2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2CCu;
        // 0x38b2d0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b2cc) {
            ctx->pc = 0x38B2DCu;
            goto label_38b2dc;
        }
    }
    ctx->pc = 0x38B2D4u;
label_38b2d4:
    // 0x38b2d4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x38b2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_38b2d8:
    // 0x38b2d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38b2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38b2dc:
    // 0x38b2dc: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x38b2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_38b2e0:
    // 0x38b2e0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x38b2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38b2e4:
    // 0x38b2e4: 0xaca0fffc  sw          $zero, -0x4($a1)
    ctx->pc = 0x38b2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 0));
label_38b2e8:
    // 0x38b2e8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_38b2ec:
    if (ctx->pc == 0x38B2ECu) {
        ctx->pc = 0x38B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2E8u;
        // 0x38b2ec: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B2F0u;
        goto label_38b2f0;
    }
    ctx->pc = 0x38B2E8u;
    {
        const bool branch_taken_0x38b2e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2E8u;
        // 0x38b2ec: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b2e8) {
            ctx->pc = 0x38B310u;
            goto label_38b310;
        }
    }
    ctx->pc = 0x38B2F0u;
label_38b2f0:
    // 0x38b2f0: 0xc92018  mult        $a0, $a2, $t1
    ctx->pc = 0x38b2f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_38b2f4:
    // 0x38b2f4: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x38b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_38b2f8:
    // 0x38b2f8: 0xaca3fffc  sw          $v1, -0x4($a1)
    ctx->pc = 0x38b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 3));
label_38b2fc:
    // 0x38b2fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x38b2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_38b300:
    // 0x38b300: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38b304:
    if (ctx->pc == 0x38B304u) {
        ctx->pc = 0x38B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B300u;
        // 0x38b304: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B308u;
        goto label_38b308;
    }
    ctx->pc = 0x38B300u;
    {
        const bool branch_taken_0x38b300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B300u;
        // 0x38b304: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b300) {
            ctx->pc = 0x38B310u;
            goto label_38b310;
        }
    }
    ctx->pc = 0x38B308u;
label_38b308:
    // 0x38b308: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x38b308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_38b30c:
    // 0x38b30c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38b310:
    // 0x38b310: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x38b310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38b314:
    // 0x38b314: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_38b318:
    if (ctx->pc == 0x38B318u) {
        ctx->pc = 0x38B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B314u;
        // 0x38b318: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B31Cu;
        goto label_38b31c;
    }
    ctx->pc = 0x38B314u;
    {
        const bool branch_taken_0x38b314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B314u;
        // 0x38b318: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b314) {
            ctx->pc = 0x38B3ECu;
            goto label_38b3ec;
        }
    }
    ctx->pc = 0x38B31Cu;
label_38b31c:
    // 0x38b31c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x38b31cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38b320:
    // 0x38b320: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x38b320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38b324:
    // 0x38b324: 0x0  nop
    ctx->pc = 0x38b324u;
    // NOP
label_38b328:
    // 0x38b328: 0xace0fffc  sw          $zero, -0x4($a3)
    ctx->pc = 0x38b328u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967292), GPR_U32(ctx, 0));
label_38b32c:
    // 0x38b32c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_38b330:
    if (ctx->pc == 0x38B330u) {
        ctx->pc = 0x38B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B32Cu;
        // 0x38b330: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B334u;
        goto label_38b334;
    }
    ctx->pc = 0x38B32Cu;
    {
        const bool branch_taken_0x38b32c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B32Cu;
        // 0x38b330: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b32c) {
            ctx->pc = 0x38B354u;
            goto label_38b354;
        }
    }
    ctx->pc = 0x38B334u;
label_38b334:
    // 0x38b334: 0xc92018  mult        $a0, $a2, $t1
    ctx->pc = 0x38b334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_38b338:
    // 0x38b338: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x38b338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_38b33c:
    // 0x38b33c: 0xad03fffc  sw          $v1, -0x4($t0)
    ctx->pc = 0x38b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294967292), GPR_U32(ctx, 3));
label_38b340:
    // 0x38b340: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x38b340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_38b344:
    // 0x38b344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38b348:
    if (ctx->pc == 0x38B348u) {
        ctx->pc = 0x38B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B344u;
        // 0x38b348: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B34Cu;
        goto label_38b34c;
    }
    ctx->pc = 0x38B344u;
    {
        const bool branch_taken_0x38b344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B344u;
        // 0x38b348: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b344) {
            ctx->pc = 0x38B354u;
            goto label_38b354;
        }
    }
    ctx->pc = 0x38B34Cu;
label_38b34c:
    // 0x38b34c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x38b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_38b350:
    // 0x38b350: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38b354:
    // 0x38b354: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x38b354u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
label_38b358:
    // 0x38b358: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_38b35c:
    if (ctx->pc == 0x38B35Cu) {
        ctx->pc = 0x38B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B358u;
        // 0x38b35c: 0xaca0001c  sw          $zero, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B360u;
        goto label_38b360;
    }
    ctx->pc = 0x38B358u;
    {
        const bool branch_taken_0x38b358 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B358u;
        // 0x38b35c: 0xaca0001c  sw          $zero, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b358) {
            ctx->pc = 0x38B380u;
            goto label_38b380;
        }
    }
    ctx->pc = 0x38B360u;
label_38b360:
    // 0x38b360: 0xc92018  mult        $a0, $a2, $t1
    ctx->pc = 0x38b360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_38b364:
    // 0x38b364: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x38b364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_38b368:
    // 0x38b368: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x38b368u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
label_38b36c:
    // 0x38b36c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x38b36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_38b370:
    // 0x38b370: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38b374:
    if (ctx->pc == 0x38B374u) {
        ctx->pc = 0x38B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B370u;
        // 0x38b374: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B378u;
        goto label_38b378;
    }
    ctx->pc = 0x38B370u;
    {
        const bool branch_taken_0x38b370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B370u;
        // 0x38b374: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b370) {
            ctx->pc = 0x38B380u;
            goto label_38b380;
        }
    }
    ctx->pc = 0x38B378u;
label_38b378:
    // 0x38b378: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x38b378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
label_38b37c:
    // 0x38b37c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38b380:
    // 0x38b380: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x38b380u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
label_38b384:
    // 0x38b384: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_38b388:
    if (ctx->pc == 0x38B388u) {
        ctx->pc = 0x38B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B384u;
        // 0x38b388: 0xaca00038  sw          $zero, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B38Cu;
        goto label_38b38c;
    }
    ctx->pc = 0x38B384u;
    {
        const bool branch_taken_0x38b384 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B384u;
        // 0x38b388: 0xaca00038  sw          $zero, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b384) {
            ctx->pc = 0x38B3ACu;
            goto label_38b3ac;
        }
    }
    ctx->pc = 0x38B38Cu;
label_38b38c:
    // 0x38b38c: 0xc92018  mult        $a0, $a2, $t1
    ctx->pc = 0x38b38cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_38b390:
    // 0x38b390: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x38b390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_38b394:
    // 0x38b394: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x38b394u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
label_38b398:
    // 0x38b398: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x38b398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_38b39c:
    // 0x38b39c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38b3a0:
    if (ctx->pc == 0x38B3A0u) {
        ctx->pc = 0x38B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B39Cu;
        // 0x38b3a0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B3A4u;
        goto label_38b3a4;
    }
    ctx->pc = 0x38B39Cu;
    {
        const bool branch_taken_0x38b39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B39Cu;
        // 0x38b3a0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b39c) {
            ctx->pc = 0x38B3ACu;
            goto label_38b3ac;
        }
    }
    ctx->pc = 0x38B3A4u;
label_38b3a4:
    // 0x38b3a4: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x38b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
label_38b3a8:
    // 0x38b3a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38b3ac:
    // 0x38b3ac: 0xace00050  sw          $zero, 0x50($a3)
    ctx->pc = 0x38b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 0));
label_38b3b0:
    // 0x38b3b0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_38b3b4:
    if (ctx->pc == 0x38B3B4u) {
        ctx->pc = 0x38B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B3B0u;
        // 0x38b3b4: 0xaca00054  sw          $zero, 0x54($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B3B8u;
        goto label_38b3b8;
    }
    ctx->pc = 0x38B3B0u;
    {
        const bool branch_taken_0x38b3b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B3B0u;
        // 0x38b3b4: 0xaca00054  sw          $zero, 0x54($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b3b0) {
            ctx->pc = 0x38B3D8u;
            goto label_38b3d8;
        }
    }
    ctx->pc = 0x38B3B8u;
label_38b3b8:
    // 0x38b3b8: 0xc92018  mult        $a0, $a2, $t1
    ctx->pc = 0x38b3b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_38b3bc:
    // 0x38b3bc: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x38b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_38b3c0:
    // 0x38b3c0: 0xad030050  sw          $v1, 0x50($t0)
    ctx->pc = 0x38b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 3));
label_38b3c4:
    // 0x38b3c4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x38b3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_38b3c8:
    // 0x38b3c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38b3cc:
    if (ctx->pc == 0x38B3CCu) {
        ctx->pc = 0x38B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B3C8u;
        // 0x38b3cc: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B3D0u;
        goto label_38b3d0;
    }
    ctx->pc = 0x38B3C8u;
    {
        const bool branch_taken_0x38b3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B3C8u;
        // 0x38b3cc: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b3c8) {
            ctx->pc = 0x38B3D8u;
            goto label_38b3d8;
        }
    }
    ctx->pc = 0x38B3D0u;
label_38b3d0:
    // 0x38b3d0: 0xaca30054  sw          $v1, 0x54($a1)
    ctx->pc = 0x38b3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
label_38b3d4:
    // 0x38b3d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38b3d8:
    // 0x38b3d8: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x38b3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_38b3dc:
    // 0x38b3dc: 0x25080070  addiu       $t0, $t0, 0x70
    ctx->pc = 0x38b3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_38b3e0:
    // 0x38b3e0: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x38b3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_38b3e4:
    // 0x38b3e4: 0x1600ffd0  bnez        $s0, . + 4 + (-0x30 << 2)
label_38b3e8:
    if (ctx->pc == 0x38B3E8u) {
        ctx->pc = 0x38B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B3E4u;
        // 0x38b3e8: 0x24e70070  addiu       $a3, $a3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B3ECu;
        goto label_38b3ec;
    }
    ctx->pc = 0x38B3E4u;
    {
        const bool branch_taken_0x38b3e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B3E4u;
        // 0x38b3e8: 0x24e70070  addiu       $a3, $a3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b3e4) {
            ctx->pc = 0x38B328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b328;
        }
    }
    ctx->pc = 0x38B3ECu;
label_38b3ec:
    // 0x38b3ec: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x38b3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38b3f0:
    // 0x38b3f0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x38b3f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38b3f4:
    // 0x38b3f4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x38b3f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38b3f8:
    // 0x38b3f8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x38b3f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38b3fc:
    // 0x38b3fc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x38b3fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38b400:
    // 0x38b400: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x38b400u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38b404:
    // 0x38b404: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x38b404u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38b408:
    // 0x38b408: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x38b408u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38b40c:
    // 0x38b40c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x38b40cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38b410:
    // 0x38b410: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x38b410u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38b414:
    // 0x38b414: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38b414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38b418:
    // 0x38b418: 0x3e00008  jr          $ra
label_38b41c:
    if (ctx->pc == 0x38B41Cu) {
        ctx->pc = 0x38B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B418u;
        // 0x38b41c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B420u;
        goto label_fallthrough_0x38b418;
    }
    ctx->pc = 0x38B418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B418u;
        // 0x38b41c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38b418:
    ctx->pc = 0x38B420u;
}
