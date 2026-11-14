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

// Function: sub_0017AB60
// Address: 0x17ab60 - 0x17b3e0
void sub_0017AB60_0x17ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AB60_0x17ab60");
#endif

    switch (ctx->pc) {
        case 0x17ab60u: goto label_17ab60;
        case 0x17ab64u: goto label_17ab64;
        case 0x17ab68u: goto label_17ab68;
        case 0x17ab6cu: goto label_17ab6c;
        case 0x17ab70u: goto label_17ab70;
        case 0x17ab74u: goto label_17ab74;
        case 0x17ab78u: goto label_17ab78;
        case 0x17ab7cu: goto label_17ab7c;
        case 0x17ab80u: goto label_17ab80;
        case 0x17ab84u: goto label_17ab84;
        case 0x17ab88u: goto label_17ab88;
        case 0x17ab8cu: goto label_17ab8c;
        case 0x17ab90u: goto label_17ab90;
        case 0x17ab94u: goto label_17ab94;
        case 0x17ab98u: goto label_17ab98;
        case 0x17ab9cu: goto label_17ab9c;
        case 0x17aba0u: goto label_17aba0;
        case 0x17aba4u: goto label_17aba4;
        case 0x17aba8u: goto label_17aba8;
        case 0x17abacu: goto label_17abac;
        case 0x17abb0u: goto label_17abb0;
        case 0x17abb4u: goto label_17abb4;
        case 0x17abb8u: goto label_17abb8;
        case 0x17abbcu: goto label_17abbc;
        case 0x17abc0u: goto label_17abc0;
        case 0x17abc4u: goto label_17abc4;
        case 0x17abc8u: goto label_17abc8;
        case 0x17abccu: goto label_17abcc;
        case 0x17abd0u: goto label_17abd0;
        case 0x17abd4u: goto label_17abd4;
        case 0x17abd8u: goto label_17abd8;
        case 0x17abdcu: goto label_17abdc;
        case 0x17abe0u: goto label_17abe0;
        case 0x17abe4u: goto label_17abe4;
        case 0x17abe8u: goto label_17abe8;
        case 0x17abecu: goto label_17abec;
        case 0x17abf0u: goto label_17abf0;
        case 0x17abf4u: goto label_17abf4;
        case 0x17abf8u: goto label_17abf8;
        case 0x17abfcu: goto label_17abfc;
        case 0x17ac00u: goto label_17ac00;
        case 0x17ac04u: goto label_17ac04;
        case 0x17ac08u: goto label_17ac08;
        case 0x17ac0cu: goto label_17ac0c;
        case 0x17ac10u: goto label_17ac10;
        case 0x17ac14u: goto label_17ac14;
        case 0x17ac18u: goto label_17ac18;
        case 0x17ac1cu: goto label_17ac1c;
        case 0x17ac20u: goto label_17ac20;
        case 0x17ac24u: goto label_17ac24;
        case 0x17ac28u: goto label_17ac28;
        case 0x17ac2cu: goto label_17ac2c;
        case 0x17ac30u: goto label_17ac30;
        case 0x17ac34u: goto label_17ac34;
        case 0x17ac38u: goto label_17ac38;
        case 0x17ac3cu: goto label_17ac3c;
        case 0x17ac40u: goto label_17ac40;
        case 0x17ac44u: goto label_17ac44;
        case 0x17ac48u: goto label_17ac48;
        case 0x17ac4cu: goto label_17ac4c;
        case 0x17ac50u: goto label_17ac50;
        case 0x17ac54u: goto label_17ac54;
        case 0x17ac58u: goto label_17ac58;
        case 0x17ac5cu: goto label_17ac5c;
        case 0x17ac60u: goto label_17ac60;
        case 0x17ac64u: goto label_17ac64;
        case 0x17ac68u: goto label_17ac68;
        case 0x17ac6cu: goto label_17ac6c;
        case 0x17ac70u: goto label_17ac70;
        case 0x17ac74u: goto label_17ac74;
        case 0x17ac78u: goto label_17ac78;
        case 0x17ac7cu: goto label_17ac7c;
        case 0x17ac80u: goto label_17ac80;
        case 0x17ac84u: goto label_17ac84;
        case 0x17ac88u: goto label_17ac88;
        case 0x17ac8cu: goto label_17ac8c;
        case 0x17ac90u: goto label_17ac90;
        case 0x17ac94u: goto label_17ac94;
        case 0x17ac98u: goto label_17ac98;
        case 0x17ac9cu: goto label_17ac9c;
        case 0x17aca0u: goto label_17aca0;
        case 0x17aca4u: goto label_17aca4;
        case 0x17aca8u: goto label_17aca8;
        case 0x17acacu: goto label_17acac;
        case 0x17acb0u: goto label_17acb0;
        case 0x17acb4u: goto label_17acb4;
        case 0x17acb8u: goto label_17acb8;
        case 0x17acbcu: goto label_17acbc;
        case 0x17acc0u: goto label_17acc0;
        case 0x17acc4u: goto label_17acc4;
        case 0x17acc8u: goto label_17acc8;
        case 0x17acccu: goto label_17accc;
        case 0x17acd0u: goto label_17acd0;
        case 0x17acd4u: goto label_17acd4;
        case 0x17acd8u: goto label_17acd8;
        case 0x17acdcu: goto label_17acdc;
        case 0x17ace0u: goto label_17ace0;
        case 0x17ace4u: goto label_17ace4;
        case 0x17ace8u: goto label_17ace8;
        case 0x17acecu: goto label_17acec;
        case 0x17acf0u: goto label_17acf0;
        case 0x17acf4u: goto label_17acf4;
        case 0x17acf8u: goto label_17acf8;
        case 0x17acfcu: goto label_17acfc;
        case 0x17ad00u: goto label_17ad00;
        case 0x17ad04u: goto label_17ad04;
        case 0x17ad08u: goto label_17ad08;
        case 0x17ad0cu: goto label_17ad0c;
        case 0x17ad10u: goto label_17ad10;
        case 0x17ad14u: goto label_17ad14;
        case 0x17ad18u: goto label_17ad18;
        case 0x17ad1cu: goto label_17ad1c;
        case 0x17ad20u: goto label_17ad20;
        case 0x17ad24u: goto label_17ad24;
        case 0x17ad28u: goto label_17ad28;
        case 0x17ad2cu: goto label_17ad2c;
        case 0x17ad30u: goto label_17ad30;
        case 0x17ad34u: goto label_17ad34;
        case 0x17ad38u: goto label_17ad38;
        case 0x17ad3cu: goto label_17ad3c;
        case 0x17ad40u: goto label_17ad40;
        case 0x17ad44u: goto label_17ad44;
        case 0x17ad48u: goto label_17ad48;
        case 0x17ad4cu: goto label_17ad4c;
        case 0x17ad50u: goto label_17ad50;
        case 0x17ad54u: goto label_17ad54;
        case 0x17ad58u: goto label_17ad58;
        case 0x17ad5cu: goto label_17ad5c;
        case 0x17ad60u: goto label_17ad60;
        case 0x17ad64u: goto label_17ad64;
        case 0x17ad68u: goto label_17ad68;
        case 0x17ad6cu: goto label_17ad6c;
        case 0x17ad70u: goto label_17ad70;
        case 0x17ad74u: goto label_17ad74;
        case 0x17ad78u: goto label_17ad78;
        case 0x17ad7cu: goto label_17ad7c;
        case 0x17ad80u: goto label_17ad80;
        case 0x17ad84u: goto label_17ad84;
        case 0x17ad88u: goto label_17ad88;
        case 0x17ad8cu: goto label_17ad8c;
        case 0x17ad90u: goto label_17ad90;
        case 0x17ad94u: goto label_17ad94;
        case 0x17ad98u: goto label_17ad98;
        case 0x17ad9cu: goto label_17ad9c;
        case 0x17ada0u: goto label_17ada0;
        case 0x17ada4u: goto label_17ada4;
        case 0x17ada8u: goto label_17ada8;
        case 0x17adacu: goto label_17adac;
        case 0x17adb0u: goto label_17adb0;
        case 0x17adb4u: goto label_17adb4;
        case 0x17adb8u: goto label_17adb8;
        case 0x17adbcu: goto label_17adbc;
        case 0x17adc0u: goto label_17adc0;
        case 0x17adc4u: goto label_17adc4;
        case 0x17adc8u: goto label_17adc8;
        case 0x17adccu: goto label_17adcc;
        case 0x17add0u: goto label_17add0;
        case 0x17add4u: goto label_17add4;
        case 0x17add8u: goto label_17add8;
        case 0x17addcu: goto label_17addc;
        case 0x17ade0u: goto label_17ade0;
        case 0x17ade4u: goto label_17ade4;
        case 0x17ade8u: goto label_17ade8;
        case 0x17adecu: goto label_17adec;
        case 0x17adf0u: goto label_17adf0;
        case 0x17adf4u: goto label_17adf4;
        case 0x17adf8u: goto label_17adf8;
        case 0x17adfcu: goto label_17adfc;
        case 0x17ae00u: goto label_17ae00;
        case 0x17ae04u: goto label_17ae04;
        case 0x17ae08u: goto label_17ae08;
        case 0x17ae0cu: goto label_17ae0c;
        case 0x17ae10u: goto label_17ae10;
        case 0x17ae14u: goto label_17ae14;
        case 0x17ae18u: goto label_17ae18;
        case 0x17ae1cu: goto label_17ae1c;
        case 0x17ae20u: goto label_17ae20;
        case 0x17ae24u: goto label_17ae24;
        case 0x17ae28u: goto label_17ae28;
        case 0x17ae2cu: goto label_17ae2c;
        case 0x17ae30u: goto label_17ae30;
        case 0x17ae34u: goto label_17ae34;
        case 0x17ae38u: goto label_17ae38;
        case 0x17ae3cu: goto label_17ae3c;
        case 0x17ae40u: goto label_17ae40;
        case 0x17ae44u: goto label_17ae44;
        case 0x17ae48u: goto label_17ae48;
        case 0x17ae4cu: goto label_17ae4c;
        case 0x17ae50u: goto label_17ae50;
        case 0x17ae54u: goto label_17ae54;
        case 0x17ae58u: goto label_17ae58;
        case 0x17ae5cu: goto label_17ae5c;
        case 0x17ae60u: goto label_17ae60;
        case 0x17ae64u: goto label_17ae64;
        case 0x17ae68u: goto label_17ae68;
        case 0x17ae6cu: goto label_17ae6c;
        case 0x17ae70u: goto label_17ae70;
        case 0x17ae74u: goto label_17ae74;
        case 0x17ae78u: goto label_17ae78;
        case 0x17ae7cu: goto label_17ae7c;
        case 0x17ae80u: goto label_17ae80;
        case 0x17ae84u: goto label_17ae84;
        case 0x17ae88u: goto label_17ae88;
        case 0x17ae8cu: goto label_17ae8c;
        case 0x17ae90u: goto label_17ae90;
        case 0x17ae94u: goto label_17ae94;
        case 0x17ae98u: goto label_17ae98;
        case 0x17ae9cu: goto label_17ae9c;
        case 0x17aea0u: goto label_17aea0;
        case 0x17aea4u: goto label_17aea4;
        case 0x17aea8u: goto label_17aea8;
        case 0x17aeacu: goto label_17aeac;
        case 0x17aeb0u: goto label_17aeb0;
        case 0x17aeb4u: goto label_17aeb4;
        case 0x17aeb8u: goto label_17aeb8;
        case 0x17aebcu: goto label_17aebc;
        case 0x17aec0u: goto label_17aec0;
        case 0x17aec4u: goto label_17aec4;
        case 0x17aec8u: goto label_17aec8;
        case 0x17aeccu: goto label_17aecc;
        case 0x17aed0u: goto label_17aed0;
        case 0x17aed4u: goto label_17aed4;
        case 0x17aed8u: goto label_17aed8;
        case 0x17aedcu: goto label_17aedc;
        case 0x17aee0u: goto label_17aee0;
        case 0x17aee4u: goto label_17aee4;
        case 0x17aee8u: goto label_17aee8;
        case 0x17aeecu: goto label_17aeec;
        case 0x17aef0u: goto label_17aef0;
        case 0x17aef4u: goto label_17aef4;
        case 0x17aef8u: goto label_17aef8;
        case 0x17aefcu: goto label_17aefc;
        case 0x17af00u: goto label_17af00;
        case 0x17af04u: goto label_17af04;
        case 0x17af08u: goto label_17af08;
        case 0x17af0cu: goto label_17af0c;
        case 0x17af10u: goto label_17af10;
        case 0x17af14u: goto label_17af14;
        case 0x17af18u: goto label_17af18;
        case 0x17af1cu: goto label_17af1c;
        case 0x17af20u: goto label_17af20;
        case 0x17af24u: goto label_17af24;
        case 0x17af28u: goto label_17af28;
        case 0x17af2cu: goto label_17af2c;
        case 0x17af30u: goto label_17af30;
        case 0x17af34u: goto label_17af34;
        case 0x17af38u: goto label_17af38;
        case 0x17af3cu: goto label_17af3c;
        case 0x17af40u: goto label_17af40;
        case 0x17af44u: goto label_17af44;
        case 0x17af48u: goto label_17af48;
        case 0x17af4cu: goto label_17af4c;
        case 0x17af50u: goto label_17af50;
        case 0x17af54u: goto label_17af54;
        case 0x17af58u: goto label_17af58;
        case 0x17af5cu: goto label_17af5c;
        case 0x17af60u: goto label_17af60;
        case 0x17af64u: goto label_17af64;
        case 0x17af68u: goto label_17af68;
        case 0x17af6cu: goto label_17af6c;
        case 0x17af70u: goto label_17af70;
        case 0x17af74u: goto label_17af74;
        case 0x17af78u: goto label_17af78;
        case 0x17af7cu: goto label_17af7c;
        case 0x17af80u: goto label_17af80;
        case 0x17af84u: goto label_17af84;
        case 0x17af88u: goto label_17af88;
        case 0x17af8cu: goto label_17af8c;
        case 0x17af90u: goto label_17af90;
        case 0x17af94u: goto label_17af94;
        case 0x17af98u: goto label_17af98;
        case 0x17af9cu: goto label_17af9c;
        case 0x17afa0u: goto label_17afa0;
        case 0x17afa4u: goto label_17afa4;
        case 0x17afa8u: goto label_17afa8;
        case 0x17afacu: goto label_17afac;
        case 0x17afb0u: goto label_17afb0;
        case 0x17afb4u: goto label_17afb4;
        case 0x17afb8u: goto label_17afb8;
        case 0x17afbcu: goto label_17afbc;
        case 0x17afc0u: goto label_17afc0;
        case 0x17afc4u: goto label_17afc4;
        case 0x17afc8u: goto label_17afc8;
        case 0x17afccu: goto label_17afcc;
        case 0x17afd0u: goto label_17afd0;
        case 0x17afd4u: goto label_17afd4;
        case 0x17afd8u: goto label_17afd8;
        case 0x17afdcu: goto label_17afdc;
        case 0x17afe0u: goto label_17afe0;
        case 0x17afe4u: goto label_17afe4;
        case 0x17afe8u: goto label_17afe8;
        case 0x17afecu: goto label_17afec;
        case 0x17aff0u: goto label_17aff0;
        case 0x17aff4u: goto label_17aff4;
        case 0x17aff8u: goto label_17aff8;
        case 0x17affcu: goto label_17affc;
        case 0x17b000u: goto label_17b000;
        case 0x17b004u: goto label_17b004;
        case 0x17b008u: goto label_17b008;
        case 0x17b00cu: goto label_17b00c;
        case 0x17b010u: goto label_17b010;
        case 0x17b014u: goto label_17b014;
        case 0x17b018u: goto label_17b018;
        case 0x17b01cu: goto label_17b01c;
        case 0x17b020u: goto label_17b020;
        case 0x17b024u: goto label_17b024;
        case 0x17b028u: goto label_17b028;
        case 0x17b02cu: goto label_17b02c;
        case 0x17b030u: goto label_17b030;
        case 0x17b034u: goto label_17b034;
        case 0x17b038u: goto label_17b038;
        case 0x17b03cu: goto label_17b03c;
        case 0x17b040u: goto label_17b040;
        case 0x17b044u: goto label_17b044;
        case 0x17b048u: goto label_17b048;
        case 0x17b04cu: goto label_17b04c;
        case 0x17b050u: goto label_17b050;
        case 0x17b054u: goto label_17b054;
        case 0x17b058u: goto label_17b058;
        case 0x17b05cu: goto label_17b05c;
        case 0x17b060u: goto label_17b060;
        case 0x17b064u: goto label_17b064;
        case 0x17b068u: goto label_17b068;
        case 0x17b06cu: goto label_17b06c;
        case 0x17b070u: goto label_17b070;
        case 0x17b074u: goto label_17b074;
        case 0x17b078u: goto label_17b078;
        case 0x17b07cu: goto label_17b07c;
        case 0x17b080u: goto label_17b080;
        case 0x17b084u: goto label_17b084;
        case 0x17b088u: goto label_17b088;
        case 0x17b08cu: goto label_17b08c;
        case 0x17b090u: goto label_17b090;
        case 0x17b094u: goto label_17b094;
        case 0x17b098u: goto label_17b098;
        case 0x17b09cu: goto label_17b09c;
        case 0x17b0a0u: goto label_17b0a0;
        case 0x17b0a4u: goto label_17b0a4;
        case 0x17b0a8u: goto label_17b0a8;
        case 0x17b0acu: goto label_17b0ac;
        case 0x17b0b0u: goto label_17b0b0;
        case 0x17b0b4u: goto label_17b0b4;
        case 0x17b0b8u: goto label_17b0b8;
        case 0x17b0bcu: goto label_17b0bc;
        case 0x17b0c0u: goto label_17b0c0;
        case 0x17b0c4u: goto label_17b0c4;
        case 0x17b0c8u: goto label_17b0c8;
        case 0x17b0ccu: goto label_17b0cc;
        case 0x17b0d0u: goto label_17b0d0;
        case 0x17b0d4u: goto label_17b0d4;
        case 0x17b0d8u: goto label_17b0d8;
        case 0x17b0dcu: goto label_17b0dc;
        case 0x17b0e0u: goto label_17b0e0;
        case 0x17b0e4u: goto label_17b0e4;
        case 0x17b0e8u: goto label_17b0e8;
        case 0x17b0ecu: goto label_17b0ec;
        case 0x17b0f0u: goto label_17b0f0;
        case 0x17b0f4u: goto label_17b0f4;
        case 0x17b0f8u: goto label_17b0f8;
        case 0x17b0fcu: goto label_17b0fc;
        case 0x17b100u: goto label_17b100;
        case 0x17b104u: goto label_17b104;
        case 0x17b108u: goto label_17b108;
        case 0x17b10cu: goto label_17b10c;
        case 0x17b110u: goto label_17b110;
        case 0x17b114u: goto label_17b114;
        case 0x17b118u: goto label_17b118;
        case 0x17b11cu: goto label_17b11c;
        case 0x17b120u: goto label_17b120;
        case 0x17b124u: goto label_17b124;
        case 0x17b128u: goto label_17b128;
        case 0x17b12cu: goto label_17b12c;
        case 0x17b130u: goto label_17b130;
        case 0x17b134u: goto label_17b134;
        case 0x17b138u: goto label_17b138;
        case 0x17b13cu: goto label_17b13c;
        case 0x17b140u: goto label_17b140;
        case 0x17b144u: goto label_17b144;
        case 0x17b148u: goto label_17b148;
        case 0x17b14cu: goto label_17b14c;
        case 0x17b150u: goto label_17b150;
        case 0x17b154u: goto label_17b154;
        case 0x17b158u: goto label_17b158;
        case 0x17b15cu: goto label_17b15c;
        case 0x17b160u: goto label_17b160;
        case 0x17b164u: goto label_17b164;
        case 0x17b168u: goto label_17b168;
        case 0x17b16cu: goto label_17b16c;
        case 0x17b170u: goto label_17b170;
        case 0x17b174u: goto label_17b174;
        case 0x17b178u: goto label_17b178;
        case 0x17b17cu: goto label_17b17c;
        case 0x17b180u: goto label_17b180;
        case 0x17b184u: goto label_17b184;
        case 0x17b188u: goto label_17b188;
        case 0x17b18cu: goto label_17b18c;
        case 0x17b190u: goto label_17b190;
        case 0x17b194u: goto label_17b194;
        case 0x17b198u: goto label_17b198;
        case 0x17b19cu: goto label_17b19c;
        case 0x17b1a0u: goto label_17b1a0;
        case 0x17b1a4u: goto label_17b1a4;
        case 0x17b1a8u: goto label_17b1a8;
        case 0x17b1acu: goto label_17b1ac;
        case 0x17b1b0u: goto label_17b1b0;
        case 0x17b1b4u: goto label_17b1b4;
        case 0x17b1b8u: goto label_17b1b8;
        case 0x17b1bcu: goto label_17b1bc;
        case 0x17b1c0u: goto label_17b1c0;
        case 0x17b1c4u: goto label_17b1c4;
        case 0x17b1c8u: goto label_17b1c8;
        case 0x17b1ccu: goto label_17b1cc;
        case 0x17b1d0u: goto label_17b1d0;
        case 0x17b1d4u: goto label_17b1d4;
        case 0x17b1d8u: goto label_17b1d8;
        case 0x17b1dcu: goto label_17b1dc;
        case 0x17b1e0u: goto label_17b1e0;
        case 0x17b1e4u: goto label_17b1e4;
        case 0x17b1e8u: goto label_17b1e8;
        case 0x17b1ecu: goto label_17b1ec;
        case 0x17b1f0u: goto label_17b1f0;
        case 0x17b1f4u: goto label_17b1f4;
        case 0x17b1f8u: goto label_17b1f8;
        case 0x17b1fcu: goto label_17b1fc;
        case 0x17b200u: goto label_17b200;
        case 0x17b204u: goto label_17b204;
        case 0x17b208u: goto label_17b208;
        case 0x17b20cu: goto label_17b20c;
        case 0x17b210u: goto label_17b210;
        case 0x17b214u: goto label_17b214;
        case 0x17b218u: goto label_17b218;
        case 0x17b21cu: goto label_17b21c;
        case 0x17b220u: goto label_17b220;
        case 0x17b224u: goto label_17b224;
        case 0x17b228u: goto label_17b228;
        case 0x17b22cu: goto label_17b22c;
        case 0x17b230u: goto label_17b230;
        case 0x17b234u: goto label_17b234;
        case 0x17b238u: goto label_17b238;
        case 0x17b23cu: goto label_17b23c;
        case 0x17b240u: goto label_17b240;
        case 0x17b244u: goto label_17b244;
        case 0x17b248u: goto label_17b248;
        case 0x17b24cu: goto label_17b24c;
        case 0x17b250u: goto label_17b250;
        case 0x17b254u: goto label_17b254;
        case 0x17b258u: goto label_17b258;
        case 0x17b25cu: goto label_17b25c;
        case 0x17b260u: goto label_17b260;
        case 0x17b264u: goto label_17b264;
        case 0x17b268u: goto label_17b268;
        case 0x17b26cu: goto label_17b26c;
        case 0x17b270u: goto label_17b270;
        case 0x17b274u: goto label_17b274;
        case 0x17b278u: goto label_17b278;
        case 0x17b27cu: goto label_17b27c;
        case 0x17b280u: goto label_17b280;
        case 0x17b284u: goto label_17b284;
        case 0x17b288u: goto label_17b288;
        case 0x17b28cu: goto label_17b28c;
        case 0x17b290u: goto label_17b290;
        case 0x17b294u: goto label_17b294;
        case 0x17b298u: goto label_17b298;
        case 0x17b29cu: goto label_17b29c;
        case 0x17b2a0u: goto label_17b2a0;
        case 0x17b2a4u: goto label_17b2a4;
        case 0x17b2a8u: goto label_17b2a8;
        case 0x17b2acu: goto label_17b2ac;
        case 0x17b2b0u: goto label_17b2b0;
        case 0x17b2b4u: goto label_17b2b4;
        case 0x17b2b8u: goto label_17b2b8;
        case 0x17b2bcu: goto label_17b2bc;
        case 0x17b2c0u: goto label_17b2c0;
        case 0x17b2c4u: goto label_17b2c4;
        case 0x17b2c8u: goto label_17b2c8;
        case 0x17b2ccu: goto label_17b2cc;
        case 0x17b2d0u: goto label_17b2d0;
        case 0x17b2d4u: goto label_17b2d4;
        case 0x17b2d8u: goto label_17b2d8;
        case 0x17b2dcu: goto label_17b2dc;
        case 0x17b2e0u: goto label_17b2e0;
        case 0x17b2e4u: goto label_17b2e4;
        case 0x17b2e8u: goto label_17b2e8;
        case 0x17b2ecu: goto label_17b2ec;
        case 0x17b2f0u: goto label_17b2f0;
        case 0x17b2f4u: goto label_17b2f4;
        case 0x17b2f8u: goto label_17b2f8;
        case 0x17b2fcu: goto label_17b2fc;
        case 0x17b300u: goto label_17b300;
        case 0x17b304u: goto label_17b304;
        case 0x17b308u: goto label_17b308;
        case 0x17b30cu: goto label_17b30c;
        case 0x17b310u: goto label_17b310;
        case 0x17b314u: goto label_17b314;
        case 0x17b318u: goto label_17b318;
        case 0x17b31cu: goto label_17b31c;
        case 0x17b320u: goto label_17b320;
        case 0x17b324u: goto label_17b324;
        case 0x17b328u: goto label_17b328;
        case 0x17b32cu: goto label_17b32c;
        case 0x17b330u: goto label_17b330;
        case 0x17b334u: goto label_17b334;
        case 0x17b338u: goto label_17b338;
        case 0x17b33cu: goto label_17b33c;
        case 0x17b340u: goto label_17b340;
        case 0x17b344u: goto label_17b344;
        case 0x17b348u: goto label_17b348;
        case 0x17b34cu: goto label_17b34c;
        case 0x17b350u: goto label_17b350;
        case 0x17b354u: goto label_17b354;
        case 0x17b358u: goto label_17b358;
        case 0x17b35cu: goto label_17b35c;
        case 0x17b360u: goto label_17b360;
        case 0x17b364u: goto label_17b364;
        case 0x17b368u: goto label_17b368;
        case 0x17b36cu: goto label_17b36c;
        case 0x17b370u: goto label_17b370;
        case 0x17b374u: goto label_17b374;
        case 0x17b378u: goto label_17b378;
        case 0x17b37cu: goto label_17b37c;
        case 0x17b380u: goto label_17b380;
        case 0x17b384u: goto label_17b384;
        case 0x17b388u: goto label_17b388;
        case 0x17b38cu: goto label_17b38c;
        case 0x17b390u: goto label_17b390;
        case 0x17b394u: goto label_17b394;
        case 0x17b398u: goto label_17b398;
        case 0x17b39cu: goto label_17b39c;
        case 0x17b3a0u: goto label_17b3a0;
        case 0x17b3a4u: goto label_17b3a4;
        case 0x17b3a8u: goto label_17b3a8;
        case 0x17b3acu: goto label_17b3ac;
        case 0x17b3b0u: goto label_17b3b0;
        case 0x17b3b4u: goto label_17b3b4;
        case 0x17b3b8u: goto label_17b3b8;
        case 0x17b3bcu: goto label_17b3bc;
        case 0x17b3c0u: goto label_17b3c0;
        case 0x17b3c4u: goto label_17b3c4;
        case 0x17b3c8u: goto label_17b3c8;
        case 0x17b3ccu: goto label_17b3cc;
        case 0x17b3d0u: goto label_17b3d0;
        case 0x17b3d4u: goto label_17b3d4;
        case 0x17b3d8u: goto label_17b3d8;
        case 0x17b3dcu: goto label_17b3dc;
        default: break;
    }

    ctx->pc = 0x17ab60u;

label_17ab60:
    // 0x17ab60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17ab64:
    // 0x17ab64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17ab64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17ab68:
    // 0x17ab68: 0x3e00008  jr          $ra
label_17ab6c:
    if (ctx->pc == 0x17AB6Cu) {
        ctx->pc = 0x17AB70u;
        goto label_17ab70;
    }
    ctx->pc = 0x17AB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AB70u;
label_17ab70:
    // 0x17ab70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_17ab74:
    // 0x17ab74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17ab78:
    // 0x17ab78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ab78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17ab7c:
    // 0x17ab7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17ab80:
    // 0x17ab80: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x17ab80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_17ab84:
    // 0x17ab84: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x17ab84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17ab88:
    // 0x17ab88: 0xc0559dc  jal         func_156770
label_17ab8c:
    if (ctx->pc == 0x17AB8Cu) {
        ctx->pc = 0x17AB90u;
        goto label_17ab90;
    }
    ctx->pc = 0x17AB88u;
    SET_GPR_U32(ctx, 31, 0x17AB90u);
    ctx->pc = 0x156770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156770u, 0x17AB88u, 0x17AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB90u;
label_17ab90:
    // 0x17ab90: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x17ab90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17ab94:
    // 0x17ab94: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x17ab94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_17ab98:
    // 0x17ab98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ab9c:
    // 0x17ab9c: 0x146200e6  bne         $v1, $v0, . + 4 + (0xE6 << 2)
label_17aba0:
    if (ctx->pc == 0x17ABA0u) {
        ctx->pc = 0x17ABA4u;
        goto label_17aba4;
    }
    ctx->pc = 0x17AB9Cu;
    {
        const bool branch_taken_0x17ab9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17ab9c) {
            ctx->pc = 0x17AF38u;
            goto label_17af38;
        }
    }
    ctx->pc = 0x17ABA4u;
label_17aba4:
    // 0x17aba4: 0xc05548c  jal         func_155230
label_17aba8:
    if (ctx->pc == 0x17ABA8u) {
        ctx->pc = 0x17ABACu;
        goto label_17abac;
    }
    ctx->pc = 0x17ABA4u;
    SET_GPR_U32(ctx, 31, 0x17ABACu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x17ABA4u, 0x17ABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ABACu;
label_17abac:
    // 0x17abac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17abacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17abb0:
    // 0x17abb0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x17abb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_17abb4:
    // 0x17abb4: 0xc0553d4  jal         func_154F50
label_17abb8:
    if (ctx->pc == 0x17ABB8u) {
        ctx->pc = 0x17ABBCu;
        goto label_17abbc;
    }
    ctx->pc = 0x17ABB4u;
    SET_GPR_U32(ctx, 31, 0x17ABBCu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x17ABB4u, 0x17ABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ABBCu;
label_17abbc:
    // 0x17abbc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x17abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17abc0:
    // 0x17abc0: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x17abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_17abc4:
    // 0x17abc4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_17abc8:
    // 0x17abc8: 0xc05548c  jal         func_155230
label_17abcc:
    if (ctx->pc == 0x17ABCCu) {
        ctx->pc = 0x17ABD0u;
        goto label_17abd0;
    }
    ctx->pc = 0x17ABC8u;
    SET_GPR_U32(ctx, 31, 0x17ABD0u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x17ABC8u, 0x17ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ABD0u;
label_17abd0:
    // 0x17abd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17abd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17abd4:
    // 0x17abd4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x17abd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_17abd8:
    // 0x17abd8: 0xc0553d4  jal         func_154F50
label_17abdc:
    if (ctx->pc == 0x17ABDCu) {
        ctx->pc = 0x17ABE0u;
        goto label_17abe0;
    }
    ctx->pc = 0x17ABD8u;
    SET_GPR_U32(ctx, 31, 0x17ABE0u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x17ABD8u, 0x17ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ABE0u;
label_17abe0:
    // 0x17abe0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x17abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17abe4:
    // 0x17abe4: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x17abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_17abe8:
    // 0x17abe8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x17abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_17abec:
    // 0x17abec: 0xc05548c  jal         func_155230
label_17abf0:
    if (ctx->pc == 0x17ABF0u) {
        ctx->pc = 0x17ABF4u;
        goto label_17abf4;
    }
    ctx->pc = 0x17ABECu;
    SET_GPR_U32(ctx, 31, 0x17ABF4u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x17ABECu, 0x17ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ABF4u;
label_17abf4:
    // 0x17abf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17abf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17abf8:
    // 0x17abf8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x17abf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_17abfc:
    // 0x17abfc: 0xc0553d4  jal         func_154F50
label_17ac00:
    if (ctx->pc == 0x17AC00u) {
        ctx->pc = 0x17AC04u;
        goto label_17ac04;
    }
    ctx->pc = 0x17ABFCu;
    SET_GPR_U32(ctx, 31, 0x17AC04u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x17ABFCu, 0x17AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC04u;
label_17ac04:
    // 0x17ac04: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x17ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17ac08:
    // 0x17ac08: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x17ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_17ac0c:
    // 0x17ac0c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x17ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_17ac10:
    // 0x17ac10: 0xc05548c  jal         func_155230
label_17ac14:
    if (ctx->pc == 0x17AC14u) {
        ctx->pc = 0x17AC18u;
        goto label_17ac18;
    }
    ctx->pc = 0x17AC10u;
    SET_GPR_U32(ctx, 31, 0x17AC18u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x17AC10u, 0x17AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC18u;
label_17ac18:
    // 0x17ac18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17ac1c:
    // 0x17ac1c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x17ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_17ac20:
    // 0x17ac20: 0xc0553d4  jal         func_154F50
label_17ac24:
    if (ctx->pc == 0x17AC24u) {
        ctx->pc = 0x17AC28u;
        goto label_17ac28;
    }
    ctx->pc = 0x17AC20u;
    SET_GPR_U32(ctx, 31, 0x17AC28u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x17AC20u, 0x17AC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC28u;
label_17ac28:
    // 0x17ac28: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x17ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17ac2c:
    // 0x17ac2c: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x17ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_17ac30:
    // 0x17ac30: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x17ac30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_17ac34:
    // 0x17ac34: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17ac38:
    // 0x17ac38: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x17ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_17ac3c:
    // 0x17ac3c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17ac40:
    // 0x17ac40: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x17ac40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_17ac44:
    // 0x17ac44: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x17ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_17ac48:
    // 0x17ac48: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x17ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_17ac4c:
    // 0x17ac4c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_17ac50:
    if (ctx->pc == 0x17AC50u) {
        ctx->pc = 0x17AC54u;
        goto label_17ac54;
    }
    ctx->pc = 0x17AC4Cu;
    {
        const bool branch_taken_0x17ac4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ac4c) {
            ctx->pc = 0x17AC74u;
            goto label_17ac74;
        }
    }
    ctx->pc = 0x17AC54u;
label_17ac54:
    // 0x17ac54: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x17ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_17ac58:
    // 0x17ac58: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x17ac58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_17ac5c:
    // 0x17ac5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_17ac60:
    // 0x17ac60: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_17ac64:
    // 0x17ac64: 0x0  nop
    ctx->pc = 0x17ac64u;
    // NOP
label_17ac68:
    // 0x17ac68: 0x0  nop
    ctx->pc = 0x17ac68u;
    // NOP
label_17ac6c:
    // 0x17ac6c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_17ac70:
    if (ctx->pc == 0x17AC70u) {
        ctx->pc = 0x17AC74u;
        goto label_17ac74;
    }
    ctx->pc = 0x17AC6Cu;
    {
        const bool branch_taken_0x17ac6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ac6c) {
            ctx->pc = 0x17AC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ac58;
        }
    }
    ctx->pc = 0x17AC74u;
label_17ac74:
    // 0x17ac74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17ac78:
    // 0x17ac78: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x17ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_17ac7c:
    // 0x17ac7c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_17ac80:
    if (ctx->pc == 0x17AC80u) {
        ctx->pc = 0x17AC84u;
        goto label_17ac84;
    }
    ctx->pc = 0x17AC7Cu;
    {
        const bool branch_taken_0x17ac7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ac7c) {
            ctx->pc = 0x17ACA4u;
            goto label_17aca4;
        }
    }
    ctx->pc = 0x17AC84u;
label_17ac84:
    // 0x17ac84: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x17ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_17ac88:
    // 0x17ac88: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x17ac88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_17ac8c:
    // 0x17ac8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_17ac90:
    // 0x17ac90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_17ac94:
    // 0x17ac94: 0x0  nop
    ctx->pc = 0x17ac94u;
    // NOP
label_17ac98:
    // 0x17ac98: 0x0  nop
    ctx->pc = 0x17ac98u;
    // NOP
label_17ac9c:
    // 0x17ac9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_17aca0:
    if (ctx->pc == 0x17ACA0u) {
        ctx->pc = 0x17ACA4u;
        goto label_17aca4;
    }
    ctx->pc = 0x17AC9Cu;
    {
        const bool branch_taken_0x17ac9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ac9c) {
            ctx->pc = 0x17AC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ac88;
        }
    }
    ctx->pc = 0x17ACA4u;
label_17aca4:
    // 0x17aca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17aca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17aca8:
    // 0x17aca8: 0x0  nop
    ctx->pc = 0x17aca8u;
    // NOP
label_17acac:
    // 0x17acac: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x17acacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_17acb0:
    // 0x17acb0: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x17acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_17acb4:
    // 0x17acb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17acb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17acb8:
    // 0x17acb8: 0x0  nop
    ctx->pc = 0x17acb8u;
    // NOP
label_17acbc:
    // 0x17acbc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x17acbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_17acc0:
    // 0x17acc0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x17acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_17acc4:
    // 0x17acc4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17acc8:
    // 0x17acc8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_17accc:
    if (ctx->pc == 0x17ACCCu) {
        ctx->pc = 0x17ACD0u;
        goto label_17acd0;
    }
    ctx->pc = 0x17ACC8u;
    {
        const bool branch_taken_0x17acc8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17acc8) {
            ctx->pc = 0x17ACE4u;
            goto label_17ace4;
        }
    }
    ctx->pc = 0x17ACD0u;
label_17acd0:
    // 0x17acd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17acd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17acd4:
    // 0x17acd4: 0x0  nop
    ctx->pc = 0x17acd4u;
    // NOP
label_17acd8:
    // 0x17acd8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17acd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17acdc:
    // 0x17acdc: 0x10000008  b           . + 4 + (0x8 << 2)
label_17ace0:
    if (ctx->pc == 0x17ACE0u) {
        ctx->pc = 0x17ACE4u;
        goto label_17ace4;
    }
    ctx->pc = 0x17ACDCu;
    {
        const bool branch_taken_0x17acdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17acdc) {
            ctx->pc = 0x17AD00u;
            goto label_17ad00;
        }
    }
    ctx->pc = 0x17ACE4u;
label_17ace4:
    // 0x17ace4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_17ace8:
    // 0x17ace8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17ace8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17acec:
    // 0x17acec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17acecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17acf0:
    // 0x17acf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17acf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17acf4:
    // 0x17acf4: 0x0  nop
    ctx->pc = 0x17acf4u;
    // NOP
label_17acf8:
    // 0x17acf8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17acf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17acfc:
    // 0x17acfc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17acfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17ad00:
    // 0x17ad00: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x17ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_17ad04:
    // 0x17ad04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ad04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17ad08:
    // 0x17ad08: 0x0  nop
    ctx->pc = 0x17ad08u;
    // NOP
label_17ad0c:
    // 0x17ad0c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x17ad0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_17ad10:
    // 0x17ad10: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x17ad10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17ad14:
    // 0x17ad14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17ad14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17ad18:
    // 0x17ad18: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x17ad18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_17ad1c:
    // 0x17ad1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17ad1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ad20:
    // 0x17ad20: 0x10000052  b           . + 4 + (0x52 << 2)
label_17ad24:
    if (ctx->pc == 0x17AD24u) {
        ctx->pc = 0x17AD28u;
        goto label_17ad28;
    }
    ctx->pc = 0x17AD20u;
    {
        const bool branch_taken_0x17ad20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ad20) {
            ctx->pc = 0x17AE6Cu;
            goto label_17ae6c;
        }
    }
    ctx->pc = 0x17AD28u;
label_17ad28:
    // 0x17ad28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17ad2c:
    // 0x17ad2c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_17ad30:
    // 0x17ad30: 0x24a54d90  addiu       $a1, $a1, 0x4D90
    ctx->pc = 0x17ad30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19856));
label_17ad34:
    // 0x17ad34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17ad34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17ad38:
    // 0x17ad38: 0xc0bc3e2  jal         func_2F0F88
label_17ad3c:
    if (ctx->pc == 0x17AD3Cu) {
        ctx->pc = 0x17AD40u;
        goto label_17ad40;
    }
    ctx->pc = 0x17AD38u;
    SET_GPR_U32(ctx, 31, 0x17AD40u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x17AD38u, 0x17AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD40u;
label_17ad40:
    // 0x17ad40: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x17ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17ad44:
    // 0x17ad44: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17ad44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17ad48:
    // 0x17ad48: 0xc0552e4  jal         func_154B90
label_17ad4c:
    if (ctx->pc == 0x17AD4Cu) {
        ctx->pc = 0x17AD50u;
        goto label_17ad50;
    }
    ctx->pc = 0x17AD48u;
    SET_GPR_U32(ctx, 31, 0x17AD50u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17AD48u, 0x17AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD50u;
label_17ad50:
    // 0x17ad50: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x17ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_17ad54:
    // 0x17ad54: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x17ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17ad58:
    // 0x17ad58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17ad5c:
    // 0x17ad5c: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x17ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_17ad60:
    // 0x17ad60: 0x1a000014  blez        $s0, . + 4 + (0x14 << 2)
label_17ad64:
    if (ctx->pc == 0x17AD64u) {
        ctx->pc = 0x17AD68u;
        goto label_17ad68;
    }
    ctx->pc = 0x17AD60u;
    {
        const bool branch_taken_0x17ad60 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x17ad60) {
            ctx->pc = 0x17ADB4u;
            goto label_17adb4;
        }
    }
    ctx->pc = 0x17AD68u;
label_17ad68:
    // 0x17ad68: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x17ad68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17ad6c:
    // 0x17ad6c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_17ad70:
    // 0x17ad70: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17ad74:
    // 0x17ad74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17ad78:
    // 0x17ad78: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x17ad78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_17ad7c:
    // 0x17ad7c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x17ad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17ad80:
    // 0x17ad80: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x17ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17ad84:
    // 0x17ad84: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x17ad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17ad88:
    // 0x17ad88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17ad88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17ad8c:
    // 0x17ad8c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x17ad8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_17ad90:
    // 0x17ad90: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17ad90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_17ad94:
    // 0x17ad94: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x17ad94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_17ad98:
    // 0x17ad98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17ad98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ad9c:
    // 0x17ad9c: 0xc08c208  jal         func_230820
label_17ada0:
    if (ctx->pc == 0x17ADA0u) {
        ctx->pc = 0x17ADA4u;
        goto label_17ada4;
    }
    ctx->pc = 0x17AD9Cu;
    SET_GPR_U32(ctx, 31, 0x17ADA4u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x17AD9Cu, 0x17ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ADA4u;
label_17ada4:
    // 0x17ada4: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x17ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17ada8:
    // 0x17ada8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x17ada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17adac:
    // 0x17adac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17adacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17adb0:
    // 0x17adb0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x17adb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_17adb4:
    // 0x17adb4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x17adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17adb8:
    // 0x17adb8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_17adbc:
    // 0x17adbc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17adc0:
    // 0x17adc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17adc4:
    // 0x17adc4: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x17adc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_17adc8:
    // 0x17adc8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x17adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_17adcc:
    // 0x17adcc: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x17adccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_17add0:
    // 0x17add0: 0xc08c704  jal         func_231C10
label_17add4:
    if (ctx->pc == 0x17ADD4u) {
        ctx->pc = 0x17ADD8u;
        goto label_17add8;
    }
    ctx->pc = 0x17ADD0u;
    SET_GPR_U32(ctx, 31, 0x17ADD8u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x17ADD0u, 0x17ADD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ADD8u;
label_17add8:
    // 0x17add8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x17add8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17addc:
    // 0x17addc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17addcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_17ade0:
    // 0x17ade0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17ade4:
    // 0x17ade4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17ade8:
    // 0x17ade8: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x17ade8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_17adec:
    // 0x17adec: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x17adecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_17adf0:
    // 0x17adf0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x17adf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17adf4:
    // 0x17adf4: 0xc08c6c8  jal         func_231B20
label_17adf8:
    if (ctx->pc == 0x17ADF8u) {
        ctx->pc = 0x17ADFCu;
        goto label_17adfc;
    }
    ctx->pc = 0x17ADF4u;
    SET_GPR_U32(ctx, 31, 0x17ADFCu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x17ADF4u, 0x17ADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ADFCu;
label_17adfc:
    // 0x17adfc: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x17adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_17ae00:
    // 0x17ae00: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17ae04:
    // 0x17ae04: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_17ae08:
    if (ctx->pc == 0x17AE08u) {
        ctx->pc = 0x17AE0Cu;
        goto label_17ae0c;
    }
    ctx->pc = 0x17AE04u;
    {
        const bool branch_taken_0x17ae04 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17ae04) {
            ctx->pc = 0x17AE20u;
            goto label_17ae20;
        }
    }
    ctx->pc = 0x17AE0Cu;
label_17ae0c:
    // 0x17ae0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ae0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17ae10:
    // 0x17ae10: 0x0  nop
    ctx->pc = 0x17ae10u;
    // NOP
label_17ae14:
    // 0x17ae14: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17ae14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17ae18:
    // 0x17ae18: 0x10000008  b           . + 4 + (0x8 << 2)
label_17ae1c:
    if (ctx->pc == 0x17AE1Cu) {
        ctx->pc = 0x17AE20u;
        goto label_17ae20;
    }
    ctx->pc = 0x17AE18u;
    {
        const bool branch_taken_0x17ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ae18) {
            ctx->pc = 0x17AE3Cu;
            goto label_17ae3c;
        }
    }
    ctx->pc = 0x17AE20u;
label_17ae20:
    // 0x17ae20: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_17ae24:
    // 0x17ae24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17ae28:
    // 0x17ae28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17ae28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17ae2c:
    // 0x17ae2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17ae2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17ae30:
    // 0x17ae30: 0x0  nop
    ctx->pc = 0x17ae30u;
    // NOP
label_17ae34:
    // 0x17ae34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17ae34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17ae38:
    // 0x17ae38: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17ae38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17ae3c:
    // 0x17ae3c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x17ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_17ae40:
    // 0x17ae40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ae40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17ae44:
    // 0x17ae44: 0x0  nop
    ctx->pc = 0x17ae44u;
    // NOP
label_17ae48:
    // 0x17ae48: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x17ae48u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_17ae4c:
    // 0x17ae4c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x17ae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17ae50:
    // 0x17ae50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17ae50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17ae54:
    // 0x17ae54: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x17ae54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_17ae58:
    // 0x17ae58: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x17ae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17ae5c:
    // 0x17ae5c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x17ae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17ae60:
    // 0x17ae60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17ae60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17ae64:
    // 0x17ae64: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x17ae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_17ae68:
    // 0x17ae68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17ae68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17ae6c:
    // 0x17ae6c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17ae70:
    // 0x17ae70: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x17ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_17ae74:
    // 0x17ae74: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x17ae74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_17ae78:
    // 0x17ae78: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_17ae7c:
    if (ctx->pc == 0x17AE7Cu) {
        ctx->pc = 0x17AE80u;
        goto label_17ae80;
    }
    ctx->pc = 0x17AE78u;
    {
        const bool branch_taken_0x17ae78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ae78) {
            ctx->pc = 0x17AD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ad28;
        }
    }
    ctx->pc = 0x17AE80u;
label_17ae80:
    // 0x17ae80: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x17ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_17ae84:
    // 0x17ae84: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17ae88:
    // 0x17ae88: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_17ae8c:
    if (ctx->pc == 0x17AE8Cu) {
        ctx->pc = 0x17AE90u;
        goto label_17ae90;
    }
    ctx->pc = 0x17AE88u;
    {
        const bool branch_taken_0x17ae88 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17ae88) {
            ctx->pc = 0x17AEA4u;
            goto label_17aea4;
        }
    }
    ctx->pc = 0x17AE90u;
label_17ae90:
    // 0x17ae90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ae90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17ae94:
    // 0x17ae94: 0x0  nop
    ctx->pc = 0x17ae94u;
    // NOP
label_17ae98:
    // 0x17ae98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17ae98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17ae9c:
    // 0x17ae9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_17aea0:
    if (ctx->pc == 0x17AEA0u) {
        ctx->pc = 0x17AEA4u;
        goto label_17aea4;
    }
    ctx->pc = 0x17AE9Cu;
    {
        const bool branch_taken_0x17ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ae9c) {
            ctx->pc = 0x17AEC0u;
            goto label_17aec0;
        }
    }
    ctx->pc = 0x17AEA4u;
label_17aea4:
    // 0x17aea4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_17aea8:
    // 0x17aea8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17aea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17aeac:
    // 0x17aeac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17aeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17aeb0:
    // 0x17aeb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17aeb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17aeb4:
    // 0x17aeb4: 0x0  nop
    ctx->pc = 0x17aeb4u;
    // NOP
label_17aeb8:
    // 0x17aeb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17aeb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17aebc:
    // 0x17aebc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17aebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17aec0:
    // 0x17aec0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x17aec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_17aec4:
    // 0x17aec4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x17aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17aec8:
    // 0x17aec8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x17aec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17aecc:
    // 0x17aecc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17aeccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17aed0:
    // 0x17aed0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x17aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_17aed4:
    // 0x17aed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17aed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17aed8:
    // 0x17aed8: 0x0  nop
    ctx->pc = 0x17aed8u;
    // NOP
label_17aedc:
    // 0x17aedc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17aedcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_17aee0:
    // 0x17aee0: 0x0  nop
    ctx->pc = 0x17aee0u;
    // NOP
label_17aee4:
    // 0x17aee4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x17aee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_17aee8:
    // 0x17aee8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17aee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17aeec:
    // 0x17aeec: 0x1000000d  b           . + 4 + (0xD << 2)
label_17aef0:
    if (ctx->pc == 0x17AEF0u) {
        ctx->pc = 0x17AEF4u;
        goto label_17aef4;
    }
    ctx->pc = 0x17AEECu;
    {
        const bool branch_taken_0x17aeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aeec) {
            ctx->pc = 0x17AF24u;
            goto label_17af24;
        }
    }
    ctx->pc = 0x17AEF4u;
label_17aef4:
    // 0x17aef4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x17aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17aef8:
    // 0x17aef8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_17aefc:
    // 0x17aefc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17af00:
    // 0x17af00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17af00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17af04:
    // 0x17af04: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x17af04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_17af08:
    // 0x17af08: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17af08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_17af0c:
    // 0x17af0c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x17af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_17af10:
    // 0x17af10: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x17af10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_17af14:
    // 0x17af14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17af14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17af18:
    // 0x17af18: 0xc08c208  jal         func_230820
label_17af1c:
    if (ctx->pc == 0x17AF1Cu) {
        ctx->pc = 0x17AF20u;
        goto label_17af20;
    }
    ctx->pc = 0x17AF18u;
    SET_GPR_U32(ctx, 31, 0x17AF20u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x17AF18u, 0x17AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AF20u;
label_17af20:
    // 0x17af20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17af20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17af24:
    // 0x17af24: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_17af28:
    // 0x17af28: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x17af28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_17af2c:
    // 0x17af2c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x17af2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_17af30:
    // 0x17af30: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_17af34:
    if (ctx->pc == 0x17AF34u) {
        ctx->pc = 0x17AF38u;
        goto label_17af38;
    }
    ctx->pc = 0x17AF30u;
    {
        const bool branch_taken_0x17af30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17af30) {
            ctx->pc = 0x17AEF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17aef4;
        }
    }
    ctx->pc = 0x17AF38u;
label_17af38:
    // 0x17af38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17af38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17af3c:
    // 0x17af3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17af3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17af40:
    // 0x17af40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17af40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17af44:
    // 0x17af44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17af44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17af48:
    // 0x17af48: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x17af48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_17af4c:
    // 0x17af4c: 0x3e00008  jr          $ra
label_17af50:
    if (ctx->pc == 0x17AF50u) {
        ctx->pc = 0x17AF54u;
        goto label_17af54;
    }
    ctx->pc = 0x17AF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AF54u;
label_17af54:
    // 0x17af54: 0x0  nop
    ctx->pc = 0x17af54u;
    // NOP
label_17af58:
    // 0x17af58: 0x0  nop
    ctx->pc = 0x17af58u;
    // NOP
label_17af5c:
    // 0x17af5c: 0x0  nop
    ctx->pc = 0x17af5cu;
    // NOP
label_17af60:
    // 0x17af60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x17af60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_17af64:
    // 0x17af64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17af64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_17af68:
    // 0x17af68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17af68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17af6c:
    // 0x17af6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17af6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17af70:
    // 0x17af70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17af70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17af74:
    // 0x17af74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17af74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17af78:
    // 0x17af78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17af78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17af7c:
    // 0x17af7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17af7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17af80:
    // 0x17af80: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x17af80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_17af84:
    // 0x17af84: 0xa3a500d0  sb          $a1, 0xD0($sp)
    ctx->pc = 0x17af84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 5));
label_17af88:
    // 0x17af88: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x17af88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17af8c:
    // 0x17af8c: 0x93a500d0  lbu         $a1, 0xD0($sp)
    ctx->pc = 0x17af8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_17af90:
    // 0x17af90: 0xc055a78  jal         func_1569E0
label_17af94:
    if (ctx->pc == 0x17AF94u) {
        ctx->pc = 0x17AF98u;
        goto label_17af98;
    }
    ctx->pc = 0x17AF90u;
    SET_GPR_U32(ctx, 31, 0x17AF98u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x17AF90u, 0x17AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AF98u;
label_17af98:
    // 0x17af98: 0x93a200d0  lbu         $v0, 0xD0($sp)
    ctx->pc = 0x17af98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_17af9c:
    // 0x17af9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17af9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17afa0:
    // 0x17afa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17afa4:
    // 0x17afa4: 0x14620066  bne         $v1, $v0, . + 4 + (0x66 << 2)
label_17afa8:
    if (ctx->pc == 0x17AFA8u) {
        ctx->pc = 0x17AFACu;
        goto label_17afac;
    }
    ctx->pc = 0x17AFA4u;
    {
        const bool branch_taken_0x17afa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17afa4) {
            ctx->pc = 0x17B140u;
            goto label_17b140;
        }
    }
    ctx->pc = 0x17AFACu;
label_17afac:
    // 0x17afac: 0xc090864  jal         func_242190
label_17afb0:
    if (ctx->pc == 0x17AFB0u) {
        ctx->pc = 0x17AFB4u;
        goto label_17afb4;
    }
    ctx->pc = 0x17AFACu;
    SET_GPR_U32(ctx, 31, 0x17AFB4u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x17AFACu, 0x17AFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFB4u;
label_17afb4:
    // 0x17afb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17afb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17afb8:
    // 0x17afb8: 0xc090598  jal         func_241660
label_17afbc:
    if (ctx->pc == 0x17AFBCu) {
        ctx->pc = 0x17AFC0u;
        goto label_17afc0;
    }
    ctx->pc = 0x17AFB8u;
    SET_GPR_U32(ctx, 31, 0x17AFC0u);
    ctx->pc = 0x241660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241660u, 0x17AFB8u, 0x17AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFC0u;
label_17afc0:
    // 0x17afc0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x17afc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17afc4:
    // 0x17afc4: 0xc090864  jal         func_242190
label_17afc8:
    if (ctx->pc == 0x17AFC8u) {
        ctx->pc = 0x17AFCCu;
        goto label_17afcc;
    }
    ctx->pc = 0x17AFC4u;
    SET_GPR_U32(ctx, 31, 0x17AFCCu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x17AFC4u, 0x17AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFCCu;
label_17afcc:
    // 0x17afcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17afccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17afd0:
    // 0x17afd0: 0xc090590  jal         func_241640
label_17afd4:
    if (ctx->pc == 0x17AFD4u) {
        ctx->pc = 0x17AFD8u;
        goto label_17afd8;
    }
    ctx->pc = 0x17AFD0u;
    SET_GPR_U32(ctx, 31, 0x17AFD8u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x17AFD0u, 0x17AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFD8u;
label_17afd8:
    // 0x17afd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17afd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17afdc:
    // 0x17afdc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17afdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_17afe0:
    // 0x17afe0: 0xc09157c  jal         func_2455F0
label_17afe4:
    if (ctx->pc == 0x17AFE4u) {
        ctx->pc = 0x17AFE8u;
        goto label_17afe8;
    }
    ctx->pc = 0x17AFE0u;
    SET_GPR_U32(ctx, 31, 0x17AFE8u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x17AFE0u, 0x17AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFE8u;
label_17afe8:
    // 0x17afe8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17afe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17afec:
    // 0x17afec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17afecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17aff0:
    // 0x17aff0: 0xc040e7c  jal         func_1039F0
label_17aff4:
    if (ctx->pc == 0x17AFF4u) {
        ctx->pc = 0x17AFF8u;
        goto label_17aff8;
    }
    ctx->pc = 0x17AFF0u;
    SET_GPR_U32(ctx, 31, 0x17AFF8u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x17AFF0u, 0x17AFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFF8u;
label_17aff8:
    // 0x17aff8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17aff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17affc:
    // 0x17affc: 0x10000006  b           . + 4 + (0x6 << 2)
label_17b000:
    if (ctx->pc == 0x17B000u) {
        ctx->pc = 0x17B004u;
        goto label_17b004;
    }
    ctx->pc = 0x17AFFCu;
    {
        const bool branch_taken_0x17affc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17affc) {
            ctx->pc = 0x17B018u;
            goto label_17b018;
        }
    }
    ctx->pc = 0x17B004u;
label_17b004:
    // 0x17b004: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17b004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17b008:
    // 0x17b008: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17b008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17b00c:
    // 0x17b00c: 0xc095744  jal         func_255D10
label_17b010:
    if (ctx->pc == 0x17B010u) {
        ctx->pc = 0x17B014u;
        goto label_17b014;
    }
    ctx->pc = 0x17B00Cu;
    SET_GPR_U32(ctx, 31, 0x17B014u);
    ctx->pc = 0x255D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255D10u, 0x17B00Cu, 0x17B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B014u;
label_17b014:
    // 0x17b014: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17b014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_17b018:
    // 0x17b018: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17b018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17b01c:
    // 0x17b01c: 0xc04147c  jal         func_1051F0
label_17b020:
    if (ctx->pc == 0x17B020u) {
        ctx->pc = 0x17B024u;
        goto label_17b024;
    }
    ctx->pc = 0x17B01Cu;
    SET_GPR_U32(ctx, 31, 0x17B024u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x17B01Cu, 0x17B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B024u;
label_17b024:
    // 0x17b024: 0x1602fff7  bne         $s0, $v0, . + 4 + (-0x9 << 2)
label_17b028:
    if (ctx->pc == 0x17B028u) {
        ctx->pc = 0x17B02Cu;
        goto label_17b02c;
    }
    ctx->pc = 0x17B024u;
    {
        const bool branch_taken_0x17b024 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x17b024) {
            ctx->pc = 0x17B004u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b004;
        }
    }
    ctx->pc = 0x17B02Cu;
label_17b02c:
    // 0x17b02c: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x17b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b030:
    // 0x17b030: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x17b030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_17b034:
    // 0x17b034: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17b034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b038:
    // 0x17b038: 0x10000010  b           . + 4 + (0x10 << 2)
label_17b03c:
    if (ctx->pc == 0x17B03Cu) {
        ctx->pc = 0x17B040u;
        goto label_17b040;
    }
    ctx->pc = 0x17B038u;
    {
        const bool branch_taken_0x17b038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b038) {
            ctx->pc = 0x17B07Cu;
            goto label_17b07c;
        }
    }
    ctx->pc = 0x17B040u;
label_17b040:
    // 0x17b040: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x17b040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17b044:
    // 0x17b044: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x17b044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_17b048:
    // 0x17b048: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17b048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17b04c:
    // 0x17b04c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b050:
    // 0x17b050: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x17b050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_17b054:
    // 0x17b054: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x17b054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_17b058:
    // 0x17b058: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17b058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17b05c:
    // 0x17b05c: 0x27a700bc  addiu       $a3, $sp, 0xBC
    ctx->pc = 0x17b05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_17b060:
    // 0x17b060: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x17b060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_17b064:
    // 0x17b064: 0xc78d8278  lwc1        $f13, -0x7D88($gp)
    ctx->pc = 0x17b064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_17b068:
    // 0x17b068: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17b068u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b06c:
    // 0x17b06c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17b06cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b070:
    // 0x17b070: 0xc08b9fc  jal         func_22E7F0
label_17b074:
    if (ctx->pc == 0x17B074u) {
        ctx->pc = 0x17B078u;
        goto label_17b078;
    }
    ctx->pc = 0x17B070u;
    SET_GPR_U32(ctx, 31, 0x17B078u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17B070u, 0x17B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B078u;
label_17b078:
    // 0x17b078: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17b078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17b07c:
    // 0x17b07c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17b080:
    // 0x17b080: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x17b080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_17b084:
    // 0x17b084: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17b084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_17b088:
    // 0x17b088: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_17b08c:
    if (ctx->pc == 0x17B08Cu) {
        ctx->pc = 0x17B090u;
        goto label_17b090;
    }
    ctx->pc = 0x17B088u;
    {
        const bool branch_taken_0x17b088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b088) {
            ctx->pc = 0x17B040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b040;
        }
    }
    ctx->pc = 0x17B090u;
label_17b090:
    // 0x17b090: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x17b090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17b094:
    // 0x17b094: 0xc05ecf8  jal         func_17B3E0
label_17b098:
    if (ctx->pc == 0x17B098u) {
        ctx->pc = 0x17B09Cu;
        goto label_17b09c;
    }
    ctx->pc = 0x17B094u;
    SET_GPR_U32(ctx, 31, 0x17B09Cu);
    ctx->pc = 0x17B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B3E0u, 0x17B094u, 0x17B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B09Cu;
label_17b09c:
    // 0x17b09c: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x17b09cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_17b0a0:
    // 0x17b0a0: 0x24e74da0  addiu       $a3, $a3, 0x4DA0
    ctx->pc = 0x17b0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19872));
label_17b0a4:
    // 0x17b0a4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x17b0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_17b0a8:
    // 0x17b0a8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x17b0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_17b0ac:
    // 0x17b0ac: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x17b0acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_17b0b0:
    // 0x17b0b0: 0x80e30001  lb          $v1, 0x1($a3)
    ctx->pc = 0x17b0b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_17b0b4:
    // 0x17b0b4: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x17b0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_17b0b8:
    // 0x17b0b8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x17b0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_17b0bc:
    // 0x17b0bc: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x17b0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_17b0c0:
    // 0x17b0c0: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x17b0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
label_17b0c4:
    // 0x17b0c4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x17b0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_17b0c8:
    // 0x17b0c8: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
label_17b0cc:
    if (ctx->pc == 0x17B0CCu) {
        ctx->pc = 0x17B0D0u;
        goto label_17b0d0;
    }
    ctx->pc = 0x17B0C8u;
    {
        const bool branch_taken_0x17b0c8 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x17b0c8) {
            ctx->pc = 0x17B0ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b0ac;
        }
    }
    ctx->pc = 0x17B0D0u;
label_17b0d0:
    // 0x17b0d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17b0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b0d4:
    // 0x17b0d4: 0x10000015  b           . + 4 + (0x15 << 2)
label_17b0d8:
    if (ctx->pc == 0x17B0D8u) {
        ctx->pc = 0x17B0DCu;
        goto label_17b0dc;
    }
    ctx->pc = 0x17B0D4u;
    {
        const bool branch_taken_0x17b0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b0d4) {
            ctx->pc = 0x17B12Cu;
            goto label_17b12c;
        }
    }
    ctx->pc = 0x17B0DCu;
label_17b0dc:
    // 0x17b0dc: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x17b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_17b0e0:
    // 0x17b0e0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_17b0e4:
    // 0x17b0e4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x17b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17b0e8:
    // 0x17b0e8: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x17b0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_17b0ec:
    // 0x17b0ec: 0xc05621c  jal         func_158870
label_17b0f0:
    if (ctx->pc == 0x17B0F0u) {
        ctx->pc = 0x17B0F4u;
        goto label_17b0f4;
    }
    ctx->pc = 0x17B0ECu;
    SET_GPR_U32(ctx, 31, 0x17B0F4u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x17B0ECu, 0x17B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0F4u;
label_17b0f4:
    // 0x17b0f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17b0f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b0f8:
    // 0x17b0f8: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_17b0fc:
    if (ctx->pc == 0x17B0FCu) {
        ctx->pc = 0x17B100u;
        goto label_17b100;
    }
    ctx->pc = 0x17B0F8u;
    {
        const bool branch_taken_0x17b0f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b0f8) {
            ctx->pc = 0x17B128u;
            goto label_17b128;
        }
    }
    ctx->pc = 0x17B100u;
label_17b100:
    // 0x17b100: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17b104:
    // 0x17b104: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17b104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17b108:
    // 0x17b108: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17b108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_17b10c:
    // 0x17b10c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17b10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17b110:
    // 0x17b110: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17b110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17b114:
    // 0x17b114: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17b114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b118:
    // 0x17b118: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17b118u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b11c:
    // 0x17b11c: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x17b11cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17b120:
    // 0x17b120: 0xc08bbf4  jal         func_22EFD0
label_17b124:
    if (ctx->pc == 0x17B124u) {
        ctx->pc = 0x17B128u;
        goto label_17b128;
    }
    ctx->pc = 0x17B120u;
    SET_GPR_U32(ctx, 31, 0x17B128u);
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x17B120u, 0x17B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B128u;
label_17b128:
    // 0x17b128: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17b128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17b12c:
    // 0x17b12c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x17b12cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_17b130:
    // 0x17b130: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_17b134:
    if (ctx->pc == 0x17B134u) {
        ctx->pc = 0x17B138u;
        goto label_17b138;
    }
    ctx->pc = 0x17B130u;
    {
        const bool branch_taken_0x17b130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b130) {
            ctx->pc = 0x17B0DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b0dc;
        }
    }
    ctx->pc = 0x17B138u;
label_17b138:
    // 0x17b138: 0x10000012  b           . + 4 + (0x12 << 2)
label_17b13c:
    if (ctx->pc == 0x17B13Cu) {
        ctx->pc = 0x17B140u;
        goto label_17b140;
    }
    ctx->pc = 0x17B138u;
    {
        const bool branch_taken_0x17b138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b138) {
            ctx->pc = 0x17B184u;
            goto label_17b184;
        }
    }
    ctx->pc = 0x17B140u;
label_17b140:
    // 0x17b140: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17b144:
    // 0x17b144: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17b144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_17b148:
    // 0x17b148: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17b148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17b14c:
    // 0x17b14c: 0xc08c910  jal         func_232440
label_17b150:
    if (ctx->pc == 0x17B150u) {
        ctx->pc = 0x17B154u;
        goto label_17b154;
    }
    ctx->pc = 0x17B14Cu;
    SET_GPR_U32(ctx, 31, 0x17B154u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x17B14Cu, 0x17B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B154u;
label_17b154:
    // 0x17b154: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x17b154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17b158:
    // 0x17b158: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17b158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17b15c:
    // 0x17b15c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x17b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_17b160:
    // 0x17b160: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17b160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17b164:
    // 0x17b164: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x17b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_17b168:
    // 0x17b168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b16c:
    // 0x17b16c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17b170:
    // 0x17b170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b174:
    // 0x17b174: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17b174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b178:
    // 0x17b178: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x17b178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_17b17c:
    // 0x17b17c: 0x320f809  jalr        $t9
label_17b180:
    if (ctx->pc == 0x17B180u) {
        ctx->pc = 0x17B184u;
        goto label_17b184;
    }
    ctx->pc = 0x17B17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17B184u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B17Cu, 0x17B184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B184u;
label_17b184:
    // 0x17b184: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17b184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_17b188:
    // 0x17b188: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17b188u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17b18c:
    // 0x17b18c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17b18cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17b190:
    // 0x17b190: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17b190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17b194:
    // 0x17b194: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17b198:
    // 0x17b198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17b19c:
    // 0x17b19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17b1a0:
    // 0x17b1a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x17b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_17b1a4:
    // 0x17b1a4: 0x3e00008  jr          $ra
label_17b1a8:
    if (ctx->pc == 0x17B1A8u) {
        ctx->pc = 0x17B1ACu;
        goto label_17b1ac;
    }
    ctx->pc = 0x17B1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B1ACu;
label_17b1ac:
    // 0x17b1ac: 0x0  nop
    ctx->pc = 0x17b1acu;
    // NOP
label_17b1b0:
    // 0x17b1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17b1b4:
    // 0x17b1b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17b1b8:
    // 0x17b1b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17b1bc:
    // 0x17b1bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17b1c0:
    // 0x17b1c0: 0xc055b3c  jal         func_156CF0
label_17b1c4:
    if (ctx->pc == 0x17B1C4u) {
        ctx->pc = 0x17B1C8u;
        goto label_17b1c8;
    }
    ctx->pc = 0x17B1C0u;
    SET_GPR_U32(ctx, 31, 0x17B1C8u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x17B1C0u, 0x17B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1C8u;
label_17b1c8:
    // 0x17b1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b1cc:
    // 0x17b1cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17b1ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17b1d0:
    // 0x17b1d0: 0x3e00008  jr          $ra
label_17b1d4:
    if (ctx->pc == 0x17B1D4u) {
        ctx->pc = 0x17B1D8u;
        goto label_17b1d8;
    }
    ctx->pc = 0x17B1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B1D8u;
label_17b1d8:
    // 0x17b1d8: 0x0  nop
    ctx->pc = 0x17b1d8u;
    // NOP
label_17b1dc:
    // 0x17b1dc: 0x0  nop
    ctx->pc = 0x17b1dcu;
    // NOP
label_17b1e0:
    // 0x17b1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17b1e4:
    // 0x17b1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17b1e8:
    // 0x17b1e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17b1ec:
    // 0x17b1ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17b1f0:
    // 0x17b1f0: 0xc055a84  jal         func_156A10
label_17b1f4:
    if (ctx->pc == 0x17B1F4u) {
        ctx->pc = 0x17B1F8u;
        goto label_17b1f8;
    }
    ctx->pc = 0x17B1F0u;
    SET_GPR_U32(ctx, 31, 0x17B1F8u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x17B1F0u, 0x17B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1F8u;
label_17b1f8:
    // 0x17b1f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b1fc:
    // 0x17b1fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17b1fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17b200:
    // 0x17b200: 0x3e00008  jr          $ra
label_17b204:
    if (ctx->pc == 0x17B204u) {
        ctx->pc = 0x17B208u;
        goto label_17b208;
    }
    ctx->pc = 0x17B200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B208u;
label_17b208:
    // 0x17b208: 0x0  nop
    ctx->pc = 0x17b208u;
    // NOP
label_17b20c:
    // 0x17b20c: 0x0  nop
    ctx->pc = 0x17b20cu;
    // NOP
label_17b210:
    // 0x17b210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17b214:
    // 0x17b214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17b218:
    // 0x17b218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17b21c:
    // 0x17b21c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17b21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_17b220:
    // 0x17b220: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17b220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_17b224:
    // 0x17b224: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x17b224u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
label_17b228:
    // 0x17b228: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x17b228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_17b22c:
    // 0x17b22c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x17b22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_17b230:
    // 0x17b230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17b230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b234:
    // 0x17b234: 0x14830065  bne         $a0, $v1, . + 4 + (0x65 << 2)
label_17b238:
    if (ctx->pc == 0x17B238u) {
        ctx->pc = 0x17B23Cu;
        goto label_17b23c;
    }
    ctx->pc = 0x17B234u;
    {
        const bool branch_taken_0x17b234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17b234) {
            ctx->pc = 0x17B3CCu;
            goto label_17b3cc;
        }
    }
    ctx->pc = 0x17B23Cu;
label_17b23c:
    // 0x17b23c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x17b23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_17b240:
    // 0x17b240: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x17b240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_17b244:
    // 0x17b244: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
label_17b248:
    if (ctx->pc == 0x17B248u) {
        ctx->pc = 0x17B24Cu;
        goto label_17b24c;
    }
    ctx->pc = 0x17B244u;
    {
        const bool branch_taken_0x17b244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17b244) {
            ctx->pc = 0x17B368u;
            goto label_17b368;
        }
    }
    ctx->pc = 0x17B24Cu;
label_17b24c:
    // 0x17b24c: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x17b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_17b250:
    // 0x17b250: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
label_17b254:
    if (ctx->pc == 0x17B254u) {
        ctx->pc = 0x17B258u;
        goto label_17b258;
    }
    ctx->pc = 0x17B250u;
    {
        const bool branch_taken_0x17b250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17b250) {
            ctx->pc = 0x17B368u;
            goto label_17b368;
        }
    }
    ctx->pc = 0x17B258u;
label_17b258:
    // 0x17b258: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x17b258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_17b25c:
    // 0x17b25c: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
label_17b260:
    if (ctx->pc == 0x17B260u) {
        ctx->pc = 0x17B264u;
        goto label_17b264;
    }
    ctx->pc = 0x17B25Cu;
    {
        const bool branch_taken_0x17b25c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17b25c) {
            ctx->pc = 0x17B2F0u;
            goto label_17b2f0;
        }
    }
    ctx->pc = 0x17B264u;
label_17b264:
    // 0x17b264: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x17b264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_17b268:
    // 0x17b268: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
label_17b26c:
    if (ctx->pc == 0x17B26Cu) {
        ctx->pc = 0x17B270u;
        goto label_17b270;
    }
    ctx->pc = 0x17B268u;
    {
        const bool branch_taken_0x17b268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17b268) {
            ctx->pc = 0x17B2F0u;
            goto label_17b2f0;
        }
    }
    ctx->pc = 0x17B270u;
label_17b270:
    // 0x17b270: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x17b270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_17b274:
    // 0x17b274: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_17b278:
    if (ctx->pc == 0x17B278u) {
        ctx->pc = 0x17B27Cu;
        goto label_17b27c;
    }
    ctx->pc = 0x17B274u;
    {
        const bool branch_taken_0x17b274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17b274) {
            ctx->pc = 0x17B284u;
            goto label_17b284;
        }
    }
    ctx->pc = 0x17B27Cu;
label_17b27c:
    // 0x17b27c: 0x10000053  b           . + 4 + (0x53 << 2)
label_17b280:
    if (ctx->pc == 0x17B280u) {
        ctx->pc = 0x17B284u;
        goto label_17b284;
    }
    ctx->pc = 0x17B27Cu;
    {
        const bool branch_taken_0x17b27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b27c) {
            ctx->pc = 0x17B3CCu;
            goto label_17b3cc;
        }
    }
    ctx->pc = 0x17B284u;
label_17b284:
    // 0x17b284: 0xc08ef50  jal         func_23BD40
label_17b288:
    if (ctx->pc == 0x17B288u) {
        ctx->pc = 0x17B28Cu;
        goto label_17b28c;
    }
    ctx->pc = 0x17B284u;
    SET_GPR_U32(ctx, 31, 0x17B28Cu);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x17B284u, 0x17B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B28Cu;
label_17b28c:
    // 0x17b28c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b290:
    // 0x17b290: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
label_17b294:
    if (ctx->pc == 0x17B294u) {
        ctx->pc = 0x17B298u;
        goto label_17b298;
    }
    ctx->pc = 0x17B290u;
    {
        const bool branch_taken_0x17b290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b290) {
            ctx->pc = 0x17B3CCu;
            goto label_17b3cc;
        }
    }
    ctx->pc = 0x17B298u;
label_17b298:
    // 0x17b298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b29c:
    // 0x17b29c: 0xc0406f0  jal         func_101BC0
label_17b2a0:
    if (ctx->pc == 0x17B2A0u) {
        ctx->pc = 0x17B2A4u;
        goto label_17b2a4;
    }
    ctx->pc = 0x17B29Cu;
    SET_GPR_U32(ctx, 31, 0x17B2A4u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x17B29Cu, 0x17B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2A4u;
label_17b2a4:
    // 0x17b2a4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x17b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_17b2a8:
    // 0x17b2a8: 0x14430048  bne         $v0, $v1, . + 4 + (0x48 << 2)
label_17b2ac:
    if (ctx->pc == 0x17B2ACu) {
        ctx->pc = 0x17B2B0u;
        goto label_17b2b0;
    }
    ctx->pc = 0x17B2A8u;
    {
        const bool branch_taken_0x17b2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17b2a8) {
            ctx->pc = 0x17B3CCu;
            goto label_17b3cc;
        }
    }
    ctx->pc = 0x17B2B0u;
label_17b2b0:
    // 0x17b2b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17b2b4:
    // 0x17b2b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17b2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17b2b8:
    // 0x17b2b8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x17b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_17b2bc:
    // 0x17b2bc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17b2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_17b2c0:
    // 0x17b2c0: 0x24a54de0  addiu       $a1, $a1, 0x4DE0
    ctx->pc = 0x17b2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19936));
label_17b2c4:
    // 0x17b2c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b2c8:
    // 0x17b2c8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x17b2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17b2cc:
    // 0x17b2cc: 0xc08f558  jal         func_23D560
label_17b2d0:
    if (ctx->pc == 0x17B2D0u) {
        ctx->pc = 0x17B2D4u;
        goto label_17b2d4;
    }
    ctx->pc = 0x17B2CCu;
    SET_GPR_U32(ctx, 31, 0x17B2D4u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x17B2CCu, 0x17B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2D4u;
label_17b2d4:
    // 0x17b2d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b2d8:
    // 0x17b2d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b2dc:
    // 0x17b2dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b2e0:
    // 0x17b2e0: 0xc041354  jal         func_104D50
label_17b2e4:
    if (ctx->pc == 0x17B2E4u) {
        ctx->pc = 0x17B2E8u;
        goto label_17b2e8;
    }
    ctx->pc = 0x17B2E0u;
    SET_GPR_U32(ctx, 31, 0x17B2E8u);
    ctx->pc = 0x104D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D50u, 0x17B2E0u, 0x17B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2E8u;
label_17b2e8:
    // 0x17b2e8: 0x10000038  b           . + 4 + (0x38 << 2)
label_17b2ec:
    if (ctx->pc == 0x17B2ECu) {
        ctx->pc = 0x17B2F0u;
        goto label_17b2f0;
    }
    ctx->pc = 0x17B2E8u;
    {
        const bool branch_taken_0x17b2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b2e8) {
            ctx->pc = 0x17B3CCu;
            goto label_17b3cc;
        }
    }
    ctx->pc = 0x17B2F0u;
label_17b2f0:
    // 0x17b2f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17b2f4:
    // 0x17b2f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17b2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17b2f8:
    // 0x17b2f8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x17b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_17b2fc:
    // 0x17b2fc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17b2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_17b300:
    // 0x17b300: 0x24a54df0  addiu       $a1, $a1, 0x4DF0
    ctx->pc = 0x17b300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19952));
label_17b304:
    // 0x17b304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b308:
    // 0x17b308: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x17b308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17b30c:
    // 0x17b30c: 0xc08f558  jal         func_23D560
label_17b310:
    if (ctx->pc == 0x17B310u) {
        ctx->pc = 0x17B314u;
        goto label_17b314;
    }
    ctx->pc = 0x17B30Cu;
    SET_GPR_U32(ctx, 31, 0x17B314u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x17B30Cu, 0x17B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B314u;
label_17b314:
    // 0x17b314: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b318:
    // 0x17b318: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x17b318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_17b31c:
    // 0x17b31c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b320:
    // 0x17b320: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x17b320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_17b324:
    // 0x17b324: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17b324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b328:
    // 0x17b328: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b32c:
    // 0x17b32c: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x17b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_17b330:
    // 0x17b330: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x17b330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_17b334:
    // 0x17b334: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17b334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17b338:
    // 0x17b338: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x17b338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17b33c:
    // 0x17b33c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b340:
    // 0x17b340: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x17b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_17b344:
    // 0x17b344: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x17b344u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_17b348:
    // 0x17b348: 0x1810  mfhi        $v1
    ctx->pc = 0x17b348u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_17b34c:
    // 0x17b34c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b350:
    // 0x17b350: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x17b350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_17b354:
    // 0x17b354: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17b354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b358:
    // 0x17b358: 0xc05ecf8  jal         func_17B3E0
label_17b35c:
    if (ctx->pc == 0x17B35Cu) {
        ctx->pc = 0x17B360u;
        goto label_17b360;
    }
    ctx->pc = 0x17B358u;
    SET_GPR_U32(ctx, 31, 0x17B360u);
    ctx->pc = 0x17B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B3E0u, 0x17B358u, 0x17B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B360u;
label_17b360:
    // 0x17b360: 0x1000001a  b           . + 4 + (0x1A << 2)
label_17b364:
    if (ctx->pc == 0x17B364u) {
        ctx->pc = 0x17B368u;
        goto label_17b368;
    }
    ctx->pc = 0x17B360u;
    {
        const bool branch_taken_0x17b360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b360) {
            ctx->pc = 0x17B3CCu;
            goto label_17b3cc;
        }
    }
    ctx->pc = 0x17B368u;
label_17b368:
    // 0x17b368: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17b368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17b36c:
    // 0x17b36c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17b36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17b370:
    // 0x17b370: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x17b370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_17b374:
    // 0x17b374: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17b374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_17b378:
    // 0x17b378: 0x24a54df0  addiu       $a1, $a1, 0x4DF0
    ctx->pc = 0x17b378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19952));
label_17b37c:
    // 0x17b37c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b380:
    // 0x17b380: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x17b380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17b384:
    // 0x17b384: 0xc08f558  jal         func_23D560
label_17b388:
    if (ctx->pc == 0x17B388u) {
        ctx->pc = 0x17B38Cu;
        goto label_17b38c;
    }
    ctx->pc = 0x17B384u;
    SET_GPR_U32(ctx, 31, 0x17B38Cu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x17B384u, 0x17B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B38Cu;
label_17b38c:
    // 0x17b38c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b390:
    // 0x17b390: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x17b390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_17b394:
    // 0x17b394: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b398:
    // 0x17b398: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x17b398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_17b39c:
    // 0x17b39c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b3a0:
    // 0x17b3a0: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x17b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_17b3a4:
    // 0x17b3a4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17b3a8:
    // 0x17b3a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b3ac:
    // 0x17b3ac: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x17b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_17b3b0:
    // 0x17b3b0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x17b3b0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_17b3b4:
    // 0x17b3b4: 0x1810  mfhi        $v1
    ctx->pc = 0x17b3b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_17b3b8:
    // 0x17b3b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b3bc:
    // 0x17b3bc: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x17b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_17b3c0:
    // 0x17b3c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17b3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b3c4:
    // 0x17b3c4: 0xc05ecf8  jal         func_17B3E0
label_17b3c8:
    if (ctx->pc == 0x17B3C8u) {
        ctx->pc = 0x17B3CCu;
        goto label_17b3cc;
    }
    ctx->pc = 0x17B3C4u;
    SET_GPR_U32(ctx, 31, 0x17B3CCu);
    ctx->pc = 0x17B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B3E0u, 0x17B3C4u, 0x17B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B3CCu;
label_17b3cc:
    // 0x17b3cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b3d0:
    // 0x17b3d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17b3d4:
    // 0x17b3d4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17b3d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17b3d8:
    // 0x17b3d8: 0x3e00008  jr          $ra
label_17b3dc:
    if (ctx->pc == 0x17B3DCu) {
        ctx->pc = 0x17B3E0u;
        goto label_fallthrough_0x17b3d8;
    }
    ctx->pc = 0x17B3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17b3d8:
    ctx->pc = 0x17B3E0u;
}
