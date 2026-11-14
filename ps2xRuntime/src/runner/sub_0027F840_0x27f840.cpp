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

// Function: sub_0027F840
// Address: 0x27f840 - 0x27ff00
void sub_0027F840_0x27f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F840_0x27f840");
#endif

    switch (ctx->pc) {
        case 0x27f840u: goto label_27f840;
        case 0x27f844u: goto label_27f844;
        case 0x27f848u: goto label_27f848;
        case 0x27f84cu: goto label_27f84c;
        case 0x27f850u: goto label_27f850;
        case 0x27f854u: goto label_27f854;
        case 0x27f858u: goto label_27f858;
        case 0x27f85cu: goto label_27f85c;
        case 0x27f860u: goto label_27f860;
        case 0x27f864u: goto label_27f864;
        case 0x27f868u: goto label_27f868;
        case 0x27f86cu: goto label_27f86c;
        case 0x27f870u: goto label_27f870;
        case 0x27f874u: goto label_27f874;
        case 0x27f878u: goto label_27f878;
        case 0x27f87cu: goto label_27f87c;
        case 0x27f880u: goto label_27f880;
        case 0x27f884u: goto label_27f884;
        case 0x27f888u: goto label_27f888;
        case 0x27f88cu: goto label_27f88c;
        case 0x27f890u: goto label_27f890;
        case 0x27f894u: goto label_27f894;
        case 0x27f898u: goto label_27f898;
        case 0x27f89cu: goto label_27f89c;
        case 0x27f8a0u: goto label_27f8a0;
        case 0x27f8a4u: goto label_27f8a4;
        case 0x27f8a8u: goto label_27f8a8;
        case 0x27f8acu: goto label_27f8ac;
        case 0x27f8b0u: goto label_27f8b0;
        case 0x27f8b4u: goto label_27f8b4;
        case 0x27f8b8u: goto label_27f8b8;
        case 0x27f8bcu: goto label_27f8bc;
        case 0x27f8c0u: goto label_27f8c0;
        case 0x27f8c4u: goto label_27f8c4;
        case 0x27f8c8u: goto label_27f8c8;
        case 0x27f8ccu: goto label_27f8cc;
        case 0x27f8d0u: goto label_27f8d0;
        case 0x27f8d4u: goto label_27f8d4;
        case 0x27f8d8u: goto label_27f8d8;
        case 0x27f8dcu: goto label_27f8dc;
        case 0x27f8e0u: goto label_27f8e0;
        case 0x27f8e4u: goto label_27f8e4;
        case 0x27f8e8u: goto label_27f8e8;
        case 0x27f8ecu: goto label_27f8ec;
        case 0x27f8f0u: goto label_27f8f0;
        case 0x27f8f4u: goto label_27f8f4;
        case 0x27f8f8u: goto label_27f8f8;
        case 0x27f8fcu: goto label_27f8fc;
        case 0x27f900u: goto label_27f900;
        case 0x27f904u: goto label_27f904;
        case 0x27f908u: goto label_27f908;
        case 0x27f90cu: goto label_27f90c;
        case 0x27f910u: goto label_27f910;
        case 0x27f914u: goto label_27f914;
        case 0x27f918u: goto label_27f918;
        case 0x27f91cu: goto label_27f91c;
        case 0x27f920u: goto label_27f920;
        case 0x27f924u: goto label_27f924;
        case 0x27f928u: goto label_27f928;
        case 0x27f92cu: goto label_27f92c;
        case 0x27f930u: goto label_27f930;
        case 0x27f934u: goto label_27f934;
        case 0x27f938u: goto label_27f938;
        case 0x27f93cu: goto label_27f93c;
        case 0x27f940u: goto label_27f940;
        case 0x27f944u: goto label_27f944;
        case 0x27f948u: goto label_27f948;
        case 0x27f94cu: goto label_27f94c;
        case 0x27f950u: goto label_27f950;
        case 0x27f954u: goto label_27f954;
        case 0x27f958u: goto label_27f958;
        case 0x27f95cu: goto label_27f95c;
        case 0x27f960u: goto label_27f960;
        case 0x27f964u: goto label_27f964;
        case 0x27f968u: goto label_27f968;
        case 0x27f96cu: goto label_27f96c;
        case 0x27f970u: goto label_27f970;
        case 0x27f974u: goto label_27f974;
        case 0x27f978u: goto label_27f978;
        case 0x27f97cu: goto label_27f97c;
        case 0x27f980u: goto label_27f980;
        case 0x27f984u: goto label_27f984;
        case 0x27f988u: goto label_27f988;
        case 0x27f98cu: goto label_27f98c;
        case 0x27f990u: goto label_27f990;
        case 0x27f994u: goto label_27f994;
        case 0x27f998u: goto label_27f998;
        case 0x27f99cu: goto label_27f99c;
        case 0x27f9a0u: goto label_27f9a0;
        case 0x27f9a4u: goto label_27f9a4;
        case 0x27f9a8u: goto label_27f9a8;
        case 0x27f9acu: goto label_27f9ac;
        case 0x27f9b0u: goto label_27f9b0;
        case 0x27f9b4u: goto label_27f9b4;
        case 0x27f9b8u: goto label_27f9b8;
        case 0x27f9bcu: goto label_27f9bc;
        case 0x27f9c0u: goto label_27f9c0;
        case 0x27f9c4u: goto label_27f9c4;
        case 0x27f9c8u: goto label_27f9c8;
        case 0x27f9ccu: goto label_27f9cc;
        case 0x27f9d0u: goto label_27f9d0;
        case 0x27f9d4u: goto label_27f9d4;
        case 0x27f9d8u: goto label_27f9d8;
        case 0x27f9dcu: goto label_27f9dc;
        case 0x27f9e0u: goto label_27f9e0;
        case 0x27f9e4u: goto label_27f9e4;
        case 0x27f9e8u: goto label_27f9e8;
        case 0x27f9ecu: goto label_27f9ec;
        case 0x27f9f0u: goto label_27f9f0;
        case 0x27f9f4u: goto label_27f9f4;
        case 0x27f9f8u: goto label_27f9f8;
        case 0x27f9fcu: goto label_27f9fc;
        case 0x27fa00u: goto label_27fa00;
        case 0x27fa04u: goto label_27fa04;
        case 0x27fa08u: goto label_27fa08;
        case 0x27fa0cu: goto label_27fa0c;
        case 0x27fa10u: goto label_27fa10;
        case 0x27fa14u: goto label_27fa14;
        case 0x27fa18u: goto label_27fa18;
        case 0x27fa1cu: goto label_27fa1c;
        case 0x27fa20u: goto label_27fa20;
        case 0x27fa24u: goto label_27fa24;
        case 0x27fa28u: goto label_27fa28;
        case 0x27fa2cu: goto label_27fa2c;
        case 0x27fa30u: goto label_27fa30;
        case 0x27fa34u: goto label_27fa34;
        case 0x27fa38u: goto label_27fa38;
        case 0x27fa3cu: goto label_27fa3c;
        case 0x27fa40u: goto label_27fa40;
        case 0x27fa44u: goto label_27fa44;
        case 0x27fa48u: goto label_27fa48;
        case 0x27fa4cu: goto label_27fa4c;
        case 0x27fa50u: goto label_27fa50;
        case 0x27fa54u: goto label_27fa54;
        case 0x27fa58u: goto label_27fa58;
        case 0x27fa5cu: goto label_27fa5c;
        case 0x27fa60u: goto label_27fa60;
        case 0x27fa64u: goto label_27fa64;
        case 0x27fa68u: goto label_27fa68;
        case 0x27fa6cu: goto label_27fa6c;
        case 0x27fa70u: goto label_27fa70;
        case 0x27fa74u: goto label_27fa74;
        case 0x27fa78u: goto label_27fa78;
        case 0x27fa7cu: goto label_27fa7c;
        case 0x27fa80u: goto label_27fa80;
        case 0x27fa84u: goto label_27fa84;
        case 0x27fa88u: goto label_27fa88;
        case 0x27fa8cu: goto label_27fa8c;
        case 0x27fa90u: goto label_27fa90;
        case 0x27fa94u: goto label_27fa94;
        case 0x27fa98u: goto label_27fa98;
        case 0x27fa9cu: goto label_27fa9c;
        case 0x27faa0u: goto label_27faa0;
        case 0x27faa4u: goto label_27faa4;
        case 0x27faa8u: goto label_27faa8;
        case 0x27faacu: goto label_27faac;
        case 0x27fab0u: goto label_27fab0;
        case 0x27fab4u: goto label_27fab4;
        case 0x27fab8u: goto label_27fab8;
        case 0x27fabcu: goto label_27fabc;
        case 0x27fac0u: goto label_27fac0;
        case 0x27fac4u: goto label_27fac4;
        case 0x27fac8u: goto label_27fac8;
        case 0x27faccu: goto label_27facc;
        case 0x27fad0u: goto label_27fad0;
        case 0x27fad4u: goto label_27fad4;
        case 0x27fad8u: goto label_27fad8;
        case 0x27fadcu: goto label_27fadc;
        case 0x27fae0u: goto label_27fae0;
        case 0x27fae4u: goto label_27fae4;
        case 0x27fae8u: goto label_27fae8;
        case 0x27faecu: goto label_27faec;
        case 0x27faf0u: goto label_27faf0;
        case 0x27faf4u: goto label_27faf4;
        case 0x27faf8u: goto label_27faf8;
        case 0x27fafcu: goto label_27fafc;
        case 0x27fb00u: goto label_27fb00;
        case 0x27fb04u: goto label_27fb04;
        case 0x27fb08u: goto label_27fb08;
        case 0x27fb0cu: goto label_27fb0c;
        case 0x27fb10u: goto label_27fb10;
        case 0x27fb14u: goto label_27fb14;
        case 0x27fb18u: goto label_27fb18;
        case 0x27fb1cu: goto label_27fb1c;
        case 0x27fb20u: goto label_27fb20;
        case 0x27fb24u: goto label_27fb24;
        case 0x27fb28u: goto label_27fb28;
        case 0x27fb2cu: goto label_27fb2c;
        case 0x27fb30u: goto label_27fb30;
        case 0x27fb34u: goto label_27fb34;
        case 0x27fb38u: goto label_27fb38;
        case 0x27fb3cu: goto label_27fb3c;
        case 0x27fb40u: goto label_27fb40;
        case 0x27fb44u: goto label_27fb44;
        case 0x27fb48u: goto label_27fb48;
        case 0x27fb4cu: goto label_27fb4c;
        case 0x27fb50u: goto label_27fb50;
        case 0x27fb54u: goto label_27fb54;
        case 0x27fb58u: goto label_27fb58;
        case 0x27fb5cu: goto label_27fb5c;
        case 0x27fb60u: goto label_27fb60;
        case 0x27fb64u: goto label_27fb64;
        case 0x27fb68u: goto label_27fb68;
        case 0x27fb6cu: goto label_27fb6c;
        case 0x27fb70u: goto label_27fb70;
        case 0x27fb74u: goto label_27fb74;
        case 0x27fb78u: goto label_27fb78;
        case 0x27fb7cu: goto label_27fb7c;
        case 0x27fb80u: goto label_27fb80;
        case 0x27fb84u: goto label_27fb84;
        case 0x27fb88u: goto label_27fb88;
        case 0x27fb8cu: goto label_27fb8c;
        case 0x27fb90u: goto label_27fb90;
        case 0x27fb94u: goto label_27fb94;
        case 0x27fb98u: goto label_27fb98;
        case 0x27fb9cu: goto label_27fb9c;
        case 0x27fba0u: goto label_27fba0;
        case 0x27fba4u: goto label_27fba4;
        case 0x27fba8u: goto label_27fba8;
        case 0x27fbacu: goto label_27fbac;
        case 0x27fbb0u: goto label_27fbb0;
        case 0x27fbb4u: goto label_27fbb4;
        case 0x27fbb8u: goto label_27fbb8;
        case 0x27fbbcu: goto label_27fbbc;
        case 0x27fbc0u: goto label_27fbc0;
        case 0x27fbc4u: goto label_27fbc4;
        case 0x27fbc8u: goto label_27fbc8;
        case 0x27fbccu: goto label_27fbcc;
        case 0x27fbd0u: goto label_27fbd0;
        case 0x27fbd4u: goto label_27fbd4;
        case 0x27fbd8u: goto label_27fbd8;
        case 0x27fbdcu: goto label_27fbdc;
        case 0x27fbe0u: goto label_27fbe0;
        case 0x27fbe4u: goto label_27fbe4;
        case 0x27fbe8u: goto label_27fbe8;
        case 0x27fbecu: goto label_27fbec;
        case 0x27fbf0u: goto label_27fbf0;
        case 0x27fbf4u: goto label_27fbf4;
        case 0x27fbf8u: goto label_27fbf8;
        case 0x27fbfcu: goto label_27fbfc;
        case 0x27fc00u: goto label_27fc00;
        case 0x27fc04u: goto label_27fc04;
        case 0x27fc08u: goto label_27fc08;
        case 0x27fc0cu: goto label_27fc0c;
        case 0x27fc10u: goto label_27fc10;
        case 0x27fc14u: goto label_27fc14;
        case 0x27fc18u: goto label_27fc18;
        case 0x27fc1cu: goto label_27fc1c;
        case 0x27fc20u: goto label_27fc20;
        case 0x27fc24u: goto label_27fc24;
        case 0x27fc28u: goto label_27fc28;
        case 0x27fc2cu: goto label_27fc2c;
        case 0x27fc30u: goto label_27fc30;
        case 0x27fc34u: goto label_27fc34;
        case 0x27fc38u: goto label_27fc38;
        case 0x27fc3cu: goto label_27fc3c;
        case 0x27fc40u: goto label_27fc40;
        case 0x27fc44u: goto label_27fc44;
        case 0x27fc48u: goto label_27fc48;
        case 0x27fc4cu: goto label_27fc4c;
        case 0x27fc50u: goto label_27fc50;
        case 0x27fc54u: goto label_27fc54;
        case 0x27fc58u: goto label_27fc58;
        case 0x27fc5cu: goto label_27fc5c;
        case 0x27fc60u: goto label_27fc60;
        case 0x27fc64u: goto label_27fc64;
        case 0x27fc68u: goto label_27fc68;
        case 0x27fc6cu: goto label_27fc6c;
        case 0x27fc70u: goto label_27fc70;
        case 0x27fc74u: goto label_27fc74;
        case 0x27fc78u: goto label_27fc78;
        case 0x27fc7cu: goto label_27fc7c;
        case 0x27fc80u: goto label_27fc80;
        case 0x27fc84u: goto label_27fc84;
        case 0x27fc88u: goto label_27fc88;
        case 0x27fc8cu: goto label_27fc8c;
        case 0x27fc90u: goto label_27fc90;
        case 0x27fc94u: goto label_27fc94;
        case 0x27fc98u: goto label_27fc98;
        case 0x27fc9cu: goto label_27fc9c;
        case 0x27fca0u: goto label_27fca0;
        case 0x27fca4u: goto label_27fca4;
        case 0x27fca8u: goto label_27fca8;
        case 0x27fcacu: goto label_27fcac;
        case 0x27fcb0u: goto label_27fcb0;
        case 0x27fcb4u: goto label_27fcb4;
        case 0x27fcb8u: goto label_27fcb8;
        case 0x27fcbcu: goto label_27fcbc;
        case 0x27fcc0u: goto label_27fcc0;
        case 0x27fcc4u: goto label_27fcc4;
        case 0x27fcc8u: goto label_27fcc8;
        case 0x27fcccu: goto label_27fccc;
        case 0x27fcd0u: goto label_27fcd0;
        case 0x27fcd4u: goto label_27fcd4;
        case 0x27fcd8u: goto label_27fcd8;
        case 0x27fcdcu: goto label_27fcdc;
        case 0x27fce0u: goto label_27fce0;
        case 0x27fce4u: goto label_27fce4;
        case 0x27fce8u: goto label_27fce8;
        case 0x27fcecu: goto label_27fcec;
        case 0x27fcf0u: goto label_27fcf0;
        case 0x27fcf4u: goto label_27fcf4;
        case 0x27fcf8u: goto label_27fcf8;
        case 0x27fcfcu: goto label_27fcfc;
        case 0x27fd00u: goto label_27fd00;
        case 0x27fd04u: goto label_27fd04;
        case 0x27fd08u: goto label_27fd08;
        case 0x27fd0cu: goto label_27fd0c;
        case 0x27fd10u: goto label_27fd10;
        case 0x27fd14u: goto label_27fd14;
        case 0x27fd18u: goto label_27fd18;
        case 0x27fd1cu: goto label_27fd1c;
        case 0x27fd20u: goto label_27fd20;
        case 0x27fd24u: goto label_27fd24;
        case 0x27fd28u: goto label_27fd28;
        case 0x27fd2cu: goto label_27fd2c;
        case 0x27fd30u: goto label_27fd30;
        case 0x27fd34u: goto label_27fd34;
        case 0x27fd38u: goto label_27fd38;
        case 0x27fd3cu: goto label_27fd3c;
        case 0x27fd40u: goto label_27fd40;
        case 0x27fd44u: goto label_27fd44;
        case 0x27fd48u: goto label_27fd48;
        case 0x27fd4cu: goto label_27fd4c;
        case 0x27fd50u: goto label_27fd50;
        case 0x27fd54u: goto label_27fd54;
        case 0x27fd58u: goto label_27fd58;
        case 0x27fd5cu: goto label_27fd5c;
        case 0x27fd60u: goto label_27fd60;
        case 0x27fd64u: goto label_27fd64;
        case 0x27fd68u: goto label_27fd68;
        case 0x27fd6cu: goto label_27fd6c;
        case 0x27fd70u: goto label_27fd70;
        case 0x27fd74u: goto label_27fd74;
        case 0x27fd78u: goto label_27fd78;
        case 0x27fd7cu: goto label_27fd7c;
        case 0x27fd80u: goto label_27fd80;
        case 0x27fd84u: goto label_27fd84;
        case 0x27fd88u: goto label_27fd88;
        case 0x27fd8cu: goto label_27fd8c;
        case 0x27fd90u: goto label_27fd90;
        case 0x27fd94u: goto label_27fd94;
        case 0x27fd98u: goto label_27fd98;
        case 0x27fd9cu: goto label_27fd9c;
        case 0x27fda0u: goto label_27fda0;
        case 0x27fda4u: goto label_27fda4;
        case 0x27fda8u: goto label_27fda8;
        case 0x27fdacu: goto label_27fdac;
        case 0x27fdb0u: goto label_27fdb0;
        case 0x27fdb4u: goto label_27fdb4;
        case 0x27fdb8u: goto label_27fdb8;
        case 0x27fdbcu: goto label_27fdbc;
        case 0x27fdc0u: goto label_27fdc0;
        case 0x27fdc4u: goto label_27fdc4;
        case 0x27fdc8u: goto label_27fdc8;
        case 0x27fdccu: goto label_27fdcc;
        case 0x27fdd0u: goto label_27fdd0;
        case 0x27fdd4u: goto label_27fdd4;
        case 0x27fdd8u: goto label_27fdd8;
        case 0x27fddcu: goto label_27fddc;
        case 0x27fde0u: goto label_27fde0;
        case 0x27fde4u: goto label_27fde4;
        case 0x27fde8u: goto label_27fde8;
        case 0x27fdecu: goto label_27fdec;
        case 0x27fdf0u: goto label_27fdf0;
        case 0x27fdf4u: goto label_27fdf4;
        case 0x27fdf8u: goto label_27fdf8;
        case 0x27fdfcu: goto label_27fdfc;
        case 0x27fe00u: goto label_27fe00;
        case 0x27fe04u: goto label_27fe04;
        case 0x27fe08u: goto label_27fe08;
        case 0x27fe0cu: goto label_27fe0c;
        case 0x27fe10u: goto label_27fe10;
        case 0x27fe14u: goto label_27fe14;
        case 0x27fe18u: goto label_27fe18;
        case 0x27fe1cu: goto label_27fe1c;
        case 0x27fe20u: goto label_27fe20;
        case 0x27fe24u: goto label_27fe24;
        case 0x27fe28u: goto label_27fe28;
        case 0x27fe2cu: goto label_27fe2c;
        case 0x27fe30u: goto label_27fe30;
        case 0x27fe34u: goto label_27fe34;
        case 0x27fe38u: goto label_27fe38;
        case 0x27fe3cu: goto label_27fe3c;
        case 0x27fe40u: goto label_27fe40;
        case 0x27fe44u: goto label_27fe44;
        case 0x27fe48u: goto label_27fe48;
        case 0x27fe4cu: goto label_27fe4c;
        case 0x27fe50u: goto label_27fe50;
        case 0x27fe54u: goto label_27fe54;
        case 0x27fe58u: goto label_27fe58;
        case 0x27fe5cu: goto label_27fe5c;
        case 0x27fe60u: goto label_27fe60;
        case 0x27fe64u: goto label_27fe64;
        case 0x27fe68u: goto label_27fe68;
        case 0x27fe6cu: goto label_27fe6c;
        case 0x27fe70u: goto label_27fe70;
        case 0x27fe74u: goto label_27fe74;
        case 0x27fe78u: goto label_27fe78;
        case 0x27fe7cu: goto label_27fe7c;
        case 0x27fe80u: goto label_27fe80;
        case 0x27fe84u: goto label_27fe84;
        case 0x27fe88u: goto label_27fe88;
        case 0x27fe8cu: goto label_27fe8c;
        case 0x27fe90u: goto label_27fe90;
        case 0x27fe94u: goto label_27fe94;
        case 0x27fe98u: goto label_27fe98;
        case 0x27fe9cu: goto label_27fe9c;
        case 0x27fea0u: goto label_27fea0;
        case 0x27fea4u: goto label_27fea4;
        case 0x27fea8u: goto label_27fea8;
        case 0x27feacu: goto label_27feac;
        case 0x27feb0u: goto label_27feb0;
        case 0x27feb4u: goto label_27feb4;
        case 0x27feb8u: goto label_27feb8;
        case 0x27febcu: goto label_27febc;
        case 0x27fec0u: goto label_27fec0;
        case 0x27fec4u: goto label_27fec4;
        case 0x27fec8u: goto label_27fec8;
        case 0x27feccu: goto label_27fecc;
        case 0x27fed0u: goto label_27fed0;
        case 0x27fed4u: goto label_27fed4;
        case 0x27fed8u: goto label_27fed8;
        case 0x27fedcu: goto label_27fedc;
        case 0x27fee0u: goto label_27fee0;
        case 0x27fee4u: goto label_27fee4;
        case 0x27fee8u: goto label_27fee8;
        case 0x27feecu: goto label_27feec;
        case 0x27fef0u: goto label_27fef0;
        case 0x27fef4u: goto label_27fef4;
        case 0x27fef8u: goto label_27fef8;
        case 0x27fefcu: goto label_27fefc;
        default: break;
    }

    ctx->pc = 0x27f840u;

label_27f840:
    // 0x27f840: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x27f840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_27f844:
    // 0x27f844: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27f844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_27f848:
    // 0x27f848: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27f848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_27f84c:
    // 0x27f84c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27f84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_27f850:
    // 0x27f850: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27f850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27f854:
    // 0x27f854: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27f854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_27f858:
    // 0x27f858: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27f858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27f85c:
    // 0x27f85c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27f85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27f860:
    // 0x27f860: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27f860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27f864:
    // 0x27f864: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27f868:
    // 0x27f868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27f86c:
    // 0x27f86c: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x27f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
label_27f870:
    // 0x27f870: 0xafa501a0  sw          $a1, 0x1A0($sp)
    ctx->pc = 0x27f870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 5));
label_27f874:
    // 0x27f874: 0xafa601b0  sw          $a2, 0x1B0($sp)
    ctx->pc = 0x27f874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
label_27f878:
    // 0x27f878: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x27f878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_27f87c:
    // 0x27f87c: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x27f87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_27f880:
    // 0x27f880: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27f880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27f884:
    // 0x27f884: 0x24050548  addiu       $a1, $zero, 0x548
    ctx->pc = 0x27f884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1352));
label_27f888:
    // 0x27f888: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27f888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f88c:
    // 0x27f88c: 0xc04146c  jal         func_1051B0
label_27f890:
    if (ctx->pc == 0x27F890u) {
        ctx->pc = 0x27F894u;
        goto label_27f894;
    }
    ctx->pc = 0x27F88Cu;
    SET_GPR_U32(ctx, 31, 0x27F894u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x27F88Cu, 0x27F894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F894u;
label_27f894:
    // 0x27f894: 0xa3a2018f  sb          $v0, 0x18F($sp)
    ctx->pc = 0x27f894u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 399), (uint8_t)GPR_U32(ctx, 2));
label_27f898:
    // 0x27f898: 0x8f96bbb4  lw          $s6, -0x444C($gp)
    ctx->pc = 0x27f898u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_27f89c:
    // 0x27f89c: 0x8ec4002c  lw          $a0, 0x2C($s6)
    ctx->pc = 0x27f89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_27f8a0:
    // 0x27f8a0: 0x24050548  addiu       $a1, $zero, 0x548
    ctx->pc = 0x27f8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1352));
label_27f8a4:
    // 0x27f8a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27f8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f8a8:
    // 0x27f8a8: 0xc041b54  jal         func_106D50
label_27f8ac:
    if (ctx->pc == 0x27F8ACu) {
        ctx->pc = 0x27F8B0u;
        goto label_27f8b0;
    }
    ctx->pc = 0x27F8A8u;
    SET_GPR_U32(ctx, 31, 0x27F8B0u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x27F8A8u, 0x27F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8B0u;
label_27f8b0:
    // 0x27f8b0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x27f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_27f8b4:
    // 0x27f8b4: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x27f8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_27f8b8:
    // 0x27f8b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27f8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27f8bc:
    // 0x27f8bc: 0x24050543  addiu       $a1, $zero, 0x543
    ctx->pc = 0x27f8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1347));
label_27f8c0:
    // 0x27f8c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27f8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27f8c4:
    // 0x27f8c4: 0xc040ab0  jal         func_102AC0
label_27f8c8:
    if (ctx->pc == 0x27F8C8u) {
        ctx->pc = 0x27F8CCu;
        goto label_27f8cc;
    }
    ctx->pc = 0x27F8C4u;
    SET_GPR_U32(ctx, 31, 0x27F8CCu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x27F8C4u, 0x27F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8CCu;
label_27f8cc:
    // 0x27f8cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27f8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f8d0:
    // 0x27f8d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27f8d4:
    // 0x27f8d4: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
label_27f8d8:
    if (ctx->pc == 0x27F8D8u) {
        ctx->pc = 0x27F8DCu;
        goto label_27f8dc;
    }
    ctx->pc = 0x27F8D4u;
    {
        const bool branch_taken_0x27f8d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f8d4) {
            ctx->pc = 0x27F8E8u;
            goto label_27f8e8;
        }
    }
    ctx->pc = 0x27F8DCu;
label_27f8dc:
    // 0x27f8dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27f8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f8e0:
    // 0x27f8e0: 0x10000178  b           . + 4 + (0x178 << 2)
label_27f8e4:
    if (ctx->pc == 0x27F8E4u) {
        ctx->pc = 0x27F8E8u;
        goto label_27f8e8;
    }
    ctx->pc = 0x27F8E0u;
    {
        const bool branch_taken_0x27f8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f8e0) {
            ctx->pc = 0x27FEC4u;
            goto label_27fec4;
        }
    }
    ctx->pc = 0x27F8E8u;
label_27f8e8:
    // 0x27f8e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27f8ec:
    // 0x27f8ec: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x27f8ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27f8f0:
    // 0x27f8f0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x27f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_27f8f4:
    // 0x27f8f4: 0xc041b48  jal         func_106D20
label_27f8f8:
    if (ctx->pc == 0x27F8F8u) {
        ctx->pc = 0x27F8FCu;
        goto label_27f8fc;
    }
    ctx->pc = 0x27F8F4u;
    SET_GPR_U32(ctx, 31, 0x27F8FCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x27F8F4u, 0x27F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F8FCu;
label_27f8fc:
    // 0x27f8fc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x27f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_27f900:
    // 0x27f900: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x27f900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_27f904:
    // 0x27f904: 0xc040304  jal         func_100C10
label_27f908:
    if (ctx->pc == 0x27F908u) {
        ctx->pc = 0x27F90Cu;
        goto label_27f90c;
    }
    ctx->pc = 0x27F904u;
    SET_GPR_U32(ctx, 31, 0x27F90Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x27F904u, 0x27F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F90Cu;
label_27f90c:
    // 0x27f90c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x27f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_27f910:
    // 0x27f910: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x27f910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_27f914:
    // 0x27f914: 0xc119138  jal         func_4644E0
label_27f918:
    if (ctx->pc == 0x27F918u) {
        ctx->pc = 0x27F91Cu;
        goto label_27f91c;
    }
    ctx->pc = 0x27F914u;
    SET_GPR_U32(ctx, 31, 0x27F91Cu);
    ctx->pc = 0x4644E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4644E0u, 0x27F914u, 0x27F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F91Cu;
label_27f91c:
    // 0x27f91c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x27f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_27f920:
    // 0x27f920: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27f920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27f924:
    // 0x27f924: 0xc0402d4  jal         func_100B50
label_27f928:
    if (ctx->pc == 0x27F928u) {
        ctx->pc = 0x27F92Cu;
        goto label_27f92c;
    }
    ctx->pc = 0x27F924u;
    SET_GPR_U32(ctx, 31, 0x27F92Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27F924u, 0x27F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F92Cu;
label_27f92c:
    // 0x27f92c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x27f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_27f930:
    // 0x27f930: 0x2785a228  addiu       $a1, $gp, -0x5DD8
    ctx->pc = 0x27f930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943272));
label_27f934:
    // 0x27f934: 0xc0424e8  jal         func_1093A0
label_27f938:
    if (ctx->pc == 0x27F938u) {
        ctx->pc = 0x27F93Cu;
        goto label_27f93c;
    }
    ctx->pc = 0x27F934u;
    SET_GPR_U32(ctx, 31, 0x27F93Cu);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x27F934u, 0x27F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F93Cu;
label_27f93c:
    // 0x27f93c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x27f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_27f940:
    // 0x27f940: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27f940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27f944:
    // 0x27f944: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_27f948:
    if (ctx->pc == 0x27F948u) {
        ctx->pc = 0x27F94Cu;
        goto label_27f94c;
    }
    ctx->pc = 0x27F944u;
    {
        const bool branch_taken_0x27f944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f944) {
            ctx->pc = 0x27F980u;
            goto label_27f980;
        }
    }
    ctx->pc = 0x27F94Cu;
label_27f94c:
    // 0x27f94c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x27f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_27f950:
    // 0x27f950: 0x90420066  lbu         $v0, 0x66($v0)
    ctx->pc = 0x27f950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 102)));
label_27f954:
    // 0x27f954: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27f954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27f958:
    // 0x27f958: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_27f95c:
    if (ctx->pc == 0x27F95Cu) {
        ctx->pc = 0x27F960u;
        goto label_27f960;
    }
    ctx->pc = 0x27F958u;
    {
        const bool branch_taken_0x27f958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f958) {
            ctx->pc = 0x27F980u;
            goto label_27f980;
        }
    }
    ctx->pc = 0x27F960u;
label_27f960:
    // 0x27f960: 0xa3a0018e  sb          $zero, 0x18E($sp)
    ctx->pc = 0x27f960u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 398), (uint8_t)GPR_U32(ctx, 0));
label_27f964:
    // 0x27f964: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x27f964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_27f968:
    // 0x27f968: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27f968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27f96c:
    // 0x27f96c: 0xc0402d4  jal         func_100B50
label_27f970:
    if (ctx->pc == 0x27F970u) {
        ctx->pc = 0x27F974u;
        goto label_27f974;
    }
    ctx->pc = 0x27F96Cu;
    SET_GPR_U32(ctx, 31, 0x27F974u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27F96Cu, 0x27F974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F974u;
label_27f974:
    // 0x27f974: 0x93a2018e  lbu         $v0, 0x18E($sp)
    ctx->pc = 0x27f974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 398)));
label_27f978:
    // 0x27f978: 0x10000152  b           . + 4 + (0x152 << 2)
label_27f97c:
    if (ctx->pc == 0x27F97Cu) {
        ctx->pc = 0x27F980u;
        goto label_27f980;
    }
    ctx->pc = 0x27F978u;
    {
        const bool branch_taken_0x27f978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f978) {
            ctx->pc = 0x27FEC4u;
            goto label_27fec4;
        }
    }
    ctx->pc = 0x27F980u;
label_27f980:
    // 0x27f980: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x27f980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_27f984:
    // 0x27f984: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27f984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27f988:
    // 0x27f988: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_27f98c:
    if (ctx->pc == 0x27F98Cu) {
        ctx->pc = 0x27F990u;
        goto label_27f990;
    }
    ctx->pc = 0x27F988u;
    {
        const bool branch_taken_0x27f988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f988) {
            ctx->pc = 0x27F99Cu;
            goto label_27f99c;
        }
    }
    ctx->pc = 0x27F990u;
label_27f990:
    // 0x27f990: 0x2793a230  addiu       $s3, $gp, -0x5DD0
    ctx->pc = 0x27f990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943280));
label_27f994:
    // 0x27f994: 0x10000002  b           . + 4 + (0x2 << 2)
label_27f998:
    if (ctx->pc == 0x27F998u) {
        ctx->pc = 0x27F99Cu;
        goto label_27f99c;
    }
    ctx->pc = 0x27F994u;
    {
        const bool branch_taken_0x27f994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f994) {
            ctx->pc = 0x27F9A0u;
            goto label_27f9a0;
        }
    }
    ctx->pc = 0x27F99Cu;
label_27f99c:
    // 0x27f99c: 0x2793a234  addiu       $s3, $gp, -0x5DCC
    ctx->pc = 0x27f99cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943284));
label_27f9a0:
    // 0x27f9a0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x27f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_27f9a4:
    // 0x27f9a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27f9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27f9a8:
    // 0x27f9a8: 0xc040304  jal         func_100C10
label_27f9ac:
    if (ctx->pc == 0x27F9ACu) {
        ctx->pc = 0x27F9B0u;
        goto label_27f9b0;
    }
    ctx->pc = 0x27F9A8u;
    SET_GPR_U32(ctx, 31, 0x27F9B0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x27F9A8u, 0x27F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9B0u;
label_27f9b0:
    // 0x27f9b0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27f9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27f9b4:
    // 0x27f9b4: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x27f9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_27f9b8:
    // 0x27f9b8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x27f9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_27f9bc:
    // 0x27f9bc: 0xc119d74  jal         func_4675D0
label_27f9c0:
    if (ctx->pc == 0x27F9C0u) {
        ctx->pc = 0x27F9C4u;
        goto label_27f9c4;
    }
    ctx->pc = 0x27F9BCu;
    SET_GPR_U32(ctx, 31, 0x27F9C4u);
    ctx->pc = 0x4675D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4675D0u, 0x27F9BCu, 0x27F9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9C4u;
label_27f9c4:
    // 0x27f9c4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x27f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_27f9c8:
    // 0x27f9c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27f9cc:
    // 0x27f9cc: 0xc0402d4  jal         func_100B50
label_27f9d0:
    if (ctx->pc == 0x27F9D0u) {
        ctx->pc = 0x27F9D4u;
        goto label_27f9d4;
    }
    ctx->pc = 0x27F9CCu;
    SET_GPR_U32(ctx, 31, 0x27F9D4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27F9CCu, 0x27F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9D4u;
label_27f9d4:
    // 0x27f9d4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27f9d8:
    // 0x27f9d8: 0xc119db4  jal         func_4676D0
label_27f9dc:
    if (ctx->pc == 0x27F9DCu) {
        ctx->pc = 0x27F9E0u;
        goto label_27f9e0;
    }
    ctx->pc = 0x27F9D8u;
    SET_GPR_U32(ctx, 31, 0x27F9E0u);
    ctx->pc = 0x4676D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4676D0u, 0x27F9D8u, 0x27F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9E0u;
label_27f9e0:
    // 0x27f9e0: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_27f9e4:
    if (ctx->pc == 0x27F9E4u) {
        ctx->pc = 0x27F9E8u;
        goto label_27f9e8;
    }
    ctx->pc = 0x27F9E0u;
    {
        const bool branch_taken_0x27f9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f9e0) {
            ctx->pc = 0x27FBB8u;
            goto label_27fbb8;
        }
    }
    ctx->pc = 0x27F9E8u;
label_27f9e8:
    // 0x27f9e8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27f9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27f9ec:
    // 0x27f9ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27f9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f9f0:
    // 0x27f9f0: 0xc08ec98  jal         func_23B260
label_27f9f4:
    if (ctx->pc == 0x27F9F4u) {
        ctx->pc = 0x27F9F8u;
        goto label_27f9f8;
    }
    ctx->pc = 0x27F9F0u;
    SET_GPR_U32(ctx, 31, 0x27F9F8u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x27F9F0u, 0x27F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9F8u;
label_27f9f8:
    // 0x27f9f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27f9fc:
    // 0x27f9fc: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x27f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_27fa00:
    // 0x27fa00: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27fa04:
    // 0x27fa04: 0x27a50188  addiu       $a1, $sp, 0x188
    ctx->pc = 0x27fa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_27fa08:
    // 0x27fa08: 0xc0422a8  jal         func_108AA0
label_27fa0c:
    if (ctx->pc == 0x27FA0Cu) {
        ctx->pc = 0x27FA10u;
        goto label_27fa10;
    }
    ctx->pc = 0x27FA08u;
    SET_GPR_U32(ctx, 31, 0x27FA10u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x27FA08u, 0x27FA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA10u;
label_27fa10:
    // 0x27fa10: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x27fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_27fa14:
    // 0x27fa14: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x27fa14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_27fa18:
    // 0x27fa18: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_27fa1c:
    if (ctx->pc == 0x27FA1Cu) {
        ctx->pc = 0x27FA20u;
        goto label_27fa20;
    }
    ctx->pc = 0x27FA18u;
    {
        const bool branch_taken_0x27fa18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fa18) {
            ctx->pc = 0x27FA5Cu;
            goto label_27fa5c;
        }
    }
    ctx->pc = 0x27FA20u;
label_27fa20:
    // 0x27fa20: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27fa24:
    // 0x27fa24: 0xc119e7c  jal         func_4679F0
label_27fa28:
    if (ctx->pc == 0x27FA28u) {
        ctx->pc = 0x27FA2Cu;
        goto label_27fa2c;
    }
    ctx->pc = 0x27FA24u;
    SET_GPR_U32(ctx, 31, 0x27FA2Cu);
    ctx->pc = 0x4679F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4679F0u, 0x27FA24u, 0x27FA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA2Cu;
label_27fa2c:
    // 0x27fa2c: 0xa3a0018d  sb          $zero, 0x18D($sp)
    ctx->pc = 0x27fa2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 397), (uint8_t)GPR_U32(ctx, 0));
label_27fa30:
    // 0x27fa30: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27fa34:
    // 0x27fa34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fa34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fa38:
    // 0x27fa38: 0xc119d90  jal         func_467640
label_27fa3c:
    if (ctx->pc == 0x27FA3Cu) {
        ctx->pc = 0x27FA40u;
        goto label_27fa40;
    }
    ctx->pc = 0x27FA38u;
    SET_GPR_U32(ctx, 31, 0x27FA40u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x27FA38u, 0x27FA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA40u;
label_27fa40:
    // 0x27fa40: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x27fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_27fa44:
    // 0x27fa44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fa48:
    // 0x27fa48: 0xc0402d4  jal         func_100B50
label_27fa4c:
    if (ctx->pc == 0x27FA4Cu) {
        ctx->pc = 0x27FA50u;
        goto label_27fa50;
    }
    ctx->pc = 0x27FA48u;
    SET_GPR_U32(ctx, 31, 0x27FA50u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FA48u, 0x27FA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA50u;
label_27fa50:
    // 0x27fa50: 0x93a2018d  lbu         $v0, 0x18D($sp)
    ctx->pc = 0x27fa50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 397)));
label_27fa54:
    // 0x27fa54: 0x1000011b  b           . + 4 + (0x11B << 2)
label_27fa58:
    if (ctx->pc == 0x27FA58u) {
        ctx->pc = 0x27FA5Cu;
        goto label_27fa5c;
    }
    ctx->pc = 0x27FA54u;
    {
        const bool branch_taken_0x27fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fa54) {
            ctx->pc = 0x27FEC4u;
            goto label_27fec4;
        }
    }
    ctx->pc = 0x27FA5Cu;
label_27fa5c:
    // 0x27fa5c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x27fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_27fa60:
    // 0x27fa60: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x27fa60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_27fa64:
    // 0x27fa64: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_27fa68:
    if (ctx->pc == 0x27FA68u) {
        ctx->pc = 0x27FA6Cu;
        goto label_27fa6c;
    }
    ctx->pc = 0x27FA64u;
    {
        const bool branch_taken_0x27fa64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fa64) {
            ctx->pc = 0x27FA8Cu;
            goto label_27fa8c;
        }
    }
    ctx->pc = 0x27FA6Cu;
label_27fa6c:
    // 0x27fa6c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27fa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27fa70:
    // 0x27fa70: 0x2785a21c  addiu       $a1, $gp, -0x5DE4
    ctx->pc = 0x27fa70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943260));
label_27fa74:
    // 0x27fa74: 0xc08cf20  jal         func_233C80
label_27fa78:
    if (ctx->pc == 0x27FA78u) {
        ctx->pc = 0x27FA7Cu;
        goto label_27fa7c;
    }
    ctx->pc = 0x27FA74u;
    SET_GPR_U32(ctx, 31, 0x27FA7Cu);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x27FA74u, 0x27FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA7Cu;
label_27fa7c:
    // 0x27fa7c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27fa80:
    // 0x27fa80: 0x2785a220  addiu       $a1, $gp, -0x5DE0
    ctx->pc = 0x27fa80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943264));
label_27fa84:
    // 0x27fa84: 0xc042298  jal         func_108A60
label_27fa88:
    if (ctx->pc == 0x27FA88u) {
        ctx->pc = 0x27FA8Cu;
        goto label_27fa8c;
    }
    ctx->pc = 0x27FA84u;
    SET_GPR_U32(ctx, 31, 0x27FA8Cu);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x27FA84u, 0x27FA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA8Cu;
label_27fa8c:
    // 0x27fa8c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x27fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_27fa90:
    // 0x27fa90: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x27fa90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_27fa94:
    // 0x27fa94: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_27fa98:
    if (ctx->pc == 0x27FA98u) {
        ctx->pc = 0x27FA9Cu;
        goto label_27fa9c;
    }
    ctx->pc = 0x27FA94u;
    {
        const bool branch_taken_0x27fa94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fa94) {
            ctx->pc = 0x27FAFCu;
            goto label_27fafc;
        }
    }
    ctx->pc = 0x27FA9Cu;
label_27fa9c:
    // 0x27fa9c: 0xafb20184  sw          $s2, 0x184($sp)
    ctx->pc = 0x27fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 18));
label_27faa0:
    // 0x27faa0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27faa4:
    // 0x27faa4: 0x27a50184  addiu       $a1, $sp, 0x184
    ctx->pc = 0x27faa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_27faa8:
    // 0x27faa8: 0xc042298  jal         func_108A60
label_27faac:
    if (ctx->pc == 0x27FAACu) {
        ctx->pc = 0x27FAB0u;
        goto label_27fab0;
    }
    ctx->pc = 0x27FAA8u;
    SET_GPR_U32(ctx, 31, 0x27FAB0u);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x27FAA8u, 0x27FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FAB0u;
label_27fab0:
    // 0x27fab0: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x27fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_27fab4:
    // 0x27fab4: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x27fab4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_27fab8:
    // 0x27fab8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_27fabc:
    if (ctx->pc == 0x27FABCu) {
        ctx->pc = 0x27FAC0u;
        goto label_27fac0;
    }
    ctx->pc = 0x27FAB8u;
    {
        const bool branch_taken_0x27fab8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fab8) {
            ctx->pc = 0x27FAFCu;
            goto label_27fafc;
        }
    }
    ctx->pc = 0x27FAC0u;
label_27fac0:
    // 0x27fac0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27fac4:
    // 0x27fac4: 0xc119e7c  jal         func_4679F0
label_27fac8:
    if (ctx->pc == 0x27FAC8u) {
        ctx->pc = 0x27FACCu;
        goto label_27facc;
    }
    ctx->pc = 0x27FAC4u;
    SET_GPR_U32(ctx, 31, 0x27FACCu);
    ctx->pc = 0x4679F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4679F0u, 0x27FAC4u, 0x27FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FACCu;
label_27facc:
    // 0x27facc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x27faccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fad0:
    // 0x27fad0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27fad4:
    // 0x27fad4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fad8:
    // 0x27fad8: 0xc119d90  jal         func_467640
label_27fadc:
    if (ctx->pc == 0x27FADCu) {
        ctx->pc = 0x27FAE0u;
        goto label_27fae0;
    }
    ctx->pc = 0x27FAD8u;
    SET_GPR_U32(ctx, 31, 0x27FAE0u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x27FAD8u, 0x27FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FAE0u;
label_27fae0:
    // 0x27fae0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x27fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_27fae4:
    // 0x27fae4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fae8:
    // 0x27fae8: 0xc0402d4  jal         func_100B50
label_27faec:
    if (ctx->pc == 0x27FAECu) {
        ctx->pc = 0x27FAF0u;
        goto label_27faf0;
    }
    ctx->pc = 0x27FAE8u;
    SET_GPR_U32(ctx, 31, 0x27FAF0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FAE8u, 0x27FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FAF0u;
label_27faf0:
    // 0x27faf0: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x27faf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27faf4:
    // 0x27faf4: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_27faf8:
    if (ctx->pc == 0x27FAF8u) {
        ctx->pc = 0x27FAFCu;
        goto label_27fafc;
    }
    ctx->pc = 0x27FAF4u;
    {
        const bool branch_taken_0x27faf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27faf4) {
            ctx->pc = 0x27FEC4u;
            goto label_27fec4;
        }
    }
    ctx->pc = 0x27FAFCu;
label_27fafc:
    // 0x27fafc: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x27fafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_27fb00:
    // 0x27fb00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27fb00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27fb04:
    // 0x27fb04: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x27fb04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_27fb08:
    // 0x27fb08: 0x320f809  jalr        $t9
label_27fb0c:
    if (ctx->pc == 0x27FB0Cu) {
        ctx->pc = 0x27FB10u;
        goto label_27fb10;
    }
    ctx->pc = 0x27FB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27FB10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FB08u, 0x27FB10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27FB10u;
label_27fb10:
    // 0x27fb10: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x27fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_27fb14:
    // 0x27fb14: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x27fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_27fb18:
    // 0x27fb18: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x27fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_27fb1c:
    // 0x27fb1c: 0xc085538  jal         func_2154E0
label_27fb20:
    if (ctx->pc == 0x27FB20u) {
        ctx->pc = 0x27FB24u;
        goto label_27fb24;
    }
    ctx->pc = 0x27FB1Cu;
    SET_GPR_U32(ctx, 31, 0x27FB24u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27FB1Cu, 0x27FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB24u;
label_27fb24:
    // 0x27fb24: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x27fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_27fb28:
    // 0x27fb28: 0x8fa4017c  lw          $a0, 0x17C($sp)
    ctx->pc = 0x27fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_27fb2c:
    // 0x27fb2c: 0xc091aa8  jal         func_246AA0
label_27fb30:
    if (ctx->pc == 0x27FB30u) {
        ctx->pc = 0x27FB34u;
        goto label_27fb34;
    }
    ctx->pc = 0x27FB2Cu;
    SET_GPR_U32(ctx, 31, 0x27FB34u);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x27FB2Cu, 0x27FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB34u;
label_27fb34:
    // 0x27fb34: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27fb34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fb38:
    // 0x27fb38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27fb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27fb3c:
    // 0x27fb3c: 0xc040e7c  jal         func_1039F0
label_27fb40:
    if (ctx->pc == 0x27FB40u) {
        ctx->pc = 0x27FB44u;
        goto label_27fb44;
    }
    ctx->pc = 0x27FB3Cu;
    SET_GPR_U32(ctx, 31, 0x27FB44u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27FB3Cu, 0x27FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB44u;
label_27fb44:
    // 0x27fb44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27fb44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fb48:
    // 0x27fb48: 0x10000012  b           . + 4 + (0x12 << 2)
label_27fb4c:
    if (ctx->pc == 0x27FB4Cu) {
        ctx->pc = 0x27FB50u;
        goto label_27fb50;
    }
    ctx->pc = 0x27FB48u;
    {
        const bool branch_taken_0x27fb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fb48) {
            ctx->pc = 0x27FB94u;
            goto label_27fb94;
        }
    }
    ctx->pc = 0x27FB50u;
label_27fb50:
    // 0x27fb50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27fb54:
    // 0x27fb54: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27fb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27fb58:
    // 0x27fb58: 0xc085538  jal         func_2154E0
label_27fb5c:
    if (ctx->pc == 0x27FB5Cu) {
        ctx->pc = 0x27FB60u;
        goto label_27fb60;
    }
    ctx->pc = 0x27FB58u;
    SET_GPR_U32(ctx, 31, 0x27FB60u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27FB58u, 0x27FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB60u;
label_27fb60:
    // 0x27fb60: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x27fb60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
label_27fb64:
    // 0x27fb64: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x27fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_27fb68:
    // 0x27fb68: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x27fb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27fb6c:
    // 0x27fb6c: 0xc0a36d8  jal         func_28DB60
label_27fb70:
    if (ctx->pc == 0x27FB70u) {
        ctx->pc = 0x27FB74u;
        goto label_27fb74;
    }
    ctx->pc = 0x27FB6Cu;
    SET_GPR_U32(ctx, 31, 0x27FB74u);
    ctx->pc = 0x28DB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB60u, 0x27FB6Cu, 0x27FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB74u;
label_27fb74:
    // 0x27fb74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27fb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27fb78:
    // 0x27fb78: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x27fb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_27fb7c:
    // 0x27fb7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27fb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_27fb80:
    // 0x27fb80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27fb80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27fb84:
    // 0x27fb84: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27fb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_27fb88:
    // 0x27fb88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27fb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_27fb8c:
    // 0x27fb8c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x27fb8cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27fb90:
    // 0x27fb90: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x27fb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_27fb94:
    // 0x27fb94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27fb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27fb98:
    // 0x27fb98: 0xc04147c  jal         func_1051F0
label_27fb9c:
    if (ctx->pc == 0x27FB9Cu) {
        ctx->pc = 0x27FBA0u;
        goto label_27fba0;
    }
    ctx->pc = 0x27FB98u;
    SET_GPR_U32(ctx, 31, 0x27FBA0u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27FB98u, 0x27FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBA0u;
label_27fba0:
    // 0x27fba0: 0x1602ffeb  bne         $s0, $v0, . + 4 + (-0x15 << 2)
label_27fba4:
    if (ctx->pc == 0x27FBA4u) {
        ctx->pc = 0x27FBA8u;
        goto label_27fba8;
    }
    ctx->pc = 0x27FBA0u;
    {
        const bool branch_taken_0x27fba0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x27fba0) {
            ctx->pc = 0x27FB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27fb50;
        }
    }
    ctx->pc = 0x27FBA8u;
label_27fba8:
    // 0x27fba8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27fbac:
    // 0x27fbac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27fbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27fbb0:
    // 0x27fbb0: 0xc08ec98  jal         func_23B260
label_27fbb4:
    if (ctx->pc == 0x27FBB4u) {
        ctx->pc = 0x27FBB8u;
        goto label_27fbb8;
    }
    ctx->pc = 0x27FBB0u;
    SET_GPR_U32(ctx, 31, 0x27FBB8u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x27FBB0u, 0x27FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBB8u;
label_27fbb8:
    // 0x27fbb8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x27fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_27fbbc:
    // 0x27fbbc: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x27fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_27fbc0:
    // 0x27fbc0: 0xc041968  jal         func_1065A0
label_27fbc4:
    if (ctx->pc == 0x27FBC4u) {
        ctx->pc = 0x27FBC8u;
        goto label_27fbc8;
    }
    ctx->pc = 0x27FBC0u;
    SET_GPR_U32(ctx, 31, 0x27FBC8u);
    ctx->pc = 0x1065A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1065A0u, 0x27FBC0u, 0x27FBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBC8u;
label_27fbc8:
    // 0x27fbc8: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x27fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
label_27fbcc:
    // 0x27fbcc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27fbd0:
    // 0x27fbd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27fbd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27fbd4:
    // 0x27fbd4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x27fbd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_27fbd8:
    // 0x27fbd8: 0x320f809  jalr        $t9
label_27fbdc:
    if (ctx->pc == 0x27FBDCu) {
        ctx->pc = 0x27FBE0u;
        goto label_27fbe0;
    }
    ctx->pc = 0x27FBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27FBE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FBD8u, 0x27FBE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27FBE0u;
label_27fbe0:
    // 0x27fbe0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27fbe4:
    // 0x27fbe4: 0x14430031  bne         $v0, $v1, . + 4 + (0x31 << 2)
label_27fbe8:
    if (ctx->pc == 0x27FBE8u) {
        ctx->pc = 0x27FBECu;
        goto label_27fbec;
    }
    ctx->pc = 0x27FBE4u;
    {
        const bool branch_taken_0x27fbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27fbe4) {
            ctx->pc = 0x27FCACu;
            goto label_27fcac;
        }
    }
    ctx->pc = 0x27FBECu;
label_27fbec:
    // 0x27fbec: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x27fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_27fbf0:
    // 0x27fbf0: 0xc041b48  jal         func_106D20
label_27fbf4:
    if (ctx->pc == 0x27FBF4u) {
        ctx->pc = 0x27FBF8u;
        goto label_27fbf8;
    }
    ctx->pc = 0x27FBF0u;
    SET_GPR_U32(ctx, 31, 0x27FBF8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x27FBF0u, 0x27FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBF8u;
label_27fbf8:
    // 0x27fbf8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x27fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_27fbfc:
    // 0x27fbfc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x27fbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_27fc00:
    // 0x27fc00: 0x24a5d3d0  addiu       $a1, $a1, -0x2C30
    ctx->pc = 0x27fc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955984));
label_27fc04:
    // 0x27fc04: 0xc040304  jal         func_100C10
label_27fc08:
    if (ctx->pc == 0x27FC08u) {
        ctx->pc = 0x27FC0Cu;
        goto label_27fc0c;
    }
    ctx->pc = 0x27FC04u;
    SET_GPR_U32(ctx, 31, 0x27FC0Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x27FC04u, 0x27FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC0Cu;
label_27fc0c:
    // 0x27fc0c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x27fc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_27fc10:
    // 0x27fc10: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x27fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_27fc14:
    // 0x27fc14: 0xc040304  jal         func_100C10
label_27fc18:
    if (ctx->pc == 0x27FC18u) {
        ctx->pc = 0x27FC1Cu;
        goto label_27fc1c;
    }
    ctx->pc = 0x27FC14u;
    SET_GPR_U32(ctx, 31, 0x27FC1Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x27FC14u, 0x27FC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC1Cu;
label_27fc1c:
    // 0x27fc1c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x27fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_27fc20:
    // 0x27fc20: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x27fc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_27fc24:
    // 0x27fc24: 0xc1190f4  jal         func_4643D0
label_27fc28:
    if (ctx->pc == 0x27FC28u) {
        ctx->pc = 0x27FC2Cu;
        goto label_27fc2c;
    }
    ctx->pc = 0x27FC24u;
    SET_GPR_U32(ctx, 31, 0x27FC2Cu);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x27FC24u, 0x27FC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC2Cu;
label_27fc2c:
    // 0x27fc2c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x27fc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_27fc30:
    // 0x27fc30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fc34:
    // 0x27fc34: 0xc0402d4  jal         func_100B50
label_27fc38:
    if (ctx->pc == 0x27FC38u) {
        ctx->pc = 0x27FC3Cu;
        goto label_27fc3c;
    }
    ctx->pc = 0x27FC34u;
    SET_GPR_U32(ctx, 31, 0x27FC3Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FC34u, 0x27FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC3Cu;
label_27fc3c:
    // 0x27fc3c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x27fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_27fc40:
    // 0x27fc40: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x27fc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_27fc44:
    // 0x27fc44: 0xc048c50  jal         func_123140
label_27fc48:
    if (ctx->pc == 0x27FC48u) {
        ctx->pc = 0x27FC4Cu;
        goto label_27fc4c;
    }
    ctx->pc = 0x27FC44u;
    SET_GPR_U32(ctx, 31, 0x27FC4Cu);
    ctx->pc = 0x123140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123140u, 0x27FC44u, 0x27FC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC4Cu;
label_27fc4c:
    // 0x27fc4c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x27fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_27fc50:
    // 0x27fc50: 0x2785a238  addiu       $a1, $gp, -0x5DC8
    ctx->pc = 0x27fc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943288));
label_27fc54:
    // 0x27fc54: 0xc0424e8  jal         func_1093A0
label_27fc58:
    if (ctx->pc == 0x27FC58u) {
        ctx->pc = 0x27FC5Cu;
        goto label_27fc5c;
    }
    ctx->pc = 0x27FC54u;
    SET_GPR_U32(ctx, 31, 0x27FC5Cu);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x27FC54u, 0x27FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC5Cu;
label_27fc5c:
    // 0x27fc5c: 0xc12246c  jal         func_4891B0
label_27fc60:
    if (ctx->pc == 0x27FC60u) {
        ctx->pc = 0x27FC64u;
        goto label_27fc64;
    }
    ctx->pc = 0x27FC5Cu;
    SET_GPR_U32(ctx, 31, 0x27FC64u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27FC5Cu, 0x27FC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC64u;
label_27fc64:
    // 0x27fc64: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x27fc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_27fc68:
    // 0x27fc68: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x27fc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_27fc6c:
    // 0x27fc6c: 0xc041b38  jal         func_106CE0
label_27fc70:
    if (ctx->pc == 0x27FC70u) {
        ctx->pc = 0x27FC74u;
        goto label_27fc74;
    }
    ctx->pc = 0x27FC6Cu;
    SET_GPR_U32(ctx, 31, 0x27FC74u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x27FC6Cu, 0x27FC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC74u;
label_27fc74:
    // 0x27fc74: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x27fc74u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27fc78:
    // 0x27fc78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27fc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fc7c:
    // 0x27fc7c: 0xc1202ac  jal         func_480AB0
label_27fc80:
    if (ctx->pc == 0x27FC80u) {
        ctx->pc = 0x27FC84u;
        goto label_27fc84;
    }
    ctx->pc = 0x27FC7Cu;
    SET_GPR_U32(ctx, 31, 0x27FC84u);
    ctx->pc = 0x480AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480AB0u, 0x27FC7Cu, 0x27FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC84u;
label_27fc84:
    // 0x27fc84: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x27fc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_27fc88:
    // 0x27fc88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fc8c:
    // 0x27fc8c: 0xc0402d4  jal         func_100B50
label_27fc90:
    if (ctx->pc == 0x27FC90u) {
        ctx->pc = 0x27FC94u;
        goto label_27fc94;
    }
    ctx->pc = 0x27FC8Cu;
    SET_GPR_U32(ctx, 31, 0x27FC94u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FC8Cu, 0x27FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC94u;
label_27fc94:
    // 0x27fc94: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x27fc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_27fc98:
    // 0x27fc98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fc9c:
    // 0x27fc9c: 0xc0402d4  jal         func_100B50
label_27fca0:
    if (ctx->pc == 0x27FCA0u) {
        ctx->pc = 0x27FCA4u;
        goto label_27fca4;
    }
    ctx->pc = 0x27FC9Cu;
    SET_GPR_U32(ctx, 31, 0x27FCA4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FC9Cu, 0x27FCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCA4u;
label_27fca4:
    // 0x27fca4: 0x1000007b  b           . + 4 + (0x7B << 2)
label_27fca8:
    if (ctx->pc == 0x27FCA8u) {
        ctx->pc = 0x27FCACu;
        goto label_27fcac;
    }
    ctx->pc = 0x27FCA4u;
    {
        const bool branch_taken_0x27fca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fca4) {
            ctx->pc = 0x27FE94u;
            goto label_27fe94;
        }
    }
    ctx->pc = 0x27FCACu;
label_27fcac:
    // 0x27fcac: 0xc1046a0  jal         func_411A80
label_27fcb0:
    if (ctx->pc == 0x27FCB0u) {
        ctx->pc = 0x27FCB4u;
        goto label_27fcb4;
    }
    ctx->pc = 0x27FCACu;
    SET_GPR_U32(ctx, 31, 0x27FCB4u);
    ctx->pc = 0x411A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411A80u, 0x27FCACu, 0x27FCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCB4u;
label_27fcb4:
    // 0x27fcb4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x27fcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_27fcb8:
    // 0x27fcb8: 0xc041b48  jal         func_106D20
label_27fcbc:
    if (ctx->pc == 0x27FCBCu) {
        ctx->pc = 0x27FCC0u;
        goto label_27fcc0;
    }
    ctx->pc = 0x27FCB8u;
    SET_GPR_U32(ctx, 31, 0x27FCC0u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x27FCB8u, 0x27FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCC0u;
label_27fcc0:
    // 0x27fcc0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x27fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_27fcc4:
    // 0x27fcc4: 0x2785a240  addiu       $a1, $gp, -0x5DC0
    ctx->pc = 0x27fcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943296));
label_27fcc8:
    // 0x27fcc8: 0xc040304  jal         func_100C10
label_27fccc:
    if (ctx->pc == 0x27FCCCu) {
        ctx->pc = 0x27FCD0u;
        goto label_27fcd0;
    }
    ctx->pc = 0x27FCC8u;
    SET_GPR_U32(ctx, 31, 0x27FCD0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x27FCC8u, 0x27FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCD0u;
label_27fcd0:
    // 0x27fcd0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x27fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_27fcd4:
    // 0x27fcd4: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x27fcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_27fcd8:
    // 0x27fcd8: 0xc040304  jal         func_100C10
label_27fcdc:
    if (ctx->pc == 0x27FCDCu) {
        ctx->pc = 0x27FCE0u;
        goto label_27fce0;
    }
    ctx->pc = 0x27FCD8u;
    SET_GPR_U32(ctx, 31, 0x27FCE0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x27FCD8u, 0x27FCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCE0u;
label_27fce0:
    // 0x27fce0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x27fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_27fce4:
    // 0x27fce4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x27fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_27fce8:
    // 0x27fce8: 0xc1190f4  jal         func_4643D0
label_27fcec:
    if (ctx->pc == 0x27FCECu) {
        ctx->pc = 0x27FCF0u;
        goto label_27fcf0;
    }
    ctx->pc = 0x27FCE8u;
    SET_GPR_U32(ctx, 31, 0x27FCF0u);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x27FCE8u, 0x27FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FCF0u;
label_27fcf0:
    // 0x27fcf0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x27fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_27fcf4:
    // 0x27fcf4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fcf8:
    // 0x27fcf8: 0xc0402d4  jal         func_100B50
label_27fcfc:
    if (ctx->pc == 0x27FCFCu) {
        ctx->pc = 0x27FD00u;
        goto label_27fd00;
    }
    ctx->pc = 0x27FCF8u;
    SET_GPR_U32(ctx, 31, 0x27FD00u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FCF8u, 0x27FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD00u;
label_27fd00:
    // 0x27fd00: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x27fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_27fd04:
    // 0x27fd04: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x27fd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_27fd08:
    // 0x27fd08: 0xc048c50  jal         func_123140
label_27fd0c:
    if (ctx->pc == 0x27FD0Cu) {
        ctx->pc = 0x27FD10u;
        goto label_27fd10;
    }
    ctx->pc = 0x27FD08u;
    SET_GPR_U32(ctx, 31, 0x27FD10u);
    ctx->pc = 0x123140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123140u, 0x27FD08u, 0x27FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD10u;
label_27fd10:
    // 0x27fd10: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x27fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_27fd14:
    // 0x27fd14: 0x2785a238  addiu       $a1, $gp, -0x5DC8
    ctx->pc = 0x27fd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943288));
label_27fd18:
    // 0x27fd18: 0xc0424e8  jal         func_1093A0
label_27fd1c:
    if (ctx->pc == 0x27FD1Cu) {
        ctx->pc = 0x27FD20u;
        goto label_27fd20;
    }
    ctx->pc = 0x27FD18u;
    SET_GPR_U32(ctx, 31, 0x27FD20u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x27FD18u, 0x27FD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD20u;
label_27fd20:
    // 0x27fd20: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x27fd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_27fd24:
    // 0x27fd24: 0xc042514  jal         func_109450
label_27fd28:
    if (ctx->pc == 0x27FD28u) {
        ctx->pc = 0x27FD2Cu;
        goto label_27fd2c;
    }
    ctx->pc = 0x27FD24u;
    SET_GPR_U32(ctx, 31, 0x27FD2Cu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x27FD24u, 0x27FD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD2Cu;
label_27fd2c:
    // 0x27fd2c: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x27fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_27fd30:
    // 0x27fd30: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x27fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_27fd34:
    // 0x27fd34: 0x2484d400  addiu       $a0, $a0, -0x2C00
    ctx->pc = 0x27fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956032));
label_27fd38:
    // 0x27fd38: 0xc107156  jal         func_41C558
label_27fd3c:
    if (ctx->pc == 0x27FD3Cu) {
        ctx->pc = 0x27FD40u;
        goto label_27fd40;
    }
    ctx->pc = 0x27FD38u;
    SET_GPR_U32(ctx, 31, 0x27FD40u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x27FD38u, 0x27FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD40u;
label_27fd40:
    // 0x27fd40: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x27fd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_27fd44:
    // 0x27fd44: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x27fd44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_27fd48:
    // 0x27fd48: 0x24a5d420  addiu       $a1, $a1, -0x2BE0
    ctx->pc = 0x27fd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956064));
label_27fd4c:
    // 0x27fd4c: 0xc0424e8  jal         func_1093A0
label_27fd50:
    if (ctx->pc == 0x27FD50u) {
        ctx->pc = 0x27FD54u;
        goto label_27fd54;
    }
    ctx->pc = 0x27FD4Cu;
    SET_GPR_U32(ctx, 31, 0x27FD54u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x27FD4Cu, 0x27FD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD54u;
label_27fd54:
    // 0x27fd54: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x27fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_27fd58:
    // 0x27fd58: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x27fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_27fd5c:
    // 0x27fd5c: 0xc041d6c  jal         func_1075B0
label_27fd60:
    if (ctx->pc == 0x27FD60u) {
        ctx->pc = 0x27FD64u;
        goto label_27fd64;
    }
    ctx->pc = 0x27FD5Cu;
    SET_GPR_U32(ctx, 31, 0x27FD64u);
    ctx->pc = 0x1075B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1075B0u, 0x27FD5Cu, 0x27FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD64u;
label_27fd64:
    // 0x27fd64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27fd64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fd68:
    // 0x27fd68: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x27fd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
label_27fd6c:
    // 0x27fd6c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x27fd6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_27fd70:
    // 0x27fd70: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x27fd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_27fd74:
    // 0x27fd74: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x27fd74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_27fd78:
    // 0x27fd78: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x27fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_27fd7c:
    // 0x27fd7c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x27fd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_27fd80:
    // 0x27fd80: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x27fd80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_27fd84:
    // 0x27fd84: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x27fd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_27fd88:
    // 0x27fd88: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x27fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_27fd8c:
    // 0x27fd8c: 0xc042514  jal         func_109450
label_27fd90:
    if (ctx->pc == 0x27FD90u) {
        ctx->pc = 0x27FD94u;
        goto label_27fd94;
    }
    ctx->pc = 0x27FD8Cu;
    SET_GPR_U32(ctx, 31, 0x27FD94u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x27FD8Cu, 0x27FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD94u;
label_27fd94:
    // 0x27fd94: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x27fd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27fd98:
    // 0x27fd98: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x27fd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_27fd9c:
    // 0x27fd9c: 0xc05db18  jal         func_176C60
label_27fda0:
    if (ctx->pc == 0x27FDA0u) {
        ctx->pc = 0x27FDA4u;
        goto label_27fda4;
    }
    ctx->pc = 0x27FD9Cu;
    SET_GPR_U32(ctx, 31, 0x27FDA4u);
    ctx->pc = 0x176C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C60u, 0x27FD9Cu, 0x27FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDA4u;
label_27fda4:
    // 0x27fda4: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x27fda4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_27fda8:
    // 0x27fda8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x27fda8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_27fdac:
    // 0x27fdac: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x27fdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_27fdb0:
    // 0x27fdb0: 0xc041b38  jal         func_106CE0
label_27fdb4:
    if (ctx->pc == 0x27FDB4u) {
        ctx->pc = 0x27FDB8u;
        goto label_27fdb8;
    }
    ctx->pc = 0x27FDB0u;
    SET_GPR_U32(ctx, 31, 0x27FDB8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x27FDB0u, 0x27FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDB8u;
label_27fdb8:
    // 0x27fdb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27fdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fdbc:
    // 0x27fdbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27fdbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fdc0:
    // 0x27fdc0: 0xc107fa4  jal         func_41FE90
label_27fdc4:
    if (ctx->pc == 0x27FDC4u) {
        ctx->pc = 0x27FDC8u;
        goto label_27fdc8;
    }
    ctx->pc = 0x27FDC0u;
    SET_GPR_U32(ctx, 31, 0x27FDC8u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x27FDC0u, 0x27FDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDC8u;
label_27fdc8:
    // 0x27fdc8: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x27fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_27fdcc:
    // 0x27fdcc: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x27fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_27fdd0:
    // 0x27fdd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27fdd4:
    if (ctx->pc == 0x27FDD4u) {
        ctx->pc = 0x27FDD8u;
        goto label_27fdd8;
    }
    ctx->pc = 0x27FDD0u;
    {
        const bool branch_taken_0x27fdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fdd0) {
            ctx->pc = 0x27FDECu;
            goto label_27fdec;
        }
    }
    ctx->pc = 0x27FDD8u;
label_27fdd8:
    // 0x27fdd8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x27fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_27fddc:
    // 0x27fddc: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x27fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_27fde0:
    // 0x27fde0: 0x27a5016c  addiu       $a1, $sp, 0x16C
    ctx->pc = 0x27fde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_27fde4:
    // 0x27fde4: 0xc04187c  jal         func_1061F0
label_27fde8:
    if (ctx->pc == 0x27FDE8u) {
        ctx->pc = 0x27FDECu;
        goto label_27fdec;
    }
    ctx->pc = 0x27FDE4u;
    SET_GPR_U32(ctx, 31, 0x27FDECu);
    ctx->pc = 0x1061F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061F0u, 0x27FDE4u, 0x27FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDECu;
label_27fdec:
    // 0x27fdec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27fdecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27fdf0:
    // 0x27fdf0: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x27fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_27fdf4:
    // 0x27fdf4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_27fdf8:
    if (ctx->pc == 0x27FDF8u) {
        ctx->pc = 0x27FDFCu;
        goto label_27fdfc;
    }
    ctx->pc = 0x27FDF4u;
    {
        const bool branch_taken_0x27fdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fdf4) {
            ctx->pc = 0x27FD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27fd68;
        }
    }
    ctx->pc = 0x27FDFCu;
label_27fdfc:
    // 0x27fdfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27fe00:
    // 0x27fe00: 0x16220015  bne         $s1, $v0, . + 4 + (0x15 << 2)
label_27fe04:
    if (ctx->pc == 0x27FE04u) {
        ctx->pc = 0x27FE08u;
        goto label_27fe08;
    }
    ctx->pc = 0x27FE00u;
    {
        const bool branch_taken_0x27fe00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x27fe00) {
            ctx->pc = 0x27FE58u;
            goto label_27fe58;
        }
    }
    ctx->pc = 0x27FE08u;
label_27fe08:
    // 0x27fe08: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x27fe08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fe0c:
    // 0x27fe0c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x27fe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_27fe10:
    // 0x27fe10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fe14:
    // 0x27fe14: 0xc0402d4  jal         func_100B50
label_27fe18:
    if (ctx->pc == 0x27FE18u) {
        ctx->pc = 0x27FE1Cu;
        goto label_27fe1c;
    }
    ctx->pc = 0x27FE14u;
    SET_GPR_U32(ctx, 31, 0x27FE1Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FE14u, 0x27FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE1Cu;
label_27fe1c:
    // 0x27fe1c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x27fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_27fe20:
    // 0x27fe20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fe24:
    // 0x27fe24: 0xc0402d4  jal         func_100B50
label_27fe28:
    if (ctx->pc == 0x27FE28u) {
        ctx->pc = 0x27FE2Cu;
        goto label_27fe2c;
    }
    ctx->pc = 0x27FE24u;
    SET_GPR_U32(ctx, 31, 0x27FE2Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FE24u, 0x27FE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE2Cu;
label_27fe2c:
    // 0x27fe2c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27fe30:
    // 0x27fe30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fe34:
    // 0x27fe34: 0xc119d90  jal         func_467640
label_27fe38:
    if (ctx->pc == 0x27FE38u) {
        ctx->pc = 0x27FE3Cu;
        goto label_27fe3c;
    }
    ctx->pc = 0x27FE34u;
    SET_GPR_U32(ctx, 31, 0x27FE3Cu);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x27FE34u, 0x27FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE3Cu;
label_27fe3c:
    // 0x27fe3c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x27fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_27fe40:
    // 0x27fe40: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fe40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fe44:
    // 0x27fe44: 0xc0402d4  jal         func_100B50
label_27fe48:
    if (ctx->pc == 0x27FE48u) {
        ctx->pc = 0x27FE4Cu;
        goto label_27fe4c;
    }
    ctx->pc = 0x27FE44u;
    SET_GPR_U32(ctx, 31, 0x27FE4Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FE44u, 0x27FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE4Cu;
label_27fe4c:
    // 0x27fe4c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x27fe4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27fe50:
    // 0x27fe50: 0x1000001c  b           . + 4 + (0x1C << 2)
label_27fe54:
    if (ctx->pc == 0x27FE54u) {
        ctx->pc = 0x27FE58u;
        goto label_27fe58;
    }
    ctx->pc = 0x27FE50u;
    {
        const bool branch_taken_0x27fe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fe50) {
            ctx->pc = 0x27FEC4u;
            goto label_27fec4;
        }
    }
    ctx->pc = 0x27FE58u;
label_27fe58:
    // 0x27fe58: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x27fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_27fe5c:
    // 0x27fe5c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x27fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_27fe60:
    // 0x27fe60: 0x24050548  addiu       $a1, $zero, 0x548
    ctx->pc = 0x27fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1352));
label_27fe64:
    // 0x27fe64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27fe64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27fe68:
    // 0x27fe68: 0xc041b54  jal         func_106D50
label_27fe6c:
    if (ctx->pc == 0x27FE6Cu) {
        ctx->pc = 0x27FE70u;
        goto label_27fe70;
    }
    ctx->pc = 0x27FE68u;
    SET_GPR_U32(ctx, 31, 0x27FE70u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x27FE68u, 0x27FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE70u;
label_27fe70:
    // 0x27fe70: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x27fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_27fe74:
    // 0x27fe74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fe74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fe78:
    // 0x27fe78: 0xc0402d4  jal         func_100B50
label_27fe7c:
    if (ctx->pc == 0x27FE7Cu) {
        ctx->pc = 0x27FE80u;
        goto label_27fe80;
    }
    ctx->pc = 0x27FE78u;
    SET_GPR_U32(ctx, 31, 0x27FE80u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FE78u, 0x27FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE80u;
label_27fe80:
    // 0x27fe80: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x27fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_27fe84:
    // 0x27fe84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fe84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fe88:
    // 0x27fe88: 0xc0402d4  jal         func_100B50
label_27fe8c:
    if (ctx->pc == 0x27FE8Cu) {
        ctx->pc = 0x27FE90u;
        goto label_27fe90;
    }
    ctx->pc = 0x27FE88u;
    SET_GPR_U32(ctx, 31, 0x27FE90u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FE88u, 0x27FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE90u;
label_27fe90:
    // 0x27fe90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27fe90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fe94:
    // 0x27fe94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27fe98:
    // 0x27fe98: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x27fe98u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27fe9c:
    // 0x27fe9c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27fe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27fea0:
    // 0x27fea0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27fea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27fea4:
    // 0x27fea4: 0xc119d90  jal         func_467640
label_27fea8:
    if (ctx->pc == 0x27FEA8u) {
        ctx->pc = 0x27FEACu;
        goto label_27feac;
    }
    ctx->pc = 0x27FEA4u;
    SET_GPR_U32(ctx, 31, 0x27FEACu);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x27FEA4u, 0x27FEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FEACu;
label_27feac:
    // 0x27feac: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x27feacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_27feb0:
    // 0x27feb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27feb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27feb4:
    // 0x27feb4: 0xc0402d4  jal         func_100B50
label_27feb8:
    if (ctx->pc == 0x27FEB8u) {
        ctx->pc = 0x27FEBCu;
        goto label_27febc;
    }
    ctx->pc = 0x27FEB4u;
    SET_GPR_U32(ctx, 31, 0x27FEBCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x27FEB4u, 0x27FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FEBCu;
label_27febc:
    // 0x27febc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27febcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fec0:
    // 0x27fec0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x27fec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27fec4:
    // 0x27fec4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27fec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_27fec8:
    // 0x27fec8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27fec8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27fecc:
    // 0x27fecc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27feccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27fed0:
    // 0x27fed0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27fed0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27fed4:
    // 0x27fed4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27fed4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27fed8:
    // 0x27fed8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27fed8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27fedc:
    // 0x27fedc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27fedcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27fee0:
    // 0x27fee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27fee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27fee4:
    // 0x27fee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27fee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27fee8:
    // 0x27fee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27fee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27feec:
    // 0x27feec: 0x27bd01c0  addiu       $sp, $sp, 0x1C0
    ctx->pc = 0x27feecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_27fef0:
    // 0x27fef0: 0x3e00008  jr          $ra
label_27fef4:
    if (ctx->pc == 0x27FEF4u) {
        ctx->pc = 0x27FEF8u;
        goto label_27fef8;
    }
    ctx->pc = 0x27FEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FEF8u;
label_27fef8:
    // 0x27fef8: 0x0  nop
    ctx->pc = 0x27fef8u;
    // NOP
label_27fefc:
    // 0x27fefc: 0x0  nop
    ctx->pc = 0x27fefcu;
    // NOP
    ctx->pc = 0x27ff00u;
}
