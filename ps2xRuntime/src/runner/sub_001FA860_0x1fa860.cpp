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

// Function: sub_001FA860
// Address: 0x1fa860 - 0x1fb7f0
void sub_001FA860_0x1fa860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA860_0x1fa860");
#endif

    switch (ctx->pc) {
        case 0x1fa860u: goto label_1fa860;
        case 0x1fa864u: goto label_1fa864;
        case 0x1fa868u: goto label_1fa868;
        case 0x1fa86cu: goto label_1fa86c;
        case 0x1fa870u: goto label_1fa870;
        case 0x1fa874u: goto label_1fa874;
        case 0x1fa878u: goto label_1fa878;
        case 0x1fa87cu: goto label_1fa87c;
        case 0x1fa880u: goto label_1fa880;
        case 0x1fa884u: goto label_1fa884;
        case 0x1fa888u: goto label_1fa888;
        case 0x1fa88cu: goto label_1fa88c;
        case 0x1fa890u: goto label_1fa890;
        case 0x1fa894u: goto label_1fa894;
        case 0x1fa898u: goto label_1fa898;
        case 0x1fa89cu: goto label_1fa89c;
        case 0x1fa8a0u: goto label_1fa8a0;
        case 0x1fa8a4u: goto label_1fa8a4;
        case 0x1fa8a8u: goto label_1fa8a8;
        case 0x1fa8acu: goto label_1fa8ac;
        case 0x1fa8b0u: goto label_1fa8b0;
        case 0x1fa8b4u: goto label_1fa8b4;
        case 0x1fa8b8u: goto label_1fa8b8;
        case 0x1fa8bcu: goto label_1fa8bc;
        case 0x1fa8c0u: goto label_1fa8c0;
        case 0x1fa8c4u: goto label_1fa8c4;
        case 0x1fa8c8u: goto label_1fa8c8;
        case 0x1fa8ccu: goto label_1fa8cc;
        case 0x1fa8d0u: goto label_1fa8d0;
        case 0x1fa8d4u: goto label_1fa8d4;
        case 0x1fa8d8u: goto label_1fa8d8;
        case 0x1fa8dcu: goto label_1fa8dc;
        case 0x1fa8e0u: goto label_1fa8e0;
        case 0x1fa8e4u: goto label_1fa8e4;
        case 0x1fa8e8u: goto label_1fa8e8;
        case 0x1fa8ecu: goto label_1fa8ec;
        case 0x1fa8f0u: goto label_1fa8f0;
        case 0x1fa8f4u: goto label_1fa8f4;
        case 0x1fa8f8u: goto label_1fa8f8;
        case 0x1fa8fcu: goto label_1fa8fc;
        case 0x1fa900u: goto label_1fa900;
        case 0x1fa904u: goto label_1fa904;
        case 0x1fa908u: goto label_1fa908;
        case 0x1fa90cu: goto label_1fa90c;
        case 0x1fa910u: goto label_1fa910;
        case 0x1fa914u: goto label_1fa914;
        case 0x1fa918u: goto label_1fa918;
        case 0x1fa91cu: goto label_1fa91c;
        case 0x1fa920u: goto label_1fa920;
        case 0x1fa924u: goto label_1fa924;
        case 0x1fa928u: goto label_1fa928;
        case 0x1fa92cu: goto label_1fa92c;
        case 0x1fa930u: goto label_1fa930;
        case 0x1fa934u: goto label_1fa934;
        case 0x1fa938u: goto label_1fa938;
        case 0x1fa93cu: goto label_1fa93c;
        case 0x1fa940u: goto label_1fa940;
        case 0x1fa944u: goto label_1fa944;
        case 0x1fa948u: goto label_1fa948;
        case 0x1fa94cu: goto label_1fa94c;
        case 0x1fa950u: goto label_1fa950;
        case 0x1fa954u: goto label_1fa954;
        case 0x1fa958u: goto label_1fa958;
        case 0x1fa95cu: goto label_1fa95c;
        case 0x1fa960u: goto label_1fa960;
        case 0x1fa964u: goto label_1fa964;
        case 0x1fa968u: goto label_1fa968;
        case 0x1fa96cu: goto label_1fa96c;
        case 0x1fa970u: goto label_1fa970;
        case 0x1fa974u: goto label_1fa974;
        case 0x1fa978u: goto label_1fa978;
        case 0x1fa97cu: goto label_1fa97c;
        case 0x1fa980u: goto label_1fa980;
        case 0x1fa984u: goto label_1fa984;
        case 0x1fa988u: goto label_1fa988;
        case 0x1fa98cu: goto label_1fa98c;
        case 0x1fa990u: goto label_1fa990;
        case 0x1fa994u: goto label_1fa994;
        case 0x1fa998u: goto label_1fa998;
        case 0x1fa99cu: goto label_1fa99c;
        case 0x1fa9a0u: goto label_1fa9a0;
        case 0x1fa9a4u: goto label_1fa9a4;
        case 0x1fa9a8u: goto label_1fa9a8;
        case 0x1fa9acu: goto label_1fa9ac;
        case 0x1fa9b0u: goto label_1fa9b0;
        case 0x1fa9b4u: goto label_1fa9b4;
        case 0x1fa9b8u: goto label_1fa9b8;
        case 0x1fa9bcu: goto label_1fa9bc;
        case 0x1fa9c0u: goto label_1fa9c0;
        case 0x1fa9c4u: goto label_1fa9c4;
        case 0x1fa9c8u: goto label_1fa9c8;
        case 0x1fa9ccu: goto label_1fa9cc;
        case 0x1fa9d0u: goto label_1fa9d0;
        case 0x1fa9d4u: goto label_1fa9d4;
        case 0x1fa9d8u: goto label_1fa9d8;
        case 0x1fa9dcu: goto label_1fa9dc;
        case 0x1fa9e0u: goto label_1fa9e0;
        case 0x1fa9e4u: goto label_1fa9e4;
        case 0x1fa9e8u: goto label_1fa9e8;
        case 0x1fa9ecu: goto label_1fa9ec;
        case 0x1fa9f0u: goto label_1fa9f0;
        case 0x1fa9f4u: goto label_1fa9f4;
        case 0x1fa9f8u: goto label_1fa9f8;
        case 0x1fa9fcu: goto label_1fa9fc;
        case 0x1faa00u: goto label_1faa00;
        case 0x1faa04u: goto label_1faa04;
        case 0x1faa08u: goto label_1faa08;
        case 0x1faa0cu: goto label_1faa0c;
        case 0x1faa10u: goto label_1faa10;
        case 0x1faa14u: goto label_1faa14;
        case 0x1faa18u: goto label_1faa18;
        case 0x1faa1cu: goto label_1faa1c;
        case 0x1faa20u: goto label_1faa20;
        case 0x1faa24u: goto label_1faa24;
        case 0x1faa28u: goto label_1faa28;
        case 0x1faa2cu: goto label_1faa2c;
        case 0x1faa30u: goto label_1faa30;
        case 0x1faa34u: goto label_1faa34;
        case 0x1faa38u: goto label_1faa38;
        case 0x1faa3cu: goto label_1faa3c;
        case 0x1faa40u: goto label_1faa40;
        case 0x1faa44u: goto label_1faa44;
        case 0x1faa48u: goto label_1faa48;
        case 0x1faa4cu: goto label_1faa4c;
        case 0x1faa50u: goto label_1faa50;
        case 0x1faa54u: goto label_1faa54;
        case 0x1faa58u: goto label_1faa58;
        case 0x1faa5cu: goto label_1faa5c;
        case 0x1faa60u: goto label_1faa60;
        case 0x1faa64u: goto label_1faa64;
        case 0x1faa68u: goto label_1faa68;
        case 0x1faa6cu: goto label_1faa6c;
        case 0x1faa70u: goto label_1faa70;
        case 0x1faa74u: goto label_1faa74;
        case 0x1faa78u: goto label_1faa78;
        case 0x1faa7cu: goto label_1faa7c;
        case 0x1faa80u: goto label_1faa80;
        case 0x1faa84u: goto label_1faa84;
        case 0x1faa88u: goto label_1faa88;
        case 0x1faa8cu: goto label_1faa8c;
        case 0x1faa90u: goto label_1faa90;
        case 0x1faa94u: goto label_1faa94;
        case 0x1faa98u: goto label_1faa98;
        case 0x1faa9cu: goto label_1faa9c;
        case 0x1faaa0u: goto label_1faaa0;
        case 0x1faaa4u: goto label_1faaa4;
        case 0x1faaa8u: goto label_1faaa8;
        case 0x1faaacu: goto label_1faaac;
        case 0x1faab0u: goto label_1faab0;
        case 0x1faab4u: goto label_1faab4;
        case 0x1faab8u: goto label_1faab8;
        case 0x1faabcu: goto label_1faabc;
        case 0x1faac0u: goto label_1faac0;
        case 0x1faac4u: goto label_1faac4;
        case 0x1faac8u: goto label_1faac8;
        case 0x1faaccu: goto label_1faacc;
        case 0x1faad0u: goto label_1faad0;
        case 0x1faad4u: goto label_1faad4;
        case 0x1faad8u: goto label_1faad8;
        case 0x1faadcu: goto label_1faadc;
        case 0x1faae0u: goto label_1faae0;
        case 0x1faae4u: goto label_1faae4;
        case 0x1faae8u: goto label_1faae8;
        case 0x1faaecu: goto label_1faaec;
        case 0x1faaf0u: goto label_1faaf0;
        case 0x1faaf4u: goto label_1faaf4;
        case 0x1faaf8u: goto label_1faaf8;
        case 0x1faafcu: goto label_1faafc;
        case 0x1fab00u: goto label_1fab00;
        case 0x1fab04u: goto label_1fab04;
        case 0x1fab08u: goto label_1fab08;
        case 0x1fab0cu: goto label_1fab0c;
        case 0x1fab10u: goto label_1fab10;
        case 0x1fab14u: goto label_1fab14;
        case 0x1fab18u: goto label_1fab18;
        case 0x1fab1cu: goto label_1fab1c;
        case 0x1fab20u: goto label_1fab20;
        case 0x1fab24u: goto label_1fab24;
        case 0x1fab28u: goto label_1fab28;
        case 0x1fab2cu: goto label_1fab2c;
        case 0x1fab30u: goto label_1fab30;
        case 0x1fab34u: goto label_1fab34;
        case 0x1fab38u: goto label_1fab38;
        case 0x1fab3cu: goto label_1fab3c;
        case 0x1fab40u: goto label_1fab40;
        case 0x1fab44u: goto label_1fab44;
        case 0x1fab48u: goto label_1fab48;
        case 0x1fab4cu: goto label_1fab4c;
        case 0x1fab50u: goto label_1fab50;
        case 0x1fab54u: goto label_1fab54;
        case 0x1fab58u: goto label_1fab58;
        case 0x1fab5cu: goto label_1fab5c;
        case 0x1fab60u: goto label_1fab60;
        case 0x1fab64u: goto label_1fab64;
        case 0x1fab68u: goto label_1fab68;
        case 0x1fab6cu: goto label_1fab6c;
        case 0x1fab70u: goto label_1fab70;
        case 0x1fab74u: goto label_1fab74;
        case 0x1fab78u: goto label_1fab78;
        case 0x1fab7cu: goto label_1fab7c;
        case 0x1fab80u: goto label_1fab80;
        case 0x1fab84u: goto label_1fab84;
        case 0x1fab88u: goto label_1fab88;
        case 0x1fab8cu: goto label_1fab8c;
        case 0x1fab90u: goto label_1fab90;
        case 0x1fab94u: goto label_1fab94;
        case 0x1fab98u: goto label_1fab98;
        case 0x1fab9cu: goto label_1fab9c;
        case 0x1faba0u: goto label_1faba0;
        case 0x1faba4u: goto label_1faba4;
        case 0x1faba8u: goto label_1faba8;
        case 0x1fabacu: goto label_1fabac;
        case 0x1fabb0u: goto label_1fabb0;
        case 0x1fabb4u: goto label_1fabb4;
        case 0x1fabb8u: goto label_1fabb8;
        case 0x1fabbcu: goto label_1fabbc;
        case 0x1fabc0u: goto label_1fabc0;
        case 0x1fabc4u: goto label_1fabc4;
        case 0x1fabc8u: goto label_1fabc8;
        case 0x1fabccu: goto label_1fabcc;
        case 0x1fabd0u: goto label_1fabd0;
        case 0x1fabd4u: goto label_1fabd4;
        case 0x1fabd8u: goto label_1fabd8;
        case 0x1fabdcu: goto label_1fabdc;
        case 0x1fabe0u: goto label_1fabe0;
        case 0x1fabe4u: goto label_1fabe4;
        case 0x1fabe8u: goto label_1fabe8;
        case 0x1fabecu: goto label_1fabec;
        case 0x1fabf0u: goto label_1fabf0;
        case 0x1fabf4u: goto label_1fabf4;
        case 0x1fabf8u: goto label_1fabf8;
        case 0x1fabfcu: goto label_1fabfc;
        case 0x1fac00u: goto label_1fac00;
        case 0x1fac04u: goto label_1fac04;
        case 0x1fac08u: goto label_1fac08;
        case 0x1fac0cu: goto label_1fac0c;
        case 0x1fac10u: goto label_1fac10;
        case 0x1fac14u: goto label_1fac14;
        case 0x1fac18u: goto label_1fac18;
        case 0x1fac1cu: goto label_1fac1c;
        case 0x1fac20u: goto label_1fac20;
        case 0x1fac24u: goto label_1fac24;
        case 0x1fac28u: goto label_1fac28;
        case 0x1fac2cu: goto label_1fac2c;
        case 0x1fac30u: goto label_1fac30;
        case 0x1fac34u: goto label_1fac34;
        case 0x1fac38u: goto label_1fac38;
        case 0x1fac3cu: goto label_1fac3c;
        case 0x1fac40u: goto label_1fac40;
        case 0x1fac44u: goto label_1fac44;
        case 0x1fac48u: goto label_1fac48;
        case 0x1fac4cu: goto label_1fac4c;
        case 0x1fac50u: goto label_1fac50;
        case 0x1fac54u: goto label_1fac54;
        case 0x1fac58u: goto label_1fac58;
        case 0x1fac5cu: goto label_1fac5c;
        case 0x1fac60u: goto label_1fac60;
        case 0x1fac64u: goto label_1fac64;
        case 0x1fac68u: goto label_1fac68;
        case 0x1fac6cu: goto label_1fac6c;
        case 0x1fac70u: goto label_1fac70;
        case 0x1fac74u: goto label_1fac74;
        case 0x1fac78u: goto label_1fac78;
        case 0x1fac7cu: goto label_1fac7c;
        case 0x1fac80u: goto label_1fac80;
        case 0x1fac84u: goto label_1fac84;
        case 0x1fac88u: goto label_1fac88;
        case 0x1fac8cu: goto label_1fac8c;
        case 0x1fac90u: goto label_1fac90;
        case 0x1fac94u: goto label_1fac94;
        case 0x1fac98u: goto label_1fac98;
        case 0x1fac9cu: goto label_1fac9c;
        case 0x1faca0u: goto label_1faca0;
        case 0x1faca4u: goto label_1faca4;
        case 0x1faca8u: goto label_1faca8;
        case 0x1facacu: goto label_1facac;
        case 0x1facb0u: goto label_1facb0;
        case 0x1facb4u: goto label_1facb4;
        case 0x1facb8u: goto label_1facb8;
        case 0x1facbcu: goto label_1facbc;
        case 0x1facc0u: goto label_1facc0;
        case 0x1facc4u: goto label_1facc4;
        case 0x1facc8u: goto label_1facc8;
        case 0x1facccu: goto label_1faccc;
        case 0x1facd0u: goto label_1facd0;
        case 0x1facd4u: goto label_1facd4;
        case 0x1facd8u: goto label_1facd8;
        case 0x1facdcu: goto label_1facdc;
        case 0x1face0u: goto label_1face0;
        case 0x1face4u: goto label_1face4;
        case 0x1face8u: goto label_1face8;
        case 0x1facecu: goto label_1facec;
        case 0x1facf0u: goto label_1facf0;
        case 0x1facf4u: goto label_1facf4;
        case 0x1facf8u: goto label_1facf8;
        case 0x1facfcu: goto label_1facfc;
        case 0x1fad00u: goto label_1fad00;
        case 0x1fad04u: goto label_1fad04;
        case 0x1fad08u: goto label_1fad08;
        case 0x1fad0cu: goto label_1fad0c;
        case 0x1fad10u: goto label_1fad10;
        case 0x1fad14u: goto label_1fad14;
        case 0x1fad18u: goto label_1fad18;
        case 0x1fad1cu: goto label_1fad1c;
        case 0x1fad20u: goto label_1fad20;
        case 0x1fad24u: goto label_1fad24;
        case 0x1fad28u: goto label_1fad28;
        case 0x1fad2cu: goto label_1fad2c;
        case 0x1fad30u: goto label_1fad30;
        case 0x1fad34u: goto label_1fad34;
        case 0x1fad38u: goto label_1fad38;
        case 0x1fad3cu: goto label_1fad3c;
        case 0x1fad40u: goto label_1fad40;
        case 0x1fad44u: goto label_1fad44;
        case 0x1fad48u: goto label_1fad48;
        case 0x1fad4cu: goto label_1fad4c;
        case 0x1fad50u: goto label_1fad50;
        case 0x1fad54u: goto label_1fad54;
        case 0x1fad58u: goto label_1fad58;
        case 0x1fad5cu: goto label_1fad5c;
        case 0x1fad60u: goto label_1fad60;
        case 0x1fad64u: goto label_1fad64;
        case 0x1fad68u: goto label_1fad68;
        case 0x1fad6cu: goto label_1fad6c;
        case 0x1fad70u: goto label_1fad70;
        case 0x1fad74u: goto label_1fad74;
        case 0x1fad78u: goto label_1fad78;
        case 0x1fad7cu: goto label_1fad7c;
        case 0x1fad80u: goto label_1fad80;
        case 0x1fad84u: goto label_1fad84;
        case 0x1fad88u: goto label_1fad88;
        case 0x1fad8cu: goto label_1fad8c;
        case 0x1fad90u: goto label_1fad90;
        case 0x1fad94u: goto label_1fad94;
        case 0x1fad98u: goto label_1fad98;
        case 0x1fad9cu: goto label_1fad9c;
        case 0x1fada0u: goto label_1fada0;
        case 0x1fada4u: goto label_1fada4;
        case 0x1fada8u: goto label_1fada8;
        case 0x1fadacu: goto label_1fadac;
        case 0x1fadb0u: goto label_1fadb0;
        case 0x1fadb4u: goto label_1fadb4;
        case 0x1fadb8u: goto label_1fadb8;
        case 0x1fadbcu: goto label_1fadbc;
        case 0x1fadc0u: goto label_1fadc0;
        case 0x1fadc4u: goto label_1fadc4;
        case 0x1fadc8u: goto label_1fadc8;
        case 0x1fadccu: goto label_1fadcc;
        case 0x1fadd0u: goto label_1fadd0;
        case 0x1fadd4u: goto label_1fadd4;
        case 0x1fadd8u: goto label_1fadd8;
        case 0x1faddcu: goto label_1faddc;
        case 0x1fade0u: goto label_1fade0;
        case 0x1fade4u: goto label_1fade4;
        case 0x1fade8u: goto label_1fade8;
        case 0x1fadecu: goto label_1fadec;
        case 0x1fadf0u: goto label_1fadf0;
        case 0x1fadf4u: goto label_1fadf4;
        case 0x1fadf8u: goto label_1fadf8;
        case 0x1fadfcu: goto label_1fadfc;
        case 0x1fae00u: goto label_1fae00;
        case 0x1fae04u: goto label_1fae04;
        case 0x1fae08u: goto label_1fae08;
        case 0x1fae0cu: goto label_1fae0c;
        case 0x1fae10u: goto label_1fae10;
        case 0x1fae14u: goto label_1fae14;
        case 0x1fae18u: goto label_1fae18;
        case 0x1fae1cu: goto label_1fae1c;
        case 0x1fae20u: goto label_1fae20;
        case 0x1fae24u: goto label_1fae24;
        case 0x1fae28u: goto label_1fae28;
        case 0x1fae2cu: goto label_1fae2c;
        case 0x1fae30u: goto label_1fae30;
        case 0x1fae34u: goto label_1fae34;
        case 0x1fae38u: goto label_1fae38;
        case 0x1fae3cu: goto label_1fae3c;
        case 0x1fae40u: goto label_1fae40;
        case 0x1fae44u: goto label_1fae44;
        case 0x1fae48u: goto label_1fae48;
        case 0x1fae4cu: goto label_1fae4c;
        case 0x1fae50u: goto label_1fae50;
        case 0x1fae54u: goto label_1fae54;
        case 0x1fae58u: goto label_1fae58;
        case 0x1fae5cu: goto label_1fae5c;
        case 0x1fae60u: goto label_1fae60;
        case 0x1fae64u: goto label_1fae64;
        case 0x1fae68u: goto label_1fae68;
        case 0x1fae6cu: goto label_1fae6c;
        case 0x1fae70u: goto label_1fae70;
        case 0x1fae74u: goto label_1fae74;
        case 0x1fae78u: goto label_1fae78;
        case 0x1fae7cu: goto label_1fae7c;
        case 0x1fae80u: goto label_1fae80;
        case 0x1fae84u: goto label_1fae84;
        case 0x1fae88u: goto label_1fae88;
        case 0x1fae8cu: goto label_1fae8c;
        case 0x1fae90u: goto label_1fae90;
        case 0x1fae94u: goto label_1fae94;
        case 0x1fae98u: goto label_1fae98;
        case 0x1fae9cu: goto label_1fae9c;
        case 0x1faea0u: goto label_1faea0;
        case 0x1faea4u: goto label_1faea4;
        case 0x1faea8u: goto label_1faea8;
        case 0x1faeacu: goto label_1faeac;
        case 0x1faeb0u: goto label_1faeb0;
        case 0x1faeb4u: goto label_1faeb4;
        case 0x1faeb8u: goto label_1faeb8;
        case 0x1faebcu: goto label_1faebc;
        case 0x1faec0u: goto label_1faec0;
        case 0x1faec4u: goto label_1faec4;
        case 0x1faec8u: goto label_1faec8;
        case 0x1faeccu: goto label_1faecc;
        case 0x1faed0u: goto label_1faed0;
        case 0x1faed4u: goto label_1faed4;
        case 0x1faed8u: goto label_1faed8;
        case 0x1faedcu: goto label_1faedc;
        case 0x1faee0u: goto label_1faee0;
        case 0x1faee4u: goto label_1faee4;
        case 0x1faee8u: goto label_1faee8;
        case 0x1faeecu: goto label_1faeec;
        case 0x1faef0u: goto label_1faef0;
        case 0x1faef4u: goto label_1faef4;
        case 0x1faef8u: goto label_1faef8;
        case 0x1faefcu: goto label_1faefc;
        case 0x1faf00u: goto label_1faf00;
        case 0x1faf04u: goto label_1faf04;
        case 0x1faf08u: goto label_1faf08;
        case 0x1faf0cu: goto label_1faf0c;
        case 0x1faf10u: goto label_1faf10;
        case 0x1faf14u: goto label_1faf14;
        case 0x1faf18u: goto label_1faf18;
        case 0x1faf1cu: goto label_1faf1c;
        case 0x1faf20u: goto label_1faf20;
        case 0x1faf24u: goto label_1faf24;
        case 0x1faf28u: goto label_1faf28;
        case 0x1faf2cu: goto label_1faf2c;
        case 0x1faf30u: goto label_1faf30;
        case 0x1faf34u: goto label_1faf34;
        case 0x1faf38u: goto label_1faf38;
        case 0x1faf3cu: goto label_1faf3c;
        case 0x1faf40u: goto label_1faf40;
        case 0x1faf44u: goto label_1faf44;
        case 0x1faf48u: goto label_1faf48;
        case 0x1faf4cu: goto label_1faf4c;
        case 0x1faf50u: goto label_1faf50;
        case 0x1faf54u: goto label_1faf54;
        case 0x1faf58u: goto label_1faf58;
        case 0x1faf5cu: goto label_1faf5c;
        case 0x1faf60u: goto label_1faf60;
        case 0x1faf64u: goto label_1faf64;
        case 0x1faf68u: goto label_1faf68;
        case 0x1faf6cu: goto label_1faf6c;
        case 0x1faf70u: goto label_1faf70;
        case 0x1faf74u: goto label_1faf74;
        case 0x1faf78u: goto label_1faf78;
        case 0x1faf7cu: goto label_1faf7c;
        case 0x1faf80u: goto label_1faf80;
        case 0x1faf84u: goto label_1faf84;
        case 0x1faf88u: goto label_1faf88;
        case 0x1faf8cu: goto label_1faf8c;
        case 0x1faf90u: goto label_1faf90;
        case 0x1faf94u: goto label_1faf94;
        case 0x1faf98u: goto label_1faf98;
        case 0x1faf9cu: goto label_1faf9c;
        case 0x1fafa0u: goto label_1fafa0;
        case 0x1fafa4u: goto label_1fafa4;
        case 0x1fafa8u: goto label_1fafa8;
        case 0x1fafacu: goto label_1fafac;
        case 0x1fafb0u: goto label_1fafb0;
        case 0x1fafb4u: goto label_1fafb4;
        case 0x1fafb8u: goto label_1fafb8;
        case 0x1fafbcu: goto label_1fafbc;
        case 0x1fafc0u: goto label_1fafc0;
        case 0x1fafc4u: goto label_1fafc4;
        case 0x1fafc8u: goto label_1fafc8;
        case 0x1fafccu: goto label_1fafcc;
        case 0x1fafd0u: goto label_1fafd0;
        case 0x1fafd4u: goto label_1fafd4;
        case 0x1fafd8u: goto label_1fafd8;
        case 0x1fafdcu: goto label_1fafdc;
        case 0x1fafe0u: goto label_1fafe0;
        case 0x1fafe4u: goto label_1fafe4;
        case 0x1fafe8u: goto label_1fafe8;
        case 0x1fafecu: goto label_1fafec;
        case 0x1faff0u: goto label_1faff0;
        case 0x1faff4u: goto label_1faff4;
        case 0x1faff8u: goto label_1faff8;
        case 0x1faffcu: goto label_1faffc;
        case 0x1fb000u: goto label_1fb000;
        case 0x1fb004u: goto label_1fb004;
        case 0x1fb008u: goto label_1fb008;
        case 0x1fb00cu: goto label_1fb00c;
        case 0x1fb010u: goto label_1fb010;
        case 0x1fb014u: goto label_1fb014;
        case 0x1fb018u: goto label_1fb018;
        case 0x1fb01cu: goto label_1fb01c;
        case 0x1fb020u: goto label_1fb020;
        case 0x1fb024u: goto label_1fb024;
        case 0x1fb028u: goto label_1fb028;
        case 0x1fb02cu: goto label_1fb02c;
        case 0x1fb030u: goto label_1fb030;
        case 0x1fb034u: goto label_1fb034;
        case 0x1fb038u: goto label_1fb038;
        case 0x1fb03cu: goto label_1fb03c;
        case 0x1fb040u: goto label_1fb040;
        case 0x1fb044u: goto label_1fb044;
        case 0x1fb048u: goto label_1fb048;
        case 0x1fb04cu: goto label_1fb04c;
        case 0x1fb050u: goto label_1fb050;
        case 0x1fb054u: goto label_1fb054;
        case 0x1fb058u: goto label_1fb058;
        case 0x1fb05cu: goto label_1fb05c;
        case 0x1fb060u: goto label_1fb060;
        case 0x1fb064u: goto label_1fb064;
        case 0x1fb068u: goto label_1fb068;
        case 0x1fb06cu: goto label_1fb06c;
        case 0x1fb070u: goto label_1fb070;
        case 0x1fb074u: goto label_1fb074;
        case 0x1fb078u: goto label_1fb078;
        case 0x1fb07cu: goto label_1fb07c;
        case 0x1fb080u: goto label_1fb080;
        case 0x1fb084u: goto label_1fb084;
        case 0x1fb088u: goto label_1fb088;
        case 0x1fb08cu: goto label_1fb08c;
        case 0x1fb090u: goto label_1fb090;
        case 0x1fb094u: goto label_1fb094;
        case 0x1fb098u: goto label_1fb098;
        case 0x1fb09cu: goto label_1fb09c;
        case 0x1fb0a0u: goto label_1fb0a0;
        case 0x1fb0a4u: goto label_1fb0a4;
        case 0x1fb0a8u: goto label_1fb0a8;
        case 0x1fb0acu: goto label_1fb0ac;
        case 0x1fb0b0u: goto label_1fb0b0;
        case 0x1fb0b4u: goto label_1fb0b4;
        case 0x1fb0b8u: goto label_1fb0b8;
        case 0x1fb0bcu: goto label_1fb0bc;
        case 0x1fb0c0u: goto label_1fb0c0;
        case 0x1fb0c4u: goto label_1fb0c4;
        case 0x1fb0c8u: goto label_1fb0c8;
        case 0x1fb0ccu: goto label_1fb0cc;
        case 0x1fb0d0u: goto label_1fb0d0;
        case 0x1fb0d4u: goto label_1fb0d4;
        case 0x1fb0d8u: goto label_1fb0d8;
        case 0x1fb0dcu: goto label_1fb0dc;
        case 0x1fb0e0u: goto label_1fb0e0;
        case 0x1fb0e4u: goto label_1fb0e4;
        case 0x1fb0e8u: goto label_1fb0e8;
        case 0x1fb0ecu: goto label_1fb0ec;
        case 0x1fb0f0u: goto label_1fb0f0;
        case 0x1fb0f4u: goto label_1fb0f4;
        case 0x1fb0f8u: goto label_1fb0f8;
        case 0x1fb0fcu: goto label_1fb0fc;
        case 0x1fb100u: goto label_1fb100;
        case 0x1fb104u: goto label_1fb104;
        case 0x1fb108u: goto label_1fb108;
        case 0x1fb10cu: goto label_1fb10c;
        case 0x1fb110u: goto label_1fb110;
        case 0x1fb114u: goto label_1fb114;
        case 0x1fb118u: goto label_1fb118;
        case 0x1fb11cu: goto label_1fb11c;
        case 0x1fb120u: goto label_1fb120;
        case 0x1fb124u: goto label_1fb124;
        case 0x1fb128u: goto label_1fb128;
        case 0x1fb12cu: goto label_1fb12c;
        case 0x1fb130u: goto label_1fb130;
        case 0x1fb134u: goto label_1fb134;
        case 0x1fb138u: goto label_1fb138;
        case 0x1fb13cu: goto label_1fb13c;
        case 0x1fb140u: goto label_1fb140;
        case 0x1fb144u: goto label_1fb144;
        case 0x1fb148u: goto label_1fb148;
        case 0x1fb14cu: goto label_1fb14c;
        case 0x1fb150u: goto label_1fb150;
        case 0x1fb154u: goto label_1fb154;
        case 0x1fb158u: goto label_1fb158;
        case 0x1fb15cu: goto label_1fb15c;
        case 0x1fb160u: goto label_1fb160;
        case 0x1fb164u: goto label_1fb164;
        case 0x1fb168u: goto label_1fb168;
        case 0x1fb16cu: goto label_1fb16c;
        case 0x1fb170u: goto label_1fb170;
        case 0x1fb174u: goto label_1fb174;
        case 0x1fb178u: goto label_1fb178;
        case 0x1fb17cu: goto label_1fb17c;
        case 0x1fb180u: goto label_1fb180;
        case 0x1fb184u: goto label_1fb184;
        case 0x1fb188u: goto label_1fb188;
        case 0x1fb18cu: goto label_1fb18c;
        case 0x1fb190u: goto label_1fb190;
        case 0x1fb194u: goto label_1fb194;
        case 0x1fb198u: goto label_1fb198;
        case 0x1fb19cu: goto label_1fb19c;
        case 0x1fb1a0u: goto label_1fb1a0;
        case 0x1fb1a4u: goto label_1fb1a4;
        case 0x1fb1a8u: goto label_1fb1a8;
        case 0x1fb1acu: goto label_1fb1ac;
        case 0x1fb1b0u: goto label_1fb1b0;
        case 0x1fb1b4u: goto label_1fb1b4;
        case 0x1fb1b8u: goto label_1fb1b8;
        case 0x1fb1bcu: goto label_1fb1bc;
        case 0x1fb1c0u: goto label_1fb1c0;
        case 0x1fb1c4u: goto label_1fb1c4;
        case 0x1fb1c8u: goto label_1fb1c8;
        case 0x1fb1ccu: goto label_1fb1cc;
        case 0x1fb1d0u: goto label_1fb1d0;
        case 0x1fb1d4u: goto label_1fb1d4;
        case 0x1fb1d8u: goto label_1fb1d8;
        case 0x1fb1dcu: goto label_1fb1dc;
        case 0x1fb1e0u: goto label_1fb1e0;
        case 0x1fb1e4u: goto label_1fb1e4;
        case 0x1fb1e8u: goto label_1fb1e8;
        case 0x1fb1ecu: goto label_1fb1ec;
        case 0x1fb1f0u: goto label_1fb1f0;
        case 0x1fb1f4u: goto label_1fb1f4;
        case 0x1fb1f8u: goto label_1fb1f8;
        case 0x1fb1fcu: goto label_1fb1fc;
        case 0x1fb200u: goto label_1fb200;
        case 0x1fb204u: goto label_1fb204;
        case 0x1fb208u: goto label_1fb208;
        case 0x1fb20cu: goto label_1fb20c;
        case 0x1fb210u: goto label_1fb210;
        case 0x1fb214u: goto label_1fb214;
        case 0x1fb218u: goto label_1fb218;
        case 0x1fb21cu: goto label_1fb21c;
        case 0x1fb220u: goto label_1fb220;
        case 0x1fb224u: goto label_1fb224;
        case 0x1fb228u: goto label_1fb228;
        case 0x1fb22cu: goto label_1fb22c;
        case 0x1fb230u: goto label_1fb230;
        case 0x1fb234u: goto label_1fb234;
        case 0x1fb238u: goto label_1fb238;
        case 0x1fb23cu: goto label_1fb23c;
        case 0x1fb240u: goto label_1fb240;
        case 0x1fb244u: goto label_1fb244;
        case 0x1fb248u: goto label_1fb248;
        case 0x1fb24cu: goto label_1fb24c;
        case 0x1fb250u: goto label_1fb250;
        case 0x1fb254u: goto label_1fb254;
        case 0x1fb258u: goto label_1fb258;
        case 0x1fb25cu: goto label_1fb25c;
        case 0x1fb260u: goto label_1fb260;
        case 0x1fb264u: goto label_1fb264;
        case 0x1fb268u: goto label_1fb268;
        case 0x1fb26cu: goto label_1fb26c;
        case 0x1fb270u: goto label_1fb270;
        case 0x1fb274u: goto label_1fb274;
        case 0x1fb278u: goto label_1fb278;
        case 0x1fb27cu: goto label_1fb27c;
        case 0x1fb280u: goto label_1fb280;
        case 0x1fb284u: goto label_1fb284;
        case 0x1fb288u: goto label_1fb288;
        case 0x1fb28cu: goto label_1fb28c;
        case 0x1fb290u: goto label_1fb290;
        case 0x1fb294u: goto label_1fb294;
        case 0x1fb298u: goto label_1fb298;
        case 0x1fb29cu: goto label_1fb29c;
        case 0x1fb2a0u: goto label_1fb2a0;
        case 0x1fb2a4u: goto label_1fb2a4;
        case 0x1fb2a8u: goto label_1fb2a8;
        case 0x1fb2acu: goto label_1fb2ac;
        case 0x1fb2b0u: goto label_1fb2b0;
        case 0x1fb2b4u: goto label_1fb2b4;
        case 0x1fb2b8u: goto label_1fb2b8;
        case 0x1fb2bcu: goto label_1fb2bc;
        case 0x1fb2c0u: goto label_1fb2c0;
        case 0x1fb2c4u: goto label_1fb2c4;
        case 0x1fb2c8u: goto label_1fb2c8;
        case 0x1fb2ccu: goto label_1fb2cc;
        case 0x1fb2d0u: goto label_1fb2d0;
        case 0x1fb2d4u: goto label_1fb2d4;
        case 0x1fb2d8u: goto label_1fb2d8;
        case 0x1fb2dcu: goto label_1fb2dc;
        case 0x1fb2e0u: goto label_1fb2e0;
        case 0x1fb2e4u: goto label_1fb2e4;
        case 0x1fb2e8u: goto label_1fb2e8;
        case 0x1fb2ecu: goto label_1fb2ec;
        case 0x1fb2f0u: goto label_1fb2f0;
        case 0x1fb2f4u: goto label_1fb2f4;
        case 0x1fb2f8u: goto label_1fb2f8;
        case 0x1fb2fcu: goto label_1fb2fc;
        case 0x1fb300u: goto label_1fb300;
        case 0x1fb304u: goto label_1fb304;
        case 0x1fb308u: goto label_1fb308;
        case 0x1fb30cu: goto label_1fb30c;
        case 0x1fb310u: goto label_1fb310;
        case 0x1fb314u: goto label_1fb314;
        case 0x1fb318u: goto label_1fb318;
        case 0x1fb31cu: goto label_1fb31c;
        case 0x1fb320u: goto label_1fb320;
        case 0x1fb324u: goto label_1fb324;
        case 0x1fb328u: goto label_1fb328;
        case 0x1fb32cu: goto label_1fb32c;
        case 0x1fb330u: goto label_1fb330;
        case 0x1fb334u: goto label_1fb334;
        case 0x1fb338u: goto label_1fb338;
        case 0x1fb33cu: goto label_1fb33c;
        case 0x1fb340u: goto label_1fb340;
        case 0x1fb344u: goto label_1fb344;
        case 0x1fb348u: goto label_1fb348;
        case 0x1fb34cu: goto label_1fb34c;
        case 0x1fb350u: goto label_1fb350;
        case 0x1fb354u: goto label_1fb354;
        case 0x1fb358u: goto label_1fb358;
        case 0x1fb35cu: goto label_1fb35c;
        case 0x1fb360u: goto label_1fb360;
        case 0x1fb364u: goto label_1fb364;
        case 0x1fb368u: goto label_1fb368;
        case 0x1fb36cu: goto label_1fb36c;
        case 0x1fb370u: goto label_1fb370;
        case 0x1fb374u: goto label_1fb374;
        case 0x1fb378u: goto label_1fb378;
        case 0x1fb37cu: goto label_1fb37c;
        case 0x1fb380u: goto label_1fb380;
        case 0x1fb384u: goto label_1fb384;
        case 0x1fb388u: goto label_1fb388;
        case 0x1fb38cu: goto label_1fb38c;
        case 0x1fb390u: goto label_1fb390;
        case 0x1fb394u: goto label_1fb394;
        case 0x1fb398u: goto label_1fb398;
        case 0x1fb39cu: goto label_1fb39c;
        case 0x1fb3a0u: goto label_1fb3a0;
        case 0x1fb3a4u: goto label_1fb3a4;
        case 0x1fb3a8u: goto label_1fb3a8;
        case 0x1fb3acu: goto label_1fb3ac;
        case 0x1fb3b0u: goto label_1fb3b0;
        case 0x1fb3b4u: goto label_1fb3b4;
        case 0x1fb3b8u: goto label_1fb3b8;
        case 0x1fb3bcu: goto label_1fb3bc;
        case 0x1fb3c0u: goto label_1fb3c0;
        case 0x1fb3c4u: goto label_1fb3c4;
        case 0x1fb3c8u: goto label_1fb3c8;
        case 0x1fb3ccu: goto label_1fb3cc;
        case 0x1fb3d0u: goto label_1fb3d0;
        case 0x1fb3d4u: goto label_1fb3d4;
        case 0x1fb3d8u: goto label_1fb3d8;
        case 0x1fb3dcu: goto label_1fb3dc;
        case 0x1fb3e0u: goto label_1fb3e0;
        case 0x1fb3e4u: goto label_1fb3e4;
        case 0x1fb3e8u: goto label_1fb3e8;
        case 0x1fb3ecu: goto label_1fb3ec;
        case 0x1fb3f0u: goto label_1fb3f0;
        case 0x1fb3f4u: goto label_1fb3f4;
        case 0x1fb3f8u: goto label_1fb3f8;
        case 0x1fb3fcu: goto label_1fb3fc;
        case 0x1fb400u: goto label_1fb400;
        case 0x1fb404u: goto label_1fb404;
        case 0x1fb408u: goto label_1fb408;
        case 0x1fb40cu: goto label_1fb40c;
        case 0x1fb410u: goto label_1fb410;
        case 0x1fb414u: goto label_1fb414;
        case 0x1fb418u: goto label_1fb418;
        case 0x1fb41cu: goto label_1fb41c;
        case 0x1fb420u: goto label_1fb420;
        case 0x1fb424u: goto label_1fb424;
        case 0x1fb428u: goto label_1fb428;
        case 0x1fb42cu: goto label_1fb42c;
        case 0x1fb430u: goto label_1fb430;
        case 0x1fb434u: goto label_1fb434;
        case 0x1fb438u: goto label_1fb438;
        case 0x1fb43cu: goto label_1fb43c;
        case 0x1fb440u: goto label_1fb440;
        case 0x1fb444u: goto label_1fb444;
        case 0x1fb448u: goto label_1fb448;
        case 0x1fb44cu: goto label_1fb44c;
        case 0x1fb450u: goto label_1fb450;
        case 0x1fb454u: goto label_1fb454;
        case 0x1fb458u: goto label_1fb458;
        case 0x1fb45cu: goto label_1fb45c;
        case 0x1fb460u: goto label_1fb460;
        case 0x1fb464u: goto label_1fb464;
        case 0x1fb468u: goto label_1fb468;
        case 0x1fb46cu: goto label_1fb46c;
        case 0x1fb470u: goto label_1fb470;
        case 0x1fb474u: goto label_1fb474;
        case 0x1fb478u: goto label_1fb478;
        case 0x1fb47cu: goto label_1fb47c;
        case 0x1fb480u: goto label_1fb480;
        case 0x1fb484u: goto label_1fb484;
        case 0x1fb488u: goto label_1fb488;
        case 0x1fb48cu: goto label_1fb48c;
        case 0x1fb490u: goto label_1fb490;
        case 0x1fb494u: goto label_1fb494;
        case 0x1fb498u: goto label_1fb498;
        case 0x1fb49cu: goto label_1fb49c;
        case 0x1fb4a0u: goto label_1fb4a0;
        case 0x1fb4a4u: goto label_1fb4a4;
        case 0x1fb4a8u: goto label_1fb4a8;
        case 0x1fb4acu: goto label_1fb4ac;
        case 0x1fb4b0u: goto label_1fb4b0;
        case 0x1fb4b4u: goto label_1fb4b4;
        case 0x1fb4b8u: goto label_1fb4b8;
        case 0x1fb4bcu: goto label_1fb4bc;
        case 0x1fb4c0u: goto label_1fb4c0;
        case 0x1fb4c4u: goto label_1fb4c4;
        case 0x1fb4c8u: goto label_1fb4c8;
        case 0x1fb4ccu: goto label_1fb4cc;
        case 0x1fb4d0u: goto label_1fb4d0;
        case 0x1fb4d4u: goto label_1fb4d4;
        case 0x1fb4d8u: goto label_1fb4d8;
        case 0x1fb4dcu: goto label_1fb4dc;
        case 0x1fb4e0u: goto label_1fb4e0;
        case 0x1fb4e4u: goto label_1fb4e4;
        case 0x1fb4e8u: goto label_1fb4e8;
        case 0x1fb4ecu: goto label_1fb4ec;
        case 0x1fb4f0u: goto label_1fb4f0;
        case 0x1fb4f4u: goto label_1fb4f4;
        case 0x1fb4f8u: goto label_1fb4f8;
        case 0x1fb4fcu: goto label_1fb4fc;
        case 0x1fb500u: goto label_1fb500;
        case 0x1fb504u: goto label_1fb504;
        case 0x1fb508u: goto label_1fb508;
        case 0x1fb50cu: goto label_1fb50c;
        case 0x1fb510u: goto label_1fb510;
        case 0x1fb514u: goto label_1fb514;
        case 0x1fb518u: goto label_1fb518;
        case 0x1fb51cu: goto label_1fb51c;
        case 0x1fb520u: goto label_1fb520;
        case 0x1fb524u: goto label_1fb524;
        case 0x1fb528u: goto label_1fb528;
        case 0x1fb52cu: goto label_1fb52c;
        case 0x1fb530u: goto label_1fb530;
        case 0x1fb534u: goto label_1fb534;
        case 0x1fb538u: goto label_1fb538;
        case 0x1fb53cu: goto label_1fb53c;
        case 0x1fb540u: goto label_1fb540;
        case 0x1fb544u: goto label_1fb544;
        case 0x1fb548u: goto label_1fb548;
        case 0x1fb54cu: goto label_1fb54c;
        case 0x1fb550u: goto label_1fb550;
        case 0x1fb554u: goto label_1fb554;
        case 0x1fb558u: goto label_1fb558;
        case 0x1fb55cu: goto label_1fb55c;
        case 0x1fb560u: goto label_1fb560;
        case 0x1fb564u: goto label_1fb564;
        case 0x1fb568u: goto label_1fb568;
        case 0x1fb56cu: goto label_1fb56c;
        case 0x1fb570u: goto label_1fb570;
        case 0x1fb574u: goto label_1fb574;
        case 0x1fb578u: goto label_1fb578;
        case 0x1fb57cu: goto label_1fb57c;
        case 0x1fb580u: goto label_1fb580;
        case 0x1fb584u: goto label_1fb584;
        case 0x1fb588u: goto label_1fb588;
        case 0x1fb58cu: goto label_1fb58c;
        case 0x1fb590u: goto label_1fb590;
        case 0x1fb594u: goto label_1fb594;
        case 0x1fb598u: goto label_1fb598;
        case 0x1fb59cu: goto label_1fb59c;
        case 0x1fb5a0u: goto label_1fb5a0;
        case 0x1fb5a4u: goto label_1fb5a4;
        case 0x1fb5a8u: goto label_1fb5a8;
        case 0x1fb5acu: goto label_1fb5ac;
        case 0x1fb5b0u: goto label_1fb5b0;
        case 0x1fb5b4u: goto label_1fb5b4;
        case 0x1fb5b8u: goto label_1fb5b8;
        case 0x1fb5bcu: goto label_1fb5bc;
        case 0x1fb5c0u: goto label_1fb5c0;
        case 0x1fb5c4u: goto label_1fb5c4;
        case 0x1fb5c8u: goto label_1fb5c8;
        case 0x1fb5ccu: goto label_1fb5cc;
        case 0x1fb5d0u: goto label_1fb5d0;
        case 0x1fb5d4u: goto label_1fb5d4;
        case 0x1fb5d8u: goto label_1fb5d8;
        case 0x1fb5dcu: goto label_1fb5dc;
        case 0x1fb5e0u: goto label_1fb5e0;
        case 0x1fb5e4u: goto label_1fb5e4;
        case 0x1fb5e8u: goto label_1fb5e8;
        case 0x1fb5ecu: goto label_1fb5ec;
        case 0x1fb5f0u: goto label_1fb5f0;
        case 0x1fb5f4u: goto label_1fb5f4;
        case 0x1fb5f8u: goto label_1fb5f8;
        case 0x1fb5fcu: goto label_1fb5fc;
        case 0x1fb600u: goto label_1fb600;
        case 0x1fb604u: goto label_1fb604;
        case 0x1fb608u: goto label_1fb608;
        case 0x1fb60cu: goto label_1fb60c;
        case 0x1fb610u: goto label_1fb610;
        case 0x1fb614u: goto label_1fb614;
        case 0x1fb618u: goto label_1fb618;
        case 0x1fb61cu: goto label_1fb61c;
        case 0x1fb620u: goto label_1fb620;
        case 0x1fb624u: goto label_1fb624;
        case 0x1fb628u: goto label_1fb628;
        case 0x1fb62cu: goto label_1fb62c;
        case 0x1fb630u: goto label_1fb630;
        case 0x1fb634u: goto label_1fb634;
        case 0x1fb638u: goto label_1fb638;
        case 0x1fb63cu: goto label_1fb63c;
        case 0x1fb640u: goto label_1fb640;
        case 0x1fb644u: goto label_1fb644;
        case 0x1fb648u: goto label_1fb648;
        case 0x1fb64cu: goto label_1fb64c;
        case 0x1fb650u: goto label_1fb650;
        case 0x1fb654u: goto label_1fb654;
        case 0x1fb658u: goto label_1fb658;
        case 0x1fb65cu: goto label_1fb65c;
        case 0x1fb660u: goto label_1fb660;
        case 0x1fb664u: goto label_1fb664;
        case 0x1fb668u: goto label_1fb668;
        case 0x1fb66cu: goto label_1fb66c;
        case 0x1fb670u: goto label_1fb670;
        case 0x1fb674u: goto label_1fb674;
        case 0x1fb678u: goto label_1fb678;
        case 0x1fb67cu: goto label_1fb67c;
        case 0x1fb680u: goto label_1fb680;
        case 0x1fb684u: goto label_1fb684;
        case 0x1fb688u: goto label_1fb688;
        case 0x1fb68cu: goto label_1fb68c;
        case 0x1fb690u: goto label_1fb690;
        case 0x1fb694u: goto label_1fb694;
        case 0x1fb698u: goto label_1fb698;
        case 0x1fb69cu: goto label_1fb69c;
        case 0x1fb6a0u: goto label_1fb6a0;
        case 0x1fb6a4u: goto label_1fb6a4;
        case 0x1fb6a8u: goto label_1fb6a8;
        case 0x1fb6acu: goto label_1fb6ac;
        case 0x1fb6b0u: goto label_1fb6b0;
        case 0x1fb6b4u: goto label_1fb6b4;
        case 0x1fb6b8u: goto label_1fb6b8;
        case 0x1fb6bcu: goto label_1fb6bc;
        case 0x1fb6c0u: goto label_1fb6c0;
        case 0x1fb6c4u: goto label_1fb6c4;
        case 0x1fb6c8u: goto label_1fb6c8;
        case 0x1fb6ccu: goto label_1fb6cc;
        case 0x1fb6d0u: goto label_1fb6d0;
        case 0x1fb6d4u: goto label_1fb6d4;
        case 0x1fb6d8u: goto label_1fb6d8;
        case 0x1fb6dcu: goto label_1fb6dc;
        case 0x1fb6e0u: goto label_1fb6e0;
        case 0x1fb6e4u: goto label_1fb6e4;
        case 0x1fb6e8u: goto label_1fb6e8;
        case 0x1fb6ecu: goto label_1fb6ec;
        case 0x1fb6f0u: goto label_1fb6f0;
        case 0x1fb6f4u: goto label_1fb6f4;
        case 0x1fb6f8u: goto label_1fb6f8;
        case 0x1fb6fcu: goto label_1fb6fc;
        case 0x1fb700u: goto label_1fb700;
        case 0x1fb704u: goto label_1fb704;
        case 0x1fb708u: goto label_1fb708;
        case 0x1fb70cu: goto label_1fb70c;
        case 0x1fb710u: goto label_1fb710;
        case 0x1fb714u: goto label_1fb714;
        case 0x1fb718u: goto label_1fb718;
        case 0x1fb71cu: goto label_1fb71c;
        case 0x1fb720u: goto label_1fb720;
        case 0x1fb724u: goto label_1fb724;
        case 0x1fb728u: goto label_1fb728;
        case 0x1fb72cu: goto label_1fb72c;
        case 0x1fb730u: goto label_1fb730;
        case 0x1fb734u: goto label_1fb734;
        case 0x1fb738u: goto label_1fb738;
        case 0x1fb73cu: goto label_1fb73c;
        case 0x1fb740u: goto label_1fb740;
        case 0x1fb744u: goto label_1fb744;
        case 0x1fb748u: goto label_1fb748;
        case 0x1fb74cu: goto label_1fb74c;
        case 0x1fb750u: goto label_1fb750;
        case 0x1fb754u: goto label_1fb754;
        case 0x1fb758u: goto label_1fb758;
        case 0x1fb75cu: goto label_1fb75c;
        case 0x1fb760u: goto label_1fb760;
        case 0x1fb764u: goto label_1fb764;
        case 0x1fb768u: goto label_1fb768;
        case 0x1fb76cu: goto label_1fb76c;
        case 0x1fb770u: goto label_1fb770;
        case 0x1fb774u: goto label_1fb774;
        case 0x1fb778u: goto label_1fb778;
        case 0x1fb77cu: goto label_1fb77c;
        case 0x1fb780u: goto label_1fb780;
        case 0x1fb784u: goto label_1fb784;
        case 0x1fb788u: goto label_1fb788;
        case 0x1fb78cu: goto label_1fb78c;
        case 0x1fb790u: goto label_1fb790;
        case 0x1fb794u: goto label_1fb794;
        case 0x1fb798u: goto label_1fb798;
        case 0x1fb79cu: goto label_1fb79c;
        case 0x1fb7a0u: goto label_1fb7a0;
        case 0x1fb7a4u: goto label_1fb7a4;
        case 0x1fb7a8u: goto label_1fb7a8;
        case 0x1fb7acu: goto label_1fb7ac;
        case 0x1fb7b0u: goto label_1fb7b0;
        case 0x1fb7b4u: goto label_1fb7b4;
        case 0x1fb7b8u: goto label_1fb7b8;
        case 0x1fb7bcu: goto label_1fb7bc;
        case 0x1fb7c0u: goto label_1fb7c0;
        case 0x1fb7c4u: goto label_1fb7c4;
        case 0x1fb7c8u: goto label_1fb7c8;
        case 0x1fb7ccu: goto label_1fb7cc;
        case 0x1fb7d0u: goto label_1fb7d0;
        case 0x1fb7d4u: goto label_1fb7d4;
        case 0x1fb7d8u: goto label_1fb7d8;
        case 0x1fb7dcu: goto label_1fb7dc;
        case 0x1fb7e0u: goto label_1fb7e0;
        case 0x1fb7e4u: goto label_1fb7e4;
        case 0x1fb7e8u: goto label_1fb7e8;
        case 0x1fb7ecu: goto label_1fb7ec;
        default: break;
    }

    ctx->pc = 0x1fa860u;

label_1fa860:
    // 0x1fa860: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fa860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1fa864:
    // 0x1fa864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fa864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fa868:
    // 0x1fa868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fa86c:
    // 0x1fa86c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1fa86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1fa870:
    // 0x1fa870: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1fa870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1fa874:
    // 0x1fa874: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1fa874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa878:
    // 0x1fa878: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1fa878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1fa87c:
    // 0x1fa87c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fa87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fa880:
    // 0x1fa880: 0xc05613c  jal         func_1584F0
label_1fa884:
    if (ctx->pc == 0x1FA884u) {
        ctx->pc = 0x1FA888u;
        goto label_1fa888;
    }
    ctx->pc = 0x1FA880u;
    SET_GPR_U32(ctx, 31, 0x1FA888u);
    ctx->pc = 0x1584F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584F0u, 0x1FA880u, 0x1FA888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA888u;
label_1fa888:
    // 0x1fa888: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_1fa88c:
    if (ctx->pc == 0x1FA88Cu) {
        ctx->pc = 0x1FA890u;
        goto label_1fa890;
    }
    ctx->pc = 0x1FA888u;
    {
        const bool branch_taken_0x1fa888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fa888) {
            ctx->pc = 0x1FA8B4u;
            goto label_1fa8b4;
        }
    }
    ctx->pc = 0x1FA890u;
label_1fa890:
    // 0x1fa890: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fa890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa894:
    // 0x1fa894: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fa898:
    // 0x1fa898: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1fa898u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
label_1fa89c:
    // 0x1fa89c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1fa89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1fa8a0:
    // 0x1fa8a0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1fa8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fa8a4:
    // 0x1fa8a4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1fa8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa8a8:
    // 0x1fa8a8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1fa8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1fa8ac:
    // 0x1fa8ac: 0xc056774  jal         func_159DD0
label_1fa8b0:
    if (ctx->pc == 0x1FA8B0u) {
        ctx->pc = 0x1FA8B4u;
        goto label_1fa8b4;
    }
    ctx->pc = 0x1FA8ACu;
    SET_GPR_U32(ctx, 31, 0x1FA8B4u);
    ctx->pc = 0x159DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159DD0u, 0x1FA8ACu, 0x1FA8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8B4u;
label_1fa8b4:
    // 0x1fa8b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fa8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fa8b8:
    // 0x1fa8b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fa8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1fa8bc:
    // 0x1fa8bc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1fa8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1fa8c0:
    // 0x1fa8c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1fa8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1fa8c4:
    // 0x1fa8c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fa8c8:
    // 0x1fa8c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1fa8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fa8cc:
    // 0x1fa8cc: 0xc0619d0  jal         func_186740
label_1fa8d0:
    if (ctx->pc == 0x1FA8D0u) {
        ctx->pc = 0x1FA8D4u;
        goto label_1fa8d4;
    }
    ctx->pc = 0x1FA8CCu;
    SET_GPR_U32(ctx, 31, 0x1FA8D4u);
    ctx->pc = 0x186740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186740u, 0x1FA8CCu, 0x1FA8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8D4u;
label_1fa8d4:
    // 0x1fa8d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1fa8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa8d8:
    // 0x1fa8d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa8dc:
    // 0x1fa8dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa8e0:
    // 0x1fa8e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1fa8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1fa8e4:
    // 0x1fa8e4: 0x3e00008  jr          $ra
label_1fa8e8:
    if (ctx->pc == 0x1FA8E8u) {
        ctx->pc = 0x1FA8ECu;
        goto label_1fa8ec;
    }
    ctx->pc = 0x1FA8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA8ECu;
label_1fa8ec:
    // 0x1fa8ec: 0x0  nop
    ctx->pc = 0x1fa8ecu;
    // NOP
label_1fa8f0:
    // 0x1fa8f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fa8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fa8f4:
    // 0x1fa8f4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fa8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_1fa8f8:
    // 0x1fa8f8: 0x24428c80  addiu       $v0, $v0, -0x7380
    ctx->pc = 0x1fa8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937728));
label_1fa8fc:
    // 0x1fa8fc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1fa8fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fa900:
    // 0x1fa900: 0x3e00008  jr          $ra
label_1fa904:
    if (ctx->pc == 0x1FA904u) {
        ctx->pc = 0x1FA908u;
        goto label_1fa908;
    }
    ctx->pc = 0x1FA900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA908u;
label_1fa908:
    // 0x1fa908: 0x0  nop
    ctx->pc = 0x1fa908u;
    // NOP
label_1fa90c:
    // 0x1fa90c: 0x0  nop
    ctx->pc = 0x1fa90cu;
    // NOP
label_1fa910:
    // 0x1fa910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fa910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1fa914:
    // 0x1fa914: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fa914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1fa918:
    // 0x1fa918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fa918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fa91c:
    // 0x1fa91c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fa91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fa920:
    // 0x1fa920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fa924:
    // 0x1fa924: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1fa924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_1fa928:
    // 0x1fa928: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x1fa928u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
label_1fa92c:
    // 0x1fa92c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fa92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa930:
    // 0x1fa930: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1fa930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa934:
    // 0x1fa934: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fa934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa938:
    // 0x1fa938: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1fa938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa93c:
    // 0x1fa93c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fa93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa940:
    // 0x1fa940: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1fa944:
    if (ctx->pc == 0x1FA944u) {
        ctx->pc = 0x1FA948u;
        goto label_1fa948;
    }
    ctx->pc = 0x1FA940u;
    {
        const bool branch_taken_0x1fa940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa940) {
            ctx->pc = 0x1FA958u;
            goto label_1fa958;
        }
    }
    ctx->pc = 0x1FA948u;
label_1fa948:
    // 0x1fa948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa94c:
    // 0x1fa94c: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1fa94cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1fa950:
    // 0x1fa950: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fa954:
    if (ctx->pc == 0x1FA954u) {
        ctx->pc = 0x1FA958u;
        goto label_1fa958;
    }
    ctx->pc = 0x1FA950u;
    {
        const bool branch_taken_0x1fa950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa950) {
            ctx->pc = 0x1FA95Cu;
            goto label_1fa95c;
        }
    }
    ctx->pc = 0x1FA958u;
label_1fa958:
    // 0x1fa958: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fa958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa95c:
    // 0x1fa95c: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x1fa95cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1fa960:
    // 0x1fa960: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_1fa964:
    if (ctx->pc == 0x1FA964u) {
        ctx->pc = 0x1FA968u;
        goto label_1fa968;
    }
    ctx->pc = 0x1FA960u;
    {
        const bool branch_taken_0x1fa960 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa960) {
            ctx->pc = 0x1FA998u;
            goto label_1fa998;
        }
    }
    ctx->pc = 0x1FA968u;
label_1fa968:
    // 0x1fa968: 0x93a30050  lbu         $v1, 0x50($sp)
    ctx->pc = 0x1fa968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_1fa96c:
    // 0x1fa96c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1fa970:
    if (ctx->pc == 0x1FA970u) {
        ctx->pc = 0x1FA974u;
        goto label_1fa974;
    }
    ctx->pc = 0x1FA96Cu;
    {
        const bool branch_taken_0x1fa96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa96c) {
            ctx->pc = 0x1FA998u;
            goto label_1fa998;
        }
    }
    ctx->pc = 0x1FA974u;
label_1fa974:
    // 0x1fa974: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fa974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa978:
    // 0x1fa978: 0xc07fd4c  jal         func_1FF530
label_1fa97c:
    if (ctx->pc == 0x1FA97Cu) {
        ctx->pc = 0x1FA980u;
        goto label_1fa980;
    }
    ctx->pc = 0x1FA978u;
    SET_GPR_U32(ctx, 31, 0x1FA980u);
    ctx->pc = 0x1FF530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF530u, 0x1FA978u, 0x1FA980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA980u;
label_1fa980:
    // 0x1fa980: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1fa984:
    if (ctx->pc == 0x1FA984u) {
        ctx->pc = 0x1FA988u;
        goto label_1fa988;
    }
    ctx->pc = 0x1FA980u;
    {
        const bool branch_taken_0x1fa980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa980) {
            ctx->pc = 0x1FA998u;
            goto label_1fa998;
        }
    }
    ctx->pc = 0x1FA988u;
label_1fa988:
    // 0x1fa988: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fa988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa98c:
    // 0x1fa98c: 0x90630121  lbu         $v1, 0x121($v1)
    ctx->pc = 0x1fa98cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 289)));
label_1fa990:
    // 0x1fa990: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1fa994:
    if (ctx->pc == 0x1FA994u) {
        ctx->pc = 0x1FA998u;
        goto label_1fa998;
    }
    ctx->pc = 0x1FA990u;
    {
        const bool branch_taken_0x1fa990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa990) {
            ctx->pc = 0x1FA9A0u;
            goto label_1fa9a0;
        }
    }
    ctx->pc = 0x1FA998u;
label_1fa998:
    // 0x1fa998: 0x10000024  b           . + 4 + (0x24 << 2)
label_1fa99c:
    if (ctx->pc == 0x1FA99Cu) {
        ctx->pc = 0x1FA9A0u;
        goto label_1fa9a0;
    }
    ctx->pc = 0x1FA998u;
    {
        const bool branch_taken_0x1fa998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa998) {
            ctx->pc = 0x1FAA2Cu;
            goto label_1faa2c;
        }
    }
    ctx->pc = 0x1FA9A0u;
label_1fa9a0:
    // 0x1fa9a0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fa9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa9a4:
    // 0x1fa9a4: 0x8c7000f0  lw          $s0, 0xF0($v1)
    ctx->pc = 0x1fa9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1fa9a8:
    // 0x1fa9a8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fa9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa9ac:
    // 0x1fa9ac: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1fa9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa9b0:
    // 0x1fa9b0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fa9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa9b4:
    // 0x1fa9b4: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1fa9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa9b8:
    // 0x1fa9b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1fa9b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fa9bc:
    // 0x1fa9bc: 0xc78082dc  lwc1        $f0, -0x7D24($gp)
    ctx->pc = 0x1fa9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa9c0:
    // 0x1fa9c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fa9c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa9c4:
    // 0x1fa9c4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_1fa9c8:
    if (ctx->pc == 0x1FA9C8u) {
        ctx->pc = 0x1FA9CCu;
        goto label_1fa9cc;
    }
    ctx->pc = 0x1FA9C4u;
    {
        const bool branch_taken_0x1fa9c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa9c4) {
            ctx->pc = 0x1FAA2Cu;
            goto label_1faa2c;
        }
    }
    ctx->pc = 0x1FA9CCu;
label_1fa9cc:
    // 0x1fa9cc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fa9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa9d0:
    // 0x1fa9d0: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1fa9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1fa9d4:
    // 0x1fa9d4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fa9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_1fa9d8:
    // 0x1fa9d8: 0x8c63bfb0  lw          $v1, -0x4050($v1)
    ctx->pc = 0x1fa9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950832)));
label_1fa9dc:
    // 0x1fa9dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fa9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1fa9e0:
    // 0x1fa9e0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1fa9e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fa9e4:
    // 0x1fa9e4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1fa9e8:
    if (ctx->pc == 0x1FA9E8u) {
        ctx->pc = 0x1FA9ECu;
        goto label_1fa9ec;
    }
    ctx->pc = 0x1FA9E4u;
    {
        const bool branch_taken_0x1fa9e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa9e4) {
            ctx->pc = 0x1FA9F8u;
            goto label_1fa9f8;
        }
    }
    ctx->pc = 0x1FA9ECu;
label_1fa9ec:
    // 0x1fa9ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fa9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fa9f0:
    // 0x1fa9f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fa9f4:
    if (ctx->pc == 0x1FA9F4u) {
        ctx->pc = 0x1FA9F8u;
        goto label_1fa9f8;
    }
    ctx->pc = 0x1FA9F0u;
    {
        const bool branch_taken_0x1fa9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa9f0) {
            ctx->pc = 0x1FAA00u;
            goto label_1faa00;
        }
    }
    ctx->pc = 0x1FA9F8u;
label_1fa9f8:
    // 0x1fa9f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fa9fc:
    if (ctx->pc == 0x1FA9FCu) {
        ctx->pc = 0x1FAA00u;
        goto label_1faa00;
    }
    ctx->pc = 0x1FA9F8u;
    {
        const bool branch_taken_0x1fa9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa9f8) {
            ctx->pc = 0x1FAA2Cu;
            goto label_1faa2c;
        }
    }
    ctx->pc = 0x1FAA00u;
label_1faa00:
    // 0x1faa00: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1faa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1faa04:
    // 0x1faa04: 0x8c4500ec  lw          $a1, 0xEC($v0)
    ctx->pc = 0x1faa04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_1faa08:
    // 0x1faa08: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1faa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1faa0c:
    // 0x1faa0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1faa0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1faa10:
    // 0x1faa10: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x1faa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1faa14:
    // 0x1faa14: 0xc07f3d8  jal         func_1FCF60
label_1faa18:
    if (ctx->pc == 0x1FAA18u) {
        ctx->pc = 0x1FAA1Cu;
        goto label_1faa1c;
    }
    ctx->pc = 0x1FAA14u;
    SET_GPR_U32(ctx, 31, 0x1FAA1Cu);
    ctx->pc = 0x1FCF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCF60u, 0x1FAA14u, 0x1FAA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAA1Cu;
label_1faa1c:
    // 0x1faa1c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1faa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1faa20:
    // 0x1faa20: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1faa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1faa24:
    // 0x1faa24: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1faa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1faa28:
    // 0x1faa28: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1faa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
label_1faa2c:
    // 0x1faa2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1faa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1faa30:
    // 0x1faa30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1faa30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1faa34:
    // 0x1faa34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1faa34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1faa38:
    // 0x1faa38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1faa38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1faa3c:
    // 0x1faa3c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1faa3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1faa40:
    // 0x1faa40: 0x3e00008  jr          $ra
label_1faa44:
    if (ctx->pc == 0x1FAA44u) {
        ctx->pc = 0x1FAA48u;
        goto label_1faa48;
    }
    ctx->pc = 0x1FAA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAA48u;
label_1faa48:
    // 0x1faa48: 0x0  nop
    ctx->pc = 0x1faa48u;
    // NOP
label_1faa4c:
    // 0x1faa4c: 0x0  nop
    ctx->pc = 0x1faa4cu;
    // NOP
label_1faa50:
    // 0x1faa50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1faa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1faa54:
    // 0x1faa54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1faa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1faa58:
    // 0x1faa58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1faa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1faa5c:
    // 0x1faa5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1faa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1faa60:
    // 0x1faa60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1faa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1faa64:
    // 0x1faa64: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1faa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_1faa68:
    // 0x1faa68: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x1faa68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
label_1faa6c:
    // 0x1faa6c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1faa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1faa70:
    // 0x1faa70: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1faa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1faa74:
    // 0x1faa74: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1faa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1faa78:
    // 0x1faa78: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1faa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1faa7c:
    // 0x1faa7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1faa7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1faa80:
    // 0x1faa80: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1faa84:
    if (ctx->pc == 0x1FAA84u) {
        ctx->pc = 0x1FAA88u;
        goto label_1faa88;
    }
    ctx->pc = 0x1FAA80u;
    {
        const bool branch_taken_0x1faa80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1faa80) {
            ctx->pc = 0x1FAA98u;
            goto label_1faa98;
        }
    }
    ctx->pc = 0x1FAA88u;
label_1faa88:
    // 0x1faa88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1faa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1faa8c:
    // 0x1faa8c: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1faa8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1faa90:
    // 0x1faa90: 0x10000002  b           . + 4 + (0x2 << 2)
label_1faa94:
    if (ctx->pc == 0x1FAA94u) {
        ctx->pc = 0x1FAA98u;
        goto label_1faa98;
    }
    ctx->pc = 0x1FAA90u;
    {
        const bool branch_taken_0x1faa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faa90) {
            ctx->pc = 0x1FAA9Cu;
            goto label_1faa9c;
        }
    }
    ctx->pc = 0x1FAA98u;
label_1faa98:
    // 0x1faa98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1faa98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1faa9c:
    // 0x1faa9c: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x1faa9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1faaa0:
    // 0x1faaa0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_1faaa4:
    if (ctx->pc == 0x1FAAA4u) {
        ctx->pc = 0x1FAAA8u;
        goto label_1faaa8;
    }
    ctx->pc = 0x1FAAA0u;
    {
        const bool branch_taken_0x1faaa0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faaa0) {
            ctx->pc = 0x1FAAD8u;
            goto label_1faad8;
        }
    }
    ctx->pc = 0x1FAAA8u;
label_1faaa8:
    // 0x1faaa8: 0x93a30050  lbu         $v1, 0x50($sp)
    ctx->pc = 0x1faaa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_1faaac:
    // 0x1faaac: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1faab0:
    if (ctx->pc == 0x1FAAB0u) {
        ctx->pc = 0x1FAAB4u;
        goto label_1faab4;
    }
    ctx->pc = 0x1FAAACu;
    {
        const bool branch_taken_0x1faaac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faaac) {
            ctx->pc = 0x1FAAD8u;
            goto label_1faad8;
        }
    }
    ctx->pc = 0x1FAAB4u;
label_1faab4:
    // 0x1faab4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1faab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1faab8:
    // 0x1faab8: 0xc07fd4c  jal         func_1FF530
label_1faabc:
    if (ctx->pc == 0x1FAABCu) {
        ctx->pc = 0x1FAAC0u;
        goto label_1faac0;
    }
    ctx->pc = 0x1FAAB8u;
    SET_GPR_U32(ctx, 31, 0x1FAAC0u);
    ctx->pc = 0x1FF530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF530u, 0x1FAAB8u, 0x1FAAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAAC0u;
label_1faac0:
    // 0x1faac0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1faac4:
    if (ctx->pc == 0x1FAAC4u) {
        ctx->pc = 0x1FAAC8u;
        goto label_1faac8;
    }
    ctx->pc = 0x1FAAC0u;
    {
        const bool branch_taken_0x1faac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1faac0) {
            ctx->pc = 0x1FAAD8u;
            goto label_1faad8;
        }
    }
    ctx->pc = 0x1FAAC8u;
label_1faac8:
    // 0x1faac8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1faac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1faacc:
    // 0x1faacc: 0x90630121  lbu         $v1, 0x121($v1)
    ctx->pc = 0x1faaccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 289)));
label_1faad0:
    // 0x1faad0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1faad4:
    if (ctx->pc == 0x1FAAD4u) {
        ctx->pc = 0x1FAAD8u;
        goto label_1faad8;
    }
    ctx->pc = 0x1FAAD0u;
    {
        const bool branch_taken_0x1faad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faad0) {
            ctx->pc = 0x1FAAE0u;
            goto label_1faae0;
        }
    }
    ctx->pc = 0x1FAAD8u;
label_1faad8:
    // 0x1faad8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1faadc:
    if (ctx->pc == 0x1FAADCu) {
        ctx->pc = 0x1FAAE0u;
        goto label_1faae0;
    }
    ctx->pc = 0x1FAAD8u;
    {
        const bool branch_taken_0x1faad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faad8) {
            ctx->pc = 0x1FAB54u;
            goto label_1fab54;
        }
    }
    ctx->pc = 0x1FAAE0u;
label_1faae0:
    // 0x1faae0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1faae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1faae4:
    // 0x1faae4: 0x8c7000f0  lw          $s0, 0xF0($v1)
    ctx->pc = 0x1faae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1faae8:
    // 0x1faae8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1faae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1faaec:
    // 0x1faaec: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1faaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1faaf0:
    // 0x1faaf0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1faaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1faaf4:
    // 0x1faaf4: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1faaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1faaf8:
    // 0x1faaf8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1faaf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1faafc:
    // 0x1faafc: 0xc78082dc  lwc1        $f0, -0x7D24($gp)
    ctx->pc = 0x1faafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fab00:
    // 0x1fab00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fab00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fab04:
    // 0x1fab04: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_1fab08:
    if (ctx->pc == 0x1FAB08u) {
        ctx->pc = 0x1FAB0Cu;
        goto label_1fab0c;
    }
    ctx->pc = 0x1FAB04u;
    {
        const bool branch_taken_0x1fab04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fab04) {
            ctx->pc = 0x1FAB54u;
            goto label_1fab54;
        }
    }
    ctx->pc = 0x1FAB0Cu;
label_1fab0c:
    // 0x1fab0c: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
label_1fab10:
    if (ctx->pc == 0x1FAB10u) {
        ctx->pc = 0x1FAB14u;
        goto label_1fab14;
    }
    ctx->pc = 0x1FAB0Cu;
    {
        const bool branch_taken_0x1fab0c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1fab0c) {
            ctx->pc = 0x1FAB20u;
            goto label_1fab20;
        }
    }
    ctx->pc = 0x1FAB14u;
label_1fab14:
    // 0x1fab14: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fab14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1fab18:
    // 0x1fab18: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fab1c:
    if (ctx->pc == 0x1FAB1Cu) {
        ctx->pc = 0x1FAB20u;
        goto label_1fab20;
    }
    ctx->pc = 0x1FAB18u;
    {
        const bool branch_taken_0x1fab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fab18) {
            ctx->pc = 0x1FAB28u;
            goto label_1fab28;
        }
    }
    ctx->pc = 0x1FAB20u;
label_1fab20:
    // 0x1fab20: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fab24:
    if (ctx->pc == 0x1FAB24u) {
        ctx->pc = 0x1FAB28u;
        goto label_1fab28;
    }
    ctx->pc = 0x1FAB20u;
    {
        const bool branch_taken_0x1fab20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fab20) {
            ctx->pc = 0x1FAB54u;
            goto label_1fab54;
        }
    }
    ctx->pc = 0x1FAB28u;
label_1fab28:
    // 0x1fab28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1fab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fab2c:
    // 0x1fab2c: 0x8c4500ec  lw          $a1, 0xEC($v0)
    ctx->pc = 0x1fab2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_1fab30:
    // 0x1fab30: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fab30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fab34:
    // 0x1fab34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fab34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fab38:
    // 0x1fab38: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x1fab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fab3c:
    // 0x1fab3c: 0xc07f3d8  jal         func_1FCF60
label_1fab40:
    if (ctx->pc == 0x1FAB40u) {
        ctx->pc = 0x1FAB44u;
        goto label_1fab44;
    }
    ctx->pc = 0x1FAB3Cu;
    SET_GPR_U32(ctx, 31, 0x1FAB44u);
    ctx->pc = 0x1FCF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCF60u, 0x1FAB3Cu, 0x1FAB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAB44u;
label_1fab44:
    // 0x1fab44: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fab44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fab48:
    // 0x1fab48: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1fab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fab4c:
    // 0x1fab4c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fab50:
    // 0x1fab50: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1fab50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
label_1fab54:
    // 0x1fab54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fab54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fab58:
    // 0x1fab58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fab58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fab5c:
    // 0x1fab5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fab5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fab60:
    // 0x1fab60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fab60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fab64:
    // 0x1fab64: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1fab64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1fab68:
    // 0x1fab68: 0x3e00008  jr          $ra
label_1fab6c:
    if (ctx->pc == 0x1FAB6Cu) {
        ctx->pc = 0x1FAB70u;
        goto label_1fab70;
    }
    ctx->pc = 0x1FAB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAB70u;
label_1fab70:
    // 0x1fab70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1fab74:
    // 0x1fab74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1fab78:
    // 0x1fab78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fab78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fab7c:
    // 0x1fab7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fab80:
    // 0x1fab80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fab80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fab84:
    // 0x1fab84: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1fab84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_1fab88:
    // 0x1fab88: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x1fab88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
label_1fab8c:
    // 0x1fab8c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fab90:
    // 0x1fab90: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1fab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fab94:
    // 0x1fab94: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fab94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fab98:
    // 0x1fab98: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1fab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fab9c:
    // 0x1fab9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fab9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1faba0:
    // 0x1faba0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1faba4:
    if (ctx->pc == 0x1FABA4u) {
        ctx->pc = 0x1FABA8u;
        goto label_1faba8;
    }
    ctx->pc = 0x1FABA0u;
    {
        const bool branch_taken_0x1faba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1faba0) {
            ctx->pc = 0x1FABB8u;
            goto label_1fabb8;
        }
    }
    ctx->pc = 0x1FABA8u;
label_1faba8:
    // 0x1faba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1faba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fabac:
    // 0x1fabac: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1fabacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1fabb0:
    // 0x1fabb0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fabb4:
    if (ctx->pc == 0x1FABB4u) {
        ctx->pc = 0x1FABB8u;
        goto label_1fabb8;
    }
    ctx->pc = 0x1FABB0u;
    {
        const bool branch_taken_0x1fabb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fabb0) {
            ctx->pc = 0x1FABBCu;
            goto label_1fabbc;
        }
    }
    ctx->pc = 0x1FABB8u;
label_1fabb8:
    // 0x1fabb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fabb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fabbc:
    // 0x1fabbc: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x1fabbcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1fabc0:
    // 0x1fabc0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_1fabc4:
    if (ctx->pc == 0x1FABC4u) {
        ctx->pc = 0x1FABC8u;
        goto label_1fabc8;
    }
    ctx->pc = 0x1FABC0u;
    {
        const bool branch_taken_0x1fabc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fabc0) {
            ctx->pc = 0x1FABF8u;
            goto label_1fabf8;
        }
    }
    ctx->pc = 0x1FABC8u;
label_1fabc8:
    // 0x1fabc8: 0x93a30050  lbu         $v1, 0x50($sp)
    ctx->pc = 0x1fabc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_1fabcc:
    // 0x1fabcc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1fabd0:
    if (ctx->pc == 0x1FABD0u) {
        ctx->pc = 0x1FABD4u;
        goto label_1fabd4;
    }
    ctx->pc = 0x1FABCCu;
    {
        const bool branch_taken_0x1fabcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fabcc) {
            ctx->pc = 0x1FABF8u;
            goto label_1fabf8;
        }
    }
    ctx->pc = 0x1FABD4u;
label_1fabd4:
    // 0x1fabd4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fabd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fabd8:
    // 0x1fabd8: 0xc07fd4c  jal         func_1FF530
label_1fabdc:
    if (ctx->pc == 0x1FABDCu) {
        ctx->pc = 0x1FABE0u;
        goto label_1fabe0;
    }
    ctx->pc = 0x1FABD8u;
    SET_GPR_U32(ctx, 31, 0x1FABE0u);
    ctx->pc = 0x1FF530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF530u, 0x1FABD8u, 0x1FABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FABE0u;
label_1fabe0:
    // 0x1fabe0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1fabe4:
    if (ctx->pc == 0x1FABE4u) {
        ctx->pc = 0x1FABE8u;
        goto label_1fabe8;
    }
    ctx->pc = 0x1FABE0u;
    {
        const bool branch_taken_0x1fabe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fabe0) {
            ctx->pc = 0x1FABF8u;
            goto label_1fabf8;
        }
    }
    ctx->pc = 0x1FABE8u;
label_1fabe8:
    // 0x1fabe8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fabe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fabec:
    // 0x1fabec: 0x90630121  lbu         $v1, 0x121($v1)
    ctx->pc = 0x1fabecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 289)));
label_1fabf0:
    // 0x1fabf0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1fabf4:
    if (ctx->pc == 0x1FABF4u) {
        ctx->pc = 0x1FABF8u;
        goto label_1fabf8;
    }
    ctx->pc = 0x1FABF0u;
    {
        const bool branch_taken_0x1fabf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fabf0) {
            ctx->pc = 0x1FAC00u;
            goto label_1fac00;
        }
    }
    ctx->pc = 0x1FABF8u;
label_1fabf8:
    // 0x1fabf8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1fabfc:
    if (ctx->pc == 0x1FABFCu) {
        ctx->pc = 0x1FAC00u;
        goto label_1fac00;
    }
    ctx->pc = 0x1FABF8u;
    {
        const bool branch_taken_0x1fabf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fabf8) {
            ctx->pc = 0x1FAC74u;
            goto label_1fac74;
        }
    }
    ctx->pc = 0x1FAC00u;
label_1fac00:
    // 0x1fac00: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fac04:
    // 0x1fac04: 0x8c7000ec  lw          $s0, 0xEC($v1)
    ctx->pc = 0x1fac04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
label_1fac08:
    // 0x1fac08: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fac08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fac0c:
    // 0x1fac0c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1fac0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fac10:
    // 0x1fac10: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fac14:
    // 0x1fac14: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1fac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fac18:
    // 0x1fac18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1fac18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fac1c:
    // 0x1fac1c: 0xc78082dc  lwc1        $f0, -0x7D24($gp)
    ctx->pc = 0x1fac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fac20:
    // 0x1fac20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fac20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fac24:
    // 0x1fac24: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_1fac28:
    if (ctx->pc == 0x1FAC28u) {
        ctx->pc = 0x1FAC2Cu;
        goto label_1fac2c;
    }
    ctx->pc = 0x1FAC24u;
    {
        const bool branch_taken_0x1fac24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fac24) {
            ctx->pc = 0x1FAC74u;
            goto label_1fac74;
        }
    }
    ctx->pc = 0x1FAC2Cu;
label_1fac2c:
    // 0x1fac2c: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
label_1fac30:
    if (ctx->pc == 0x1FAC30u) {
        ctx->pc = 0x1FAC34u;
        goto label_1fac34;
    }
    ctx->pc = 0x1FAC2Cu;
    {
        const bool branch_taken_0x1fac2c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1fac2c) {
            ctx->pc = 0x1FAC40u;
            goto label_1fac40;
        }
    }
    ctx->pc = 0x1FAC34u;
label_1fac34:
    // 0x1fac34: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fac34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1fac38:
    // 0x1fac38: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fac3c:
    if (ctx->pc == 0x1FAC3Cu) {
        ctx->pc = 0x1FAC40u;
        goto label_1fac40;
    }
    ctx->pc = 0x1FAC38u;
    {
        const bool branch_taken_0x1fac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fac38) {
            ctx->pc = 0x1FAC48u;
            goto label_1fac48;
        }
    }
    ctx->pc = 0x1FAC40u;
label_1fac40:
    // 0x1fac40: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fac44:
    if (ctx->pc == 0x1FAC44u) {
        ctx->pc = 0x1FAC48u;
        goto label_1fac48;
    }
    ctx->pc = 0x1FAC40u;
    {
        const bool branch_taken_0x1fac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fac40) {
            ctx->pc = 0x1FAC74u;
            goto label_1fac74;
        }
    }
    ctx->pc = 0x1FAC48u;
label_1fac48:
    // 0x1fac48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1fac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fac4c:
    // 0x1fac4c: 0x8c4600f0  lw          $a2, 0xF0($v0)
    ctx->pc = 0x1fac4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1fac50:
    // 0x1fac50: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fac50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fac54:
    // 0x1fac54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fac54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fac58:
    // 0x1fac58: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x1fac58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fac5c:
    // 0x1fac5c: 0xc07f3d8  jal         func_1FCF60
label_1fac60:
    if (ctx->pc == 0x1FAC60u) {
        ctx->pc = 0x1FAC64u;
        goto label_1fac64;
    }
    ctx->pc = 0x1FAC5Cu;
    SET_GPR_U32(ctx, 31, 0x1FAC64u);
    ctx->pc = 0x1FCF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCF60u, 0x1FAC5Cu, 0x1FAC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC64u;
label_1fac64:
    // 0x1fac64: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fac68:
    // 0x1fac68: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1fac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fac6c:
    // 0x1fac6c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fac70:
    // 0x1fac70: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1fac70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
label_1fac74:
    // 0x1fac74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fac74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fac78:
    // 0x1fac78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fac78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fac7c:
    // 0x1fac7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fac7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fac80:
    // 0x1fac80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fac80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fac84:
    // 0x1fac84: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1fac84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1fac88:
    // 0x1fac88: 0x3e00008  jr          $ra
label_1fac8c:
    if (ctx->pc == 0x1FAC8Cu) {
        ctx->pc = 0x1FAC90u;
        goto label_1fac90;
    }
    ctx->pc = 0x1FAC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAC90u;
label_1fac90:
    // 0x1fac90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1fac94:
    // 0x1fac94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1fac98:
    // 0x1fac98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fac98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fac9c:
    // 0x1fac9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fac9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1faca0:
    // 0x1faca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1faca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1faca4:
    // 0x1faca4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1faca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_1faca8:
    // 0x1faca8: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x1faca8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
label_1facac:
    // 0x1facac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1facacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1facb0:
    // 0x1facb0: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1facb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1facb4:
    // 0x1facb4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1facb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1facb8:
    // 0x1facb8: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1facb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1facbc:
    // 0x1facbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1facbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1facc0:
    // 0x1facc0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1facc4:
    if (ctx->pc == 0x1FACC4u) {
        ctx->pc = 0x1FACC8u;
        goto label_1facc8;
    }
    ctx->pc = 0x1FACC0u;
    {
        const bool branch_taken_0x1facc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1facc0) {
            ctx->pc = 0x1FACD8u;
            goto label_1facd8;
        }
    }
    ctx->pc = 0x1FACC8u;
label_1facc8:
    // 0x1facc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1facc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1faccc:
    // 0x1faccc: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1facccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1facd0:
    // 0x1facd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1facd4:
    if (ctx->pc == 0x1FACD4u) {
        ctx->pc = 0x1FACD8u;
        goto label_1facd8;
    }
    ctx->pc = 0x1FACD0u;
    {
        const bool branch_taken_0x1facd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1facd0) {
            ctx->pc = 0x1FACDCu;
            goto label_1facdc;
        }
    }
    ctx->pc = 0x1FACD8u;
label_1facd8:
    // 0x1facd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1facd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1facdc:
    // 0x1facdc: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x1facdcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1face0:
    // 0x1face0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_1face4:
    if (ctx->pc == 0x1FACE4u) {
        ctx->pc = 0x1FACE8u;
        goto label_1face8;
    }
    ctx->pc = 0x1FACE0u;
    {
        const bool branch_taken_0x1face0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1face0) {
            ctx->pc = 0x1FAD18u;
            goto label_1fad18;
        }
    }
    ctx->pc = 0x1FACE8u;
label_1face8:
    // 0x1face8: 0x93a30050  lbu         $v1, 0x50($sp)
    ctx->pc = 0x1face8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_1facec:
    // 0x1facec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1facf0:
    if (ctx->pc == 0x1FACF0u) {
        ctx->pc = 0x1FACF4u;
        goto label_1facf4;
    }
    ctx->pc = 0x1FACECu;
    {
        const bool branch_taken_0x1facec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1facec) {
            ctx->pc = 0x1FAD18u;
            goto label_1fad18;
        }
    }
    ctx->pc = 0x1FACF4u;
label_1facf4:
    // 0x1facf4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1facf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1facf8:
    // 0x1facf8: 0xc07fd4c  jal         func_1FF530
label_1facfc:
    if (ctx->pc == 0x1FACFCu) {
        ctx->pc = 0x1FAD00u;
        goto label_1fad00;
    }
    ctx->pc = 0x1FACF8u;
    SET_GPR_U32(ctx, 31, 0x1FAD00u);
    ctx->pc = 0x1FF530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF530u, 0x1FACF8u, 0x1FAD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD00u;
label_1fad00:
    // 0x1fad00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1fad04:
    if (ctx->pc == 0x1FAD04u) {
        ctx->pc = 0x1FAD08u;
        goto label_1fad08;
    }
    ctx->pc = 0x1FAD00u;
    {
        const bool branch_taken_0x1fad00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fad00) {
            ctx->pc = 0x1FAD18u;
            goto label_1fad18;
        }
    }
    ctx->pc = 0x1FAD08u;
label_1fad08:
    // 0x1fad08: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fad08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fad0c:
    // 0x1fad0c: 0x90630121  lbu         $v1, 0x121($v1)
    ctx->pc = 0x1fad0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 289)));
label_1fad10:
    // 0x1fad10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1fad14:
    if (ctx->pc == 0x1FAD14u) {
        ctx->pc = 0x1FAD18u;
        goto label_1fad18;
    }
    ctx->pc = 0x1FAD10u;
    {
        const bool branch_taken_0x1fad10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fad10) {
            ctx->pc = 0x1FAD20u;
            goto label_1fad20;
        }
    }
    ctx->pc = 0x1FAD18u;
label_1fad18:
    // 0x1fad18: 0x10000022  b           . + 4 + (0x22 << 2)
label_1fad1c:
    if (ctx->pc == 0x1FAD1Cu) {
        ctx->pc = 0x1FAD20u;
        goto label_1fad20;
    }
    ctx->pc = 0x1FAD18u;
    {
        const bool branch_taken_0x1fad18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fad18) {
            ctx->pc = 0x1FADA4u;
            goto label_1fada4;
        }
    }
    ctx->pc = 0x1FAD20u;
label_1fad20:
    // 0x1fad20: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fad24:
    // 0x1fad24: 0x8c7000ec  lw          $s0, 0xEC($v1)
    ctx->pc = 0x1fad24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
label_1fad28:
    // 0x1fad28: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fad28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fad2c:
    // 0x1fad2c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1fad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fad30:
    // 0x1fad30: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fad30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fad34:
    // 0x1fad34: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1fad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fad38:
    // 0x1fad38: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1fad38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fad3c:
    // 0x1fad3c: 0xc78082dc  lwc1        $f0, -0x7D24($gp)
    ctx->pc = 0x1fad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fad40:
    // 0x1fad40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fad40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fad44:
    // 0x1fad44: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_1fad48:
    if (ctx->pc == 0x1FAD48u) {
        ctx->pc = 0x1FAD4Cu;
        goto label_1fad4c;
    }
    ctx->pc = 0x1FAD44u;
    {
        const bool branch_taken_0x1fad44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fad44) {
            ctx->pc = 0x1FADA4u;
            goto label_1fada4;
        }
    }
    ctx->pc = 0x1FAD4Cu;
label_1fad4c:
    // 0x1fad4c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_1fad50:
    // 0x1fad50: 0x8c63bfac  lw          $v1, -0x4054($v1)
    ctx->pc = 0x1fad50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950828)));
label_1fad54:
    // 0x1fad54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fad54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1fad58:
    // 0x1fad58: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x1fad58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fad5c:
    // 0x1fad5c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1fad60:
    if (ctx->pc == 0x1FAD60u) {
        ctx->pc = 0x1FAD64u;
        goto label_1fad64;
    }
    ctx->pc = 0x1FAD5Cu;
    {
        const bool branch_taken_0x1fad5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fad5c) {
            ctx->pc = 0x1FAD70u;
            goto label_1fad70;
        }
    }
    ctx->pc = 0x1FAD64u;
label_1fad64:
    // 0x1fad64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fad64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fad68:
    // 0x1fad68: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fad6c:
    if (ctx->pc == 0x1FAD6Cu) {
        ctx->pc = 0x1FAD70u;
        goto label_1fad70;
    }
    ctx->pc = 0x1FAD68u;
    {
        const bool branch_taken_0x1fad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fad68) {
            ctx->pc = 0x1FAD78u;
            goto label_1fad78;
        }
    }
    ctx->pc = 0x1FAD70u;
label_1fad70:
    // 0x1fad70: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fad74:
    if (ctx->pc == 0x1FAD74u) {
        ctx->pc = 0x1FAD78u;
        goto label_1fad78;
    }
    ctx->pc = 0x1FAD70u;
    {
        const bool branch_taken_0x1fad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fad70) {
            ctx->pc = 0x1FADA4u;
            goto label_1fada4;
        }
    }
    ctx->pc = 0x1FAD78u;
label_1fad78:
    // 0x1fad78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1fad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fad7c:
    // 0x1fad7c: 0x8c4600f0  lw          $a2, 0xF0($v0)
    ctx->pc = 0x1fad7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1fad80:
    // 0x1fad80: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fad80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fad84:
    // 0x1fad84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fad84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fad88:
    // 0x1fad88: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x1fad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fad8c:
    // 0x1fad8c: 0xc07f3d8  jal         func_1FCF60
label_1fad90:
    if (ctx->pc == 0x1FAD90u) {
        ctx->pc = 0x1FAD94u;
        goto label_1fad94;
    }
    ctx->pc = 0x1FAD8Cu;
    SET_GPR_U32(ctx, 31, 0x1FAD94u);
    ctx->pc = 0x1FCF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCF60u, 0x1FAD8Cu, 0x1FAD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD94u;
label_1fad94:
    // 0x1fad94: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fad94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fad98:
    // 0x1fad98: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1fad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fad9c:
    // 0x1fad9c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fada0:
    // 0x1fada0: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1fada0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
label_1fada4:
    // 0x1fada4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fada4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fada8:
    // 0x1fada8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fada8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fadac:
    // 0x1fadac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fadacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fadb0:
    // 0x1fadb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fadb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fadb4:
    // 0x1fadb4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1fadb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1fadb8:
    // 0x1fadb8: 0x3e00008  jr          $ra
label_1fadbc:
    if (ctx->pc == 0x1FADBCu) {
        ctx->pc = 0x1FADC0u;
        goto label_1fadc0;
    }
    ctx->pc = 0x1FADB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FADB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FADC0u;
label_1fadc0:
    // 0x1fadc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fadc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fadc4:
    // 0x1fadc4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fadc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fadc8:
    // 0x1fadc8: 0x3e00008  jr          $ra
label_1fadcc:
    if (ctx->pc == 0x1FADCCu) {
        ctx->pc = 0x1FADD0u;
        goto label_1fadd0;
    }
    ctx->pc = 0x1FADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FADC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FADD0u;
label_1fadd0:
    // 0x1fadd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fadd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fadd4:
    // 0x1fadd4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fadd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fadd8:
    // 0x1fadd8: 0x3e00008  jr          $ra
label_1faddc:
    if (ctx->pc == 0x1FADDCu) {
        ctx->pc = 0x1FADE0u;
        goto label_1fade0;
    }
    ctx->pc = 0x1FADD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FADD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FADE0u;
label_1fade0:
    // 0x1fade0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1fade4:
    // 0x1fade4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fade4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1fade8:
    // 0x1fade8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fadec:
    // 0x1fadec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fadecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fadf0:
    // 0x1fadf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fadf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fadf4:
    // 0x1fadf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fadf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fadf8:
    // 0x1fadf8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1fadf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_1fadfc:
    // 0x1fadfc: 0xa3a50070  sb          $a1, 0x70($sp)
    ctx->pc = 0x1fadfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 5));
label_1fae00:
    // 0x1fae00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fae00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fae04:
    // 0x1fae04: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x1fae04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_1fae08:
    // 0x1fae08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fae08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1fae0c:
    // 0x1fae0c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1fae10:
    if (ctx->pc == 0x1FAE10u) {
        ctx->pc = 0x1FAE14u;
        goto label_1fae14;
    }
    ctx->pc = 0x1FAE0Cu;
    {
        const bool branch_taken_0x1fae0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fae0c) {
            ctx->pc = 0x1FAE38u;
            goto label_1fae38;
        }
    }
    ctx->pc = 0x1FAE14u;
label_1fae14:
    // 0x1fae14: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1fae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1fae18:
    // 0x1fae18: 0x8c640124  lw          $a0, 0x124($v1)
    ctx->pc = 0x1fae18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_1fae1c:
    // 0x1fae1c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1fae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1fae20:
    // 0x1fae20: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1fae24:
    if (ctx->pc == 0x1FAE24u) {
        ctx->pc = 0x1FAE28u;
        goto label_1fae28;
    }
    ctx->pc = 0x1FAE20u;
    {
        const bool branch_taken_0x1fae20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fae20) {
            ctx->pc = 0x1FAE38u;
            goto label_1fae38;
        }
    }
    ctx->pc = 0x1FAE28u;
label_1fae28:
    // 0x1fae28: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1fae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1fae2c:
    // 0x1fae2c: 0x90630121  lbu         $v1, 0x121($v1)
    ctx->pc = 0x1fae2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 289)));
label_1fae30:
    // 0x1fae30: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1fae34:
    if (ctx->pc == 0x1FAE34u) {
        ctx->pc = 0x1FAE38u;
        goto label_1fae38;
    }
    ctx->pc = 0x1FAE30u;
    {
        const bool branch_taken_0x1fae30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fae30) {
            ctx->pc = 0x1FAE40u;
            goto label_1fae40;
        }
    }
    ctx->pc = 0x1FAE38u;
label_1fae38:
    // 0x1fae38: 0x10000072  b           . + 4 + (0x72 << 2)
label_1fae3c:
    if (ctx->pc == 0x1FAE3Cu) {
        ctx->pc = 0x1FAE40u;
        goto label_1fae40;
    }
    ctx->pc = 0x1FAE38u;
    {
        const bool branch_taken_0x1fae38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fae38) {
            ctx->pc = 0x1FB004u;
            goto label_1fb004;
        }
    }
    ctx->pc = 0x1FAE40u;
label_1fae40:
    // 0x1fae40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fae44:
    // 0x1fae44: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1fae44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_1fae48:
    // 0x1fae48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fae4c:
    // 0x1fae4c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1fae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_1fae50:
    // 0x1fae50: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1fae50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1fae54:
    // 0x1fae54: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1fae54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1fae58:
    // 0x1fae58: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1fae58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1fae5c:
    // 0x1fae5c: 0xc07f060  jal         func_1FC180
label_1fae60:
    if (ctx->pc == 0x1FAE60u) {
        ctx->pc = 0x1FAE64u;
        goto label_1fae64;
    }
    ctx->pc = 0x1FAE5Cu;
    SET_GPR_U32(ctx, 31, 0x1FAE64u);
    ctx->pc = 0x1FC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC180u, 0x1FAE5Cu, 0x1FAE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAE64u;
label_1fae64:
    // 0x1fae64: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fae64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1fae68:
    // 0x1fae68: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1fae6c:
    if (ctx->pc == 0x1FAE6Cu) {
        ctx->pc = 0x1FAE70u;
        goto label_1fae70;
    }
    ctx->pc = 0x1FAE68u;
    {
        const bool branch_taken_0x1fae68 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fae68) {
            ctx->pc = 0x1FAE7Cu;
            goto label_1fae7c;
        }
    }
    ctx->pc = 0x1FAE70u;
label_1fae70:
    // 0x1fae70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1fae74:
    // 0x1fae74: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1fae78:
    if (ctx->pc == 0x1FAE78u) {
        ctx->pc = 0x1FAE7Cu;
        goto label_1fae7c;
    }
    ctx->pc = 0x1FAE74u;
    {
        const bool branch_taken_0x1fae74 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1fae74) {
            ctx->pc = 0x1FAE84u;
            goto label_1fae84;
        }
    }
    ctx->pc = 0x1FAE7Cu;
label_1fae7c:
    // 0x1fae7c: 0x10000061  b           . + 4 + (0x61 << 2)
label_1fae80:
    if (ctx->pc == 0x1FAE80u) {
        ctx->pc = 0x1FAE84u;
        goto label_1fae84;
    }
    ctx->pc = 0x1FAE7Cu;
    {
        const bool branch_taken_0x1fae7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fae7c) {
            ctx->pc = 0x1FB004u;
            goto label_1fb004;
        }
    }
    ctx->pc = 0x1FAE84u;
label_1fae84:
    // 0x1fae84: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1fae84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1fae88:
    // 0x1fae88: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fae88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1fae8c:
    // 0x1fae8c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1fae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fae90:
    // 0x1fae90: 0x8ca300a4  lw          $v1, 0xA4($a1)
    ctx->pc = 0x1fae90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_1fae94:
    // 0x1fae94: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fae94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fae98:
    // 0x1fae98: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fae98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1fae9c:
    // 0x1fae9c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1fae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1faea0:
    // 0x1faea0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1faea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1faea4:
    // 0x1faea4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1faea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1faea8:
    // 0x1faea8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1faea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1faeac:
    // 0x1faeac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1faeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1faeb0:
    // 0x1faeb0: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x1faeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1faeb4:
    // 0x1faeb4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1faeb8:
    if (ctx->pc == 0x1FAEB8u) {
        ctx->pc = 0x1FAEBCu;
        goto label_1faebc;
    }
    ctx->pc = 0x1FAEB4u;
    {
        const bool branch_taken_0x1faeb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faeb4) {
            ctx->pc = 0x1FAEF8u;
            goto label_1faef8;
        }
    }
    ctx->pc = 0x1FAEBCu;
label_1faebc:
    // 0x1faebc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1faebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1faec0:
    // 0x1faec0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1faec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1faec4:
    // 0x1faec4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1faec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1faec8:
    // 0x1faec8: 0x8ca300a4  lw          $v1, 0xA4($a1)
    ctx->pc = 0x1faec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_1faecc:
    // 0x1faecc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1faeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1faed0:
    // 0x1faed0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1faed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1faed4:
    // 0x1faed4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1faed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1faed8:
    // 0x1faed8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1faed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1faedc:
    // 0x1faedc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1faedcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1faee0:
    // 0x1faee0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1faee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1faee4:
    // 0x1faee4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1faee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1faee8:
    // 0x1faee8: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x1faee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1faeec:
    // 0x1faeec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1faeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1faef0:
    // 0x1faef0: 0x14830044  bne         $a0, $v1, . + 4 + (0x44 << 2)
label_1faef4:
    if (ctx->pc == 0x1FAEF4u) {
        ctx->pc = 0x1FAEF8u;
        goto label_1faef8;
    }
    ctx->pc = 0x1FAEF0u;
    {
        const bool branch_taken_0x1faef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1faef0) {
            ctx->pc = 0x1FB004u;
            goto label_1fb004;
        }
    }
    ctx->pc = 0x1FAEF8u;
label_1faef8:
    // 0x1faef8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1faef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1faefc:
    // 0x1faefc: 0x8c64010c  lw          $a0, 0x10C($v1)
    ctx->pc = 0x1faefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1faf00:
    // 0x1faf00: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1faf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1faf04:
    // 0x1faf04: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_1faf08:
    if (ctx->pc == 0x1FAF08u) {
        ctx->pc = 0x1FAF0Cu;
        goto label_1faf0c;
    }
    ctx->pc = 0x1FAF04u;
    {
        const bool branch_taken_0x1faf04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1faf04) {
            ctx->pc = 0x1FAF20u;
            goto label_1faf20;
        }
    }
    ctx->pc = 0x1FAF0Cu;
label_1faf0c:
    // 0x1faf0c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1faf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1faf10:
    // 0x1faf10: 0x8c640110  lw          $a0, 0x110($v1)
    ctx->pc = 0x1faf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_1faf14:
    // 0x1faf14: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1faf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1faf18:
    // 0x1faf18: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
label_1faf1c:
    if (ctx->pc == 0x1FAF1Cu) {
        ctx->pc = 0x1FAF20u;
        goto label_1faf20;
    }
    ctx->pc = 0x1FAF18u;
    {
        const bool branch_taken_0x1faf18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1faf18) {
            ctx->pc = 0x1FB004u;
            goto label_1fb004;
        }
    }
    ctx->pc = 0x1FAF20u;
label_1faf20:
    // 0x1faf20: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1faf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1faf24:
    // 0x1faf24: 0x8c64010c  lw          $a0, 0x10C($v1)
    ctx->pc = 0x1faf24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1faf28:
    // 0x1faf28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1faf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1faf2c:
    // 0x1faf2c: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
label_1faf30:
    if (ctx->pc == 0x1FAF30u) {
        ctx->pc = 0x1FAF34u;
        goto label_1faf34;
    }
    ctx->pc = 0x1FAF2Cu;
    {
        const bool branch_taken_0x1faf2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1faf2c) {
            ctx->pc = 0x1FAF8Cu;
            goto label_1faf8c;
        }
    }
    ctx->pc = 0x1FAF34u;
label_1faf34:
    // 0x1faf34: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1faf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1faf38:
    // 0x1faf38: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1faf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1faf3c:
    // 0x1faf3c: 0xac43010c  sw          $v1, 0x10C($v0)
    ctx->pc = 0x1faf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 3));
label_1faf40:
    // 0x1faf40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1faf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1faf44:
    // 0x1faf44: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1faf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1faf48:
    // 0x1faf48: 0xac430110  sw          $v1, 0x110($v0)
    ctx->pc = 0x1faf48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 3));
label_1faf4c:
    // 0x1faf4c: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1faf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1faf50:
    // 0x1faf50: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1faf50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1faf54:
    // 0x1faf54: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1faf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1faf58:
    // 0x1faf58: 0xc07f1b8  jal         func_1FC6E0
label_1faf5c:
    if (ctx->pc == 0x1FAF5Cu) {
        ctx->pc = 0x1FAF60u;
        goto label_1faf60;
    }
    ctx->pc = 0x1FAF58u;
    SET_GPR_U32(ctx, 31, 0x1FAF60u);
    ctx->pc = 0x1FC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC6E0u, 0x1FAF58u, 0x1FAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF60u;
label_1faf60:
    // 0x1faf60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1faf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1faf64:
    // 0x1faf64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1faf64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1faf68:
    // 0x1faf68: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1faf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1faf6c:
    // 0x1faf6c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1faf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_1faf70:
    // 0x1faf70: 0x24a58ca8  addiu       $a1, $a1, -0x7358
    ctx->pc = 0x1faf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937768));
label_1faf74:
    // 0x1faf74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1faf74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1faf78:
    // 0x1faf78: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1faf78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1faf7c:
    // 0x1faf7c: 0xc08f558  jal         func_23D560
label_1faf80:
    if (ctx->pc == 0x1FAF80u) {
        ctx->pc = 0x1FAF84u;
        goto label_1faf84;
    }
    ctx->pc = 0x1FAF7Cu;
    SET_GPR_U32(ctx, 31, 0x1FAF84u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1FAF7Cu, 0x1FAF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF84u;
label_1faf84:
    // 0x1faf84: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1faf88:
    if (ctx->pc == 0x1FAF88u) {
        ctx->pc = 0x1FAF8Cu;
        goto label_1faf8c;
    }
    ctx->pc = 0x1FAF84u;
    {
        const bool branch_taken_0x1faf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faf84) {
            ctx->pc = 0x1FB004u;
            goto label_1fb004;
        }
    }
    ctx->pc = 0x1FAF8Cu;
label_1faf8c:
    // 0x1faf8c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1faf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1faf90:
    // 0x1faf90: 0x8c640114  lw          $a0, 0x114($v1)
    ctx->pc = 0x1faf90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_1faf94:
    // 0x1faf94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1faf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1faf98:
    // 0x1faf98: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
label_1faf9c:
    if (ctx->pc == 0x1FAF9Cu) {
        ctx->pc = 0x1FAFA0u;
        goto label_1fafa0;
    }
    ctx->pc = 0x1FAF98u;
    {
        const bool branch_taken_0x1faf98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1faf98) {
            ctx->pc = 0x1FB000u;
            goto label_1fb000;
        }
    }
    ctx->pc = 0x1FAFA0u;
label_1fafa0:
    // 0x1fafa0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1fafa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1fafa4:
    // 0x1fafa4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1fafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1fafa8:
    // 0x1fafa8: 0xac430114  sw          $v1, 0x114($v0)
    ctx->pc = 0x1fafa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
label_1fafac:
    // 0x1fafac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fafacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1fafb0:
    // 0x1fafb0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1fafb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1fafb4:
    // 0x1fafb4: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x1fafb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
label_1fafb8:
    // 0x1fafb8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1fafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1fafbc:
    // 0x1fafbc: 0x8c450114  lw          $a1, 0x114($v0)
    ctx->pc = 0x1fafbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_1fafc0:
    // 0x1fafc0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1fafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1fafc4:
    // 0x1fafc4: 0x8c460118  lw          $a2, 0x118($v0)
    ctx->pc = 0x1fafc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
label_1fafc8:
    // 0x1fafc8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1fafc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1fafcc:
    // 0x1fafcc: 0xc07f1b8  jal         func_1FC6E0
label_1fafd0:
    if (ctx->pc == 0x1FAFD0u) {
        ctx->pc = 0x1FAFD4u;
        goto label_1fafd4;
    }
    ctx->pc = 0x1FAFCCu;
    SET_GPR_U32(ctx, 31, 0x1FAFD4u);
    ctx->pc = 0x1FC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC6E0u, 0x1FAFCCu, 0x1FAFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAFD4u;
label_1fafd4:
    // 0x1fafd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fafd8:
    // 0x1fafd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fafd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fafdc:
    // 0x1fafdc: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1fafdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1fafe0:
    // 0x1fafe0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1fafe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_1fafe4:
    // 0x1fafe4: 0x24a58ca8  addiu       $a1, $a1, -0x7358
    ctx->pc = 0x1fafe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937768));
label_1fafe8:
    // 0x1fafe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fafe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fafec:
    // 0x1fafec: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1fafecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1faff0:
    // 0x1faff0: 0xc08f558  jal         func_23D560
label_1faff4:
    if (ctx->pc == 0x1FAFF4u) {
        ctx->pc = 0x1FAFF8u;
        goto label_1faff8;
    }
    ctx->pc = 0x1FAFF0u;
    SET_GPR_U32(ctx, 31, 0x1FAFF8u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1FAFF0u, 0x1FAFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAFF8u;
label_1faff8:
    // 0x1faff8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1faffc:
    if (ctx->pc == 0x1FAFFCu) {
        ctx->pc = 0x1FB000u;
        goto label_1fb000;
    }
    ctx->pc = 0x1FAFF8u;
    {
        const bool branch_taken_0x1faff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faff8) {
            ctx->pc = 0x1FB004u;
            goto label_1fb004;
        }
    }
    ctx->pc = 0x1FB000u;
label_1fb000:
    // 0x1fb000: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fb000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb004:
    // 0x1fb004: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fb004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fb008:
    // 0x1fb008: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fb008u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb00c:
    // 0x1fb00c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fb00cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb010:
    // 0x1fb010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb014:
    // 0x1fb014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fb014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb018:
    // 0x1fb018: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1fb018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fb01c:
    // 0x1fb01c: 0x3e00008  jr          $ra
label_1fb020:
    if (ctx->pc == 0x1FB020u) {
        ctx->pc = 0x1FB024u;
        goto label_1fb024;
    }
    ctx->pc = 0x1FB01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB024u;
label_1fb024:
    // 0x1fb024: 0x0  nop
    ctx->pc = 0x1fb024u;
    // NOP
label_1fb028:
    // 0x1fb028: 0x0  nop
    ctx->pc = 0x1fb028u;
    // NOP
label_1fb02c:
    // 0x1fb02c: 0x0  nop
    ctx->pc = 0x1fb02cu;
    // NOP
label_1fb030:
    // 0x1fb030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fb034:
    // 0x1fb034: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fb034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fb038:
    // 0x1fb038: 0x3e00008  jr          $ra
label_1fb03c:
    if (ctx->pc == 0x1FB03Cu) {
        ctx->pc = 0x1FB040u;
        goto label_1fb040;
    }
    ctx->pc = 0x1FB038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB040u;
label_1fb040:
    // 0x1fb040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fb040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fb044:
    // 0x1fb044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fb048:
    // 0x1fb048: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1fb048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1fb04c:
    // 0x1fb04c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1fb04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb050:
    // 0x1fb050: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fb050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb054:
    // 0x1fb054: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fb054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fb058:
    // 0x1fb058: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1fb058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1fb05c:
    // 0x1fb05c: 0x320f809  jalr        $t9
label_1fb060:
    if (ctx->pc == 0x1FB060u) {
        ctx->pc = 0x1FB064u;
        goto label_1fb064;
    }
    ctx->pc = 0x1FB05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FB064u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB05Cu, 0x1FB064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB064u;
label_1fb064:
    // 0x1fb064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb068:
    // 0x1fb068: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fb068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fb06c:
    // 0x1fb06c: 0x3e00008  jr          $ra
label_1fb070:
    if (ctx->pc == 0x1FB070u) {
        ctx->pc = 0x1FB074u;
        goto label_1fb074;
    }
    ctx->pc = 0x1FB06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB074u;
label_1fb074:
    // 0x1fb074: 0x0  nop
    ctx->pc = 0x1fb074u;
    // NOP
label_1fb078:
    // 0x1fb078: 0x0  nop
    ctx->pc = 0x1fb078u;
    // NOP
label_1fb07c:
    // 0x1fb07c: 0x0  nop
    ctx->pc = 0x1fb07cu;
    // NOP
label_1fb080:
    // 0x1fb080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fb080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fb084:
    // 0x1fb084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fb088:
    // 0x1fb088: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1fb088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1fb08c:
    // 0x1fb08c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1fb08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb090:
    // 0x1fb090: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fb090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb094:
    // 0x1fb094: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fb094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fb098:
    // 0x1fb098: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1fb098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1fb09c:
    // 0x1fb09c: 0x320f809  jalr        $t9
label_1fb0a0:
    if (ctx->pc == 0x1FB0A0u) {
        ctx->pc = 0x1FB0A4u;
        goto label_1fb0a4;
    }
    ctx->pc = 0x1FB09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FB0A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB09Cu, 0x1FB0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB0A4u;
label_1fb0a4:
    // 0x1fb0a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb0a8:
    // 0x1fb0a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fb0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fb0ac:
    // 0x1fb0ac: 0x3e00008  jr          $ra
label_1fb0b0:
    if (ctx->pc == 0x1FB0B0u) {
        ctx->pc = 0x1FB0B4u;
        goto label_1fb0b4;
    }
    ctx->pc = 0x1FB0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB0B4u;
label_1fb0b4:
    // 0x1fb0b4: 0x0  nop
    ctx->pc = 0x1fb0b4u;
    // NOP
label_1fb0b8:
    // 0x1fb0b8: 0x0  nop
    ctx->pc = 0x1fb0b8u;
    // NOP
label_1fb0bc:
    // 0x1fb0bc: 0x0  nop
    ctx->pc = 0x1fb0bcu;
    // NOP
label_1fb0c0:
    // 0x1fb0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fb0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fb0c4:
    // 0x1fb0c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fb0c8:
    // 0x1fb0c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1fb0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1fb0cc:
    // 0x1fb0cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1fb0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb0d0:
    // 0x1fb0d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fb0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb0d4:
    // 0x1fb0d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fb0d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fb0d8:
    // 0x1fb0d8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1fb0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1fb0dc:
    // 0x1fb0dc: 0x320f809  jalr        $t9
label_1fb0e0:
    if (ctx->pc == 0x1FB0E0u) {
        ctx->pc = 0x1FB0E4u;
        goto label_1fb0e4;
    }
    ctx->pc = 0x1FB0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FB0E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0DCu, 0x1FB0E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB0E4u;
label_1fb0e4:
    // 0x1fb0e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb0e8:
    // 0x1fb0e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fb0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fb0ec:
    // 0x1fb0ec: 0x3e00008  jr          $ra
label_1fb0f0:
    if (ctx->pc == 0x1FB0F0u) {
        ctx->pc = 0x1FB0F4u;
        goto label_1fb0f4;
    }
    ctx->pc = 0x1FB0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB0F4u;
label_1fb0f4:
    // 0x1fb0f4: 0x0  nop
    ctx->pc = 0x1fb0f4u;
    // NOP
label_1fb0f8:
    // 0x1fb0f8: 0x0  nop
    ctx->pc = 0x1fb0f8u;
    // NOP
label_1fb0fc:
    // 0x1fb0fc: 0x0  nop
    ctx->pc = 0x1fb0fcu;
    // NOP
label_1fb100:
    // 0x1fb100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fb100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fb104:
    // 0x1fb104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fb108:
    // 0x1fb108: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1fb108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1fb10c:
    // 0x1fb10c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1fb10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb110:
    // 0x1fb110: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fb110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb114:
    // 0x1fb114: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fb114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fb118:
    // 0x1fb118: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1fb118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1fb11c:
    // 0x1fb11c: 0x320f809  jalr        $t9
label_1fb120:
    if (ctx->pc == 0x1FB120u) {
        ctx->pc = 0x1FB124u;
        goto label_1fb124;
    }
    ctx->pc = 0x1FB11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FB124u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB11Cu, 0x1FB124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB124u;
label_1fb124:
    // 0x1fb124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb128:
    // 0x1fb128: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fb128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fb12c:
    // 0x1fb12c: 0x3e00008  jr          $ra
label_1fb130:
    if (ctx->pc == 0x1FB130u) {
        ctx->pc = 0x1FB134u;
        goto label_1fb134;
    }
    ctx->pc = 0x1FB12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB134u;
label_1fb134:
    // 0x1fb134: 0x0  nop
    ctx->pc = 0x1fb134u;
    // NOP
label_1fb138:
    // 0x1fb138: 0x0  nop
    ctx->pc = 0x1fb138u;
    // NOP
label_1fb13c:
    // 0x1fb13c: 0x0  nop
    ctx->pc = 0x1fb13cu;
    // NOP
label_1fb140:
    // 0x1fb140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fb144:
    // 0x1fb144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fb148:
    // 0x1fb148: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1fb148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1fb14c:
    // 0x1fb14c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1fb14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb150:
    // 0x1fb150: 0xc06479c  jal         func_191E70
label_1fb154:
    if (ctx->pc == 0x1FB154u) {
        ctx->pc = 0x1FB158u;
        goto label_1fb158;
    }
    ctx->pc = 0x1FB150u;
    SET_GPR_U32(ctx, 31, 0x1FB158u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FB150u, 0x1FB158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB158u;
label_1fb158:
    // 0x1fb158: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1fb158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb15c:
    // 0x1fb15c: 0x8c6500d8  lw          $a1, 0xD8($v1)
    ctx->pc = 0x1fb15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
label_1fb160:
    // 0x1fb160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fb160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb164:
    // 0x1fb164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fb164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb168:
    // 0x1fb168: 0xc08c8dc  jal         func_232370
label_1fb16c:
    if (ctx->pc == 0x1FB16Cu) {
        ctx->pc = 0x1FB170u;
        goto label_1fb170;
    }
    ctx->pc = 0x1FB168u;
    SET_GPR_U32(ctx, 31, 0x1FB170u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1FB168u, 0x1FB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB170u;
label_1fb170:
    // 0x1fb170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb174:
    // 0x1fb174: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fb174u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fb178:
    // 0x1fb178: 0x3e00008  jr          $ra
label_1fb17c:
    if (ctx->pc == 0x1FB17Cu) {
        ctx->pc = 0x1FB180u;
        goto label_1fb180;
    }
    ctx->pc = 0x1FB178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB180u;
label_1fb180:
    // 0x1fb180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fb180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fb184:
    // 0x1fb184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fb184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fb188:
    // 0x1fb188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fb188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fb18c:
    // 0x1fb18c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fb18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fb190:
    // 0x1fb190: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1fb190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1fb194:
    // 0x1fb194: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fb194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb198:
    // 0x1fb198: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fb198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb19c:
    // 0x1fb19c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1fb1a0:
    if (ctx->pc == 0x1FB1A0u) {
        ctx->pc = 0x1FB1A4u;
        goto label_1fb1a4;
    }
    ctx->pc = 0x1FB19Cu;
    {
        const bool branch_taken_0x1fb19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb19c) {
            ctx->pc = 0x1FB1DCu;
            goto label_1fb1dc;
        }
    }
    ctx->pc = 0x1FB1A4u;
label_1fb1a4:
    // 0x1fb1a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fb1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb1a8:
    // 0x1fb1a8: 0xc06479c  jal         func_191E70
label_1fb1ac:
    if (ctx->pc == 0x1FB1ACu) {
        ctx->pc = 0x1FB1B0u;
        goto label_1fb1b0;
    }
    ctx->pc = 0x1FB1A8u;
    SET_GPR_U32(ctx, 31, 0x1FB1B0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FB1A8u, 0x1FB1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB1B0u;
label_1fb1b0:
    // 0x1fb1b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fb1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb1b4:
    // 0x1fb1b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fb1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb1b8:
    // 0x1fb1b8: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1fb1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1fb1bc:
    // 0x1fb1bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fb1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb1c0:
    // 0x1fb1c0: 0xc05612c  jal         func_1584B0
label_1fb1c4:
    if (ctx->pc == 0x1FB1C4u) {
        ctx->pc = 0x1FB1C8u;
        goto label_1fb1c8;
    }
    ctx->pc = 0x1FB1C0u;
    SET_GPR_U32(ctx, 31, 0x1FB1C8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FB1C0u, 0x1FB1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB1C8u;
label_1fb1c8:
    // 0x1fb1c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fb1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb1cc:
    // 0x1fb1cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb1d0:
    // 0x1fb1d0: 0xc08c258  jal         func_230960
label_1fb1d4:
    if (ctx->pc == 0x1FB1D4u) {
        ctx->pc = 0x1FB1D8u;
        goto label_1fb1d8;
    }
    ctx->pc = 0x1FB1D0u;
    SET_GPR_U32(ctx, 31, 0x1FB1D8u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1FB1D0u, 0x1FB1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB1D8u;
label_1fb1d8:
    // 0x1fb1d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fb1dc:
    // 0x1fb1dc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fb1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1fb1e0:
    // 0x1fb1e0: 0x8c42bfb4  lw          $v0, -0x404C($v0)
    ctx->pc = 0x1fb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950836)));
label_1fb1e4:
    // 0x1fb1e4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fb1e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fb1e8:
    // 0x1fb1e8: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1fb1ec:
    if (ctx->pc == 0x1FB1ECu) {
        ctx->pc = 0x1FB1F0u;
        goto label_1fb1f0;
    }
    ctx->pc = 0x1FB1E8u;
    {
        const bool branch_taken_0x1fb1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb1e8) {
            ctx->pc = 0x1FB1A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb1a4;
        }
    }
    ctx->pc = 0x1FB1F0u;
label_1fb1f0:
    // 0x1fb1f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fb1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb1f4:
    // 0x1fb1f4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1fb1f8:
    if (ctx->pc == 0x1FB1F8u) {
        ctx->pc = 0x1FB1FCu;
        goto label_1fb1fc;
    }
    ctx->pc = 0x1FB1F4u;
    {
        const bool branch_taken_0x1fb1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb1f4) {
            ctx->pc = 0x1FB234u;
            goto label_1fb234;
        }
    }
    ctx->pc = 0x1FB1FCu;
label_1fb1fc:
    // 0x1fb1fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fb1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb200:
    // 0x1fb200: 0xc06479c  jal         func_191E70
label_1fb204:
    if (ctx->pc == 0x1FB204u) {
        ctx->pc = 0x1FB208u;
        goto label_1fb208;
    }
    ctx->pc = 0x1FB200u;
    SET_GPR_U32(ctx, 31, 0x1FB208u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FB200u, 0x1FB208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB208u;
label_1fb208:
    // 0x1fb208: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fb208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb20c:
    // 0x1fb20c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fb20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb210:
    // 0x1fb210: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1fb210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_1fb214:
    // 0x1fb214: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fb214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb218:
    // 0x1fb218: 0xc05612c  jal         func_1584B0
label_1fb21c:
    if (ctx->pc == 0x1FB21Cu) {
        ctx->pc = 0x1FB220u;
        goto label_1fb220;
    }
    ctx->pc = 0x1FB218u;
    SET_GPR_U32(ctx, 31, 0x1FB220u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FB218u, 0x1FB220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB220u;
label_1fb220:
    // 0x1fb220: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fb220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb224:
    // 0x1fb224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb228:
    // 0x1fb228: 0xc08c258  jal         func_230960
label_1fb22c:
    if (ctx->pc == 0x1FB22Cu) {
        ctx->pc = 0x1FB230u;
        goto label_1fb230;
    }
    ctx->pc = 0x1FB228u;
    SET_GPR_U32(ctx, 31, 0x1FB230u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1FB228u, 0x1FB230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB230u;
label_1fb230:
    // 0x1fb230: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fb234:
    // 0x1fb234: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fb234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1fb238:
    // 0x1fb238: 0x8c42bfb4  lw          $v0, -0x404C($v0)
    ctx->pc = 0x1fb238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950836)));
label_1fb23c:
    // 0x1fb23c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fb23cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fb240:
    // 0x1fb240: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1fb244:
    if (ctx->pc == 0x1FB244u) {
        ctx->pc = 0x1FB248u;
        goto label_1fb248;
    }
    ctx->pc = 0x1FB240u;
    {
        const bool branch_taken_0x1fb240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb240) {
            ctx->pc = 0x1FB1FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb1fc;
        }
    }
    ctx->pc = 0x1FB248u;
label_1fb248:
    // 0x1fb248: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fb248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb24c:
    // 0x1fb24c: 0x10000012  b           . + 4 + (0x12 << 2)
label_1fb250:
    if (ctx->pc == 0x1FB250u) {
        ctx->pc = 0x1FB254u;
        goto label_1fb254;
    }
    ctx->pc = 0x1FB24Cu;
    {
        const bool branch_taken_0x1fb24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb24c) {
            ctx->pc = 0x1FB298u;
            goto label_1fb298;
        }
    }
    ctx->pc = 0x1FB254u;
label_1fb254:
    // 0x1fb254: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fb254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb258:
    // 0x1fb258: 0xc06479c  jal         func_191E70
label_1fb25c:
    if (ctx->pc == 0x1FB25Cu) {
        ctx->pc = 0x1FB260u;
        goto label_1fb260;
    }
    ctx->pc = 0x1FB258u;
    SET_GPR_U32(ctx, 31, 0x1FB260u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FB258u, 0x1FB260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB260u;
label_1fb260:
    // 0x1fb260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fb260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb264:
    // 0x1fb264: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fb264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb268:
    // 0x1fb268: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fb268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1fb26c:
    // 0x1fb26c: 0x8c42bfb4  lw          $v0, -0x404C($v0)
    ctx->pc = 0x1fb26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950836)));
label_1fb270:
    // 0x1fb270: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1fb270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1fb274:
    // 0x1fb274: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x1fb274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1fb278:
    // 0x1fb278: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x1fb278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1fb27c:
    // 0x1fb27c: 0xc05612c  jal         func_1584B0
label_1fb280:
    if (ctx->pc == 0x1FB280u) {
        ctx->pc = 0x1FB284u;
        goto label_1fb284;
    }
    ctx->pc = 0x1FB27Cu;
    SET_GPR_U32(ctx, 31, 0x1FB284u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FB27Cu, 0x1FB284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB284u;
label_1fb284:
    // 0x1fb284: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fb284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb288:
    // 0x1fb288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb28c:
    // 0x1fb28c: 0xc08c258  jal         func_230960
label_1fb290:
    if (ctx->pc == 0x1FB290u) {
        ctx->pc = 0x1FB294u;
        goto label_1fb294;
    }
    ctx->pc = 0x1FB28Cu;
    SET_GPR_U32(ctx, 31, 0x1FB294u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1FB28Cu, 0x1FB294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB294u;
label_1fb294:
    // 0x1fb294: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fb298:
    // 0x1fb298: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fb298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1fb29c:
    // 0x1fb29c: 0x8c42bfb4  lw          $v0, -0x404C($v0)
    ctx->pc = 0x1fb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950836)));
label_1fb2a0:
    // 0x1fb2a0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fb2a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fb2a4:
    // 0x1fb2a4: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1fb2a8:
    if (ctx->pc == 0x1FB2A8u) {
        ctx->pc = 0x1FB2ACu;
        goto label_1fb2ac;
    }
    ctx->pc = 0x1FB2A4u;
    {
        const bool branch_taken_0x1fb2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb2a4) {
            ctx->pc = 0x1FB254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb254;
        }
    }
    ctx->pc = 0x1FB2ACu;
label_1fb2ac:
    // 0x1fb2ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fb2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb2b0:
    // 0x1fb2b0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1fb2b4:
    if (ctx->pc == 0x1FB2B4u) {
        ctx->pc = 0x1FB2B8u;
        goto label_1fb2b8;
    }
    ctx->pc = 0x1FB2B0u;
    {
        const bool branch_taken_0x1fb2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb2b0) {
            ctx->pc = 0x1FB2F0u;
            goto label_1fb2f0;
        }
    }
    ctx->pc = 0x1FB2B8u;
label_1fb2b8:
    // 0x1fb2b8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fb2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb2bc:
    // 0x1fb2bc: 0xc06479c  jal         func_191E70
label_1fb2c0:
    if (ctx->pc == 0x1FB2C0u) {
        ctx->pc = 0x1FB2C4u;
        goto label_1fb2c4;
    }
    ctx->pc = 0x1FB2BCu;
    SET_GPR_U32(ctx, 31, 0x1FB2C4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FB2BCu, 0x1FB2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB2C4u;
label_1fb2c4:
    // 0x1fb2c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fb2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb2c8:
    // 0x1fb2c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb2cc:
    // 0x1fb2cc: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1fb2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1fb2d0:
    // 0x1fb2d0: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fb2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1fb2d4:
    // 0x1fb2d4: 0xc05612c  jal         func_1584B0
label_1fb2d8:
    if (ctx->pc == 0x1FB2D8u) {
        ctx->pc = 0x1FB2DCu;
        goto label_1fb2dc;
    }
    ctx->pc = 0x1FB2D4u;
    SET_GPR_U32(ctx, 31, 0x1FB2DCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FB2D4u, 0x1FB2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB2DCu;
label_1fb2dc:
    // 0x1fb2dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fb2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb2e0:
    // 0x1fb2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb2e4:
    // 0x1fb2e4: 0xc08c258  jal         func_230960
label_1fb2e8:
    if (ctx->pc == 0x1FB2E8u) {
        ctx->pc = 0x1FB2ECu;
        goto label_1fb2ec;
    }
    ctx->pc = 0x1FB2E4u;
    SET_GPR_U32(ctx, 31, 0x1FB2ECu);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1FB2E4u, 0x1FB2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB2ECu;
label_1fb2ec:
    // 0x1fb2ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fb2f0:
    // 0x1fb2f0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fb2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1fb2f4:
    // 0x1fb2f4: 0x8c42bfb4  lw          $v0, -0x404C($v0)
    ctx->pc = 0x1fb2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950836)));
label_1fb2f8:
    // 0x1fb2f8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fb2f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fb2fc:
    // 0x1fb2fc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1fb300:
    if (ctx->pc == 0x1FB300u) {
        ctx->pc = 0x1FB304u;
        goto label_1fb304;
    }
    ctx->pc = 0x1FB2FCu;
    {
        const bool branch_taken_0x1fb2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb2fc) {
            ctx->pc = 0x1FB2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb2b8;
        }
    }
    ctx->pc = 0x1FB304u;
label_1fb304:
    // 0x1fb304: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fb304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb308:
    // 0x1fb308: 0xc07fc88  jal         func_1FF220
label_1fb30c:
    if (ctx->pc == 0x1FB30Cu) {
        ctx->pc = 0x1FB310u;
        goto label_1fb310;
    }
    ctx->pc = 0x1FB308u;
    SET_GPR_U32(ctx, 31, 0x1FB310u);
    ctx->pc = 0x1FF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF220u, 0x1FB308u, 0x1FB310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB310u;
label_1fb310:
    // 0x1fb310: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fb310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb314:
    // 0x1fb314: 0xc06479c  jal         func_191E70
label_1fb318:
    if (ctx->pc == 0x1FB318u) {
        ctx->pc = 0x1FB31Cu;
        goto label_1fb31c;
    }
    ctx->pc = 0x1FB314u;
    SET_GPR_U32(ctx, 31, 0x1FB31Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FB314u, 0x1FB31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB31Cu;
label_1fb31c:
    // 0x1fb31c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1fb31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb320:
    // 0x1fb320: 0x8c6500e0  lw          $a1, 0xE0($v1)
    ctx->pc = 0x1fb320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
label_1fb324:
    // 0x1fb324: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fb324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb328:
    // 0x1fb328: 0xc08c258  jal         func_230960
label_1fb32c:
    if (ctx->pc == 0x1FB32Cu) {
        ctx->pc = 0x1FB330u;
        goto label_1fb330;
    }
    ctx->pc = 0x1FB328u;
    SET_GPR_U32(ctx, 31, 0x1FB330u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1FB328u, 0x1FB330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB330u;
label_1fb330:
    // 0x1fb330: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1fb330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb334:
    // 0x1fb334: 0xc064aec  jal         func_192BB0
label_1fb338:
    if (ctx->pc == 0x1FB338u) {
        ctx->pc = 0x1FB33Cu;
        goto label_1fb33c;
    }
    ctx->pc = 0x1FB334u;
    SET_GPR_U32(ctx, 31, 0x1FB33Cu);
    ctx->pc = 0x192BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192BB0u, 0x1FB334u, 0x1FB33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB33Cu;
label_1fb33c:
    // 0x1fb33c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fb33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb340:
    // 0x1fb340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb344:
    // 0x1fb344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fb344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb348:
    // 0x1fb348: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1fb348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fb34c:
    // 0x1fb34c: 0x3e00008  jr          $ra
label_1fb350:
    if (ctx->pc == 0x1FB350u) {
        ctx->pc = 0x1FB354u;
        goto label_1fb354;
    }
    ctx->pc = 0x1FB34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB354u;
label_1fb354:
    // 0x1fb354: 0x0  nop
    ctx->pc = 0x1fb354u;
    // NOP
label_1fb358:
    // 0x1fb358: 0x0  nop
    ctx->pc = 0x1fb358u;
    // NOP
label_1fb35c:
    // 0x1fb35c: 0x0  nop
    ctx->pc = 0x1fb35cu;
    // NOP
label_1fb360:
    // 0x1fb360: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fb360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1fb364:
    // 0x1fb364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fb364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fb368:
    // 0x1fb368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fb368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fb36c:
    // 0x1fb36c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fb36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fb370:
    // 0x1fb370: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1fb370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_1fb374:
    // 0x1fb374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb378:
    // 0x1fb378: 0xa3a2004f  sb          $v0, 0x4F($sp)
    ctx->pc = 0x1fb378u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 2));
label_1fb37c:
    // 0x1fb37c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fb37cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb380:
    // 0x1fb380: 0x0  nop
    ctx->pc = 0x1fb380u;
    // NOP
label_1fb384:
    // 0x1fb384: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1fb384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1fb388:
    // 0x1fb388: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb38c:
    // 0x1fb38c: 0xc07fc80  jal         func_1FF200
label_1fb390:
    if (ctx->pc == 0x1FB390u) {
        ctx->pc = 0x1FB394u;
        goto label_1fb394;
    }
    ctx->pc = 0x1FB38Cu;
    SET_GPR_U32(ctx, 31, 0x1FB394u);
    ctx->pc = 0x1FF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF200u, 0x1FB38Cu, 0x1FB394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB394u;
label_1fb394:
    // 0x1fb394: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb398:
    // 0x1fb398: 0xc064cb0  jal         func_1932C0
label_1fb39c:
    if (ctx->pc == 0x1FB39Cu) {
        ctx->pc = 0x1FB3A0u;
        goto label_1fb3a0;
    }
    ctx->pc = 0x1FB398u;
    SET_GPR_U32(ctx, 31, 0x1FB3A0u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1FB398u, 0x1FB3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB3A0u;
label_1fb3a0:
    // 0x1fb3a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fb3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1fb3a4:
    // 0x1fb3a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1fb3a8:
    if (ctx->pc == 0x1FB3A8u) {
        ctx->pc = 0x1FB3ACu;
        goto label_1fb3ac;
    }
    ctx->pc = 0x1FB3A4u;
    {
        const bool branch_taken_0x1fb3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb3a4) {
            ctx->pc = 0x1FB3BCu;
            goto label_1fb3bc;
        }
    }
    ctx->pc = 0x1FB3ACu;
label_1fb3ac:
    // 0x1fb3ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb3b0:
    // 0x1fb3b0: 0x90420121  lbu         $v0, 0x121($v0)
    ctx->pc = 0x1fb3b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 289)));
label_1fb3b4:
    // 0x1fb3b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1fb3b8:
    if (ctx->pc == 0x1FB3B8u) {
        ctx->pc = 0x1FB3BCu;
        goto label_1fb3bc;
    }
    ctx->pc = 0x1FB3B4u;
    {
        const bool branch_taken_0x1fb3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb3b4) {
            ctx->pc = 0x1FB3D4u;
            goto label_1fb3d4;
        }
    }
    ctx->pc = 0x1FB3BCu;
label_1fb3bc:
    // 0x1fb3bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fb3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb3c0:
    // 0x1fb3c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb3c4:
    // 0x1fb3c4: 0xa0430121  sb          $v1, 0x121($v0)
    ctx->pc = 0x1fb3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 289), (uint8_t)GPR_U32(ctx, 3));
label_1fb3c8:
    // 0x1fb3c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fb3c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb3cc:
    // 0x1fb3cc: 0x10000102  b           . + 4 + (0x102 << 2)
label_1fb3d0:
    if (ctx->pc == 0x1FB3D0u) {
        ctx->pc = 0x1FB3D4u;
        goto label_1fb3d4;
    }
    ctx->pc = 0x1FB3CCu;
    {
        const bool branch_taken_0x1fb3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb3cc) {
            ctx->pc = 0x1FB7D8u;
            goto label_1fb7d8;
        }
    }
    ctx->pc = 0x1FB3D4u;
label_1fb3d4:
    // 0x1fb3d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb3d8:
    // 0x1fb3d8: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x1fb3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1fb3dc:
    // 0x1fb3dc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1fb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1fb3e0:
    // 0x1fb3e0: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
label_1fb3e4:
    if (ctx->pc == 0x1FB3E4u) {
        ctx->pc = 0x1FB3E8u;
        goto label_1fb3e8;
    }
    ctx->pc = 0x1FB3E0u;
    {
        const bool branch_taken_0x1fb3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fb3e0) {
            ctx->pc = 0x1FB4DCu;
            goto label_1fb4dc;
        }
    }
    ctx->pc = 0x1FB3E8u;
label_1fb3e8:
    // 0x1fb3e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb3ec:
    // 0x1fb3ec: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x1fb3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_1fb3f0:
    // 0x1fb3f0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1fb3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fb3f4:
    // 0x1fb3f4: 0xc07f060  jal         func_1FC180
label_1fb3f8:
    if (ctx->pc == 0x1FB3F8u) {
        ctx->pc = 0x1FB3FCu;
        goto label_1fb3fc;
    }
    ctx->pc = 0x1FB3F4u;
    SET_GPR_U32(ctx, 31, 0x1FB3FCu);
    ctx->pc = 0x1FC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC180u, 0x1FB3F4u, 0x1FB3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB3FCu;
label_1fb3fc:
    // 0x1fb3fc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb400:
    // 0x1fb400: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1fb400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1fb404:
    // 0x1fb404: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1fb404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1fb408:
    // 0x1fb408: 0xc07fa3c  jal         func_1FE8F0
label_1fb40c:
    if (ctx->pc == 0x1FB40Cu) {
        ctx->pc = 0x1FB410u;
        goto label_1fb410;
    }
    ctx->pc = 0x1FB408u;
    SET_GPR_U32(ctx, 31, 0x1FB410u);
    ctx->pc = 0x1FE8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8F0u, 0x1FB408u, 0x1FB410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB410u;
label_1fb410:
    // 0x1fb410: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb414:
    // 0x1fb414: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1fb414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb418:
    // 0x1fb418: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb41c:
    // 0x1fb41c: 0xc4400130  lwc1        $f0, 0x130($v0)
    ctx->pc = 0x1fb41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb420:
    // 0x1fb420: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1fb420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fb424:
    // 0x1fb424: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1fb424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1fb428:
    // 0x1fb428: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1fb428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb42c:
    // 0x1fb42c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fb42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1fb430:
    // 0x1fb430: 0xc440bf6c  lwc1        $f0, -0x4094($v0)
    ctx->pc = 0x1fb430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb434:
    // 0x1fb434: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fb434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb438:
    // 0x1fb438: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1fb43c:
    if (ctx->pc == 0x1FB43Cu) {
        ctx->pc = 0x1FB440u;
        goto label_1fb440;
    }
    ctx->pc = 0x1FB438u;
    {
        const bool branch_taken_0x1fb438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb438) {
            ctx->pc = 0x1FB448u;
            goto label_1fb448;
        }
    }
    ctx->pc = 0x1FB440u;
label_1fb440:
    // 0x1fb440: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb444:
    // 0x1fb444: 0xa0400120  sb          $zero, 0x120($v0)
    ctx->pc = 0x1fb444u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 288), (uint8_t)GPR_U32(ctx, 0));
label_1fb448:
    // 0x1fb448: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb44c:
    // 0x1fb44c: 0x90420120  lbu         $v0, 0x120($v0)
    ctx->pc = 0x1fb44cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 288)));
label_1fb450:
    // 0x1fb450: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1fb454:
    if (ctx->pc == 0x1FB454u) {
        ctx->pc = 0x1FB458u;
        goto label_1fb458;
    }
    ctx->pc = 0x1FB450u;
    {
        const bool branch_taken_0x1fb450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb450) {
            ctx->pc = 0x1FB47Cu;
            goto label_1fb47c;
        }
    }
    ctx->pc = 0x1FB458u;
label_1fb458:
    // 0x1fb458: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1fb458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb45c:
    // 0x1fb45c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fb45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1fb460:
    // 0x1fb460: 0xc440bf70  lwc1        $f0, -0x4090($v0)
    ctx->pc = 0x1fb460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb464:
    // 0x1fb464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fb464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb468:
    // 0x1fb468: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1fb46c:
    if (ctx->pc == 0x1FB46Cu) {
        ctx->pc = 0x1FB470u;
        goto label_1fb470;
    }
    ctx->pc = 0x1FB468u;
    {
        const bool branch_taken_0x1fb468 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb468) {
            ctx->pc = 0x1FB47Cu;
            goto label_1fb47c;
        }
    }
    ctx->pc = 0x1FB470u;
label_1fb470:
    // 0x1fb470: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb474:
    // 0x1fb474: 0xc07ee60  jal         func_1FB980
label_1fb478:
    if (ctx->pc == 0x1FB478u) {
        ctx->pc = 0x1FB47Cu;
        goto label_1fb47c;
    }
    ctx->pc = 0x1FB474u;
    SET_GPR_U32(ctx, 31, 0x1FB47Cu);
    ctx->pc = 0x1FB980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB980u, 0x1FB474u, 0x1FB47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB47Cu;
label_1fb47c:
    // 0x1fb47c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb480:
    // 0x1fb480: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1fb480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb484:
    // 0x1fb484: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb488:
    // 0x1fb488: 0xc440011c  lwc1        $f0, 0x11C($v0)
    ctx->pc = 0x1fb488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb48c:
    // 0x1fb48c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1fb48cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fb490:
    // 0x1fb490: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb494:
    // 0x1fb494: 0xc4400134  lwc1        $f0, 0x134($v0)
    ctx->pc = 0x1fb494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb498:
    // 0x1fb498: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fb498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb49c:
    // 0x1fb49c: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_1fb4a0:
    if (ctx->pc == 0x1FB4A0u) {
        ctx->pc = 0x1FB4A4u;
        goto label_1fb4a4;
    }
    ctx->pc = 0x1FB49Cu;
    {
        const bool branch_taken_0x1fb49c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb49c) {
            ctx->pc = 0x1FB4FCu;
            goto label_1fb4fc;
        }
    }
    ctx->pc = 0x1FB4A4u;
label_1fb4a4:
    // 0x1fb4a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fb4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb4a8:
    // 0x1fb4a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1fb4ac:
    if (ctx->pc == 0x1FB4ACu) {
        ctx->pc = 0x1FB4B0u;
        goto label_1fb4b0;
    }
    ctx->pc = 0x1FB4A8u;
    {
        const bool branch_taken_0x1fb4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4a8) {
            ctx->pc = 0x1FB4C0u;
            goto label_1fb4c0;
        }
    }
    ctx->pc = 0x1FB4B0u;
label_1fb4b0:
    // 0x1fb4b0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb4b4:
    // 0x1fb4b4: 0xc07f354  jal         func_1FCD50
label_1fb4b8:
    if (ctx->pc == 0x1FB4B8u) {
        ctx->pc = 0x1FB4BCu;
        goto label_1fb4bc;
    }
    ctx->pc = 0x1FB4B4u;
    SET_GPR_U32(ctx, 31, 0x1FB4BCu);
    ctx->pc = 0x1FCD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCD50u, 0x1FB4B4u, 0x1FB4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB4BCu;
label_1fb4bc:
    // 0x1fb4bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fb4c0:
    // 0x1fb4c0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1fb4c4:
    // 0x1fb4c4: 0x8c42bf58  lw          $v0, -0x40A8($v0)
    ctx->pc = 0x1fb4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950744)));
label_1fb4c8:
    // 0x1fb4c8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fb4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fb4cc:
    // 0x1fb4cc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1fb4d0:
    if (ctx->pc == 0x1FB4D0u) {
        ctx->pc = 0x1FB4D4u;
        goto label_1fb4d4;
    }
    ctx->pc = 0x1FB4CCu;
    {
        const bool branch_taken_0x1fb4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4cc) {
            ctx->pc = 0x1FB4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb4b0;
        }
    }
    ctx->pc = 0x1FB4D4u;
label_1fb4d4:
    // 0x1fb4d4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1fb4d8:
    if (ctx->pc == 0x1FB4D8u) {
        ctx->pc = 0x1FB4DCu;
        goto label_1fb4dc;
    }
    ctx->pc = 0x1FB4D4u;
    {
        const bool branch_taken_0x1fb4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4d4) {
            ctx->pc = 0x1FB4FCu;
            goto label_1fb4fc;
        }
    }
    ctx->pc = 0x1FB4DCu;
label_1fb4dc:
    // 0x1fb4dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb4e0:
    // 0x1fb4e0: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x1fb4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1fb4e4:
    // 0x1fb4e4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1fb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fb4e8:
    // 0x1fb4e8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1fb4ec:
    if (ctx->pc == 0x1FB4ECu) {
        ctx->pc = 0x1FB4F0u;
        goto label_1fb4f0;
    }
    ctx->pc = 0x1FB4E8u;
    {
        const bool branch_taken_0x1fb4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fb4e8) {
            ctx->pc = 0x1FB4FCu;
            goto label_1fb4fc;
        }
    }
    ctx->pc = 0x1FB4F0u;
label_1fb4f0:
    // 0x1fb4f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fb4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb4f4:
    // 0x1fb4f4: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_1fb4f8:
    if (ctx->pc == 0x1FB4F8u) {
        ctx->pc = 0x1FB4FCu;
        goto label_1fb4fc;
    }
    ctx->pc = 0x1FB4F4u;
    {
        const bool branch_taken_0x1fb4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4f4) {
            ctx->pc = 0x1FB7D8u;
            goto label_1fb7d8;
        }
    }
    ctx->pc = 0x1FB4FCu;
label_1fb4fc:
    // 0x1fb4fc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb500:
    // 0x1fb500: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1fb500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb504:
    // 0x1fb504: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb508:
    // 0x1fb508: 0xc440012c  lwc1        $f0, 0x12C($v0)
    ctx->pc = 0x1fb508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb50c:
    // 0x1fb50c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1fb50cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb510:
    // 0x1fb510: 0x450100a9  bc1t        . + 4 + (0xA9 << 2)
label_1fb514:
    if (ctx->pc == 0x1FB514u) {
        ctx->pc = 0x1FB518u;
        goto label_1fb518;
    }
    ctx->pc = 0x1FB510u;
    {
        const bool branch_taken_0x1fb510 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb510) {
            ctx->pc = 0x1FB7B8u;
            goto label_1fb7b8;
        }
    }
    ctx->pc = 0x1FB518u;
label_1fb518:
    // 0x1fb518: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb51c:
    // 0x1fb51c: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x1fb51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1fb520:
    // 0x1fb520: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1fb520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fb524:
    // 0x1fb524: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb528:
    // 0x1fb528: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x1fb528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
label_1fb52c:
    // 0x1fb52c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb530:
    // 0x1fb530: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x1fb530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1fb534:
    // 0x1fb534: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1fb534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fb538:
    // 0x1fb538: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fb538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_1fb53c:
    // 0x1fb53c: 0x24428b70  addiu       $v0, $v0, -0x7490
    ctx->pc = 0x1fb53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937456));
label_1fb540:
    // 0x1fb540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb544:
    // 0x1fb544: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1fb544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb548:
    // 0x1fb548: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb54c:
    // 0x1fb54c: 0xc440012c  lwc1        $f0, 0x12C($v0)
    ctx->pc = 0x1fb54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb550:
    // 0x1fb550: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fb550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fb554:
    // 0x1fb554: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x1fb554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
label_1fb558:
    // 0x1fb558: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fb558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb55c:
    // 0x1fb55c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb560:
    // 0x1fb560: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x1fb560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1fb564:
    // 0x1fb564: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x1fb564u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1fb568:
    // 0x1fb568: 0x10200093  beqz        $at, . + 4 + (0x93 << 2)
label_1fb56c:
    if (ctx->pc == 0x1FB56Cu) {
        ctx->pc = 0x1FB570u;
        goto label_1fb570;
    }
    ctx->pc = 0x1FB568u;
    {
        const bool branch_taken_0x1fb568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb568) {
            ctx->pc = 0x1FB7B8u;
            goto label_1fb7b8;
        }
    }
    ctx->pc = 0x1FB570u;
label_1fb570:
    // 0x1fb570: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fb570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fb574:
    // 0x1fb574: 0x24638880  addiu       $v1, $v1, -0x7780
    ctx->pc = 0x1fb574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936704));
label_1fb578:
    // 0x1fb578: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fb578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fb57c:
    // 0x1fb57c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb580:
    // 0x1fb580: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fb580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb584:
    // 0x1fb584: 0x400008  jr          $v0
label_1fb588:
    if (ctx->pc == 0x1FB588u) {
        ctx->pc = 0x1FB58Cu;
        goto label_1fb58c;
    }
    ctx->pc = 0x1FB584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FB58Cu: goto label_1fb58c;
            case 0x1FB624u: goto label_1fb624;
            case 0x1FB6FCu: goto label_1fb6fc;
            case 0x1FB788u: goto label_1fb788;
            case 0x1FB7B8u: goto label_1fb7b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB584u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1FB58Cu;
label_1fb58c:
    // 0x1fb58c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb590:
    // 0x1fb590: 0xa3a2004f  sb          $v0, 0x4F($sp)
    ctx->pc = 0x1fb590u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 2));
label_1fb594:
    // 0x1fb594: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fb594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fb598:
    // 0x1fb598: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fb598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fb59c:
    // 0x1fb59c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb5a0:
    // 0x1fb5a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fb5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fb5a4:
    // 0x1fb5a4: 0x27a6004f  addiu       $a2, $sp, 0x4F
    ctx->pc = 0x1fb5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 79));
label_1fb5a8:
    // 0x1fb5a8: 0xc07edfc  jal         func_1FB7F0
label_1fb5ac:
    if (ctx->pc == 0x1FB5ACu) {
        ctx->pc = 0x1FB5B0u;
        goto label_1fb5b0;
    }
    ctx->pc = 0x1FB5A8u;
    SET_GPR_U32(ctx, 31, 0x1FB5B0u);
    ctx->pc = 0x1FB7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F0u, 0x1FB5A8u, 0x1FB5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5B0u;
label_1fb5b0:
    // 0x1fb5b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fb5b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb5b4:
    // 0x1fb5b4: 0x0  nop
    ctx->pc = 0x1fb5b4u;
    // NOP
label_1fb5b8:
    // 0x1fb5b8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1fb5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1fb5bc:
    // 0x1fb5bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fb5bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fb5c0:
    // 0x1fb5c0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fb5c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fb5c4:
    // 0x1fb5c4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb5c8:
    // 0x1fb5c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fb5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb5cc:
    // 0x1fb5cc: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1fb5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1fb5d0:
    // 0x1fb5d0: 0xc07edfc  jal         func_1FB7F0
label_1fb5d4:
    if (ctx->pc == 0x1FB5D4u) {
        ctx->pc = 0x1FB5D8u;
        goto label_1fb5d8;
    }
    ctx->pc = 0x1FB5D0u;
    SET_GPR_U32(ctx, 31, 0x1FB5D8u);
    ctx->pc = 0x1FB7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F0u, 0x1FB5D0u, 0x1FB5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5D8u;
label_1fb5d8:
    // 0x1fb5d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fb5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fb5dc:
    // 0x1fb5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb5e0:
    // 0x1fb5e0: 0x0  nop
    ctx->pc = 0x1fb5e0u;
    // NOP
label_1fb5e4:
    // 0x1fb5e4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1fb5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1fb5e8:
    // 0x1fb5e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fb5e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fb5ec:
    // 0x1fb5ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb5f0:
    // 0x1fb5f0: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x1fb5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1fb5f4:
    // 0x1fb5f4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1fb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fb5f8:
    // 0x1fb5f8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fb5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_1fb5fc:
    // 0x1fb5fc: 0x24428b70  addiu       $v0, $v0, -0x7490
    ctx->pc = 0x1fb5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937456));
label_1fb600:
    // 0x1fb600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb604:
    // 0x1fb604: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb608:
    // 0x1fb608: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fb608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb60c:
    // 0x1fb60c: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1fb60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1fb610:
    // 0x1fb610: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x1fb610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fb614:
    // 0x1fb614: 0xc07edfc  jal         func_1FB7F0
label_1fb618:
    if (ctx->pc == 0x1FB618u) {
        ctx->pc = 0x1FB61Cu;
        goto label_1fb61c;
    }
    ctx->pc = 0x1FB614u;
    SET_GPR_U32(ctx, 31, 0x1FB61Cu);
    ctx->pc = 0x1FB7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F0u, 0x1FB614u, 0x1FB61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB61Cu;
label_1fb61c:
    // 0x1fb61c: 0x10000066  b           . + 4 + (0x66 << 2)
label_1fb620:
    if (ctx->pc == 0x1FB620u) {
        ctx->pc = 0x1FB624u;
        goto label_1fb624;
    }
    ctx->pc = 0x1FB61Cu;
    {
        const bool branch_taken_0x1fb61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb61c) {
            ctx->pc = 0x1FB7B8u;
            goto label_1fb7b8;
        }
    }
    ctx->pc = 0x1FB624u;
label_1fb624:
    // 0x1fb624: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fb624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb628:
    // 0x1fb628: 0x0  nop
    ctx->pc = 0x1fb628u;
    // NOP
label_1fb62c:
    // 0x1fb62c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1fb62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1fb630:
    // 0x1fb630: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fb630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fb634:
    // 0x1fb634: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb638:
    // 0x1fb638: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x1fb638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1fb63c:
    // 0x1fb63c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1fb63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fb640:
    // 0x1fb640: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fb640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_1fb644:
    // 0x1fb644: 0x24428b70  addiu       $v0, $v0, -0x7490
    ctx->pc = 0x1fb644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937456));
label_1fb648:
    // 0x1fb648: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb64c:
    // 0x1fb64c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb650:
    // 0x1fb650: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fb650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb654:
    // 0x1fb654: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1fb654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1fb658:
    // 0x1fb658: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x1fb658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fb65c:
    // 0x1fb65c: 0xc07edfc  jal         func_1FB7F0
label_1fb660:
    if (ctx->pc == 0x1FB660u) {
        ctx->pc = 0x1FB664u;
        goto label_1fb664;
    }
    ctx->pc = 0x1FB65Cu;
    SET_GPR_U32(ctx, 31, 0x1FB664u);
    ctx->pc = 0x1FB7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F0u, 0x1FB65Cu, 0x1FB664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB664u;
label_1fb664:
    // 0x1fb664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb668:
    // 0x1fb668: 0xa3a2004f  sb          $v0, 0x4F($sp)
    ctx->pc = 0x1fb668u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 2));
label_1fb66c:
    // 0x1fb66c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fb66cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fb670:
    // 0x1fb670: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fb670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fb674:
    // 0x1fb674: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb678:
    // 0x1fb678: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fb678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fb67c:
    // 0x1fb67c: 0x27a6004f  addiu       $a2, $sp, 0x4F
    ctx->pc = 0x1fb67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 79));
label_1fb680:
    // 0x1fb680: 0xc07ee2c  jal         func_1FB8B0
label_1fb684:
    if (ctx->pc == 0x1FB684u) {
        ctx->pc = 0x1FB688u;
        goto label_1fb688;
    }
    ctx->pc = 0x1FB680u;
    SET_GPR_U32(ctx, 31, 0x1FB688u);
    ctx->pc = 0x1FB8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B0u, 0x1FB680u, 0x1FB688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB688u;
label_1fb688:
    // 0x1fb688: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fb688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb68c:
    // 0x1fb68c: 0x0  nop
    ctx->pc = 0x1fb68cu;
    // NOP
label_1fb690:
    // 0x1fb690: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1fb690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1fb694:
    // 0x1fb694: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fb694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fb698:
    // 0x1fb698: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fb698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fb69c:
    // 0x1fb69c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb6a0:
    // 0x1fb6a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fb6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb6a4:
    // 0x1fb6a4: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1fb6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1fb6a8:
    // 0x1fb6a8: 0xc07ee2c  jal         func_1FB8B0
label_1fb6ac:
    if (ctx->pc == 0x1FB6ACu) {
        ctx->pc = 0x1FB6B0u;
        goto label_1fb6b0;
    }
    ctx->pc = 0x1FB6A8u;
    SET_GPR_U32(ctx, 31, 0x1FB6B0u);
    ctx->pc = 0x1FB8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B0u, 0x1FB6A8u, 0x1FB6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB6B0u;
label_1fb6b0:
    // 0x1fb6b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fb6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fb6b4:
    // 0x1fb6b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb6b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb6b8:
    // 0x1fb6b8: 0x0  nop
    ctx->pc = 0x1fb6b8u;
    // NOP
label_1fb6bc:
    // 0x1fb6bc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1fb6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1fb6c0:
    // 0x1fb6c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fb6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fb6c4:
    // 0x1fb6c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb6c8:
    // 0x1fb6c8: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x1fb6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1fb6cc:
    // 0x1fb6cc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1fb6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fb6d0:
    // 0x1fb6d0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fb6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_1fb6d4:
    // 0x1fb6d4: 0x24428b70  addiu       $v0, $v0, -0x7490
    ctx->pc = 0x1fb6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937456));
label_1fb6d8:
    // 0x1fb6d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb6dc:
    // 0x1fb6dc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb6e0:
    // 0x1fb6e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fb6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb6e4:
    // 0x1fb6e4: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1fb6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1fb6e8:
    // 0x1fb6e8: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x1fb6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fb6ec:
    // 0x1fb6ec: 0xc07ee2c  jal         func_1FB8B0
label_1fb6f0:
    if (ctx->pc == 0x1FB6F0u) {
        ctx->pc = 0x1FB6F4u;
        goto label_1fb6f4;
    }
    ctx->pc = 0x1FB6ECu;
    SET_GPR_U32(ctx, 31, 0x1FB6F4u);
    ctx->pc = 0x1FB8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B0u, 0x1FB6ECu, 0x1FB6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB6F4u;
label_1fb6f4:
    // 0x1fb6f4: 0x10000030  b           . + 4 + (0x30 << 2)
label_1fb6f8:
    if (ctx->pc == 0x1FB6F8u) {
        ctx->pc = 0x1FB6FCu;
        goto label_1fb6fc;
    }
    ctx->pc = 0x1FB6F4u;
    {
        const bool branch_taken_0x1fb6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb6f4) {
            ctx->pc = 0x1FB7B8u;
            goto label_1fb7b8;
        }
    }
    ctx->pc = 0x1FB6FCu;
label_1fb6fc:
    // 0x1fb6fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fb6fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb700:
    // 0x1fb700: 0x0  nop
    ctx->pc = 0x1fb700u;
    // NOP
label_1fb704:
    // 0x1fb704: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1fb704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1fb708:
    // 0x1fb708: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fb708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fb70c:
    // 0x1fb70c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb710:
    // 0x1fb710: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x1fb710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1fb714:
    // 0x1fb714: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1fb714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fb718:
    // 0x1fb718: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fb718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_1fb71c:
    // 0x1fb71c: 0x24428b70  addiu       $v0, $v0, -0x7490
    ctx->pc = 0x1fb71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937456));
label_1fb720:
    // 0x1fb720: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb724:
    // 0x1fb724: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb728:
    // 0x1fb728: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fb728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb72c:
    // 0x1fb72c: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1fb72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1fb730:
    // 0x1fb730: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x1fb730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fb734:
    // 0x1fb734: 0xc07ee2c  jal         func_1FB8B0
label_1fb738:
    if (ctx->pc == 0x1FB738u) {
        ctx->pc = 0x1FB73Cu;
        goto label_1fb73c;
    }
    ctx->pc = 0x1FB734u;
    SET_GPR_U32(ctx, 31, 0x1FB73Cu);
    ctx->pc = 0x1FB8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B0u, 0x1FB734u, 0x1FB73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB73Cu;
label_1fb73c:
    // 0x1fb73c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fb73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fb740:
    // 0x1fb740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb744:
    // 0x1fb744: 0x0  nop
    ctx->pc = 0x1fb744u;
    // NOP
label_1fb748:
    // 0x1fb748: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1fb748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1fb74c:
    // 0x1fb74c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fb74cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fb750:
    // 0x1fb750: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb754:
    // 0x1fb754: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x1fb754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1fb758:
    // 0x1fb758: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1fb758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fb75c:
    // 0x1fb75c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fb75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_1fb760:
    // 0x1fb760: 0x24428b70  addiu       $v0, $v0, -0x7490
    ctx->pc = 0x1fb760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937456));
label_1fb764:
    // 0x1fb764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb768:
    // 0x1fb768: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb76c:
    // 0x1fb76c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fb76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb770:
    // 0x1fb770: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1fb770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1fb774:
    // 0x1fb774: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x1fb774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fb778:
    // 0x1fb778: 0xc07edfc  jal         func_1FB7F0
label_1fb77c:
    if (ctx->pc == 0x1FB77Cu) {
        ctx->pc = 0x1FB780u;
        goto label_1fb780;
    }
    ctx->pc = 0x1FB778u;
    SET_GPR_U32(ctx, 31, 0x1FB780u);
    ctx->pc = 0x1FB7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F0u, 0x1FB778u, 0x1FB780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB780u;
label_1fb780:
    // 0x1fb780: 0x1000000d  b           . + 4 + (0xD << 2)
label_1fb784:
    if (ctx->pc == 0x1FB784u) {
        ctx->pc = 0x1FB788u;
        goto label_1fb788;
    }
    ctx->pc = 0x1FB780u;
    {
        const bool branch_taken_0x1fb780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb780) {
            ctx->pc = 0x1FB7B8u;
            goto label_1fb7b8;
        }
    }
    ctx->pc = 0x1FB788u;
label_1fb788:
    // 0x1fb788: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb78c:
    // 0x1fb78c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1fb78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb790:
    // 0x1fb790: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb794:
    // 0x1fb794: 0xe4400130  swc1        $f0, 0x130($v0)
    ctx->pc = 0x1fb794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 304), bits); }
label_1fb798:
    // 0x1fb798: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb79c:
    // 0x1fb79c: 0xc4400130  lwc1        $f0, 0x130($v0)
    ctx->pc = 0x1fb79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb7a0:
    // 0x1fb7a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb7a4:
    // 0x1fb7a4: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x1fb7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
label_1fb7a8:
    // 0x1fb7a8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fb7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1fb7ac:
    // 0x1fb7ac: 0xc440bf74  lwc1        $f0, -0x408C($v0)
    ctx->pc = 0x1fb7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb7b0:
    // 0x1fb7b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb7b4:
    // 0x1fb7b4: 0xe4400134  swc1        $f0, 0x134($v0)
    ctx->pc = 0x1fb7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 308), bits); }
label_1fb7b8:
    // 0x1fb7b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb7bc:
    // 0x1fb7bc: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x1fb7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_1fb7c0:
    // 0x1fb7c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fb7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb7c4:
    // 0x1fb7c4: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x1fb7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
label_1fb7c8:
    // 0x1fb7c8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fb7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb7cc:
    // 0x1fb7cc: 0xc07fc80  jal         func_1FF200
label_1fb7d0:
    if (ctx->pc == 0x1FB7D0u) {
        ctx->pc = 0x1FB7D4u;
        goto label_1fb7d4;
    }
    ctx->pc = 0x1FB7CCu;
    SET_GPR_U32(ctx, 31, 0x1FB7D4u);
    ctx->pc = 0x1FF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF200u, 0x1FB7CCu, 0x1FB7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7D4u;
label_1fb7d4:
    // 0x1fb7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb7d8:
    // 0x1fb7d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fb7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb7dc:
    // 0x1fb7dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb7dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb7e0:
    // 0x1fb7e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fb7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb7e4:
    // 0x1fb7e4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1fb7e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1fb7e8:
    // 0x1fb7e8: 0x3e00008  jr          $ra
label_1fb7ec:
    if (ctx->pc == 0x1FB7ECu) {
        ctx->pc = 0x1FB7F0u;
        goto label_fallthrough_0x1fb7e8;
    }
    ctx->pc = 0x1FB7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fb7e8:
    ctx->pc = 0x1FB7F0u;
}
