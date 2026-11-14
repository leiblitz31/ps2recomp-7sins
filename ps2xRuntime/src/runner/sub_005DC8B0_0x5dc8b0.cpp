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

// Function: sub_005DC8B0
// Address: 0x5dc8b0 - 0x5dd7c0
void sub_005DC8B0_0x5dc8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DC8B0_0x5dc8b0");
#endif

    switch (ctx->pc) {
        case 0x5dc8b0u: goto label_5dc8b0;
        case 0x5dc8b4u: goto label_5dc8b4;
        case 0x5dc8b8u: goto label_5dc8b8;
        case 0x5dc8bcu: goto label_5dc8bc;
        case 0x5dc8c0u: goto label_5dc8c0;
        case 0x5dc8c4u: goto label_5dc8c4;
        case 0x5dc8c8u: goto label_5dc8c8;
        case 0x5dc8ccu: goto label_5dc8cc;
        case 0x5dc8d0u: goto label_5dc8d0;
        case 0x5dc8d4u: goto label_5dc8d4;
        case 0x5dc8d8u: goto label_5dc8d8;
        case 0x5dc8dcu: goto label_5dc8dc;
        case 0x5dc8e0u: goto label_5dc8e0;
        case 0x5dc8e4u: goto label_5dc8e4;
        case 0x5dc8e8u: goto label_5dc8e8;
        case 0x5dc8ecu: goto label_5dc8ec;
        case 0x5dc8f0u: goto label_5dc8f0;
        case 0x5dc8f4u: goto label_5dc8f4;
        case 0x5dc8f8u: goto label_5dc8f8;
        case 0x5dc8fcu: goto label_5dc8fc;
        case 0x5dc900u: goto label_5dc900;
        case 0x5dc904u: goto label_5dc904;
        case 0x5dc908u: goto label_5dc908;
        case 0x5dc90cu: goto label_5dc90c;
        case 0x5dc910u: goto label_5dc910;
        case 0x5dc914u: goto label_5dc914;
        case 0x5dc918u: goto label_5dc918;
        case 0x5dc91cu: goto label_5dc91c;
        case 0x5dc920u: goto label_5dc920;
        case 0x5dc924u: goto label_5dc924;
        case 0x5dc928u: goto label_5dc928;
        case 0x5dc92cu: goto label_5dc92c;
        case 0x5dc930u: goto label_5dc930;
        case 0x5dc934u: goto label_5dc934;
        case 0x5dc938u: goto label_5dc938;
        case 0x5dc93cu: goto label_5dc93c;
        case 0x5dc940u: goto label_5dc940;
        case 0x5dc944u: goto label_5dc944;
        case 0x5dc948u: goto label_5dc948;
        case 0x5dc94cu: goto label_5dc94c;
        case 0x5dc950u: goto label_5dc950;
        case 0x5dc954u: goto label_5dc954;
        case 0x5dc958u: goto label_5dc958;
        case 0x5dc95cu: goto label_5dc95c;
        case 0x5dc960u: goto label_5dc960;
        case 0x5dc964u: goto label_5dc964;
        case 0x5dc968u: goto label_5dc968;
        case 0x5dc96cu: goto label_5dc96c;
        case 0x5dc970u: goto label_5dc970;
        case 0x5dc974u: goto label_5dc974;
        case 0x5dc978u: goto label_5dc978;
        case 0x5dc97cu: goto label_5dc97c;
        case 0x5dc980u: goto label_5dc980;
        case 0x5dc984u: goto label_5dc984;
        case 0x5dc988u: goto label_5dc988;
        case 0x5dc98cu: goto label_5dc98c;
        case 0x5dc990u: goto label_5dc990;
        case 0x5dc994u: goto label_5dc994;
        case 0x5dc998u: goto label_5dc998;
        case 0x5dc99cu: goto label_5dc99c;
        case 0x5dc9a0u: goto label_5dc9a0;
        case 0x5dc9a4u: goto label_5dc9a4;
        case 0x5dc9a8u: goto label_5dc9a8;
        case 0x5dc9acu: goto label_5dc9ac;
        case 0x5dc9b0u: goto label_5dc9b0;
        case 0x5dc9b4u: goto label_5dc9b4;
        case 0x5dc9b8u: goto label_5dc9b8;
        case 0x5dc9bcu: goto label_5dc9bc;
        case 0x5dc9c0u: goto label_5dc9c0;
        case 0x5dc9c4u: goto label_5dc9c4;
        case 0x5dc9c8u: goto label_5dc9c8;
        case 0x5dc9ccu: goto label_5dc9cc;
        case 0x5dc9d0u: goto label_5dc9d0;
        case 0x5dc9d4u: goto label_5dc9d4;
        case 0x5dc9d8u: goto label_5dc9d8;
        case 0x5dc9dcu: goto label_5dc9dc;
        case 0x5dc9e0u: goto label_5dc9e0;
        case 0x5dc9e4u: goto label_5dc9e4;
        case 0x5dc9e8u: goto label_5dc9e8;
        case 0x5dc9ecu: goto label_5dc9ec;
        case 0x5dc9f0u: goto label_5dc9f0;
        case 0x5dc9f4u: goto label_5dc9f4;
        case 0x5dc9f8u: goto label_5dc9f8;
        case 0x5dc9fcu: goto label_5dc9fc;
        case 0x5dca00u: goto label_5dca00;
        case 0x5dca04u: goto label_5dca04;
        case 0x5dca08u: goto label_5dca08;
        case 0x5dca0cu: goto label_5dca0c;
        case 0x5dca10u: goto label_5dca10;
        case 0x5dca14u: goto label_5dca14;
        case 0x5dca18u: goto label_5dca18;
        case 0x5dca1cu: goto label_5dca1c;
        case 0x5dca20u: goto label_5dca20;
        case 0x5dca24u: goto label_5dca24;
        case 0x5dca28u: goto label_5dca28;
        case 0x5dca2cu: goto label_5dca2c;
        case 0x5dca30u: goto label_5dca30;
        case 0x5dca34u: goto label_5dca34;
        case 0x5dca38u: goto label_5dca38;
        case 0x5dca3cu: goto label_5dca3c;
        case 0x5dca40u: goto label_5dca40;
        case 0x5dca44u: goto label_5dca44;
        case 0x5dca48u: goto label_5dca48;
        case 0x5dca4cu: goto label_5dca4c;
        case 0x5dca50u: goto label_5dca50;
        case 0x5dca54u: goto label_5dca54;
        case 0x5dca58u: goto label_5dca58;
        case 0x5dca5cu: goto label_5dca5c;
        case 0x5dca60u: goto label_5dca60;
        case 0x5dca64u: goto label_5dca64;
        case 0x5dca68u: goto label_5dca68;
        case 0x5dca6cu: goto label_5dca6c;
        case 0x5dca70u: goto label_5dca70;
        case 0x5dca74u: goto label_5dca74;
        case 0x5dca78u: goto label_5dca78;
        case 0x5dca7cu: goto label_5dca7c;
        case 0x5dca80u: goto label_5dca80;
        case 0x5dca84u: goto label_5dca84;
        case 0x5dca88u: goto label_5dca88;
        case 0x5dca8cu: goto label_5dca8c;
        case 0x5dca90u: goto label_5dca90;
        case 0x5dca94u: goto label_5dca94;
        case 0x5dca98u: goto label_5dca98;
        case 0x5dca9cu: goto label_5dca9c;
        case 0x5dcaa0u: goto label_5dcaa0;
        case 0x5dcaa4u: goto label_5dcaa4;
        case 0x5dcaa8u: goto label_5dcaa8;
        case 0x5dcaacu: goto label_5dcaac;
        case 0x5dcab0u: goto label_5dcab0;
        case 0x5dcab4u: goto label_5dcab4;
        case 0x5dcab8u: goto label_5dcab8;
        case 0x5dcabcu: goto label_5dcabc;
        case 0x5dcac0u: goto label_5dcac0;
        case 0x5dcac4u: goto label_5dcac4;
        case 0x5dcac8u: goto label_5dcac8;
        case 0x5dcaccu: goto label_5dcacc;
        case 0x5dcad0u: goto label_5dcad0;
        case 0x5dcad4u: goto label_5dcad4;
        case 0x5dcad8u: goto label_5dcad8;
        case 0x5dcadcu: goto label_5dcadc;
        case 0x5dcae0u: goto label_5dcae0;
        case 0x5dcae4u: goto label_5dcae4;
        case 0x5dcae8u: goto label_5dcae8;
        case 0x5dcaecu: goto label_5dcaec;
        case 0x5dcaf0u: goto label_5dcaf0;
        case 0x5dcaf4u: goto label_5dcaf4;
        case 0x5dcaf8u: goto label_5dcaf8;
        case 0x5dcafcu: goto label_5dcafc;
        case 0x5dcb00u: goto label_5dcb00;
        case 0x5dcb04u: goto label_5dcb04;
        case 0x5dcb08u: goto label_5dcb08;
        case 0x5dcb0cu: goto label_5dcb0c;
        case 0x5dcb10u: goto label_5dcb10;
        case 0x5dcb14u: goto label_5dcb14;
        case 0x5dcb18u: goto label_5dcb18;
        case 0x5dcb1cu: goto label_5dcb1c;
        case 0x5dcb20u: goto label_5dcb20;
        case 0x5dcb24u: goto label_5dcb24;
        case 0x5dcb28u: goto label_5dcb28;
        case 0x5dcb2cu: goto label_5dcb2c;
        case 0x5dcb30u: goto label_5dcb30;
        case 0x5dcb34u: goto label_5dcb34;
        case 0x5dcb38u: goto label_5dcb38;
        case 0x5dcb3cu: goto label_5dcb3c;
        case 0x5dcb40u: goto label_5dcb40;
        case 0x5dcb44u: goto label_5dcb44;
        case 0x5dcb48u: goto label_5dcb48;
        case 0x5dcb4cu: goto label_5dcb4c;
        case 0x5dcb50u: goto label_5dcb50;
        case 0x5dcb54u: goto label_5dcb54;
        case 0x5dcb58u: goto label_5dcb58;
        case 0x5dcb5cu: goto label_5dcb5c;
        case 0x5dcb60u: goto label_5dcb60;
        case 0x5dcb64u: goto label_5dcb64;
        case 0x5dcb68u: goto label_5dcb68;
        case 0x5dcb6cu: goto label_5dcb6c;
        case 0x5dcb70u: goto label_5dcb70;
        case 0x5dcb74u: goto label_5dcb74;
        case 0x5dcb78u: goto label_5dcb78;
        case 0x5dcb7cu: goto label_5dcb7c;
        case 0x5dcb80u: goto label_5dcb80;
        case 0x5dcb84u: goto label_5dcb84;
        case 0x5dcb88u: goto label_5dcb88;
        case 0x5dcb8cu: goto label_5dcb8c;
        case 0x5dcb90u: goto label_5dcb90;
        case 0x5dcb94u: goto label_5dcb94;
        case 0x5dcb98u: goto label_5dcb98;
        case 0x5dcb9cu: goto label_5dcb9c;
        case 0x5dcba0u: goto label_5dcba0;
        case 0x5dcba4u: goto label_5dcba4;
        case 0x5dcba8u: goto label_5dcba8;
        case 0x5dcbacu: goto label_5dcbac;
        case 0x5dcbb0u: goto label_5dcbb0;
        case 0x5dcbb4u: goto label_5dcbb4;
        case 0x5dcbb8u: goto label_5dcbb8;
        case 0x5dcbbcu: goto label_5dcbbc;
        case 0x5dcbc0u: goto label_5dcbc0;
        case 0x5dcbc4u: goto label_5dcbc4;
        case 0x5dcbc8u: goto label_5dcbc8;
        case 0x5dcbccu: goto label_5dcbcc;
        case 0x5dcbd0u: goto label_5dcbd0;
        case 0x5dcbd4u: goto label_5dcbd4;
        case 0x5dcbd8u: goto label_5dcbd8;
        case 0x5dcbdcu: goto label_5dcbdc;
        case 0x5dcbe0u: goto label_5dcbe0;
        case 0x5dcbe4u: goto label_5dcbe4;
        case 0x5dcbe8u: goto label_5dcbe8;
        case 0x5dcbecu: goto label_5dcbec;
        case 0x5dcbf0u: goto label_5dcbf0;
        case 0x5dcbf4u: goto label_5dcbf4;
        case 0x5dcbf8u: goto label_5dcbf8;
        case 0x5dcbfcu: goto label_5dcbfc;
        case 0x5dcc00u: goto label_5dcc00;
        case 0x5dcc04u: goto label_5dcc04;
        case 0x5dcc08u: goto label_5dcc08;
        case 0x5dcc0cu: goto label_5dcc0c;
        case 0x5dcc10u: goto label_5dcc10;
        case 0x5dcc14u: goto label_5dcc14;
        case 0x5dcc18u: goto label_5dcc18;
        case 0x5dcc1cu: goto label_5dcc1c;
        case 0x5dcc20u: goto label_5dcc20;
        case 0x5dcc24u: goto label_5dcc24;
        case 0x5dcc28u: goto label_5dcc28;
        case 0x5dcc2cu: goto label_5dcc2c;
        case 0x5dcc30u: goto label_5dcc30;
        case 0x5dcc34u: goto label_5dcc34;
        case 0x5dcc38u: goto label_5dcc38;
        case 0x5dcc3cu: goto label_5dcc3c;
        case 0x5dcc40u: goto label_5dcc40;
        case 0x5dcc44u: goto label_5dcc44;
        case 0x5dcc48u: goto label_5dcc48;
        case 0x5dcc4cu: goto label_5dcc4c;
        case 0x5dcc50u: goto label_5dcc50;
        case 0x5dcc54u: goto label_5dcc54;
        case 0x5dcc58u: goto label_5dcc58;
        case 0x5dcc5cu: goto label_5dcc5c;
        case 0x5dcc60u: goto label_5dcc60;
        case 0x5dcc64u: goto label_5dcc64;
        case 0x5dcc68u: goto label_5dcc68;
        case 0x5dcc6cu: goto label_5dcc6c;
        case 0x5dcc70u: goto label_5dcc70;
        case 0x5dcc74u: goto label_5dcc74;
        case 0x5dcc78u: goto label_5dcc78;
        case 0x5dcc7cu: goto label_5dcc7c;
        case 0x5dcc80u: goto label_5dcc80;
        case 0x5dcc84u: goto label_5dcc84;
        case 0x5dcc88u: goto label_5dcc88;
        case 0x5dcc8cu: goto label_5dcc8c;
        case 0x5dcc90u: goto label_5dcc90;
        case 0x5dcc94u: goto label_5dcc94;
        case 0x5dcc98u: goto label_5dcc98;
        case 0x5dcc9cu: goto label_5dcc9c;
        case 0x5dcca0u: goto label_5dcca0;
        case 0x5dcca4u: goto label_5dcca4;
        case 0x5dcca8u: goto label_5dcca8;
        case 0x5dccacu: goto label_5dccac;
        case 0x5dccb0u: goto label_5dccb0;
        case 0x5dccb4u: goto label_5dccb4;
        case 0x5dccb8u: goto label_5dccb8;
        case 0x5dccbcu: goto label_5dccbc;
        case 0x5dccc0u: goto label_5dccc0;
        case 0x5dccc4u: goto label_5dccc4;
        case 0x5dccc8u: goto label_5dccc8;
        case 0x5dccccu: goto label_5dcccc;
        case 0x5dccd0u: goto label_5dccd0;
        case 0x5dccd4u: goto label_5dccd4;
        case 0x5dccd8u: goto label_5dccd8;
        case 0x5dccdcu: goto label_5dccdc;
        case 0x5dcce0u: goto label_5dcce0;
        case 0x5dcce4u: goto label_5dcce4;
        case 0x5dcce8u: goto label_5dcce8;
        case 0x5dccecu: goto label_5dccec;
        case 0x5dccf0u: goto label_5dccf0;
        case 0x5dccf4u: goto label_5dccf4;
        case 0x5dccf8u: goto label_5dccf8;
        case 0x5dccfcu: goto label_5dccfc;
        case 0x5dcd00u: goto label_5dcd00;
        case 0x5dcd04u: goto label_5dcd04;
        case 0x5dcd08u: goto label_5dcd08;
        case 0x5dcd0cu: goto label_5dcd0c;
        case 0x5dcd10u: goto label_5dcd10;
        case 0x5dcd14u: goto label_5dcd14;
        case 0x5dcd18u: goto label_5dcd18;
        case 0x5dcd1cu: goto label_5dcd1c;
        case 0x5dcd20u: goto label_5dcd20;
        case 0x5dcd24u: goto label_5dcd24;
        case 0x5dcd28u: goto label_5dcd28;
        case 0x5dcd2cu: goto label_5dcd2c;
        case 0x5dcd30u: goto label_5dcd30;
        case 0x5dcd34u: goto label_5dcd34;
        case 0x5dcd38u: goto label_5dcd38;
        case 0x5dcd3cu: goto label_5dcd3c;
        case 0x5dcd40u: goto label_5dcd40;
        case 0x5dcd44u: goto label_5dcd44;
        case 0x5dcd48u: goto label_5dcd48;
        case 0x5dcd4cu: goto label_5dcd4c;
        case 0x5dcd50u: goto label_5dcd50;
        case 0x5dcd54u: goto label_5dcd54;
        case 0x5dcd58u: goto label_5dcd58;
        case 0x5dcd5cu: goto label_5dcd5c;
        case 0x5dcd60u: goto label_5dcd60;
        case 0x5dcd64u: goto label_5dcd64;
        case 0x5dcd68u: goto label_5dcd68;
        case 0x5dcd6cu: goto label_5dcd6c;
        case 0x5dcd70u: goto label_5dcd70;
        case 0x5dcd74u: goto label_5dcd74;
        case 0x5dcd78u: goto label_5dcd78;
        case 0x5dcd7cu: goto label_5dcd7c;
        case 0x5dcd80u: goto label_5dcd80;
        case 0x5dcd84u: goto label_5dcd84;
        case 0x5dcd88u: goto label_5dcd88;
        case 0x5dcd8cu: goto label_5dcd8c;
        case 0x5dcd90u: goto label_5dcd90;
        case 0x5dcd94u: goto label_5dcd94;
        case 0x5dcd98u: goto label_5dcd98;
        case 0x5dcd9cu: goto label_5dcd9c;
        case 0x5dcda0u: goto label_5dcda0;
        case 0x5dcda4u: goto label_5dcda4;
        case 0x5dcda8u: goto label_5dcda8;
        case 0x5dcdacu: goto label_5dcdac;
        case 0x5dcdb0u: goto label_5dcdb0;
        case 0x5dcdb4u: goto label_5dcdb4;
        case 0x5dcdb8u: goto label_5dcdb8;
        case 0x5dcdbcu: goto label_5dcdbc;
        case 0x5dcdc0u: goto label_5dcdc0;
        case 0x5dcdc4u: goto label_5dcdc4;
        case 0x5dcdc8u: goto label_5dcdc8;
        case 0x5dcdccu: goto label_5dcdcc;
        case 0x5dcdd0u: goto label_5dcdd0;
        case 0x5dcdd4u: goto label_5dcdd4;
        case 0x5dcdd8u: goto label_5dcdd8;
        case 0x5dcddcu: goto label_5dcddc;
        case 0x5dcde0u: goto label_5dcde0;
        case 0x5dcde4u: goto label_5dcde4;
        case 0x5dcde8u: goto label_5dcde8;
        case 0x5dcdecu: goto label_5dcdec;
        case 0x5dcdf0u: goto label_5dcdf0;
        case 0x5dcdf4u: goto label_5dcdf4;
        case 0x5dcdf8u: goto label_5dcdf8;
        case 0x5dcdfcu: goto label_5dcdfc;
        case 0x5dce00u: goto label_5dce00;
        case 0x5dce04u: goto label_5dce04;
        case 0x5dce08u: goto label_5dce08;
        case 0x5dce0cu: goto label_5dce0c;
        case 0x5dce10u: goto label_5dce10;
        case 0x5dce14u: goto label_5dce14;
        case 0x5dce18u: goto label_5dce18;
        case 0x5dce1cu: goto label_5dce1c;
        case 0x5dce20u: goto label_5dce20;
        case 0x5dce24u: goto label_5dce24;
        case 0x5dce28u: goto label_5dce28;
        case 0x5dce2cu: goto label_5dce2c;
        case 0x5dce30u: goto label_5dce30;
        case 0x5dce34u: goto label_5dce34;
        case 0x5dce38u: goto label_5dce38;
        case 0x5dce3cu: goto label_5dce3c;
        case 0x5dce40u: goto label_5dce40;
        case 0x5dce44u: goto label_5dce44;
        case 0x5dce48u: goto label_5dce48;
        case 0x5dce4cu: goto label_5dce4c;
        case 0x5dce50u: goto label_5dce50;
        case 0x5dce54u: goto label_5dce54;
        case 0x5dce58u: goto label_5dce58;
        case 0x5dce5cu: goto label_5dce5c;
        case 0x5dce60u: goto label_5dce60;
        case 0x5dce64u: goto label_5dce64;
        case 0x5dce68u: goto label_5dce68;
        case 0x5dce6cu: goto label_5dce6c;
        case 0x5dce70u: goto label_5dce70;
        case 0x5dce74u: goto label_5dce74;
        case 0x5dce78u: goto label_5dce78;
        case 0x5dce7cu: goto label_5dce7c;
        case 0x5dce80u: goto label_5dce80;
        case 0x5dce84u: goto label_5dce84;
        case 0x5dce88u: goto label_5dce88;
        case 0x5dce8cu: goto label_5dce8c;
        case 0x5dce90u: goto label_5dce90;
        case 0x5dce94u: goto label_5dce94;
        case 0x5dce98u: goto label_5dce98;
        case 0x5dce9cu: goto label_5dce9c;
        case 0x5dcea0u: goto label_5dcea0;
        case 0x5dcea4u: goto label_5dcea4;
        case 0x5dcea8u: goto label_5dcea8;
        case 0x5dceacu: goto label_5dceac;
        case 0x5dceb0u: goto label_5dceb0;
        case 0x5dceb4u: goto label_5dceb4;
        case 0x5dceb8u: goto label_5dceb8;
        case 0x5dcebcu: goto label_5dcebc;
        case 0x5dcec0u: goto label_5dcec0;
        case 0x5dcec4u: goto label_5dcec4;
        case 0x5dcec8u: goto label_5dcec8;
        case 0x5dceccu: goto label_5dcecc;
        case 0x5dced0u: goto label_5dced0;
        case 0x5dced4u: goto label_5dced4;
        case 0x5dced8u: goto label_5dced8;
        case 0x5dcedcu: goto label_5dcedc;
        case 0x5dcee0u: goto label_5dcee0;
        case 0x5dcee4u: goto label_5dcee4;
        case 0x5dcee8u: goto label_5dcee8;
        case 0x5dceecu: goto label_5dceec;
        case 0x5dcef0u: goto label_5dcef0;
        case 0x5dcef4u: goto label_5dcef4;
        case 0x5dcef8u: goto label_5dcef8;
        case 0x5dcefcu: goto label_5dcefc;
        case 0x5dcf00u: goto label_5dcf00;
        case 0x5dcf04u: goto label_5dcf04;
        case 0x5dcf08u: goto label_5dcf08;
        case 0x5dcf0cu: goto label_5dcf0c;
        case 0x5dcf10u: goto label_5dcf10;
        case 0x5dcf14u: goto label_5dcf14;
        case 0x5dcf18u: goto label_5dcf18;
        case 0x5dcf1cu: goto label_5dcf1c;
        case 0x5dcf20u: goto label_5dcf20;
        case 0x5dcf24u: goto label_5dcf24;
        case 0x5dcf28u: goto label_5dcf28;
        case 0x5dcf2cu: goto label_5dcf2c;
        case 0x5dcf30u: goto label_5dcf30;
        case 0x5dcf34u: goto label_5dcf34;
        case 0x5dcf38u: goto label_5dcf38;
        case 0x5dcf3cu: goto label_5dcf3c;
        case 0x5dcf40u: goto label_5dcf40;
        case 0x5dcf44u: goto label_5dcf44;
        case 0x5dcf48u: goto label_5dcf48;
        case 0x5dcf4cu: goto label_5dcf4c;
        case 0x5dcf50u: goto label_5dcf50;
        case 0x5dcf54u: goto label_5dcf54;
        case 0x5dcf58u: goto label_5dcf58;
        case 0x5dcf5cu: goto label_5dcf5c;
        case 0x5dcf60u: goto label_5dcf60;
        case 0x5dcf64u: goto label_5dcf64;
        case 0x5dcf68u: goto label_5dcf68;
        case 0x5dcf6cu: goto label_5dcf6c;
        case 0x5dcf70u: goto label_5dcf70;
        case 0x5dcf74u: goto label_5dcf74;
        case 0x5dcf78u: goto label_5dcf78;
        case 0x5dcf7cu: goto label_5dcf7c;
        case 0x5dcf80u: goto label_5dcf80;
        case 0x5dcf84u: goto label_5dcf84;
        case 0x5dcf88u: goto label_5dcf88;
        case 0x5dcf8cu: goto label_5dcf8c;
        case 0x5dcf90u: goto label_5dcf90;
        case 0x5dcf94u: goto label_5dcf94;
        case 0x5dcf98u: goto label_5dcf98;
        case 0x5dcf9cu: goto label_5dcf9c;
        case 0x5dcfa0u: goto label_5dcfa0;
        case 0x5dcfa4u: goto label_5dcfa4;
        case 0x5dcfa8u: goto label_5dcfa8;
        case 0x5dcfacu: goto label_5dcfac;
        case 0x5dcfb0u: goto label_5dcfb0;
        case 0x5dcfb4u: goto label_5dcfb4;
        case 0x5dcfb8u: goto label_5dcfb8;
        case 0x5dcfbcu: goto label_5dcfbc;
        case 0x5dcfc0u: goto label_5dcfc0;
        case 0x5dcfc4u: goto label_5dcfc4;
        case 0x5dcfc8u: goto label_5dcfc8;
        case 0x5dcfccu: goto label_5dcfcc;
        case 0x5dcfd0u: goto label_5dcfd0;
        case 0x5dcfd4u: goto label_5dcfd4;
        case 0x5dcfd8u: goto label_5dcfd8;
        case 0x5dcfdcu: goto label_5dcfdc;
        case 0x5dcfe0u: goto label_5dcfe0;
        case 0x5dcfe4u: goto label_5dcfe4;
        case 0x5dcfe8u: goto label_5dcfe8;
        case 0x5dcfecu: goto label_5dcfec;
        case 0x5dcff0u: goto label_5dcff0;
        case 0x5dcff4u: goto label_5dcff4;
        case 0x5dcff8u: goto label_5dcff8;
        case 0x5dcffcu: goto label_5dcffc;
        case 0x5dd000u: goto label_5dd000;
        case 0x5dd004u: goto label_5dd004;
        case 0x5dd008u: goto label_5dd008;
        case 0x5dd00cu: goto label_5dd00c;
        case 0x5dd010u: goto label_5dd010;
        case 0x5dd014u: goto label_5dd014;
        case 0x5dd018u: goto label_5dd018;
        case 0x5dd01cu: goto label_5dd01c;
        case 0x5dd020u: goto label_5dd020;
        case 0x5dd024u: goto label_5dd024;
        case 0x5dd028u: goto label_5dd028;
        case 0x5dd02cu: goto label_5dd02c;
        case 0x5dd030u: goto label_5dd030;
        case 0x5dd034u: goto label_5dd034;
        case 0x5dd038u: goto label_5dd038;
        case 0x5dd03cu: goto label_5dd03c;
        case 0x5dd040u: goto label_5dd040;
        case 0x5dd044u: goto label_5dd044;
        case 0x5dd048u: goto label_5dd048;
        case 0x5dd04cu: goto label_5dd04c;
        case 0x5dd050u: goto label_5dd050;
        case 0x5dd054u: goto label_5dd054;
        case 0x5dd058u: goto label_5dd058;
        case 0x5dd05cu: goto label_5dd05c;
        case 0x5dd060u: goto label_5dd060;
        case 0x5dd064u: goto label_5dd064;
        case 0x5dd068u: goto label_5dd068;
        case 0x5dd06cu: goto label_5dd06c;
        case 0x5dd070u: goto label_5dd070;
        case 0x5dd074u: goto label_5dd074;
        case 0x5dd078u: goto label_5dd078;
        case 0x5dd07cu: goto label_5dd07c;
        case 0x5dd080u: goto label_5dd080;
        case 0x5dd084u: goto label_5dd084;
        case 0x5dd088u: goto label_5dd088;
        case 0x5dd08cu: goto label_5dd08c;
        case 0x5dd090u: goto label_5dd090;
        case 0x5dd094u: goto label_5dd094;
        case 0x5dd098u: goto label_5dd098;
        case 0x5dd09cu: goto label_5dd09c;
        case 0x5dd0a0u: goto label_5dd0a0;
        case 0x5dd0a4u: goto label_5dd0a4;
        case 0x5dd0a8u: goto label_5dd0a8;
        case 0x5dd0acu: goto label_5dd0ac;
        case 0x5dd0b0u: goto label_5dd0b0;
        case 0x5dd0b4u: goto label_5dd0b4;
        case 0x5dd0b8u: goto label_5dd0b8;
        case 0x5dd0bcu: goto label_5dd0bc;
        case 0x5dd0c0u: goto label_5dd0c0;
        case 0x5dd0c4u: goto label_5dd0c4;
        case 0x5dd0c8u: goto label_5dd0c8;
        case 0x5dd0ccu: goto label_5dd0cc;
        case 0x5dd0d0u: goto label_5dd0d0;
        case 0x5dd0d4u: goto label_5dd0d4;
        case 0x5dd0d8u: goto label_5dd0d8;
        case 0x5dd0dcu: goto label_5dd0dc;
        case 0x5dd0e0u: goto label_5dd0e0;
        case 0x5dd0e4u: goto label_5dd0e4;
        case 0x5dd0e8u: goto label_5dd0e8;
        case 0x5dd0ecu: goto label_5dd0ec;
        case 0x5dd0f0u: goto label_5dd0f0;
        case 0x5dd0f4u: goto label_5dd0f4;
        case 0x5dd0f8u: goto label_5dd0f8;
        case 0x5dd0fcu: goto label_5dd0fc;
        case 0x5dd100u: goto label_5dd100;
        case 0x5dd104u: goto label_5dd104;
        case 0x5dd108u: goto label_5dd108;
        case 0x5dd10cu: goto label_5dd10c;
        case 0x5dd110u: goto label_5dd110;
        case 0x5dd114u: goto label_5dd114;
        case 0x5dd118u: goto label_5dd118;
        case 0x5dd11cu: goto label_5dd11c;
        case 0x5dd120u: goto label_5dd120;
        case 0x5dd124u: goto label_5dd124;
        case 0x5dd128u: goto label_5dd128;
        case 0x5dd12cu: goto label_5dd12c;
        case 0x5dd130u: goto label_5dd130;
        case 0x5dd134u: goto label_5dd134;
        case 0x5dd138u: goto label_5dd138;
        case 0x5dd13cu: goto label_5dd13c;
        case 0x5dd140u: goto label_5dd140;
        case 0x5dd144u: goto label_5dd144;
        case 0x5dd148u: goto label_5dd148;
        case 0x5dd14cu: goto label_5dd14c;
        case 0x5dd150u: goto label_5dd150;
        case 0x5dd154u: goto label_5dd154;
        case 0x5dd158u: goto label_5dd158;
        case 0x5dd15cu: goto label_5dd15c;
        case 0x5dd160u: goto label_5dd160;
        case 0x5dd164u: goto label_5dd164;
        case 0x5dd168u: goto label_5dd168;
        case 0x5dd16cu: goto label_5dd16c;
        case 0x5dd170u: goto label_5dd170;
        case 0x5dd174u: goto label_5dd174;
        case 0x5dd178u: goto label_5dd178;
        case 0x5dd17cu: goto label_5dd17c;
        case 0x5dd180u: goto label_5dd180;
        case 0x5dd184u: goto label_5dd184;
        case 0x5dd188u: goto label_5dd188;
        case 0x5dd18cu: goto label_5dd18c;
        case 0x5dd190u: goto label_5dd190;
        case 0x5dd194u: goto label_5dd194;
        case 0x5dd198u: goto label_5dd198;
        case 0x5dd19cu: goto label_5dd19c;
        case 0x5dd1a0u: goto label_5dd1a0;
        case 0x5dd1a4u: goto label_5dd1a4;
        case 0x5dd1a8u: goto label_5dd1a8;
        case 0x5dd1acu: goto label_5dd1ac;
        case 0x5dd1b0u: goto label_5dd1b0;
        case 0x5dd1b4u: goto label_5dd1b4;
        case 0x5dd1b8u: goto label_5dd1b8;
        case 0x5dd1bcu: goto label_5dd1bc;
        case 0x5dd1c0u: goto label_5dd1c0;
        case 0x5dd1c4u: goto label_5dd1c4;
        case 0x5dd1c8u: goto label_5dd1c8;
        case 0x5dd1ccu: goto label_5dd1cc;
        case 0x5dd1d0u: goto label_5dd1d0;
        case 0x5dd1d4u: goto label_5dd1d4;
        case 0x5dd1d8u: goto label_5dd1d8;
        case 0x5dd1dcu: goto label_5dd1dc;
        case 0x5dd1e0u: goto label_5dd1e0;
        case 0x5dd1e4u: goto label_5dd1e4;
        case 0x5dd1e8u: goto label_5dd1e8;
        case 0x5dd1ecu: goto label_5dd1ec;
        case 0x5dd1f0u: goto label_5dd1f0;
        case 0x5dd1f4u: goto label_5dd1f4;
        case 0x5dd1f8u: goto label_5dd1f8;
        case 0x5dd1fcu: goto label_5dd1fc;
        case 0x5dd200u: goto label_5dd200;
        case 0x5dd204u: goto label_5dd204;
        case 0x5dd208u: goto label_5dd208;
        case 0x5dd20cu: goto label_5dd20c;
        case 0x5dd210u: goto label_5dd210;
        case 0x5dd214u: goto label_5dd214;
        case 0x5dd218u: goto label_5dd218;
        case 0x5dd21cu: goto label_5dd21c;
        case 0x5dd220u: goto label_5dd220;
        case 0x5dd224u: goto label_5dd224;
        case 0x5dd228u: goto label_5dd228;
        case 0x5dd22cu: goto label_5dd22c;
        case 0x5dd230u: goto label_5dd230;
        case 0x5dd234u: goto label_5dd234;
        case 0x5dd238u: goto label_5dd238;
        case 0x5dd23cu: goto label_5dd23c;
        case 0x5dd240u: goto label_5dd240;
        case 0x5dd244u: goto label_5dd244;
        case 0x5dd248u: goto label_5dd248;
        case 0x5dd24cu: goto label_5dd24c;
        case 0x5dd250u: goto label_5dd250;
        case 0x5dd254u: goto label_5dd254;
        case 0x5dd258u: goto label_5dd258;
        case 0x5dd25cu: goto label_5dd25c;
        case 0x5dd260u: goto label_5dd260;
        case 0x5dd264u: goto label_5dd264;
        case 0x5dd268u: goto label_5dd268;
        case 0x5dd26cu: goto label_5dd26c;
        case 0x5dd270u: goto label_5dd270;
        case 0x5dd274u: goto label_5dd274;
        case 0x5dd278u: goto label_5dd278;
        case 0x5dd27cu: goto label_5dd27c;
        case 0x5dd280u: goto label_5dd280;
        case 0x5dd284u: goto label_5dd284;
        case 0x5dd288u: goto label_5dd288;
        case 0x5dd28cu: goto label_5dd28c;
        case 0x5dd290u: goto label_5dd290;
        case 0x5dd294u: goto label_5dd294;
        case 0x5dd298u: goto label_5dd298;
        case 0x5dd29cu: goto label_5dd29c;
        case 0x5dd2a0u: goto label_5dd2a0;
        case 0x5dd2a4u: goto label_5dd2a4;
        case 0x5dd2a8u: goto label_5dd2a8;
        case 0x5dd2acu: goto label_5dd2ac;
        case 0x5dd2b0u: goto label_5dd2b0;
        case 0x5dd2b4u: goto label_5dd2b4;
        case 0x5dd2b8u: goto label_5dd2b8;
        case 0x5dd2bcu: goto label_5dd2bc;
        case 0x5dd2c0u: goto label_5dd2c0;
        case 0x5dd2c4u: goto label_5dd2c4;
        case 0x5dd2c8u: goto label_5dd2c8;
        case 0x5dd2ccu: goto label_5dd2cc;
        case 0x5dd2d0u: goto label_5dd2d0;
        case 0x5dd2d4u: goto label_5dd2d4;
        case 0x5dd2d8u: goto label_5dd2d8;
        case 0x5dd2dcu: goto label_5dd2dc;
        case 0x5dd2e0u: goto label_5dd2e0;
        case 0x5dd2e4u: goto label_5dd2e4;
        case 0x5dd2e8u: goto label_5dd2e8;
        case 0x5dd2ecu: goto label_5dd2ec;
        case 0x5dd2f0u: goto label_5dd2f0;
        case 0x5dd2f4u: goto label_5dd2f4;
        case 0x5dd2f8u: goto label_5dd2f8;
        case 0x5dd2fcu: goto label_5dd2fc;
        case 0x5dd300u: goto label_5dd300;
        case 0x5dd304u: goto label_5dd304;
        case 0x5dd308u: goto label_5dd308;
        case 0x5dd30cu: goto label_5dd30c;
        case 0x5dd310u: goto label_5dd310;
        case 0x5dd314u: goto label_5dd314;
        case 0x5dd318u: goto label_5dd318;
        case 0x5dd31cu: goto label_5dd31c;
        case 0x5dd320u: goto label_5dd320;
        case 0x5dd324u: goto label_5dd324;
        case 0x5dd328u: goto label_5dd328;
        case 0x5dd32cu: goto label_5dd32c;
        case 0x5dd330u: goto label_5dd330;
        case 0x5dd334u: goto label_5dd334;
        case 0x5dd338u: goto label_5dd338;
        case 0x5dd33cu: goto label_5dd33c;
        case 0x5dd340u: goto label_5dd340;
        case 0x5dd344u: goto label_5dd344;
        case 0x5dd348u: goto label_5dd348;
        case 0x5dd34cu: goto label_5dd34c;
        case 0x5dd350u: goto label_5dd350;
        case 0x5dd354u: goto label_5dd354;
        case 0x5dd358u: goto label_5dd358;
        case 0x5dd35cu: goto label_5dd35c;
        case 0x5dd360u: goto label_5dd360;
        case 0x5dd364u: goto label_5dd364;
        case 0x5dd368u: goto label_5dd368;
        case 0x5dd36cu: goto label_5dd36c;
        case 0x5dd370u: goto label_5dd370;
        case 0x5dd374u: goto label_5dd374;
        case 0x5dd378u: goto label_5dd378;
        case 0x5dd37cu: goto label_5dd37c;
        case 0x5dd380u: goto label_5dd380;
        case 0x5dd384u: goto label_5dd384;
        case 0x5dd388u: goto label_5dd388;
        case 0x5dd38cu: goto label_5dd38c;
        case 0x5dd390u: goto label_5dd390;
        case 0x5dd394u: goto label_5dd394;
        case 0x5dd398u: goto label_5dd398;
        case 0x5dd39cu: goto label_5dd39c;
        case 0x5dd3a0u: goto label_5dd3a0;
        case 0x5dd3a4u: goto label_5dd3a4;
        case 0x5dd3a8u: goto label_5dd3a8;
        case 0x5dd3acu: goto label_5dd3ac;
        case 0x5dd3b0u: goto label_5dd3b0;
        case 0x5dd3b4u: goto label_5dd3b4;
        case 0x5dd3b8u: goto label_5dd3b8;
        case 0x5dd3bcu: goto label_5dd3bc;
        case 0x5dd3c0u: goto label_5dd3c0;
        case 0x5dd3c4u: goto label_5dd3c4;
        case 0x5dd3c8u: goto label_5dd3c8;
        case 0x5dd3ccu: goto label_5dd3cc;
        case 0x5dd3d0u: goto label_5dd3d0;
        case 0x5dd3d4u: goto label_5dd3d4;
        case 0x5dd3d8u: goto label_5dd3d8;
        case 0x5dd3dcu: goto label_5dd3dc;
        case 0x5dd3e0u: goto label_5dd3e0;
        case 0x5dd3e4u: goto label_5dd3e4;
        case 0x5dd3e8u: goto label_5dd3e8;
        case 0x5dd3ecu: goto label_5dd3ec;
        case 0x5dd3f0u: goto label_5dd3f0;
        case 0x5dd3f4u: goto label_5dd3f4;
        case 0x5dd3f8u: goto label_5dd3f8;
        case 0x5dd3fcu: goto label_5dd3fc;
        case 0x5dd400u: goto label_5dd400;
        case 0x5dd404u: goto label_5dd404;
        case 0x5dd408u: goto label_5dd408;
        case 0x5dd40cu: goto label_5dd40c;
        case 0x5dd410u: goto label_5dd410;
        case 0x5dd414u: goto label_5dd414;
        case 0x5dd418u: goto label_5dd418;
        case 0x5dd41cu: goto label_5dd41c;
        case 0x5dd420u: goto label_5dd420;
        case 0x5dd424u: goto label_5dd424;
        case 0x5dd428u: goto label_5dd428;
        case 0x5dd42cu: goto label_5dd42c;
        case 0x5dd430u: goto label_5dd430;
        case 0x5dd434u: goto label_5dd434;
        case 0x5dd438u: goto label_5dd438;
        case 0x5dd43cu: goto label_5dd43c;
        case 0x5dd440u: goto label_5dd440;
        case 0x5dd444u: goto label_5dd444;
        case 0x5dd448u: goto label_5dd448;
        case 0x5dd44cu: goto label_5dd44c;
        case 0x5dd450u: goto label_5dd450;
        case 0x5dd454u: goto label_5dd454;
        case 0x5dd458u: goto label_5dd458;
        case 0x5dd45cu: goto label_5dd45c;
        case 0x5dd460u: goto label_5dd460;
        case 0x5dd464u: goto label_5dd464;
        case 0x5dd468u: goto label_5dd468;
        case 0x5dd46cu: goto label_5dd46c;
        case 0x5dd470u: goto label_5dd470;
        case 0x5dd474u: goto label_5dd474;
        case 0x5dd478u: goto label_5dd478;
        case 0x5dd47cu: goto label_5dd47c;
        case 0x5dd480u: goto label_5dd480;
        case 0x5dd484u: goto label_5dd484;
        case 0x5dd488u: goto label_5dd488;
        case 0x5dd48cu: goto label_5dd48c;
        case 0x5dd490u: goto label_5dd490;
        case 0x5dd494u: goto label_5dd494;
        case 0x5dd498u: goto label_5dd498;
        case 0x5dd49cu: goto label_5dd49c;
        case 0x5dd4a0u: goto label_5dd4a0;
        case 0x5dd4a4u: goto label_5dd4a4;
        case 0x5dd4a8u: goto label_5dd4a8;
        case 0x5dd4acu: goto label_5dd4ac;
        case 0x5dd4b0u: goto label_5dd4b0;
        case 0x5dd4b4u: goto label_5dd4b4;
        case 0x5dd4b8u: goto label_5dd4b8;
        case 0x5dd4bcu: goto label_5dd4bc;
        case 0x5dd4c0u: goto label_5dd4c0;
        case 0x5dd4c4u: goto label_5dd4c4;
        case 0x5dd4c8u: goto label_5dd4c8;
        case 0x5dd4ccu: goto label_5dd4cc;
        case 0x5dd4d0u: goto label_5dd4d0;
        case 0x5dd4d4u: goto label_5dd4d4;
        case 0x5dd4d8u: goto label_5dd4d8;
        case 0x5dd4dcu: goto label_5dd4dc;
        case 0x5dd4e0u: goto label_5dd4e0;
        case 0x5dd4e4u: goto label_5dd4e4;
        case 0x5dd4e8u: goto label_5dd4e8;
        case 0x5dd4ecu: goto label_5dd4ec;
        case 0x5dd4f0u: goto label_5dd4f0;
        case 0x5dd4f4u: goto label_5dd4f4;
        case 0x5dd4f8u: goto label_5dd4f8;
        case 0x5dd4fcu: goto label_5dd4fc;
        case 0x5dd500u: goto label_5dd500;
        case 0x5dd504u: goto label_5dd504;
        case 0x5dd508u: goto label_5dd508;
        case 0x5dd50cu: goto label_5dd50c;
        case 0x5dd510u: goto label_5dd510;
        case 0x5dd514u: goto label_5dd514;
        case 0x5dd518u: goto label_5dd518;
        case 0x5dd51cu: goto label_5dd51c;
        case 0x5dd520u: goto label_5dd520;
        case 0x5dd524u: goto label_5dd524;
        case 0x5dd528u: goto label_5dd528;
        case 0x5dd52cu: goto label_5dd52c;
        case 0x5dd530u: goto label_5dd530;
        case 0x5dd534u: goto label_5dd534;
        case 0x5dd538u: goto label_5dd538;
        case 0x5dd53cu: goto label_5dd53c;
        case 0x5dd540u: goto label_5dd540;
        case 0x5dd544u: goto label_5dd544;
        case 0x5dd548u: goto label_5dd548;
        case 0x5dd54cu: goto label_5dd54c;
        case 0x5dd550u: goto label_5dd550;
        case 0x5dd554u: goto label_5dd554;
        case 0x5dd558u: goto label_5dd558;
        case 0x5dd55cu: goto label_5dd55c;
        case 0x5dd560u: goto label_5dd560;
        case 0x5dd564u: goto label_5dd564;
        case 0x5dd568u: goto label_5dd568;
        case 0x5dd56cu: goto label_5dd56c;
        case 0x5dd570u: goto label_5dd570;
        case 0x5dd574u: goto label_5dd574;
        case 0x5dd578u: goto label_5dd578;
        case 0x5dd57cu: goto label_5dd57c;
        case 0x5dd580u: goto label_5dd580;
        case 0x5dd584u: goto label_5dd584;
        case 0x5dd588u: goto label_5dd588;
        case 0x5dd58cu: goto label_5dd58c;
        case 0x5dd590u: goto label_5dd590;
        case 0x5dd594u: goto label_5dd594;
        case 0x5dd598u: goto label_5dd598;
        case 0x5dd59cu: goto label_5dd59c;
        case 0x5dd5a0u: goto label_5dd5a0;
        case 0x5dd5a4u: goto label_5dd5a4;
        case 0x5dd5a8u: goto label_5dd5a8;
        case 0x5dd5acu: goto label_5dd5ac;
        case 0x5dd5b0u: goto label_5dd5b0;
        case 0x5dd5b4u: goto label_5dd5b4;
        case 0x5dd5b8u: goto label_5dd5b8;
        case 0x5dd5bcu: goto label_5dd5bc;
        case 0x5dd5c0u: goto label_5dd5c0;
        case 0x5dd5c4u: goto label_5dd5c4;
        case 0x5dd5c8u: goto label_5dd5c8;
        case 0x5dd5ccu: goto label_5dd5cc;
        case 0x5dd5d0u: goto label_5dd5d0;
        case 0x5dd5d4u: goto label_5dd5d4;
        case 0x5dd5d8u: goto label_5dd5d8;
        case 0x5dd5dcu: goto label_5dd5dc;
        case 0x5dd5e0u: goto label_5dd5e0;
        case 0x5dd5e4u: goto label_5dd5e4;
        case 0x5dd5e8u: goto label_5dd5e8;
        case 0x5dd5ecu: goto label_5dd5ec;
        case 0x5dd5f0u: goto label_5dd5f0;
        case 0x5dd5f4u: goto label_5dd5f4;
        case 0x5dd5f8u: goto label_5dd5f8;
        case 0x5dd5fcu: goto label_5dd5fc;
        case 0x5dd600u: goto label_5dd600;
        case 0x5dd604u: goto label_5dd604;
        case 0x5dd608u: goto label_5dd608;
        case 0x5dd60cu: goto label_5dd60c;
        case 0x5dd610u: goto label_5dd610;
        case 0x5dd614u: goto label_5dd614;
        case 0x5dd618u: goto label_5dd618;
        case 0x5dd61cu: goto label_5dd61c;
        case 0x5dd620u: goto label_5dd620;
        case 0x5dd624u: goto label_5dd624;
        case 0x5dd628u: goto label_5dd628;
        case 0x5dd62cu: goto label_5dd62c;
        case 0x5dd630u: goto label_5dd630;
        case 0x5dd634u: goto label_5dd634;
        case 0x5dd638u: goto label_5dd638;
        case 0x5dd63cu: goto label_5dd63c;
        case 0x5dd640u: goto label_5dd640;
        case 0x5dd644u: goto label_5dd644;
        case 0x5dd648u: goto label_5dd648;
        case 0x5dd64cu: goto label_5dd64c;
        case 0x5dd650u: goto label_5dd650;
        case 0x5dd654u: goto label_5dd654;
        case 0x5dd658u: goto label_5dd658;
        case 0x5dd65cu: goto label_5dd65c;
        case 0x5dd660u: goto label_5dd660;
        case 0x5dd664u: goto label_5dd664;
        case 0x5dd668u: goto label_5dd668;
        case 0x5dd66cu: goto label_5dd66c;
        case 0x5dd670u: goto label_5dd670;
        case 0x5dd674u: goto label_5dd674;
        case 0x5dd678u: goto label_5dd678;
        case 0x5dd67cu: goto label_5dd67c;
        case 0x5dd680u: goto label_5dd680;
        case 0x5dd684u: goto label_5dd684;
        case 0x5dd688u: goto label_5dd688;
        case 0x5dd68cu: goto label_5dd68c;
        case 0x5dd690u: goto label_5dd690;
        case 0x5dd694u: goto label_5dd694;
        case 0x5dd698u: goto label_5dd698;
        case 0x5dd69cu: goto label_5dd69c;
        case 0x5dd6a0u: goto label_5dd6a0;
        case 0x5dd6a4u: goto label_5dd6a4;
        case 0x5dd6a8u: goto label_5dd6a8;
        case 0x5dd6acu: goto label_5dd6ac;
        case 0x5dd6b0u: goto label_5dd6b0;
        case 0x5dd6b4u: goto label_5dd6b4;
        case 0x5dd6b8u: goto label_5dd6b8;
        case 0x5dd6bcu: goto label_5dd6bc;
        case 0x5dd6c0u: goto label_5dd6c0;
        case 0x5dd6c4u: goto label_5dd6c4;
        case 0x5dd6c8u: goto label_5dd6c8;
        case 0x5dd6ccu: goto label_5dd6cc;
        case 0x5dd6d0u: goto label_5dd6d0;
        case 0x5dd6d4u: goto label_5dd6d4;
        case 0x5dd6d8u: goto label_5dd6d8;
        case 0x5dd6dcu: goto label_5dd6dc;
        case 0x5dd6e0u: goto label_5dd6e0;
        case 0x5dd6e4u: goto label_5dd6e4;
        case 0x5dd6e8u: goto label_5dd6e8;
        case 0x5dd6ecu: goto label_5dd6ec;
        case 0x5dd6f0u: goto label_5dd6f0;
        case 0x5dd6f4u: goto label_5dd6f4;
        case 0x5dd6f8u: goto label_5dd6f8;
        case 0x5dd6fcu: goto label_5dd6fc;
        case 0x5dd700u: goto label_5dd700;
        case 0x5dd704u: goto label_5dd704;
        case 0x5dd708u: goto label_5dd708;
        case 0x5dd70cu: goto label_5dd70c;
        case 0x5dd710u: goto label_5dd710;
        case 0x5dd714u: goto label_5dd714;
        case 0x5dd718u: goto label_5dd718;
        case 0x5dd71cu: goto label_5dd71c;
        case 0x5dd720u: goto label_5dd720;
        case 0x5dd724u: goto label_5dd724;
        case 0x5dd728u: goto label_5dd728;
        case 0x5dd72cu: goto label_5dd72c;
        case 0x5dd730u: goto label_5dd730;
        case 0x5dd734u: goto label_5dd734;
        case 0x5dd738u: goto label_5dd738;
        case 0x5dd73cu: goto label_5dd73c;
        case 0x5dd740u: goto label_5dd740;
        case 0x5dd744u: goto label_5dd744;
        case 0x5dd748u: goto label_5dd748;
        case 0x5dd74cu: goto label_5dd74c;
        case 0x5dd750u: goto label_5dd750;
        case 0x5dd754u: goto label_5dd754;
        case 0x5dd758u: goto label_5dd758;
        case 0x5dd75cu: goto label_5dd75c;
        case 0x5dd760u: goto label_5dd760;
        case 0x5dd764u: goto label_5dd764;
        case 0x5dd768u: goto label_5dd768;
        case 0x5dd76cu: goto label_5dd76c;
        case 0x5dd770u: goto label_5dd770;
        case 0x5dd774u: goto label_5dd774;
        case 0x5dd778u: goto label_5dd778;
        case 0x5dd77cu: goto label_5dd77c;
        case 0x5dd780u: goto label_5dd780;
        case 0x5dd784u: goto label_5dd784;
        case 0x5dd788u: goto label_5dd788;
        case 0x5dd78cu: goto label_5dd78c;
        case 0x5dd790u: goto label_5dd790;
        case 0x5dd794u: goto label_5dd794;
        case 0x5dd798u: goto label_5dd798;
        case 0x5dd79cu: goto label_5dd79c;
        case 0x5dd7a0u: goto label_5dd7a0;
        case 0x5dd7a4u: goto label_5dd7a4;
        case 0x5dd7a8u: goto label_5dd7a8;
        case 0x5dd7acu: goto label_5dd7ac;
        case 0x5dd7b0u: goto label_5dd7b0;
        case 0x5dd7b4u: goto label_5dd7b4;
        case 0x5dd7b8u: goto label_5dd7b8;
        case 0x5dd7bcu: goto label_5dd7bc;
        default: break;
    }

    ctx->pc = 0x5dc8b0u;

label_5dc8b0:
    // 0x5dc8b0: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dc8b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_5dc8b4:
    // 0x5dc8b4: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dc8b4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_5dc8b8:
    // 0x5dc8b8: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x5dc8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_5dc8bc:
    // 0x5dc8bc: 0x0  nop
    ctx->pc = 0x5dc8bcu;
    // NOP
label_5dc8c0:
    // 0x5dc8c0: 0x0  nop
    ctx->pc = 0x5dc8c0u;
    // NOP
label_5dc8c4:
    // 0x5dc8c4: 0x0  nop
    ctx->pc = 0x5dc8c4u;
    // NOP
label_5dc8c8:
    // 0x5dc8c8: 0x2020100  .word       0x02020100                   # sll         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dc8c8u;
    
label_5dc8cc:
    // 0x5dc8cc: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dc8ccu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
label_5dc8d0:
    // 0x5dc8d0: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc8d0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x5DC8D0 raw=0x04040404");
label_5dc8d4:
    // 0x5dc8d4: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc8d4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x5DC8D4 raw=0x04040404");
label_5dc8d8:
    // 0x5dc8d8: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc8d8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5DC8D8 raw=0x05050505");
label_5dc8dc:
    // 0x5dc8dc: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc8dcu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5DC8DC raw=0x05050505");
label_5dc8e0:
    // 0x5dc8e0: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc8e0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5DC8E0 raw=0x05050505");
label_5dc8e4:
    // 0x5dc8e4: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc8e4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5DC8E4 raw=0x05050505");
label_5dc8e8:
    // 0x5dc8e8: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc8e8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5DC8E8 raw=0x06060606");
label_5dc8ec:
    // 0x5dc8ec: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc8ecu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5DC8EC raw=0x06060606");
label_5dc8f0:
    // 0x5dc8f0: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc8f0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5DC8F0 raw=0x06060606");
label_5dc8f4:
    // 0x5dc8f4: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc8f4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5DC8F4 raw=0x06060606");
label_5dc8f8:
    // 0x5dc8f8: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc8f8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5DC8F8 raw=0x06060606");
label_5dc8fc:
    // 0x5dc8fc: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc8fcu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5DC8FC raw=0x06060606");
label_5dc900:
    // 0x5dc900: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc900u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5DC900 raw=0x06060606");
label_5dc904:
    // 0x5dc904: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc904u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5DC904 raw=0x06060606");
label_5dc908:
    // 0x5dc908: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc908u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC908 raw=0x07070707");
label_5dc90c:
    // 0x5dc90c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc90cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC90C raw=0x07070707");
label_5dc910:
    // 0x5dc910: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc910u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC910 raw=0x07070707");
label_5dc914:
    // 0x5dc914: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc914u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC914 raw=0x07070707");
label_5dc918:
    // 0x5dc918: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc918u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC918 raw=0x07070707");
label_5dc91c:
    // 0x5dc91c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc91cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC91C raw=0x07070707");
label_5dc920:
    // 0x5dc920: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc920u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC920 raw=0x07070707");
label_5dc924:
    // 0x5dc924: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc924u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC924 raw=0x07070707");
label_5dc928:
    // 0x5dc928: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc928u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC928 raw=0x07070707");
label_5dc92c:
    // 0x5dc92c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc92cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC92C raw=0x07070707");
label_5dc930:
    // 0x5dc930: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc930u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC930 raw=0x07070707");
label_5dc934:
    // 0x5dc934: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc934u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC934 raw=0x07070707");
label_5dc938:
    // 0x5dc938: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc938u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC938 raw=0x07070707");
label_5dc93c:
    // 0x5dc93c: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc93cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC93C raw=0x07070707");
label_5dc940:
    // 0x5dc940: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc940u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC940 raw=0x07070707");
label_5dc944:
    // 0x5dc944: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5dc944u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5DC944 raw=0x07070707");
label_5dc948:
    // 0x5dc948: 0x8080808  j           func_202020
label_5dc94c:
    if (ctx->pc == 0x5DC94Cu) {
        ctx->pc = 0x5DC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC948u;
        // 0x5dc94c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC950u;
        goto label_5dc950;
    }
    ctx->pc = 0x5DC948u;
    ctx->pc = 0x5DC94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC948u;
    // 0x5dc94c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC948u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC950u;
label_5dc950:
    // 0x5dc950: 0x8080808  j           func_202020
label_5dc954:
    if (ctx->pc == 0x5DC954u) {
        ctx->pc = 0x5DC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC950u;
        // 0x5dc954: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC958u;
        goto label_5dc958;
    }
    ctx->pc = 0x5DC950u;
    ctx->pc = 0x5DC954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC950u;
    // 0x5dc954: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC950u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC958u;
label_5dc958:
    // 0x5dc958: 0x8080808  j           func_202020
label_5dc95c:
    if (ctx->pc == 0x5DC95Cu) {
        ctx->pc = 0x5DC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC958u;
        // 0x5dc95c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC960u;
        goto label_5dc960;
    }
    ctx->pc = 0x5DC958u;
    ctx->pc = 0x5DC95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC958u;
    // 0x5dc95c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC958u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC960u;
label_5dc960:
    // 0x5dc960: 0x8080808  j           func_202020
label_5dc964:
    if (ctx->pc == 0x5DC964u) {
        ctx->pc = 0x5DC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC960u;
        // 0x5dc964: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC968u;
        goto label_5dc968;
    }
    ctx->pc = 0x5DC960u;
    ctx->pc = 0x5DC964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC960u;
    // 0x5dc964: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC960u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC968u;
label_5dc968:
    // 0x5dc968: 0x8080808  j           func_202020
label_5dc96c:
    if (ctx->pc == 0x5DC96Cu) {
        ctx->pc = 0x5DC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC968u;
        // 0x5dc96c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC970u;
        goto label_5dc970;
    }
    ctx->pc = 0x5DC968u;
    ctx->pc = 0x5DC96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC968u;
    // 0x5dc96c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC968u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC970u;
label_5dc970:
    // 0x5dc970: 0x8080808  j           func_202020
label_5dc974:
    if (ctx->pc == 0x5DC974u) {
        ctx->pc = 0x5DC974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC970u;
        // 0x5dc974: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC978u;
        goto label_5dc978;
    }
    ctx->pc = 0x5DC970u;
    ctx->pc = 0x5DC974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC970u;
    // 0x5dc974: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC970u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC978u;
label_5dc978:
    // 0x5dc978: 0x8080808  j           func_202020
label_5dc97c:
    if (ctx->pc == 0x5DC97Cu) {
        ctx->pc = 0x5DC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC978u;
        // 0x5dc97c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC980u;
        goto label_5dc980;
    }
    ctx->pc = 0x5DC978u;
    ctx->pc = 0x5DC97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC978u;
    // 0x5dc97c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC978u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC980u;
label_5dc980:
    // 0x5dc980: 0x8080808  j           func_202020
label_5dc984:
    if (ctx->pc == 0x5DC984u) {
        ctx->pc = 0x5DC984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC980u;
        // 0x5dc984: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC988u;
        goto label_5dc988;
    }
    ctx->pc = 0x5DC980u;
    ctx->pc = 0x5DC984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC980u;
    // 0x5dc984: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC980u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC988u;
label_5dc988:
    // 0x5dc988: 0x8080808  j           func_202020
label_5dc98c:
    if (ctx->pc == 0x5DC98Cu) {
        ctx->pc = 0x5DC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC988u;
        // 0x5dc98c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC990u;
        goto label_5dc990;
    }
    ctx->pc = 0x5DC988u;
    ctx->pc = 0x5DC98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC988u;
    // 0x5dc98c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC988u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC990u;
label_5dc990:
    // 0x5dc990: 0x8080808  j           func_202020
label_5dc994:
    if (ctx->pc == 0x5DC994u) {
        ctx->pc = 0x5DC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC990u;
        // 0x5dc994: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC998u;
        goto label_5dc998;
    }
    ctx->pc = 0x5DC990u;
    ctx->pc = 0x5DC994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC990u;
    // 0x5dc994: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC990u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC998u;
label_5dc998:
    // 0x5dc998: 0x8080808  j           func_202020
label_5dc99c:
    if (ctx->pc == 0x5DC99Cu) {
        ctx->pc = 0x5DC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC998u;
        // 0x5dc99c: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC9A0u;
        goto label_5dc9a0;
    }
    ctx->pc = 0x5DC998u;
    ctx->pc = 0x5DC99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC998u;
    // 0x5dc99c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC998u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC9A0u;
label_5dc9a0:
    // 0x5dc9a0: 0x8080808  j           func_202020
label_5dc9a4:
    if (ctx->pc == 0x5DC9A4u) {
        ctx->pc = 0x5DC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC9A0u;
        // 0x5dc9a4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC9A8u;
        goto label_5dc9a8;
    }
    ctx->pc = 0x5DC9A0u;
    ctx->pc = 0x5DC9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC9A0u;
    // 0x5dc9a4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC9A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC9A8u;
label_5dc9a8:
    // 0x5dc9a8: 0x8080808  j           func_202020
label_5dc9ac:
    if (ctx->pc == 0x5DC9ACu) {
        ctx->pc = 0x5DC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC9A8u;
        // 0x5dc9ac: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC9B0u;
        goto label_5dc9b0;
    }
    ctx->pc = 0x5DC9A8u;
    ctx->pc = 0x5DC9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC9A8u;
    // 0x5dc9ac: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC9A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC9B0u;
label_5dc9b0:
    // 0x5dc9b0: 0x8080808  j           func_202020
label_5dc9b4:
    if (ctx->pc == 0x5DC9B4u) {
        ctx->pc = 0x5DC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC9B0u;
        // 0x5dc9b4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC9B8u;
        goto label_5dc9b8;
    }
    ctx->pc = 0x5DC9B0u;
    ctx->pc = 0x5DC9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC9B0u;
    // 0x5dc9b4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC9B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC9B8u;
label_5dc9b8:
    // 0x5dc9b8: 0x8080808  j           func_202020
label_5dc9bc:
    if (ctx->pc == 0x5DC9BCu) {
        ctx->pc = 0x5DC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC9B8u;
        // 0x5dc9bc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC9C0u;
        goto label_5dc9c0;
    }
    ctx->pc = 0x5DC9B8u;
    ctx->pc = 0x5DC9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC9B8u;
    // 0x5dc9bc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC9B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC9C0u;
label_5dc9c0:
    // 0x5dc9c0: 0x8080808  j           func_202020
label_5dc9c4:
    if (ctx->pc == 0x5DC9C4u) {
        ctx->pc = 0x5DC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DC9C0u;
        // 0x5dc9c4: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DC9C8u;
        goto label_5dc9c8;
    }
    ctx->pc = 0x5DC9C0u;
    ctx->pc = 0x5DC9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DC9C0u;
    // 0x5dc9c4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5DC9C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DC9C8u;
label_5dc9c8:
    // 0x5dc9c8: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x5dc9c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dc9cc:
    // 0x5dc9cc: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x5dc9ccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dc9d0:
    // 0x5dc9d0: 0x0  nop
    ctx->pc = 0x5dc9d0u;
    // NOP
label_5dc9d4:
    // 0x5dc9d4: 0x0  nop
    ctx->pc = 0x5dc9d4u;
    // NOP
label_5dc9d8:
    // 0x5dc9d8: 0x0  nop
    ctx->pc = 0x5dc9d8u;
    // NOP
label_5dc9dc:
    // 0x5dc9dc: 0x0  nop
    ctx->pc = 0x5dc9dcu;
    // NOP
label_5dc9e0:
    // 0x5dc9e0: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x5dc9e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x5DC9E0 raw=0x0000001C");
label_5dc9e4:
    // 0x5dc9e4: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x5dc9e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x5DC9E4 raw=0x0000001C");
label_5dc9e8:
    // 0x5dc9e8: 0x0  nop
    ctx->pc = 0x5dc9e8u;
    // NOP
label_5dc9ec:
    // 0x5dc9ec: 0x0  nop
    ctx->pc = 0x5dc9ecu;
    // NOP
label_5dc9f0:
    // 0x5dc9f0: 0x0  nop
    ctx->pc = 0x5dc9f0u;
    // NOP
label_5dc9f4:
    // 0x5dc9f4: 0x0  nop
    ctx->pc = 0x5dc9f4u;
    // NOP
label_5dc9f8:
    // 0x5dc9f8: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x5dc9f8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dc9fc:
    // 0x5dc9fc: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x5dc9fcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dca00:
    // 0x5dca00: 0x0  nop
    ctx->pc = 0x5dca00u;
    // NOP
label_5dca04:
    // 0x5dca04: 0x0  nop
    ctx->pc = 0x5dca04u;
    // NOP
label_5dca08:
    // 0x5dca08: 0x0  nop
    ctx->pc = 0x5dca08u;
    // NOP
label_5dca0c:
    // 0x5dca0c: 0x0  nop
    ctx->pc = 0x5dca0cu;
    // NOP
label_5dca10:
    // 0x5dca10: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dca10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_5dca14:
    // 0x5dca14: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dca14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_5dca18:
    // 0x5dca18: 0x0  nop
    ctx->pc = 0x5dca18u;
    // NOP
label_5dca1c:
    // 0x5dca1c: 0x0  nop
    ctx->pc = 0x5dca1cu;
    // NOP
label_5dca20:
    // 0x5dca20: 0x0  nop
    ctx->pc = 0x5dca20u;
    // NOP
label_5dca24:
    // 0x5dca24: 0x0  nop
    ctx->pc = 0x5dca24u;
    // NOP
label_5dca28:
    // 0x5dca28: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x5dca28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_5dca2c:
    // 0x5dca2c: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x5dca2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_5dca30:
    // 0x5dca30: 0x0  nop
    ctx->pc = 0x5dca30u;
    // NOP
label_5dca34:
    // 0x5dca34: 0x0  nop
    ctx->pc = 0x5dca34u;
    // NOP
label_5dca38:
    // 0x5dca38: 0x0  nop
    ctx->pc = 0x5dca38u;
    // NOP
label_5dca3c:
    // 0x5dca3c: 0x0  nop
    ctx->pc = 0x5dca3cu;
    // NOP
label_5dca40:
    // 0x5dca40: 0x0  nop
    ctx->pc = 0x5dca40u;
    // NOP
label_5dca44:
    // 0x5dca44: 0x0  nop
    ctx->pc = 0x5dca44u;
    // NOP
label_5dca48:
    // 0x5dca48: 0x0  nop
    ctx->pc = 0x5dca48u;
    // NOP
label_5dca4c:
    // 0x5dca4c: 0x0  nop
    ctx->pc = 0x5dca4cu;
    // NOP
label_5dca50:
    // 0x5dca50: 0x0  nop
    ctx->pc = 0x5dca50u;
    // NOP
label_5dca54:
    // 0x5dca54: 0x0  nop
    ctx->pc = 0x5dca54u;
    // NOP
label_5dca58:
    // 0x5dca58: 0x0  nop
    ctx->pc = 0x5dca58u;
    // NOP
label_5dca5c:
    // 0x5dca5c: 0x422798  .word       0x00422798                   # mult        $a0, $v0, $v0 # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dca5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_5dca60:
    // 0x5dca60: 0x0  nop
    ctx->pc = 0x5dca60u;
    // NOP
label_5dca64:
    // 0x5dca64: 0x0  nop
    ctx->pc = 0x5dca64u;
    // NOP
label_5dca68:
    // 0x5dca68: 0x0  nop
    ctx->pc = 0x5dca68u;
    // NOP
label_5dca6c:
    // 0x5dca6c: 0x0  nop
    ctx->pc = 0x5dca6cu;
    // NOP
label_5dca70:
    // 0x5dca70: 0x0  nop
    ctx->pc = 0x5dca70u;
    // NOP
label_5dca74:
    // 0x5dca74: 0x0  nop
    ctx->pc = 0x5dca74u;
    // NOP
label_5dca78:
    // 0x5dca78: 0x0  nop
    ctx->pc = 0x5dca78u;
    // NOP
label_5dca7c:
    // 0x5dca7c: 0x0  nop
    ctx->pc = 0x5dca7cu;
    // NOP
label_5dca80:
    // 0x5dca80: 0x0  nop
    ctx->pc = 0x5dca80u;
    // NOP
label_5dca84:
    // 0x5dca84: 0x0  nop
    ctx->pc = 0x5dca84u;
    // NOP
label_5dca88:
    // 0x5dca88: 0x0  nop
    ctx->pc = 0x5dca88u;
    // NOP
label_5dca8c:
    // 0x5dca8c: 0x0  nop
    ctx->pc = 0x5dca8cu;
    // NOP
label_5dca90:
    // 0x5dca90: 0x0  nop
    ctx->pc = 0x5dca90u;
    // NOP
label_5dca94:
    // 0x5dca94: 0x0  nop
    ctx->pc = 0x5dca94u;
    // NOP
label_5dca98:
    // 0x5dca98: 0x0  nop
    ctx->pc = 0x5dca98u;
    // NOP
label_5dca9c:
    // 0x5dca9c: 0x0  nop
    ctx->pc = 0x5dca9cu;
    // NOP
label_5dcaa0:
    // 0x5dcaa0: 0x0  nop
    ctx->pc = 0x5dcaa0u;
    // NOP
label_5dcaa4:
    // 0x5dcaa4: 0x0  nop
    ctx->pc = 0x5dcaa4u;
    // NOP
label_5dcaa8:
    // 0x5dcaa8: 0x0  nop
    ctx->pc = 0x5dcaa8u;
    // NOP
label_5dcaac:
    // 0x5dcaac: 0x0  nop
    ctx->pc = 0x5dcaacu;
    // NOP
label_5dcab0:
    // 0x5dcab0: 0x0  nop
    ctx->pc = 0x5dcab0u;
    // NOP
label_5dcab4:
    // 0x5dcab4: 0x0  nop
    ctx->pc = 0x5dcab4u;
    // NOP
label_5dcab8:
    // 0x5dcab8: 0x0  nop
    ctx->pc = 0x5dcab8u;
    // NOP
label_5dcabc:
    // 0x5dcabc: 0x4229d0  .word       0x004229D0                   # mfhi        $a1 # 004201C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcabcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_5dcac0:
    // 0x5dcac0: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcac0u;
    
label_5dcac4:
    // 0x5dcac4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcac4u;
    
label_5dcac8:
    // 0x5dcac8: 0x10  mfhi        $zero
    ctx->pc = 0x5dcac8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcacc:
    // 0x5dcacc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcaccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCACC raw=0x00000001");
label_5dcad0:
    // 0x5dcad0: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcad0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcad4:
    // 0x5dcad4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcad4u;
    
label_5dcad8:
    // 0x5dcad8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dcad8u;
    
label_5dcadc:
    // 0x5dcadc: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcadcu;
    
label_5dcae0:
    // 0x5dcae0: 0x10  mfhi        $zero
    ctx->pc = 0x5dcae0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcae4:
    // 0x5dcae4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcae4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCAE4 raw=0x00000001");
label_5dcae8:
    // 0x5dcae8: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcae8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcaec:
    // 0x5dcaec: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcaecu;
    
label_5dcaf0:
    // 0x5dcaf0: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dcaf0u;
    
label_5dcaf4:
    // 0x5dcaf4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcaf4u;
    
label_5dcaf8:
    // 0x5dcaf8: 0x10  mfhi        $zero
    ctx->pc = 0x5dcaf8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcafc:
    // 0x5dcafc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcafcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCAFC raw=0x00000001");
label_5dcb00:
    // 0x5dcb00: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcb00u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcb04:
    // 0x5dcb04: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcb04u;
    
label_5dcb08:
    // 0x5dcb08: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcb08u;
    
label_5dcb0c:
    // 0x5dcb0c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcb0cu;
    
label_5dcb10:
    // 0x5dcb10: 0x10  mfhi        $zero
    ctx->pc = 0x5dcb10u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcb14:
    // 0x5dcb14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcb14u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCB14 raw=0x00000001");
label_5dcb18:
    // 0x5dcb18: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcb18u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcb1c:
    // 0x5dcb1c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcb1cu;
    
label_5dcb20:
    // 0x5dcb20: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dcb20u;
    
label_5dcb24:
    // 0x5dcb24: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcb24u;
    
label_5dcb28:
    // 0x5dcb28: 0x10  mfhi        $zero
    ctx->pc = 0x5dcb28u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcb2c:
    // 0x5dcb2c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcb2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCB2C raw=0x00000001");
label_5dcb30:
    // 0x5dcb30: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcb30u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcb34:
    // 0x5dcb34: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcb34u;
    
label_5dcb38:
    // 0x5dcb38: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcb38u;
    
label_5dcb3c:
    // 0x5dcb3c: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcb3cu;
    
label_5dcb40:
    // 0x5dcb40: 0x10  mfhi        $zero
    ctx->pc = 0x5dcb40u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcb44:
    // 0x5dcb44: 0x101  .word       0x00000101                   # INVALID     $zero, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcb44u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCB44 raw=0x00000101");
label_5dcb48:
    // 0x5dcb48: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcb48u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcb4c:
    // 0x5dcb4c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcb4cu;
    
label_5dcb50:
    // 0x5dcb50: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dcb50u;
    
label_5dcb54:
    // 0x5dcb54: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcb54u;
    
label_5dcb58:
    // 0x5dcb58: 0x10  mfhi        $zero
    ctx->pc = 0x5dcb58u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcb5c:
    // 0x5dcb5c: 0x101  .word       0x00000101                   # INVALID     $zero, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcb5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCB5C raw=0x00000101");
label_5dcb60:
    // 0x5dcb60: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcb60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcb64:
    // 0x5dcb64: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcb64u;
    
label_5dcb68:
    // 0x5dcb68: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcb68u;
    
label_5dcb6c:
    // 0x5dcb6c: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcb6cu;
    
label_5dcb70:
    // 0x5dcb70: 0x10  mfhi        $zero
    ctx->pc = 0x5dcb70u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcb74:
    // 0x5dcb74: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcb74u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcb78:
    // 0x5dcb78: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcb78u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcb7c:
    // 0x5dcb7c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcb7cu;
    
label_5dcb80:
    // 0x5dcb80: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dcb80u;
    
label_5dcb84:
    // 0x5dcb84: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcb84u;
    
label_5dcb88:
    // 0x5dcb88: 0x10  mfhi        $zero
    ctx->pc = 0x5dcb88u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcb8c:
    // 0x5dcb8c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcb8cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcb90:
    // 0x5dcb90: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcb90u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcb94:
    // 0x5dcb94: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcb94u;
    
label_5dcb98:
    // 0x5dcb98: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dcb98u;
    
label_5dcb9c:
    // 0x5dcb9c: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcb9cu;
    
label_5dcba0:
    // 0x5dcba0: 0x10  mfhi        $zero
    ctx->pc = 0x5dcba0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcba4:
    // 0x5dcba4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcba4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcba8:
    // 0x5dcba8: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcba8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcbac:
    // 0x5dcbac: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcbacu;
    
label_5dcbb0:
    // 0x5dcbb0: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcbb0u;
    
label_5dcbb4:
    // 0x5dcbb4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcbb4u;
    
label_5dcbb8:
    // 0x5dcbb8: 0x10  mfhi        $zero
    ctx->pc = 0x5dcbb8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcbbc:
    // 0x5dcbbc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcbbcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcbc0:
    // 0x5dcbc0: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcbc0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcbc4:
    // 0x5dcbc4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcbc4u;
    
label_5dcbc8:
    // 0x5dcbc8: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dcbc8u;
    
label_5dcbcc:
    // 0x5dcbcc: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcbccu;
    
label_5dcbd0:
    // 0x5dcbd0: 0x10  mfhi        $zero
    ctx->pc = 0x5dcbd0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcbd4:
    // 0x5dcbd4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcbd4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcbd8:
    // 0x5dcbd8: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcbd8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcbdc:
    // 0x5dcbdc: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcbdcu;
    
label_5dcbe0:
    // 0x5dcbe0: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcbe0u;
    
label_5dcbe4:
    // 0x5dcbe4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcbe4u;
    
label_5dcbe8:
    // 0x5dcbe8: 0x10  mfhi        $zero
    ctx->pc = 0x5dcbe8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcbec:
    // 0x5dcbec: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dcbecu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dcbf0:
    // 0x5dcbf0: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcbf0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcbf4:
    // 0x5dcbf4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcbf4u;
    
label_5dcbf8:
    // 0x5dcbf8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dcbf8u;
    
label_5dcbfc:
    // 0x5dcbfc: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcbfcu;
    
label_5dcc00:
    // 0x5dcc00: 0x10  mfhi        $zero
    ctx->pc = 0x5dcc00u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcc04:
    // 0x5dcc04: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dcc04u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dcc08:
    // 0x5dcc08: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcc08u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcc0c:
    // 0x5dcc0c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcc0cu;
    
label_5dcc10:
    // 0x5dcc10: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dcc10u;
    
label_5dcc14:
    // 0x5dcc14: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcc14u;
    
label_5dcc18:
    // 0x5dcc18: 0x10  mfhi        $zero
    ctx->pc = 0x5dcc18u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcc1c:
    // 0x5dcc1c: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dcc1cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dcc20:
    // 0x5dcc20: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcc20u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcc24:
    // 0x5dcc24: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcc24u;
    
label_5dcc28:
    // 0x5dcc28: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcc28u;
    
label_5dcc2c:
    // 0x5dcc2c: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcc2cu;
    
label_5dcc30:
    // 0x5dcc30: 0x10  mfhi        $zero
    ctx->pc = 0x5dcc30u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcc34:
    // 0x5dcc34: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dcc34u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dcc38:
    // 0x5dcc38: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcc38u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcc3c:
    // 0x5dcc3c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcc3cu;
    
label_5dcc40:
    // 0x5dcc40: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dcc40u;
    
label_5dcc44:
    // 0x5dcc44: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcc44u;
    
label_5dcc48:
    // 0x5dcc48: 0x10  mfhi        $zero
    ctx->pc = 0x5dcc48u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcc4c:
    // 0x5dcc4c: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dcc4cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dcc50:
    // 0x5dcc50: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcc50u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcc54:
    // 0x5dcc54: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcc54u;
    
label_5dcc58:
    // 0x5dcc58: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcc58u;
    
label_5dcc5c:
    // 0x5dcc5c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcc5cu;
    
label_5dcc60:
    // 0x5dcc60: 0x10  mfhi        $zero
    ctx->pc = 0x5dcc60u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcc64:
    // 0x5dcc64: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcc64u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DCC64 raw=0x00000005");
label_5dcc68:
    // 0x5dcc68: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcc68u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcc6c:
    // 0x5dcc6c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcc6cu;
    
label_5dcc70:
    // 0x5dcc70: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dcc70u;
    
label_5dcc74:
    // 0x5dcc74: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcc74u;
    
label_5dcc78:
    // 0x5dcc78: 0x10  mfhi        $zero
    ctx->pc = 0x5dcc78u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcc7c:
    // 0x5dcc7c: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcc7cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DCC7C raw=0x00000005");
label_5dcc80:
    // 0x5dcc80: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcc80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcc84:
    // 0x5dcc84: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcc84u;
    
label_5dcc88:
    // 0x5dcc88: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dcc88u;
    
label_5dcc8c:
    // 0x5dcc8c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcc8cu;
    
label_5dcc90:
    // 0x5dcc90: 0x10  mfhi        $zero
    ctx->pc = 0x5dcc90u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcc94:
    // 0x5dcc94: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcc94u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DCC94 raw=0x00000005");
label_5dcc98:
    // 0x5dcc98: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcc98u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcc9c:
    // 0x5dcc9c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcc9cu;
    
label_5dcca0:
    // 0x5dcca0: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcca0u;
    
label_5dcca4:
    // 0x5dcca4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcca4u;
    
label_5dcca8:
    // 0x5dcca8: 0x10  mfhi        $zero
    ctx->pc = 0x5dcca8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dccac:
    // 0x5dccac: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dccacu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DCCAC raw=0x00000005");
label_5dccb0:
    // 0x5dccb0: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dccb0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dccb4:
    // 0x5dccb4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dccb4u;
    
label_5dccb8:
    // 0x5dccb8: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dccb8u;
    
label_5dccbc:
    // 0x5dccbc: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dccbcu;
    
label_5dccc0:
    // 0x5dccc0: 0x10  mfhi        $zero
    ctx->pc = 0x5dccc0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dccc4:
    // 0x5dccc4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dccc4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DCCC4 raw=0x00000005");
label_5dccc8:
    // 0x5dccc8: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dccc8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcccc:
    // 0x5dcccc: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dccccu;
    
label_5dccd0:
    // 0x5dccd0: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dccd0u;
    
label_5dccd4:
    // 0x5dccd4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dccd4u;
    
label_5dccd8:
    // 0x5dccd8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dccd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dccdc:
    // 0x5dccdc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dccdcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCCDC raw=0x00000001");
label_5dcce0:
    // 0x5dcce0: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcce0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcce4:
    // 0x5dcce4: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dcce4u;
    
label_5dcce8:
    // 0x5dcce8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dcce8u;
    
label_5dccec:
    // 0x5dccec: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dccecu;
    
label_5dccf0:
    // 0x5dccf0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dccf0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dccf4:
    // 0x5dccf4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dccf4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCCF4 raw=0x00000001");
label_5dccf8:
    // 0x5dccf8: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dccf8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dccfc:
    // 0x5dccfc: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dccfcu;
    
label_5dcd00:
    // 0x5dcd00: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dcd00u;
    
label_5dcd04:
    // 0x5dcd04: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcd04u;
    
label_5dcd08:
    // 0x5dcd08: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dcd08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcd0c:
    // 0x5dcd0c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcd0cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCD0C raw=0x00000001");
label_5dcd10:
    // 0x5dcd10: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcd10u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcd14:
    // 0x5dcd14: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dcd14u;
    
label_5dcd18:
    // 0x5dcd18: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcd18u;
    
label_5dcd1c:
    // 0x5dcd1c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcd1cu;
    
label_5dcd20:
    // 0x5dcd20: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dcd20u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcd24:
    // 0x5dcd24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcd24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCD24 raw=0x00000001");
label_5dcd28:
    // 0x5dcd28: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcd28u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcd2c:
    // 0x5dcd2c: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dcd2cu;
    
label_5dcd30:
    // 0x5dcd30: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dcd30u;
    
label_5dcd34:
    // 0x5dcd34: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcd34u;
    
label_5dcd38:
    // 0x5dcd38: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dcd38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcd3c:
    // 0x5dcd3c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcd3cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCD3C raw=0x00000001");
label_5dcd40:
    // 0x5dcd40: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcd40u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcd44:
    // 0x5dcd44: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dcd44u;
    
label_5dcd48:
    // 0x5dcd48: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcd48u;
    
label_5dcd4c:
    // 0x5dcd4c: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcd4cu;
    
label_5dcd50:
    // 0x5dcd50: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dcd50u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcd54:
    // 0x5dcd54: 0x101  .word       0x00000101                   # INVALID     $zero, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcd54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCD54 raw=0x00000101");
label_5dcd58:
    // 0x5dcd58: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcd58u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcd5c:
    // 0x5dcd5c: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dcd5cu;
    
label_5dcd60:
    // 0x5dcd60: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dcd60u;
    
label_5dcd64:
    // 0x5dcd64: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcd64u;
    
label_5dcd68:
    // 0x5dcd68: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dcd68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcd6c:
    // 0x5dcd6c: 0x101  .word       0x00000101                   # INVALID     $zero, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcd6cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCD6C raw=0x00000101");
label_5dcd70:
    // 0x5dcd70: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcd70u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcd74:
    // 0x5dcd74: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dcd74u;
    
label_5dcd78:
    // 0x5dcd78: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcd78u;
    
label_5dcd7c:
    // 0x5dcd7c: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcd7cu;
    
label_5dcd80:
    // 0x5dcd80: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dcd80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcd84:
    // 0x5dcd84: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcd84u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcd88:
    // 0x5dcd88: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcd88u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcd8c:
    // 0x5dcd8c: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dcd8cu;
    
label_5dcd90:
    // 0x5dcd90: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dcd90u;
    
label_5dcd94:
    // 0x5dcd94: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcd94u;
    
label_5dcd98:
    // 0x5dcd98: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dcd98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcd9c:
    // 0x5dcd9c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcd9cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcda0:
    // 0x5dcda0: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcda0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcda4:
    // 0x5dcda4: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dcda4u;
    
label_5dcda8:
    // 0x5dcda8: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dcda8u;
    
label_5dcdac:
    // 0x5dcdac: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcdacu;
    
label_5dcdb0:
    // 0x5dcdb0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dcdb0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcdb4:
    // 0x5dcdb4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcdb4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcdb8:
    // 0x5dcdb8: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcdb8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcdbc:
    // 0x5dcdbc: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dcdbcu;
    
label_5dcdc0:
    // 0x5dcdc0: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcdc0u;
    
label_5dcdc4:
    // 0x5dcdc4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcdc4u;
    
label_5dcdc8:
    // 0x5dcdc8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dcdc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcdcc:
    // 0x5dcdcc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcdccu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcdd0:
    // 0x5dcdd0: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcdd0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcdd4:
    // 0x5dcdd4: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dcdd4u;
    
label_5dcdd8:
    // 0x5dcdd8: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dcdd8u;
    
label_5dcddc:
    // 0x5dcddc: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcddcu;
    
label_5dcde0:
    // 0x5dcde0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dcde0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcde4:
    // 0x5dcde4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcde4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcde8:
    // 0x5dcde8: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcde8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcdec:
    // 0x5dcdec: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dcdecu;
    
label_5dcdf0:
    // 0x5dcdf0: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcdf0u;
    
label_5dcdf4:
    // 0x5dcdf4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcdf4u;
    
label_5dcdf8:
    // 0x5dcdf8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dcdf8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcdfc:
    // 0x5dcdfc: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dcdfcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dce00:
    // 0x5dce00: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dce00u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dce04:
    // 0x5dce04: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dce04u;
    
label_5dce08:
    // 0x5dce08: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dce08u;
    
label_5dce0c:
    // 0x5dce0c: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dce0cu;
    
label_5dce10:
    // 0x5dce10: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dce10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dce14:
    // 0x5dce14: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dce14u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dce18:
    // 0x5dce18: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dce18u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dce1c:
    // 0x5dce1c: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dce1cu;
    
label_5dce20:
    // 0x5dce20: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dce20u;
    
label_5dce24:
    // 0x5dce24: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dce24u;
    
label_5dce28:
    // 0x5dce28: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dce28u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dce2c:
    // 0x5dce2c: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dce2cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dce30:
    // 0x5dce30: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dce30u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dce34:
    // 0x5dce34: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dce34u;
    
label_5dce38:
    // 0x5dce38: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dce38u;
    
label_5dce3c:
    // 0x5dce3c: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dce3cu;
    
label_5dce40:
    // 0x5dce40: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dce40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dce44:
    // 0x5dce44: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dce44u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dce48:
    // 0x5dce48: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dce48u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dce4c:
    // 0x5dce4c: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dce4cu;
    
label_5dce50:
    // 0x5dce50: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dce50u;
    
label_5dce54:
    // 0x5dce54: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dce54u;
    
label_5dce58:
    // 0x5dce58: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dce58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dce5c:
    // 0x5dce5c: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dce5cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dce60:
    // 0x5dce60: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dce60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dce64:
    // 0x5dce64: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dce64u;
    
label_5dce68:
    // 0x5dce68: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dce68u;
    
label_5dce6c:
    // 0x5dce6c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dce6cu;
    
label_5dce70:
    // 0x5dce70: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dce70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dce74:
    // 0x5dce74: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dce74u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DCE74 raw=0x00000005");
label_5dce78:
    // 0x5dce78: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dce78u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dce7c:
    // 0x5dce7c: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dce7cu;
    
label_5dce80:
    // 0x5dce80: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dce80u;
    
label_5dce84:
    // 0x5dce84: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dce84u;
    
label_5dce88:
    // 0x5dce88: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dce88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dce8c:
    // 0x5dce8c: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dce8cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DCE8C raw=0x00000005");
label_5dce90:
    // 0x5dce90: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dce90u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dce94:
    // 0x5dce94: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dce94u;
    
label_5dce98:
    // 0x5dce98: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dce98u;
    
label_5dce9c:
    // 0x5dce9c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dce9cu;
    
label_5dcea0:
    // 0x5dcea0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dcea0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcea4:
    // 0x5dcea4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcea4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DCEA4 raw=0x00000005");
label_5dcea8:
    // 0x5dcea8: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcea8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dceac:
    // 0x5dceac: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dceacu;
    
label_5dceb0:
    // 0x5dceb0: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dceb0u;
    
label_5dceb4:
    // 0x5dceb4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dceb4u;
    
label_5dceb8:
    // 0x5dceb8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dceb8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcebc:
    // 0x5dcebc: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcebcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DCEBC raw=0x00000005");
label_5dcec0:
    // 0x5dcec0: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dcec0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcec4:
    // 0x5dcec4: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dcec4u;
    
label_5dcec8:
    // 0x5dcec8: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dcec8u;
    
label_5dcecc:
    // 0x5dcecc: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dceccu;
    
label_5dced0:
    // 0x5dced0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dced0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dced4:
    // 0x5dced4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dced4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DCED4 raw=0x00000005");
label_5dced8:
    // 0x5dced8: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5dced8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dcedc:
    // 0x5dcedc: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dcedcu;
    
label_5dcee0:
    // 0x5dcee0: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcee0u;
    
label_5dcee4:
    // 0x5dcee4: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcee4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcee8:
    // 0x5dcee8: 0x10  mfhi        $zero
    ctx->pc = 0x5dcee8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dceec:
    // 0x5dceec: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dceecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCEEC raw=0x00000001");
label_5dcef0:
    // 0x5dcef0: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dcef0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dcef4:
    // 0x5dcef4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcef4u;
    
label_5dcef8:
    // 0x5dcef8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dcef8u;
    
label_5dcefc:
    // 0x5dcefc: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcefcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcf00:
    // 0x5dcf00: 0x10  mfhi        $zero
    ctx->pc = 0x5dcf00u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcf04:
    // 0x5dcf04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcf04u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCF04 raw=0x00000001");
label_5dcf08:
    // 0x5dcf08: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dcf08u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dcf0c:
    // 0x5dcf0c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcf0cu;
    
label_5dcf10:
    // 0x5dcf10: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dcf10u;
    
label_5dcf14:
    // 0x5dcf14: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcf14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcf18:
    // 0x5dcf18: 0x10  mfhi        $zero
    ctx->pc = 0x5dcf18u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcf1c:
    // 0x5dcf1c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcf1cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCF1C raw=0x00000001");
label_5dcf20:
    // 0x5dcf20: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dcf20u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dcf24:
    // 0x5dcf24: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcf24u;
    
label_5dcf28:
    // 0x5dcf28: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcf28u;
    
label_5dcf2c:
    // 0x5dcf2c: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcf2cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcf30:
    // 0x5dcf30: 0x10  mfhi        $zero
    ctx->pc = 0x5dcf30u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcf34:
    // 0x5dcf34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcf34u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCF34 raw=0x00000001");
label_5dcf38:
    // 0x5dcf38: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dcf38u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dcf3c:
    // 0x5dcf3c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcf3cu;
    
label_5dcf40:
    // 0x5dcf40: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dcf40u;
    
label_5dcf44:
    // 0x5dcf44: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcf44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dcf48:
    // 0x5dcf48: 0x10  mfhi        $zero
    ctx->pc = 0x5dcf48u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcf4c:
    // 0x5dcf4c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcf4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCF4C raw=0x00000001");
label_5dcf50:
    // 0x5dcf50: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dcf50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dcf54:
    // 0x5dcf54: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcf54u;
    
label_5dcf58:
    // 0x5dcf58: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcf58u;
    
label_5dcf5c:
    // 0x5dcf5c: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dcf5cu;
    
label_5dcf60:
    // 0x5dcf60: 0x10  mfhi        $zero
    ctx->pc = 0x5dcf60u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcf64:
    // 0x5dcf64: 0x101  .word       0x00000101                   # INVALID     $zero, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcf64u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCF64 raw=0x00000101");
label_5dcf68:
    // 0x5dcf68: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dcf68u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dcf6c:
    // 0x5dcf6c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcf6cu;
    
label_5dcf70:
    // 0x5dcf70: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dcf70u;
    
label_5dcf74:
    // 0x5dcf74: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dcf74u;
    
label_5dcf78:
    // 0x5dcf78: 0x10  mfhi        $zero
    ctx->pc = 0x5dcf78u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcf7c:
    // 0x5dcf7c: 0x101  .word       0x00000101                   # INVALID     $zero, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dcf7cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DCF7C raw=0x00000101");
label_5dcf80:
    // 0x5dcf80: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dcf80u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dcf84:
    // 0x5dcf84: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcf84u;
    
label_5dcf88:
    // 0x5dcf88: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcf88u;
    
label_5dcf8c:
    // 0x5dcf8c: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dcf8cu;
    
label_5dcf90:
    // 0x5dcf90: 0x10  mfhi        $zero
    ctx->pc = 0x5dcf90u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcf94:
    // 0x5dcf94: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcf94u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcf98:
    // 0x5dcf98: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dcf98u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dcf9c:
    // 0x5dcf9c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcf9cu;
    
label_5dcfa0:
    // 0x5dcfa0: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dcfa0u;
    
label_5dcfa4:
    // 0x5dcfa4: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dcfa4u;
    
label_5dcfa8:
    // 0x5dcfa8: 0x10  mfhi        $zero
    ctx->pc = 0x5dcfa8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcfac:
    // 0x5dcfac: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcfacu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcfb0:
    // 0x5dcfb0: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dcfb0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dcfb4:
    // 0x5dcfb4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcfb4u;
    
label_5dcfb8:
    // 0x5dcfb8: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dcfb8u;
    
label_5dcfbc:
    // 0x5dcfbc: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dcfbcu;
    
label_5dcfc0:
    // 0x5dcfc0: 0x10  mfhi        $zero
    ctx->pc = 0x5dcfc0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcfc4:
    // 0x5dcfc4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcfc4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcfc8:
    // 0x5dcfc8: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dcfc8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dcfcc:
    // 0x5dcfcc: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcfccu;
    
label_5dcfd0:
    // 0x5dcfd0: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dcfd0u;
    
label_5dcfd4:
    // 0x5dcfd4: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dcfd4u;
    
label_5dcfd8:
    // 0x5dcfd8: 0x10  mfhi        $zero
    ctx->pc = 0x5dcfd8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcfdc:
    // 0x5dcfdc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcfdcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcfe0:
    // 0x5dcfe0: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dcfe0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dcfe4:
    // 0x5dcfe4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcfe4u;
    
label_5dcfe8:
    // 0x5dcfe8: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dcfe8u;
    
label_5dcfec:
    // 0x5dcfec: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dcfecu;
    
label_5dcff0:
    // 0x5dcff0: 0x10  mfhi        $zero
    ctx->pc = 0x5dcff0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dcff4:
    // 0x5dcff4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dcff4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dcff8:
    // 0x5dcff8: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dcff8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dcffc:
    // 0x5dcffc: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dcffcu;
    
label_5dd000:
    // 0x5dd000: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd000u;
    
label_5dd004:
    // 0x5dd004: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd004u;
    
label_5dd008:
    // 0x5dd008: 0x10  mfhi        $zero
    ctx->pc = 0x5dd008u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dd00c:
    // 0x5dd00c: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dd00cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dd010:
    // 0x5dd010: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd010u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd014:
    // 0x5dd014: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd014u;
    
label_5dd018:
    // 0x5dd018: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dd018u;
    
label_5dd01c:
    // 0x5dd01c: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd01cu;
    
label_5dd020:
    // 0x5dd020: 0x10  mfhi        $zero
    ctx->pc = 0x5dd020u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dd024:
    // 0x5dd024: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dd024u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dd028:
    // 0x5dd028: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd028u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd02c:
    // 0x5dd02c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd02cu;
    
label_5dd030:
    // 0x5dd030: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dd030u;
    
label_5dd034:
    // 0x5dd034: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd034u;
    
label_5dd038:
    // 0x5dd038: 0x10  mfhi        $zero
    ctx->pc = 0x5dd038u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dd03c:
    // 0x5dd03c: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dd03cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dd040:
    // 0x5dd040: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd040u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd044:
    // 0x5dd044: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd044u;
    
label_5dd048:
    // 0x5dd048: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dd048u;
    
label_5dd04c:
    // 0x5dd04c: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd04cu;
    
label_5dd050:
    // 0x5dd050: 0x10  mfhi        $zero
    ctx->pc = 0x5dd050u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dd054:
    // 0x5dd054: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dd054u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dd058:
    // 0x5dd058: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd058u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd05c:
    // 0x5dd05c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd05cu;
    
label_5dd060:
    // 0x5dd060: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dd060u;
    
label_5dd064:
    // 0x5dd064: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd064u;
    
label_5dd068:
    // 0x5dd068: 0x10  mfhi        $zero
    ctx->pc = 0x5dd068u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dd06c:
    // 0x5dd06c: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dd06cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dd070:
    // 0x5dd070: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd070u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd074:
    // 0x5dd074: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd074u;
    
label_5dd078:
    // 0x5dd078: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd078u;
    
label_5dd07c:
    // 0x5dd07c: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd07cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd080:
    // 0x5dd080: 0x10  mfhi        $zero
    ctx->pc = 0x5dd080u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dd084:
    // 0x5dd084: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd084u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DD084 raw=0x00000005");
label_5dd088:
    // 0x5dd088: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd088u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd08c:
    // 0x5dd08c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd08cu;
    
label_5dd090:
    // 0x5dd090: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dd090u;
    
label_5dd094:
    // 0x5dd094: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd098:
    // 0x5dd098: 0x10  mfhi        $zero
    ctx->pc = 0x5dd098u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dd09c:
    // 0x5dd09c: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd09cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DD09C raw=0x00000005");
label_5dd0a0:
    // 0x5dd0a0: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd0a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd0a4:
    // 0x5dd0a4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd0a4u;
    
label_5dd0a8:
    // 0x5dd0a8: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dd0a8u;
    
label_5dd0ac:
    // 0x5dd0ac: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd0acu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd0b0:
    // 0x5dd0b0: 0x10  mfhi        $zero
    ctx->pc = 0x5dd0b0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dd0b4:
    // 0x5dd0b4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd0b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DD0B4 raw=0x00000005");
label_5dd0b8:
    // 0x5dd0b8: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd0b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd0bc:
    // 0x5dd0bc: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd0bcu;
    
label_5dd0c0:
    // 0x5dd0c0: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dd0c0u;
    
label_5dd0c4:
    // 0x5dd0c4: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd0c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd0c8:
    // 0x5dd0c8: 0x10  mfhi        $zero
    ctx->pc = 0x5dd0c8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dd0cc:
    // 0x5dd0cc: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd0ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DD0CC raw=0x00000005");
label_5dd0d0:
    // 0x5dd0d0: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd0d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd0d4:
    // 0x5dd0d4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd0d4u;
    
label_5dd0d8:
    // 0x5dd0d8: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dd0d8u;
    
label_5dd0dc:
    // 0x5dd0dc: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd0dcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd0e0:
    // 0x5dd0e0: 0x10  mfhi        $zero
    ctx->pc = 0x5dd0e0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dd0e4:
    // 0x5dd0e4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd0e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DD0E4 raw=0x00000005");
label_5dd0e8:
    // 0x5dd0e8: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd0e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd0ec:
    // 0x5dd0ec: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd0ecu;
    
label_5dd0f0:
    // 0x5dd0f0: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd0f0u;
    
label_5dd0f4:
    // 0x5dd0f4: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd0f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd0f8:
    // 0x5dd0f8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd0f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd0fc:
    // 0x5dd0fc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd0fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DD0FC raw=0x00000001");
label_5dd100:
    // 0x5dd100: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd100u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd104:
    // 0x5dd104: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd104u;
    
label_5dd108:
    // 0x5dd108: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dd108u;
    
label_5dd10c:
    // 0x5dd10c: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd10cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd110:
    // 0x5dd110: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd110u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd114:
    // 0x5dd114: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd114u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DD114 raw=0x00000001");
label_5dd118:
    // 0x5dd118: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd118u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd11c:
    // 0x5dd11c: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd11cu;
    
label_5dd120:
    // 0x5dd120: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dd120u;
    
label_5dd124:
    // 0x5dd124: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd128:
    // 0x5dd128: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd128u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd12c:
    // 0x5dd12c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd12cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DD12C raw=0x00000001");
label_5dd130:
    // 0x5dd130: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd130u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd134:
    // 0x5dd134: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd134u;
    
label_5dd138:
    // 0x5dd138: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dd138u;
    
label_5dd13c:
    // 0x5dd13c: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd13cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd140:
    // 0x5dd140: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd140u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd144:
    // 0x5dd144: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd144u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DD144 raw=0x00000001");
label_5dd148:
    // 0x5dd148: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd148u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd14c:
    // 0x5dd14c: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd14cu;
    
label_5dd150:
    // 0x5dd150: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dd150u;
    
label_5dd154:
    // 0x5dd154: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd158:
    // 0x5dd158: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd158u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd15c:
    // 0x5dd15c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd15cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DD15C raw=0x00000001");
label_5dd160:
    // 0x5dd160: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd160u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd164:
    // 0x5dd164: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd164u;
    
label_5dd168:
    // 0x5dd168: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dd168u;
    
label_5dd16c:
    // 0x5dd16c: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd16cu;
    
label_5dd170:
    // 0x5dd170: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd170u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd174:
    // 0x5dd174: 0x101  .word       0x00000101                   # INVALID     $zero, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd174u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DD174 raw=0x00000101");
label_5dd178:
    // 0x5dd178: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd178u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd17c:
    // 0x5dd17c: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd17cu;
    
label_5dd180:
    // 0x5dd180: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dd180u;
    
label_5dd184:
    // 0x5dd184: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd184u;
    
label_5dd188:
    // 0x5dd188: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd188u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd18c:
    // 0x5dd18c: 0x101  .word       0x00000101                   # INVALID     $zero, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd18cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DD18C raw=0x00000101");
label_5dd190:
    // 0x5dd190: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd190u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd194:
    // 0x5dd194: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd194u;
    
label_5dd198:
    // 0x5dd198: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd198u;
    
label_5dd19c:
    // 0x5dd19c: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd19cu;
    
label_5dd1a0:
    // 0x5dd1a0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd1a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd1a4:
    // 0x5dd1a4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dd1a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dd1a8:
    // 0x5dd1a8: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd1a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd1ac:
    // 0x5dd1ac: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd1acu;
    
label_5dd1b0:
    // 0x5dd1b0: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dd1b0u;
    
label_5dd1b4:
    // 0x5dd1b4: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd1b4u;
    
label_5dd1b8:
    // 0x5dd1b8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd1b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd1bc:
    // 0x5dd1bc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dd1bcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dd1c0:
    // 0x5dd1c0: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd1c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd1c4:
    // 0x5dd1c4: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd1c4u;
    
label_5dd1c8:
    // 0x5dd1c8: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dd1c8u;
    
label_5dd1cc:
    // 0x5dd1cc: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd1ccu;
    
label_5dd1d0:
    // 0x5dd1d0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd1d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd1d4:
    // 0x5dd1d4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dd1d4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dd1d8:
    // 0x5dd1d8: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd1d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd1dc:
    // 0x5dd1dc: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd1dcu;
    
label_5dd1e0:
    // 0x5dd1e0: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dd1e0u;
    
label_5dd1e4:
    // 0x5dd1e4: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd1e4u;
    
label_5dd1e8:
    // 0x5dd1e8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd1e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd1ec:
    // 0x5dd1ec: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dd1ecu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dd1f0:
    // 0x5dd1f0: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd1f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd1f4:
    // 0x5dd1f4: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd1f4u;
    
label_5dd1f8:
    // 0x5dd1f8: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dd1f8u;
    
label_5dd1fc:
    // 0x5dd1fc: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd1fcu;
    
label_5dd200:
    // 0x5dd200: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd200u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd204:
    // 0x5dd204: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dd204u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dd208:
    // 0x5dd208: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd208u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd20c:
    // 0x5dd20c: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd20cu;
    
label_5dd210:
    // 0x5dd210: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd210u;
    
label_5dd214:
    // 0x5dd214: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd214u;
    
label_5dd218:
    // 0x5dd218: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd218u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd21c:
    // 0x5dd21c: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dd21cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dd220:
    // 0x5dd220: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd220u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd224:
    // 0x5dd224: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd224u;
    
label_5dd228:
    // 0x5dd228: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dd228u;
    
label_5dd22c:
    // 0x5dd22c: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd22cu;
    
label_5dd230:
    // 0x5dd230: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd230u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd234:
    // 0x5dd234: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dd234u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dd238:
    // 0x5dd238: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd238u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd23c:
    // 0x5dd23c: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd23cu;
    
label_5dd240:
    // 0x5dd240: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dd240u;
    
label_5dd244:
    // 0x5dd244: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd244u;
    
label_5dd248:
    // 0x5dd248: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd248u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd24c:
    // 0x5dd24c: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dd24cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dd250:
    // 0x5dd250: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd250u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd254:
    // 0x5dd254: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd254u;
    
label_5dd258:
    // 0x5dd258: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dd258u;
    
label_5dd25c:
    // 0x5dd25c: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd25cu;
    
label_5dd260:
    // 0x5dd260: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd260u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd264:
    // 0x5dd264: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dd264u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dd268:
    // 0x5dd268: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd268u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd26c:
    // 0x5dd26c: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd26cu;
    
label_5dd270:
    // 0x5dd270: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dd270u;
    
label_5dd274:
    // 0x5dd274: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x5dd274u;
    
label_5dd278:
    // 0x5dd278: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd278u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd27c:
    // 0x5dd27c: 0x203  sra         $zero, $zero, 8
    ctx->pc = 0x5dd27cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 8));
label_5dd280:
    // 0x5dd280: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd280u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd284:
    // 0x5dd284: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd284u;
    
label_5dd288:
    // 0x5dd288: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd288u;
    
label_5dd28c:
    // 0x5dd28c: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd28cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd290:
    // 0x5dd290: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd290u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd294:
    // 0x5dd294: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd294u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DD294 raw=0x00000005");
label_5dd298:
    // 0x5dd298: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd298u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd29c:
    // 0x5dd29c: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd29cu;
    
label_5dd2a0:
    // 0x5dd2a0: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x5dd2a0u;
    
label_5dd2a4:
    // 0x5dd2a4: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd2a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd2a8:
    // 0x5dd2a8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd2a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd2ac:
    // 0x5dd2ac: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd2acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DD2AC raw=0x00000005");
label_5dd2b0:
    // 0x5dd2b0: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd2b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd2b4:
    // 0x5dd2b4: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd2b4u;
    
label_5dd2b8:
    // 0x5dd2b8: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x5dd2b8u;
    
label_5dd2bc:
    // 0x5dd2bc: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd2bcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd2c0:
    // 0x5dd2c0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd2c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd2c4:
    // 0x5dd2c4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd2c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DD2C4 raw=0x00000005");
label_5dd2c8:
    // 0x5dd2c8: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd2c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd2cc:
    // 0x5dd2cc: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd2ccu;
    
label_5dd2d0:
    // 0x5dd2d0: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x5dd2d0u;
    
label_5dd2d4:
    // 0x5dd2d4: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd2d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd2d8:
    // 0x5dd2d8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd2d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd2dc:
    // 0x5dd2dc: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd2dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DD2DC raw=0x00000005");
label_5dd2e0:
    // 0x5dd2e0: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd2e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd2e4:
    // 0x5dd2e4: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd2e4u;
    
label_5dd2e8:
    // 0x5dd2e8: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dd2e8u;
    
label_5dd2ec:
    // 0x5dd2ec: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd2ecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd2f0:
    // 0x5dd2f0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd2f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd2f4:
    // 0x5dd2f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd2f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DD2F4 raw=0x00000001");
label_5dd2f8:
    // 0x5dd2f8: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd2f8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd2fc:
    // 0x5dd2fc: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd2fcu;
    
label_5dd300:
    // 0x5dd300: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dd300u;
    
label_5dd304:
    // 0x5dd304: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd304u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd308:
    // 0x5dd308: 0x10  mfhi        $zero
    ctx->pc = 0x5dd308u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dd30c:
    // 0x5dd30c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd30cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DD30C raw=0x00000001");
label_5dd310:
    // 0x5dd310: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd310u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd314:
    // 0x5dd314: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5dd314u;
    
label_5dd318:
    // 0x5dd318: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x5dd318u;
    
label_5dd31c:
    // 0x5dd31c: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd31cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd320:
    // 0x5dd320: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5dd320u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5dd324:
    // 0x5dd324: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd324u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DD324 raw=0x00000005");
label_5dd328:
    // 0x5dd328: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x5dd328u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_5dd32c:
    // 0x5dd32c: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x5dd32cu;
    
label_5dd330:
    // 0x5dd330: 0x8a  .word       0x0000008A                   # movz        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd330u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5dd334:
    // 0x5dd334: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5dd334u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5dd338:
    // 0x5dd338: 0x88  .word       0x00000088                   # jr          $zero # 00000080 <InstrIdType: CPU_SPECIAL>
label_5dd33c:
    if (ctx->pc == 0x5DD33Cu) {
        ctx->pc = 0x5DD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD338u;
        // 0x5dd33c: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DD340u;
        goto label_5dd340;
    }
    ctx->pc = 0x5DD338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x5DD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD338u;
        // 0x5dd33c: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5DD338u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5DD340u;
label_5dd340:
    // 0x5dd340: 0x98  .word       0x00000098                   # mult        $zero, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_5dd344:
    // 0x5dd344: 0x12  mflo        $zero
    ctx->pc = 0x5dd344u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_5dd348:
    // 0x5dd348: 0x4a  .word       0x0000004A                   # movz        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd348u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5dd34c:
    // 0x5dd34c: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd34cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_5dd350:
    // 0x5dd350: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_5dd354:
    if (ctx->pc == 0x5DD354u) {
        ctx->pc = 0x5DD354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD350u;
        // 0x5dd354: 0xffffffff  sd          $ra, -0x1($ra) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DD358u;
        goto label_5dd358;
    }
    ctx->pc = 0x5DD350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x5DD354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD350u;
        // 0x5dd354: 0xffffffff  sd          $ra, -0x1($ra) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5DD350u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5DD358u;
label_5dd358:
    // 0x5dd358: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_5dd35c:
    // 0x5dd35c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd35cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd360:
    // 0x5dd360: 0x89  .word       0x00000089                   # jalr        $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
label_5dd364:
    if (ctx->pc == 0x5DD364u) {
        ctx->pc = 0x5DD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD360u;
        // 0x5dd364: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DD368u;
        goto label_5dd368;
    }
    ctx->pc = 0x5DD360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x5DD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD360u;
        // 0x5dd364: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5DD360u, 0x5DD368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x5DD368u;
label_5dd368:
    // 0x5dd368: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd368u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd36c:
    // 0x5dd36c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd36cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DD36C raw=0x00000001");
label_5dd370:
    // 0x5dd370: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd370u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd374:
    // 0x5dd374: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd374u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd378:
    // 0x5dd378: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd378u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5dd37c:
    // 0x5dd37c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd37cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd380:
    // 0x5dd380: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd380u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5dd384:
    // 0x5dd384: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd384u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd388:
    // 0x5dd388: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd388u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd38c:
    // 0x5dd38c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd38cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd390:
    // 0x5dd390: 0x99  .word       0x00000099                   # multu       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd390u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_5dd394:
    // 0x5dd394: 0x19  multu       $zero, $zero
    ctx->pc = 0x5dd394u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_5dd398:
    // 0x5dd398: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd398u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd39c:
    // 0x5dd39c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd39cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd3a0:
    // 0x5dd3a0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd3a4:
    // 0x5dd3a4: 0x11  mthi        $zero
    ctx->pc = 0x5dd3a4u;
    ctx->hi = GPR_U64(ctx, 0);
label_5dd3a8:
    // 0x5dd3a8: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd3a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_5dd3ac:
    // 0x5dd3ac: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd3acu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd3b0:
    // 0x5dd3b0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd3b4:
    // 0x5dd3b4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd3b8:
    // 0x5dd3b8: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd3b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_5dd3bc:
    // 0x5dd3bc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5dd3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5dd3c0:
    // 0x5dd3c0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd3c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DD3C0 raw=0x00000001");
label_5dd3c4:
    // 0x5dd3c4: 0x42b218  .word       0x0042B218                   # mult        $s6, $v0, $v0 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd3c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_5dd3c8:
    // 0x5dd3c8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5dd3c8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5dd3cc:
    // 0x5dd3cc: 0x4355f8  .word       0x004355F8                   # dsll        $t2, $v1, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd3ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 23);
label_5dd3d0:
    // 0x5dd3d0: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd3d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5DD3D0 raw=0x00000015");
label_5dd3d4:
    // 0x5dd3d4: 0x42bc18  .word       0x0042BC18                   # mult        $s7, $v0, $v0 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd3d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_5dd3d8:
    // 0x5dd3d8: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x5dd3d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_5dd3dc:
    // 0x5dd3dc: 0x4356b0  tge         $v0, $v1, 346
    ctx->pc = 0x5dd3dcu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_5dd3e0:
    // 0x5dd3e0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x5dd3e0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_5dd3e4:
    // 0x5dd3e4: 0x43da38  .word       0x0043DA38                   # dsll        $k1, $v1, 8 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd3e4u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 3) << 8);
label_5dd3e8:
    // 0x5dd3e8: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x5dd3e8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_5dd3ec:
    // 0x5dd3ec: 0x43db30  tge         $v0, $v1, 876
    ctx->pc = 0x5dd3ecu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_5dd3f0:
    // 0x5dd3f0: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x5dd3f0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5dd3f4:
    // 0x5dd3f4: 0x43dc18  .word       0x0043DC18                   # mult        $k1, $v0, $v1 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd3f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_5dd3f8:
    // 0x5dd3f8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x5dd3f8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5dd3fc:
    // 0x5dd3fc: 0x43bbe8  .word       0x0043BBE8                   # mfsa        $s7 # 004303C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd3fcu;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_5dd400:
    // 0x5dd400: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd400u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5DD400 raw=0x00000005");
label_5dd404:
    // 0x5dd404: 0x42fc78  .word       0x0042FC78                   # dsll        $ra, $v0, 17 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd404u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 2) << 17);
label_5dd408:
    // 0x5dd408: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x5dd408u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5dd40c:
    // 0x5dd40c: 0x42d918  .word       0x0042D918                   # mult        $k1, $v0, $v0 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd40cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_5dd410:
    // 0x5dd410: 0xc  syscall     0
    ctx->pc = 0x5dd410u;
    ctx->pc = 0x5DD414u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_5dd414:
    // 0x5dd414: 0x42f8d0  .word       0x0042F8D0                   # mfhi        $ra # 004200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd414u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_5dd418:
    // 0x5dd418: 0x9  jalr        $zero, $zero
label_5dd41c:
    if (ctx->pc == 0x5DD41Cu) {
        ctx->pc = 0x5DD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD418u;
        // 0x5dd41c: 0x43ba60  .word       0x0043BA60                   # add         $s7, $v0, $v1 # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DD420u;
        goto label_5dd420;
    }
    ctx->pc = 0x5DD418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x5DD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD418u;
        // 0x5dd41c: 0x43ba60  .word       0x0043BA60                   # add         $s7, $v0, $v1 # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5DD418u, 0x5DD420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x5DD420u;
label_5dd420:
    // 0x5dd420: 0x8  jr          $zero
label_5dd424:
    if (ctx->pc == 0x5DD424u) {
        ctx->pc = 0x5DD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD420u;
        // 0x5dd424: 0x435748  .word       0x00435748                   # jr          $v0 # 00035740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DD428u;
        goto label_5dd428;
    }
    ctx->pc = 0x5DD420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x5DD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD420u;
        // 0x5dd424: 0x435748  .word       0x00435748                   # jr          $v0 # 00035740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5DD420u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5DD428u;
label_5dd428:
    // 0x5dd428: 0xf  sync
    ctx->pc = 0x5dd428u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_5dd42c:
    // 0x5dd42c: 0x430bc0  .word       0x00430BC0                   # sll         $at, $v1, 15 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd42cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_5dd430:
    // 0x5dd430: 0x10  mfhi        $zero
    ctx->pc = 0x5dd430u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5dd434:
    // 0x5dd434: 0x431490  .word       0x00431490                   # mfhi        $v0 # 00430480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd434u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd438:
    // 0x5dd438: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x5dd438u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_5dd43c:
    // 0x5dd43c: 0x435758  .word       0x00435758                   # mult        $t2, $v0, $v1 # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_5dd440:
    // 0x5dd440: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x5dd440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_5dd444:
    // 0x5dd444: 0x435810  .word       0x00435810                   # mfhi        $t3 # 00430000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd444u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_5dd448:
    // 0x5dd448: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd448u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x5DD448 raw=0x0000000E");
label_5dd44c:
    // 0x5dd44c: 0x43b9e0  .word       0x0043B9E0                   # add         $s7, $v0, $v1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd44cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_5dd450:
    // 0x5dd450: 0xd  break       0
    ctx->pc = 0x5dd450u;
    runtime->handleBreak(rdram, ctx);
label_5dd454:
    // 0x5dd454: 0x436170  tge         $v0, $v1, 389
    ctx->pc = 0x5dd454u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_5dd458:
    // 0x5dd458: 0x11  mthi        $zero
    ctx->pc = 0x5dd458u;
    ctx->hi = GPR_U64(ctx, 0);
label_5dd45c:
    // 0x5dd45c: 0x436d00  .word       0x00436D00                   # sll         $t5, $v1, 20 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd45cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
label_5dd460:
    // 0x5dd460: 0x12  mflo        $zero
    ctx->pc = 0x5dd460u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_5dd464:
    // 0x5dd464: 0x4388b8  .word       0x004388B8                   # dsll        $s1, $v1, 2 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd464u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << 2);
label_5dd468:
    // 0x5dd468: 0x13  mtlo        $zero
    ctx->pc = 0x5dd468u;
    ctx->lo = GPR_U64(ctx, 0);
label_5dd46c:
    // 0x5dd46c: 0x439f18  .word       0x00439F18                   # mult        $s3, $v0, $v1 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_5dd470:
    // 0x5dd470: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x5dd470u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5dd474:
    // 0x5dd474: 0x43ba28  .word       0x0043BA28                   # mfsa        $s7 # 00430200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd474u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_5dd478:
    // 0x5dd478: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x5dd478u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_5dd47c:
    // 0x5dd47c: 0x435a00  .word       0x00435A00                   # sll         $t3, $v1, 8 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd47cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_5dd480:
    // 0x5dd480: 0x19  multu       $zero, $zero
    ctx->pc = 0x5dd480u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_5dd484:
    // 0x5dd484: 0x435970  tge         $v0, $v1, 357
    ctx->pc = 0x5dd484u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_5dd488:
    // 0x5dd488: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x5dd488u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_5dd48c:
    // 0x5dd48c: 0x431cd0  .word       0x00431CD0                   # mfhi        $v1 # 004304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd48cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_5dd490:
    // 0x5dd490: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x5dd490u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_5dd494:
    // 0x5dd494: 0x431dc0  .word       0x00431DC0                   # sll         $v1, $v1, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
label_5dd498:
    // 0x5dd498: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x5dd498u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x5DD498 raw=0x0000001C");
label_5dd49c:
    // 0x5dd49c: 0x435910  .word       0x00435910                   # mfhi        $t3 # 00430100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd49cu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_5dd4a0:
    // 0x5dd4a0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dd4a0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_5dd4a4:
    // 0x5dd4a4: 0x433e08  .word       0x00433E08                   # jr          $v0 # 00033E00 <InstrIdType: CPU_SPECIAL>
label_5dd4a8:
    if (ctx->pc == 0x5DD4A8u) {
        ctx->pc = 0x5DD4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD4A4u;
        // 0x5dd4a8: 0x477fff00  .word       0x477FFF00                   # INVALID     $k1, $ra, -0x100 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x5DD4A8 raw=0x477FFF00");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DD4ACu;
        goto label_5dd4ac;
    }
    ctx->pc = 0x5DD4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x5DD4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DD4A4u;
        // 0x5dd4a8: 0x477fff00  .word       0x477FFF00                   # INVALID     $k1, $ra, -0x100 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x5DD4A8 raw=0x477FFF00");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5DD4A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5DD4ACu;
label_5dd4ac:
    // 0x5dd4ac: 0x0  nop
    ctx->pc = 0x5dd4acu;
    // NOP
label_5dd4b0:
    // 0x5dd4b0: 0x42a178  .word       0x0042A178                   # dsll        $s4, $v0, 5 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd4b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << 5);
label_5dd4b4:
    // 0x5dd4b4: 0x42ac10  .word       0x0042AC10                   # mfhi        $s5 # 00420400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd4b4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_5dd4b8:
    // 0x5dd4b8: 0x0  nop
    ctx->pc = 0x5dd4b8u;
    // NOP
label_5dd4bc:
    // 0x5dd4bc: 0x0  nop
    ctx->pc = 0x5dd4bcu;
    // NOP
label_5dd4c0:
    // 0x5dd4c0: 0x0  nop
    ctx->pc = 0x5dd4c0u;
    // NOP
label_5dd4c4:
    // 0x5dd4c4: 0x0  nop
    ctx->pc = 0x5dd4c4u;
    // NOP
label_5dd4c8:
    // 0x5dd4c8: 0x0  nop
    ctx->pc = 0x5dd4c8u;
    // NOP
label_5dd4cc:
    // 0x5dd4cc: 0x0  nop
    ctx->pc = 0x5dd4ccu;
    // NOP
label_5dd4d0:
    // 0x5dd4d0: 0x0  nop
    ctx->pc = 0x5dd4d0u;
    // NOP
label_5dd4d4:
    // 0x5dd4d4: 0x0  nop
    ctx->pc = 0x5dd4d4u;
    // NOP
label_5dd4d8:
    // 0x5dd4d8: 0x0  nop
    ctx->pc = 0x5dd4d8u;
    // NOP
label_5dd4dc:
    // 0x5dd4dc: 0x0  nop
    ctx->pc = 0x5dd4dcu;
    // NOP
label_5dd4e0:
    // 0x5dd4e0: 0x0  nop
    ctx->pc = 0x5dd4e0u;
    // NOP
label_5dd4e4:
    // 0x5dd4e4: 0x0  nop
    ctx->pc = 0x5dd4e4u;
    // NOP
label_5dd4e8:
    // 0x5dd4e8: 0x0  nop
    ctx->pc = 0x5dd4e8u;
    // NOP
label_5dd4ec:
    // 0x5dd4ec: 0x0  nop
    ctx->pc = 0x5dd4ecu;
    // NOP
label_5dd4f0:
    // 0x5dd4f0: 0x0  nop
    ctx->pc = 0x5dd4f0u;
    // NOP
label_5dd4f4:
    // 0x5dd4f4: 0x0  nop
    ctx->pc = 0x5dd4f4u;
    // NOP
label_5dd4f8:
    // 0x5dd4f8: 0x0  nop
    ctx->pc = 0x5dd4f8u;
    // NOP
label_5dd4fc:
    // 0x5dd4fc: 0x0  nop
    ctx->pc = 0x5dd4fcu;
    // NOP
label_5dd500:
    // 0x5dd500: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd500u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd504:
    // 0x5dd504: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd504u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd508:
    // 0x5dd508: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd508u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd50c:
    // 0x5dd50c: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd50cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd510:
    // 0x5dd510: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd510u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd514:
    // 0x5dd514: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd514u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd518:
    // 0x5dd518: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd518u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd51c:
    // 0x5dd51c: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd51cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd520:
    // 0x5dd520: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd520u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd524:
    // 0x5dd524: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd524u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd528:
    // 0x5dd528: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd528u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd52c:
    // 0x5dd52c: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd52cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd530:
    // 0x5dd530: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd530u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd534:
    // 0x5dd534: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd534u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd538:
    // 0x5dd538: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd538u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd53c:
    // 0x5dd53c: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd53cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd540:
    // 0x5dd540: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd540u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd544:
    // 0x5dd544: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd544u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd548:
    // 0x5dd548: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd548u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd54c:
    // 0x5dd54c: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd54cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd550:
    // 0x5dd550: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd550u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd554:
    // 0x5dd554: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd554u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd558:
    // 0x5dd558: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd558u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd55c:
    // 0x5dd55c: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd55cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd560:
    // 0x5dd560: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd560u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd564:
    // 0x5dd564: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd564u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd568:
    // 0x5dd568: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd568u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd56c:
    // 0x5dd56c: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd56cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd570:
    // 0x5dd570: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd570u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd574:
    // 0x5dd574: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd574u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd578:
    // 0x5dd578: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd578u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd57c:
    // 0x5dd57c: 0x4e1010  .word       0x004E1010                   # mfhi        $v0 # 004E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd57cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5dd580:
    // 0x5dd580: 0x0  nop
    ctx->pc = 0x5dd580u;
    // NOP
label_5dd584:
    // 0x5dd584: 0x0  nop
    ctx->pc = 0x5dd584u;
    // NOP
label_5dd588:
    // 0x5dd588: 0x0  nop
    ctx->pc = 0x5dd588u;
    // NOP
label_5dd58c:
    // 0x5dd58c: 0x0  nop
    ctx->pc = 0x5dd58cu;
    // NOP
label_5dd590:
    // 0x5dd590: 0x0  nop
    ctx->pc = 0x5dd590u;
    // NOP
label_5dd594:
    // 0x5dd594: 0x0  nop
    ctx->pc = 0x5dd594u;
    // NOP
label_5dd598:
    // 0x5dd598: 0x0  nop
    ctx->pc = 0x5dd598u;
    // NOP
label_5dd59c:
    // 0x5dd59c: 0x0  nop
    ctx->pc = 0x5dd59cu;
    // NOP
label_5dd5a0:
    // 0x5dd5a0: 0x0  nop
    ctx->pc = 0x5dd5a0u;
    // NOP
label_5dd5a4:
    // 0x5dd5a4: 0x0  nop
    ctx->pc = 0x5dd5a4u;
    // NOP
label_5dd5a8:
    // 0x5dd5a8: 0x0  nop
    ctx->pc = 0x5dd5a8u;
    // NOP
label_5dd5ac:
    // 0x5dd5ac: 0x0  nop
    ctx->pc = 0x5dd5acu;
    // NOP
label_5dd5b0:
    // 0x5dd5b0: 0x0  nop
    ctx->pc = 0x5dd5b0u;
    // NOP
label_5dd5b4:
    // 0x5dd5b4: 0x0  nop
    ctx->pc = 0x5dd5b4u;
    // NOP
label_5dd5b8:
    // 0x5dd5b8: 0x0  nop
    ctx->pc = 0x5dd5b8u;
    // NOP
label_5dd5bc:
    // 0x5dd5bc: 0x0  nop
    ctx->pc = 0x5dd5bcu;
    // NOP
label_5dd5c0:
    // 0x5dd5c0: 0x0  nop
    ctx->pc = 0x5dd5c0u;
    // NOP
label_5dd5c4:
    // 0x5dd5c4: 0x0  nop
    ctx->pc = 0x5dd5c4u;
    // NOP
label_5dd5c8:
    // 0x5dd5c8: 0x0  nop
    ctx->pc = 0x5dd5c8u;
    // NOP
label_5dd5cc:
    // 0x5dd5cc: 0x0  nop
    ctx->pc = 0x5dd5ccu;
    // NOP
label_5dd5d0:
    // 0x5dd5d0: 0x0  nop
    ctx->pc = 0x5dd5d0u;
    // NOP
label_5dd5d4:
    // 0x5dd5d4: 0x0  nop
    ctx->pc = 0x5dd5d4u;
    // NOP
label_5dd5d8:
    // 0x5dd5d8: 0x0  nop
    ctx->pc = 0x5dd5d8u;
    // NOP
label_5dd5dc:
    // 0x5dd5dc: 0x0  nop
    ctx->pc = 0x5dd5dcu;
    // NOP
label_5dd5e0:
    // 0x5dd5e0: 0x0  nop
    ctx->pc = 0x5dd5e0u;
    // NOP
label_5dd5e4:
    // 0x5dd5e4: 0x0  nop
    ctx->pc = 0x5dd5e4u;
    // NOP
label_5dd5e8:
    // 0x5dd5e8: 0x0  nop
    ctx->pc = 0x5dd5e8u;
    // NOP
label_5dd5ec:
    // 0x5dd5ec: 0x0  nop
    ctx->pc = 0x5dd5ecu;
    // NOP
label_5dd5f0:
    // 0x5dd5f0: 0x0  nop
    ctx->pc = 0x5dd5f0u;
    // NOP
label_5dd5f4:
    // 0x5dd5f4: 0x0  nop
    ctx->pc = 0x5dd5f4u;
    // NOP
label_5dd5f8:
    // 0x5dd5f8: 0x0  nop
    ctx->pc = 0x5dd5f8u;
    // NOP
label_5dd5fc:
    // 0x5dd5fc: 0x0  nop
    ctx->pc = 0x5dd5fcu;
    // NOP
label_5dd600:
    // 0x5dd600: 0x0  nop
    ctx->pc = 0x5dd600u;
    // NOP
label_5dd604:
    // 0x5dd604: 0x0  nop
    ctx->pc = 0x5dd604u;
    // NOP
label_5dd608:
    // 0x5dd608: 0x0  nop
    ctx->pc = 0x5dd608u;
    // NOP
label_5dd60c:
    // 0x5dd60c: 0x0  nop
    ctx->pc = 0x5dd60cu;
    // NOP
label_5dd610:
    // 0x5dd610: 0x0  nop
    ctx->pc = 0x5dd610u;
    // NOP
label_5dd614:
    // 0x5dd614: 0x0  nop
    ctx->pc = 0x5dd614u;
    // NOP
label_5dd618:
    // 0x5dd618: 0x0  nop
    ctx->pc = 0x5dd618u;
    // NOP
label_5dd61c:
    // 0x5dd61c: 0x0  nop
    ctx->pc = 0x5dd61cu;
    // NOP
label_5dd620:
    // 0x5dd620: 0x0  nop
    ctx->pc = 0x5dd620u;
    // NOP
label_5dd624:
    // 0x5dd624: 0x0  nop
    ctx->pc = 0x5dd624u;
    // NOP
label_5dd628:
    // 0x5dd628: 0x0  nop
    ctx->pc = 0x5dd628u;
    // NOP
label_5dd62c:
    // 0x5dd62c: 0x0  nop
    ctx->pc = 0x5dd62cu;
    // NOP
label_5dd630:
    // 0x5dd630: 0x0  nop
    ctx->pc = 0x5dd630u;
    // NOP
label_5dd634:
    // 0x5dd634: 0x0  nop
    ctx->pc = 0x5dd634u;
    // NOP
label_5dd638:
    // 0x5dd638: 0x0  nop
    ctx->pc = 0x5dd638u;
    // NOP
label_5dd63c:
    // 0x5dd63c: 0x0  nop
    ctx->pc = 0x5dd63cu;
    // NOP
label_5dd640:
    // 0x5dd640: 0x0  nop
    ctx->pc = 0x5dd640u;
    // NOP
label_5dd644:
    // 0x5dd644: 0x0  nop
    ctx->pc = 0x5dd644u;
    // NOP
label_5dd648:
    // 0x5dd648: 0x0  nop
    ctx->pc = 0x5dd648u;
    // NOP
label_5dd64c:
    // 0x5dd64c: 0x0  nop
    ctx->pc = 0x5dd64cu;
    // NOP
label_5dd650:
    // 0x5dd650: 0x0  nop
    ctx->pc = 0x5dd650u;
    // NOP
label_5dd654:
    // 0x5dd654: 0x0  nop
    ctx->pc = 0x5dd654u;
    // NOP
label_5dd658:
    // 0x5dd658: 0x0  nop
    ctx->pc = 0x5dd658u;
    // NOP
label_5dd65c:
    // 0x5dd65c: 0x0  nop
    ctx->pc = 0x5dd65cu;
    // NOP
label_5dd660:
    // 0x5dd660: 0x0  nop
    ctx->pc = 0x5dd660u;
    // NOP
label_5dd664:
    // 0x5dd664: 0x0  nop
    ctx->pc = 0x5dd664u;
    // NOP
label_5dd668:
    // 0x5dd668: 0x0  nop
    ctx->pc = 0x5dd668u;
    // NOP
label_5dd66c:
    // 0x5dd66c: 0x0  nop
    ctx->pc = 0x5dd66cu;
    // NOP
label_5dd670:
    // 0x5dd670: 0x0  nop
    ctx->pc = 0x5dd670u;
    // NOP
label_5dd674:
    // 0x5dd674: 0x0  nop
    ctx->pc = 0x5dd674u;
    // NOP
label_5dd678:
    // 0x5dd678: 0x0  nop
    ctx->pc = 0x5dd678u;
    // NOP
label_5dd67c:
    // 0x5dd67c: 0x0  nop
    ctx->pc = 0x5dd67cu;
    // NOP
label_5dd680:
    // 0x5dd680: 0x0  nop
    ctx->pc = 0x5dd680u;
    // NOP
label_5dd684:
    // 0x5dd684: 0x0  nop
    ctx->pc = 0x5dd684u;
    // NOP
label_5dd688:
    // 0x5dd688: 0x0  nop
    ctx->pc = 0x5dd688u;
    // NOP
label_5dd68c:
    // 0x5dd68c: 0x0  nop
    ctx->pc = 0x5dd68cu;
    // NOP
label_5dd690:
    // 0x5dd690: 0x0  nop
    ctx->pc = 0x5dd690u;
    // NOP
label_5dd694:
    // 0x5dd694: 0x0  nop
    ctx->pc = 0x5dd694u;
    // NOP
label_5dd698:
    // 0x5dd698: 0x0  nop
    ctx->pc = 0x5dd698u;
    // NOP
label_5dd69c:
    // 0x5dd69c: 0x0  nop
    ctx->pc = 0x5dd69cu;
    // NOP
label_5dd6a0:
    // 0x5dd6a0: 0x0  nop
    ctx->pc = 0x5dd6a0u;
    // NOP
label_5dd6a4:
    // 0x5dd6a4: 0x0  nop
    ctx->pc = 0x5dd6a4u;
    // NOP
label_5dd6a8:
    // 0x5dd6a8: 0x0  nop
    ctx->pc = 0x5dd6a8u;
    // NOP
label_5dd6ac:
    // 0x5dd6ac: 0x0  nop
    ctx->pc = 0x5dd6acu;
    // NOP
label_5dd6b0:
    // 0x5dd6b0: 0x0  nop
    ctx->pc = 0x5dd6b0u;
    // NOP
label_5dd6b4:
    // 0x5dd6b4: 0x0  nop
    ctx->pc = 0x5dd6b4u;
    // NOP
label_5dd6b8:
    // 0x5dd6b8: 0x0  nop
    ctx->pc = 0x5dd6b8u;
    // NOP
label_5dd6bc:
    // 0x5dd6bc: 0x0  nop
    ctx->pc = 0x5dd6bcu;
    // NOP
label_5dd6c0:
    // 0x5dd6c0: 0x0  nop
    ctx->pc = 0x5dd6c0u;
    // NOP
label_5dd6c4:
    // 0x5dd6c4: 0x0  nop
    ctx->pc = 0x5dd6c4u;
    // NOP
label_5dd6c8:
    // 0x5dd6c8: 0x0  nop
    ctx->pc = 0x5dd6c8u;
    // NOP
label_5dd6cc:
    // 0x5dd6cc: 0x0  nop
    ctx->pc = 0x5dd6ccu;
    // NOP
label_5dd6d0:
    // 0x5dd6d0: 0x0  nop
    ctx->pc = 0x5dd6d0u;
    // NOP
label_5dd6d4:
    // 0x5dd6d4: 0x0  nop
    ctx->pc = 0x5dd6d4u;
    // NOP
label_5dd6d8:
    // 0x5dd6d8: 0x0  nop
    ctx->pc = 0x5dd6d8u;
    // NOP
label_5dd6dc:
    // 0x5dd6dc: 0x0  nop
    ctx->pc = 0x5dd6dcu;
    // NOP
label_5dd6e0:
    // 0x5dd6e0: 0x0  nop
    ctx->pc = 0x5dd6e0u;
    // NOP
label_5dd6e4:
    // 0x5dd6e4: 0x0  nop
    ctx->pc = 0x5dd6e4u;
    // NOP
label_5dd6e8:
    // 0x5dd6e8: 0x0  nop
    ctx->pc = 0x5dd6e8u;
    // NOP
label_5dd6ec:
    // 0x5dd6ec: 0x0  nop
    ctx->pc = 0x5dd6ecu;
    // NOP
label_5dd6f0:
    // 0x5dd6f0: 0x0  nop
    ctx->pc = 0x5dd6f0u;
    // NOP
label_5dd6f4:
    // 0x5dd6f4: 0x0  nop
    ctx->pc = 0x5dd6f4u;
    // NOP
label_5dd6f8:
    // 0x5dd6f8: 0x0  nop
    ctx->pc = 0x5dd6f8u;
    // NOP
label_5dd6fc:
    // 0x5dd6fc: 0x0  nop
    ctx->pc = 0x5dd6fcu;
    // NOP
label_5dd700:
    // 0x5dd700: 0x0  nop
    ctx->pc = 0x5dd700u;
    // NOP
label_5dd704:
    // 0x5dd704: 0x0  nop
    ctx->pc = 0x5dd704u;
    // NOP
label_5dd708:
    // 0x5dd708: 0x0  nop
    ctx->pc = 0x5dd708u;
    // NOP
label_5dd70c:
    // 0x5dd70c: 0x0  nop
    ctx->pc = 0x5dd70cu;
    // NOP
label_5dd710:
    // 0x5dd710: 0x0  nop
    ctx->pc = 0x5dd710u;
    // NOP
label_5dd714:
    // 0x5dd714: 0x0  nop
    ctx->pc = 0x5dd714u;
    // NOP
label_5dd718:
    // 0x5dd718: 0x0  nop
    ctx->pc = 0x5dd718u;
    // NOP
label_5dd71c:
    // 0x5dd71c: 0x0  nop
    ctx->pc = 0x5dd71cu;
    // NOP
label_5dd720:
    // 0x5dd720: 0x0  nop
    ctx->pc = 0x5dd720u;
    // NOP
label_5dd724:
    // 0x5dd724: 0x0  nop
    ctx->pc = 0x5dd724u;
    // NOP
label_5dd728:
    // 0x5dd728: 0x0  nop
    ctx->pc = 0x5dd728u;
    // NOP
label_5dd72c:
    // 0x5dd72c: 0x0  nop
    ctx->pc = 0x5dd72cu;
    // NOP
label_5dd730:
    // 0x5dd730: 0x0  nop
    ctx->pc = 0x5dd730u;
    // NOP
label_5dd734:
    // 0x5dd734: 0x0  nop
    ctx->pc = 0x5dd734u;
    // NOP
label_5dd738:
    // 0x5dd738: 0x0  nop
    ctx->pc = 0x5dd738u;
    // NOP
label_5dd73c:
    // 0x5dd73c: 0x0  nop
    ctx->pc = 0x5dd73cu;
    // NOP
label_5dd740:
    // 0x5dd740: 0x0  nop
    ctx->pc = 0x5dd740u;
    // NOP
label_5dd744:
    // 0x5dd744: 0x0  nop
    ctx->pc = 0x5dd744u;
    // NOP
label_5dd748:
    // 0x5dd748: 0x0  nop
    ctx->pc = 0x5dd748u;
    // NOP
label_5dd74c:
    // 0x5dd74c: 0x0  nop
    ctx->pc = 0x5dd74cu;
    // NOP
label_5dd750:
    // 0x5dd750: 0x0  nop
    ctx->pc = 0x5dd750u;
    // NOP
label_5dd754:
    // 0x5dd754: 0x0  nop
    ctx->pc = 0x5dd754u;
    // NOP
label_5dd758:
    // 0x5dd758: 0x0  nop
    ctx->pc = 0x5dd758u;
    // NOP
label_5dd75c:
    // 0x5dd75c: 0x0  nop
    ctx->pc = 0x5dd75cu;
    // NOP
label_5dd760:
    // 0x5dd760: 0x0  nop
    ctx->pc = 0x5dd760u;
    // NOP
label_5dd764:
    // 0x5dd764: 0x0  nop
    ctx->pc = 0x5dd764u;
    // NOP
label_5dd768:
    // 0x5dd768: 0x0  nop
    ctx->pc = 0x5dd768u;
    // NOP
label_5dd76c:
    // 0x5dd76c: 0x0  nop
    ctx->pc = 0x5dd76cu;
    // NOP
label_5dd770:
    // 0x5dd770: 0x0  nop
    ctx->pc = 0x5dd770u;
    // NOP
label_5dd774:
    // 0x5dd774: 0x43ec68  .word       0x0043EC68                   # mfsa        $sp # 00430440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd774u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_5dd778:
    // 0x5dd778: 0x43eff8  .word       0x0043EFF8                   # dsll        $sp, $v1, 31 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd778u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 3) << 31);
label_5dd77c:
    // 0x5dd77c: 0x43f390  .word       0x0043F390                   # mfhi        $fp # 00430380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd77cu;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_5dd780:
    // 0x5dd780: 0x43f618  .word       0x0043F618                   # mult        $fp, $v0, $v1 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dd780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_5dd784:
    // 0x5dd784: 0x43f8c8  .word       0x0043F8C8                   # jr          $v0 # 0003F8C0 <InstrIdType: CPU_SPECIAL>
label_5dd788:
    if (ctx->pc == 0x5DD788u) {
        ctx->pc = 0x5DD78Cu;
        goto label_5dd78c;
    }
    ctx->pc = 0x5DD784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5DD784u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5DD78Cu;
label_5dd78c:
    // 0x5dd78c: 0x43fb50  .word       0x0043FB50                   # mfhi        $ra # 00430340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd78cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_5dd790:
    // 0x5dd790: 0x43ff00  .word       0x0043FF00                   # sll         $ra, $v1, 28 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd790u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
label_5dd794:
    // 0x5dd794: 0x4402b0  tge         $v0, $a0, 10
    ctx->pc = 0x5dd794u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_5dd798:
    // 0x5dd798: 0x440570  tge         $v0, $a0, 21
    ctx->pc = 0x5dd798u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_5dd79c:
    // 0x5dd79c: 0x440840  .word       0x00440840                   # sll         $at, $a0, 1 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dd79cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_5dd7a0:
    // 0x5dd7a0: 0x0  nop
    ctx->pc = 0x5dd7a0u;
    // NOP
label_5dd7a4:
    // 0x5dd7a4: 0x0  nop
    ctx->pc = 0x5dd7a4u;
    // NOP
label_5dd7a8:
    // 0x5dd7a8: 0x0  nop
    ctx->pc = 0x5dd7a8u;
    // NOP
label_5dd7ac:
    // 0x5dd7ac: 0x0  nop
    ctx->pc = 0x5dd7acu;
    // NOP
label_5dd7b0:
    // 0x5dd7b0: 0x0  nop
    ctx->pc = 0x5dd7b0u;
    // NOP
label_5dd7b4:
    // 0x5dd7b4: 0x0  nop
    ctx->pc = 0x5dd7b4u;
    // NOP
label_5dd7b8:
    // 0x5dd7b8: 0x0  nop
    ctx->pc = 0x5dd7b8u;
    // NOP
label_5dd7bc:
    // 0x5dd7bc: 0x0  nop
    ctx->pc = 0x5dd7bcu;
    // NOP
    ctx->pc = 0x5dd7c0u;
}
