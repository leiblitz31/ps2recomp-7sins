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

// Function: sub_0029C800
// Address: 0x29c800 - 0x29d090
void sub_0029C800_0x29c800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C800_0x29c800");
#endif

    switch (ctx->pc) {
        case 0x29c800u: goto label_29c800;
        case 0x29c804u: goto label_29c804;
        case 0x29c808u: goto label_29c808;
        case 0x29c80cu: goto label_29c80c;
        case 0x29c810u: goto label_29c810;
        case 0x29c814u: goto label_29c814;
        case 0x29c818u: goto label_29c818;
        case 0x29c81cu: goto label_29c81c;
        case 0x29c820u: goto label_29c820;
        case 0x29c824u: goto label_29c824;
        case 0x29c828u: goto label_29c828;
        case 0x29c82cu: goto label_29c82c;
        case 0x29c830u: goto label_29c830;
        case 0x29c834u: goto label_29c834;
        case 0x29c838u: goto label_29c838;
        case 0x29c83cu: goto label_29c83c;
        case 0x29c840u: goto label_29c840;
        case 0x29c844u: goto label_29c844;
        case 0x29c848u: goto label_29c848;
        case 0x29c84cu: goto label_29c84c;
        case 0x29c850u: goto label_29c850;
        case 0x29c854u: goto label_29c854;
        case 0x29c858u: goto label_29c858;
        case 0x29c85cu: goto label_29c85c;
        case 0x29c860u: goto label_29c860;
        case 0x29c864u: goto label_29c864;
        case 0x29c868u: goto label_29c868;
        case 0x29c86cu: goto label_29c86c;
        case 0x29c870u: goto label_29c870;
        case 0x29c874u: goto label_29c874;
        case 0x29c878u: goto label_29c878;
        case 0x29c87cu: goto label_29c87c;
        case 0x29c880u: goto label_29c880;
        case 0x29c884u: goto label_29c884;
        case 0x29c888u: goto label_29c888;
        case 0x29c88cu: goto label_29c88c;
        case 0x29c890u: goto label_29c890;
        case 0x29c894u: goto label_29c894;
        case 0x29c898u: goto label_29c898;
        case 0x29c89cu: goto label_29c89c;
        case 0x29c8a0u: goto label_29c8a0;
        case 0x29c8a4u: goto label_29c8a4;
        case 0x29c8a8u: goto label_29c8a8;
        case 0x29c8acu: goto label_29c8ac;
        case 0x29c8b0u: goto label_29c8b0;
        case 0x29c8b4u: goto label_29c8b4;
        case 0x29c8b8u: goto label_29c8b8;
        case 0x29c8bcu: goto label_29c8bc;
        case 0x29c8c0u: goto label_29c8c0;
        case 0x29c8c4u: goto label_29c8c4;
        case 0x29c8c8u: goto label_29c8c8;
        case 0x29c8ccu: goto label_29c8cc;
        case 0x29c8d0u: goto label_29c8d0;
        case 0x29c8d4u: goto label_29c8d4;
        case 0x29c8d8u: goto label_29c8d8;
        case 0x29c8dcu: goto label_29c8dc;
        case 0x29c8e0u: goto label_29c8e0;
        case 0x29c8e4u: goto label_29c8e4;
        case 0x29c8e8u: goto label_29c8e8;
        case 0x29c8ecu: goto label_29c8ec;
        case 0x29c8f0u: goto label_29c8f0;
        case 0x29c8f4u: goto label_29c8f4;
        case 0x29c8f8u: goto label_29c8f8;
        case 0x29c8fcu: goto label_29c8fc;
        case 0x29c900u: goto label_29c900;
        case 0x29c904u: goto label_29c904;
        case 0x29c908u: goto label_29c908;
        case 0x29c90cu: goto label_29c90c;
        case 0x29c910u: goto label_29c910;
        case 0x29c914u: goto label_29c914;
        case 0x29c918u: goto label_29c918;
        case 0x29c91cu: goto label_29c91c;
        case 0x29c920u: goto label_29c920;
        case 0x29c924u: goto label_29c924;
        case 0x29c928u: goto label_29c928;
        case 0x29c92cu: goto label_29c92c;
        case 0x29c930u: goto label_29c930;
        case 0x29c934u: goto label_29c934;
        case 0x29c938u: goto label_29c938;
        case 0x29c93cu: goto label_29c93c;
        case 0x29c940u: goto label_29c940;
        case 0x29c944u: goto label_29c944;
        case 0x29c948u: goto label_29c948;
        case 0x29c94cu: goto label_29c94c;
        case 0x29c950u: goto label_29c950;
        case 0x29c954u: goto label_29c954;
        case 0x29c958u: goto label_29c958;
        case 0x29c95cu: goto label_29c95c;
        case 0x29c960u: goto label_29c960;
        case 0x29c964u: goto label_29c964;
        case 0x29c968u: goto label_29c968;
        case 0x29c96cu: goto label_29c96c;
        case 0x29c970u: goto label_29c970;
        case 0x29c974u: goto label_29c974;
        case 0x29c978u: goto label_29c978;
        case 0x29c97cu: goto label_29c97c;
        case 0x29c980u: goto label_29c980;
        case 0x29c984u: goto label_29c984;
        case 0x29c988u: goto label_29c988;
        case 0x29c98cu: goto label_29c98c;
        case 0x29c990u: goto label_29c990;
        case 0x29c994u: goto label_29c994;
        case 0x29c998u: goto label_29c998;
        case 0x29c99cu: goto label_29c99c;
        case 0x29c9a0u: goto label_29c9a0;
        case 0x29c9a4u: goto label_29c9a4;
        case 0x29c9a8u: goto label_29c9a8;
        case 0x29c9acu: goto label_29c9ac;
        case 0x29c9b0u: goto label_29c9b0;
        case 0x29c9b4u: goto label_29c9b4;
        case 0x29c9b8u: goto label_29c9b8;
        case 0x29c9bcu: goto label_29c9bc;
        case 0x29c9c0u: goto label_29c9c0;
        case 0x29c9c4u: goto label_29c9c4;
        case 0x29c9c8u: goto label_29c9c8;
        case 0x29c9ccu: goto label_29c9cc;
        case 0x29c9d0u: goto label_29c9d0;
        case 0x29c9d4u: goto label_29c9d4;
        case 0x29c9d8u: goto label_29c9d8;
        case 0x29c9dcu: goto label_29c9dc;
        case 0x29c9e0u: goto label_29c9e0;
        case 0x29c9e4u: goto label_29c9e4;
        case 0x29c9e8u: goto label_29c9e8;
        case 0x29c9ecu: goto label_29c9ec;
        case 0x29c9f0u: goto label_29c9f0;
        case 0x29c9f4u: goto label_29c9f4;
        case 0x29c9f8u: goto label_29c9f8;
        case 0x29c9fcu: goto label_29c9fc;
        case 0x29ca00u: goto label_29ca00;
        case 0x29ca04u: goto label_29ca04;
        case 0x29ca08u: goto label_29ca08;
        case 0x29ca0cu: goto label_29ca0c;
        case 0x29ca10u: goto label_29ca10;
        case 0x29ca14u: goto label_29ca14;
        case 0x29ca18u: goto label_29ca18;
        case 0x29ca1cu: goto label_29ca1c;
        case 0x29ca20u: goto label_29ca20;
        case 0x29ca24u: goto label_29ca24;
        case 0x29ca28u: goto label_29ca28;
        case 0x29ca2cu: goto label_29ca2c;
        case 0x29ca30u: goto label_29ca30;
        case 0x29ca34u: goto label_29ca34;
        case 0x29ca38u: goto label_29ca38;
        case 0x29ca3cu: goto label_29ca3c;
        case 0x29ca40u: goto label_29ca40;
        case 0x29ca44u: goto label_29ca44;
        case 0x29ca48u: goto label_29ca48;
        case 0x29ca4cu: goto label_29ca4c;
        case 0x29ca50u: goto label_29ca50;
        case 0x29ca54u: goto label_29ca54;
        case 0x29ca58u: goto label_29ca58;
        case 0x29ca5cu: goto label_29ca5c;
        case 0x29ca60u: goto label_29ca60;
        case 0x29ca64u: goto label_29ca64;
        case 0x29ca68u: goto label_29ca68;
        case 0x29ca6cu: goto label_29ca6c;
        case 0x29ca70u: goto label_29ca70;
        case 0x29ca74u: goto label_29ca74;
        case 0x29ca78u: goto label_29ca78;
        case 0x29ca7cu: goto label_29ca7c;
        case 0x29ca80u: goto label_29ca80;
        case 0x29ca84u: goto label_29ca84;
        case 0x29ca88u: goto label_29ca88;
        case 0x29ca8cu: goto label_29ca8c;
        case 0x29ca90u: goto label_29ca90;
        case 0x29ca94u: goto label_29ca94;
        case 0x29ca98u: goto label_29ca98;
        case 0x29ca9cu: goto label_29ca9c;
        case 0x29caa0u: goto label_29caa0;
        case 0x29caa4u: goto label_29caa4;
        case 0x29caa8u: goto label_29caa8;
        case 0x29caacu: goto label_29caac;
        case 0x29cab0u: goto label_29cab0;
        case 0x29cab4u: goto label_29cab4;
        case 0x29cab8u: goto label_29cab8;
        case 0x29cabcu: goto label_29cabc;
        case 0x29cac0u: goto label_29cac0;
        case 0x29cac4u: goto label_29cac4;
        case 0x29cac8u: goto label_29cac8;
        case 0x29caccu: goto label_29cacc;
        case 0x29cad0u: goto label_29cad0;
        case 0x29cad4u: goto label_29cad4;
        case 0x29cad8u: goto label_29cad8;
        case 0x29cadcu: goto label_29cadc;
        case 0x29cae0u: goto label_29cae0;
        case 0x29cae4u: goto label_29cae4;
        case 0x29cae8u: goto label_29cae8;
        case 0x29caecu: goto label_29caec;
        case 0x29caf0u: goto label_29caf0;
        case 0x29caf4u: goto label_29caf4;
        case 0x29caf8u: goto label_29caf8;
        case 0x29cafcu: goto label_29cafc;
        case 0x29cb00u: goto label_29cb00;
        case 0x29cb04u: goto label_29cb04;
        case 0x29cb08u: goto label_29cb08;
        case 0x29cb0cu: goto label_29cb0c;
        case 0x29cb10u: goto label_29cb10;
        case 0x29cb14u: goto label_29cb14;
        case 0x29cb18u: goto label_29cb18;
        case 0x29cb1cu: goto label_29cb1c;
        case 0x29cb20u: goto label_29cb20;
        case 0x29cb24u: goto label_29cb24;
        case 0x29cb28u: goto label_29cb28;
        case 0x29cb2cu: goto label_29cb2c;
        case 0x29cb30u: goto label_29cb30;
        case 0x29cb34u: goto label_29cb34;
        case 0x29cb38u: goto label_29cb38;
        case 0x29cb3cu: goto label_29cb3c;
        case 0x29cb40u: goto label_29cb40;
        case 0x29cb44u: goto label_29cb44;
        case 0x29cb48u: goto label_29cb48;
        case 0x29cb4cu: goto label_29cb4c;
        case 0x29cb50u: goto label_29cb50;
        case 0x29cb54u: goto label_29cb54;
        case 0x29cb58u: goto label_29cb58;
        case 0x29cb5cu: goto label_29cb5c;
        case 0x29cb60u: goto label_29cb60;
        case 0x29cb64u: goto label_29cb64;
        case 0x29cb68u: goto label_29cb68;
        case 0x29cb6cu: goto label_29cb6c;
        case 0x29cb70u: goto label_29cb70;
        case 0x29cb74u: goto label_29cb74;
        case 0x29cb78u: goto label_29cb78;
        case 0x29cb7cu: goto label_29cb7c;
        case 0x29cb80u: goto label_29cb80;
        case 0x29cb84u: goto label_29cb84;
        case 0x29cb88u: goto label_29cb88;
        case 0x29cb8cu: goto label_29cb8c;
        case 0x29cb90u: goto label_29cb90;
        case 0x29cb94u: goto label_29cb94;
        case 0x29cb98u: goto label_29cb98;
        case 0x29cb9cu: goto label_29cb9c;
        case 0x29cba0u: goto label_29cba0;
        case 0x29cba4u: goto label_29cba4;
        case 0x29cba8u: goto label_29cba8;
        case 0x29cbacu: goto label_29cbac;
        case 0x29cbb0u: goto label_29cbb0;
        case 0x29cbb4u: goto label_29cbb4;
        case 0x29cbb8u: goto label_29cbb8;
        case 0x29cbbcu: goto label_29cbbc;
        case 0x29cbc0u: goto label_29cbc0;
        case 0x29cbc4u: goto label_29cbc4;
        case 0x29cbc8u: goto label_29cbc8;
        case 0x29cbccu: goto label_29cbcc;
        case 0x29cbd0u: goto label_29cbd0;
        case 0x29cbd4u: goto label_29cbd4;
        case 0x29cbd8u: goto label_29cbd8;
        case 0x29cbdcu: goto label_29cbdc;
        case 0x29cbe0u: goto label_29cbe0;
        case 0x29cbe4u: goto label_29cbe4;
        case 0x29cbe8u: goto label_29cbe8;
        case 0x29cbecu: goto label_29cbec;
        case 0x29cbf0u: goto label_29cbf0;
        case 0x29cbf4u: goto label_29cbf4;
        case 0x29cbf8u: goto label_29cbf8;
        case 0x29cbfcu: goto label_29cbfc;
        case 0x29cc00u: goto label_29cc00;
        case 0x29cc04u: goto label_29cc04;
        case 0x29cc08u: goto label_29cc08;
        case 0x29cc0cu: goto label_29cc0c;
        case 0x29cc10u: goto label_29cc10;
        case 0x29cc14u: goto label_29cc14;
        case 0x29cc18u: goto label_29cc18;
        case 0x29cc1cu: goto label_29cc1c;
        case 0x29cc20u: goto label_29cc20;
        case 0x29cc24u: goto label_29cc24;
        case 0x29cc28u: goto label_29cc28;
        case 0x29cc2cu: goto label_29cc2c;
        case 0x29cc30u: goto label_29cc30;
        case 0x29cc34u: goto label_29cc34;
        case 0x29cc38u: goto label_29cc38;
        case 0x29cc3cu: goto label_29cc3c;
        case 0x29cc40u: goto label_29cc40;
        case 0x29cc44u: goto label_29cc44;
        case 0x29cc48u: goto label_29cc48;
        case 0x29cc4cu: goto label_29cc4c;
        case 0x29cc50u: goto label_29cc50;
        case 0x29cc54u: goto label_29cc54;
        case 0x29cc58u: goto label_29cc58;
        case 0x29cc5cu: goto label_29cc5c;
        case 0x29cc60u: goto label_29cc60;
        case 0x29cc64u: goto label_29cc64;
        case 0x29cc68u: goto label_29cc68;
        case 0x29cc6cu: goto label_29cc6c;
        case 0x29cc70u: goto label_29cc70;
        case 0x29cc74u: goto label_29cc74;
        case 0x29cc78u: goto label_29cc78;
        case 0x29cc7cu: goto label_29cc7c;
        case 0x29cc80u: goto label_29cc80;
        case 0x29cc84u: goto label_29cc84;
        case 0x29cc88u: goto label_29cc88;
        case 0x29cc8cu: goto label_29cc8c;
        case 0x29cc90u: goto label_29cc90;
        case 0x29cc94u: goto label_29cc94;
        case 0x29cc98u: goto label_29cc98;
        case 0x29cc9cu: goto label_29cc9c;
        case 0x29cca0u: goto label_29cca0;
        case 0x29cca4u: goto label_29cca4;
        case 0x29cca8u: goto label_29cca8;
        case 0x29ccacu: goto label_29ccac;
        case 0x29ccb0u: goto label_29ccb0;
        case 0x29ccb4u: goto label_29ccb4;
        case 0x29ccb8u: goto label_29ccb8;
        case 0x29ccbcu: goto label_29ccbc;
        case 0x29ccc0u: goto label_29ccc0;
        case 0x29ccc4u: goto label_29ccc4;
        case 0x29ccc8u: goto label_29ccc8;
        case 0x29ccccu: goto label_29cccc;
        case 0x29ccd0u: goto label_29ccd0;
        case 0x29ccd4u: goto label_29ccd4;
        case 0x29ccd8u: goto label_29ccd8;
        case 0x29ccdcu: goto label_29ccdc;
        case 0x29cce0u: goto label_29cce0;
        case 0x29cce4u: goto label_29cce4;
        case 0x29cce8u: goto label_29cce8;
        case 0x29ccecu: goto label_29ccec;
        case 0x29ccf0u: goto label_29ccf0;
        case 0x29ccf4u: goto label_29ccf4;
        case 0x29ccf8u: goto label_29ccf8;
        case 0x29ccfcu: goto label_29ccfc;
        case 0x29cd00u: goto label_29cd00;
        case 0x29cd04u: goto label_29cd04;
        case 0x29cd08u: goto label_29cd08;
        case 0x29cd0cu: goto label_29cd0c;
        case 0x29cd10u: goto label_29cd10;
        case 0x29cd14u: goto label_29cd14;
        case 0x29cd18u: goto label_29cd18;
        case 0x29cd1cu: goto label_29cd1c;
        case 0x29cd20u: goto label_29cd20;
        case 0x29cd24u: goto label_29cd24;
        case 0x29cd28u: goto label_29cd28;
        case 0x29cd2cu: goto label_29cd2c;
        case 0x29cd30u: goto label_29cd30;
        case 0x29cd34u: goto label_29cd34;
        case 0x29cd38u: goto label_29cd38;
        case 0x29cd3cu: goto label_29cd3c;
        case 0x29cd40u: goto label_29cd40;
        case 0x29cd44u: goto label_29cd44;
        case 0x29cd48u: goto label_29cd48;
        case 0x29cd4cu: goto label_29cd4c;
        case 0x29cd50u: goto label_29cd50;
        case 0x29cd54u: goto label_29cd54;
        case 0x29cd58u: goto label_29cd58;
        case 0x29cd5cu: goto label_29cd5c;
        case 0x29cd60u: goto label_29cd60;
        case 0x29cd64u: goto label_29cd64;
        case 0x29cd68u: goto label_29cd68;
        case 0x29cd6cu: goto label_29cd6c;
        case 0x29cd70u: goto label_29cd70;
        case 0x29cd74u: goto label_29cd74;
        case 0x29cd78u: goto label_29cd78;
        case 0x29cd7cu: goto label_29cd7c;
        case 0x29cd80u: goto label_29cd80;
        case 0x29cd84u: goto label_29cd84;
        case 0x29cd88u: goto label_29cd88;
        case 0x29cd8cu: goto label_29cd8c;
        case 0x29cd90u: goto label_29cd90;
        case 0x29cd94u: goto label_29cd94;
        case 0x29cd98u: goto label_29cd98;
        case 0x29cd9cu: goto label_29cd9c;
        case 0x29cda0u: goto label_29cda0;
        case 0x29cda4u: goto label_29cda4;
        case 0x29cda8u: goto label_29cda8;
        case 0x29cdacu: goto label_29cdac;
        case 0x29cdb0u: goto label_29cdb0;
        case 0x29cdb4u: goto label_29cdb4;
        case 0x29cdb8u: goto label_29cdb8;
        case 0x29cdbcu: goto label_29cdbc;
        case 0x29cdc0u: goto label_29cdc0;
        case 0x29cdc4u: goto label_29cdc4;
        case 0x29cdc8u: goto label_29cdc8;
        case 0x29cdccu: goto label_29cdcc;
        case 0x29cdd0u: goto label_29cdd0;
        case 0x29cdd4u: goto label_29cdd4;
        case 0x29cdd8u: goto label_29cdd8;
        case 0x29cddcu: goto label_29cddc;
        case 0x29cde0u: goto label_29cde0;
        case 0x29cde4u: goto label_29cde4;
        case 0x29cde8u: goto label_29cde8;
        case 0x29cdecu: goto label_29cdec;
        case 0x29cdf0u: goto label_29cdf0;
        case 0x29cdf4u: goto label_29cdf4;
        case 0x29cdf8u: goto label_29cdf8;
        case 0x29cdfcu: goto label_29cdfc;
        case 0x29ce00u: goto label_29ce00;
        case 0x29ce04u: goto label_29ce04;
        case 0x29ce08u: goto label_29ce08;
        case 0x29ce0cu: goto label_29ce0c;
        case 0x29ce10u: goto label_29ce10;
        case 0x29ce14u: goto label_29ce14;
        case 0x29ce18u: goto label_29ce18;
        case 0x29ce1cu: goto label_29ce1c;
        case 0x29ce20u: goto label_29ce20;
        case 0x29ce24u: goto label_29ce24;
        case 0x29ce28u: goto label_29ce28;
        case 0x29ce2cu: goto label_29ce2c;
        case 0x29ce30u: goto label_29ce30;
        case 0x29ce34u: goto label_29ce34;
        case 0x29ce38u: goto label_29ce38;
        case 0x29ce3cu: goto label_29ce3c;
        case 0x29ce40u: goto label_29ce40;
        case 0x29ce44u: goto label_29ce44;
        case 0x29ce48u: goto label_29ce48;
        case 0x29ce4cu: goto label_29ce4c;
        case 0x29ce50u: goto label_29ce50;
        case 0x29ce54u: goto label_29ce54;
        case 0x29ce58u: goto label_29ce58;
        case 0x29ce5cu: goto label_29ce5c;
        case 0x29ce60u: goto label_29ce60;
        case 0x29ce64u: goto label_29ce64;
        case 0x29ce68u: goto label_29ce68;
        case 0x29ce6cu: goto label_29ce6c;
        case 0x29ce70u: goto label_29ce70;
        case 0x29ce74u: goto label_29ce74;
        case 0x29ce78u: goto label_29ce78;
        case 0x29ce7cu: goto label_29ce7c;
        case 0x29ce80u: goto label_29ce80;
        case 0x29ce84u: goto label_29ce84;
        case 0x29ce88u: goto label_29ce88;
        case 0x29ce8cu: goto label_29ce8c;
        case 0x29ce90u: goto label_29ce90;
        case 0x29ce94u: goto label_29ce94;
        case 0x29ce98u: goto label_29ce98;
        case 0x29ce9cu: goto label_29ce9c;
        case 0x29cea0u: goto label_29cea0;
        case 0x29cea4u: goto label_29cea4;
        case 0x29cea8u: goto label_29cea8;
        case 0x29ceacu: goto label_29ceac;
        case 0x29ceb0u: goto label_29ceb0;
        case 0x29ceb4u: goto label_29ceb4;
        case 0x29ceb8u: goto label_29ceb8;
        case 0x29cebcu: goto label_29cebc;
        case 0x29cec0u: goto label_29cec0;
        case 0x29cec4u: goto label_29cec4;
        case 0x29cec8u: goto label_29cec8;
        case 0x29ceccu: goto label_29cecc;
        case 0x29ced0u: goto label_29ced0;
        case 0x29ced4u: goto label_29ced4;
        case 0x29ced8u: goto label_29ced8;
        case 0x29cedcu: goto label_29cedc;
        case 0x29cee0u: goto label_29cee0;
        case 0x29cee4u: goto label_29cee4;
        case 0x29cee8u: goto label_29cee8;
        case 0x29ceecu: goto label_29ceec;
        case 0x29cef0u: goto label_29cef0;
        case 0x29cef4u: goto label_29cef4;
        case 0x29cef8u: goto label_29cef8;
        case 0x29cefcu: goto label_29cefc;
        case 0x29cf00u: goto label_29cf00;
        case 0x29cf04u: goto label_29cf04;
        case 0x29cf08u: goto label_29cf08;
        case 0x29cf0cu: goto label_29cf0c;
        case 0x29cf10u: goto label_29cf10;
        case 0x29cf14u: goto label_29cf14;
        case 0x29cf18u: goto label_29cf18;
        case 0x29cf1cu: goto label_29cf1c;
        case 0x29cf20u: goto label_29cf20;
        case 0x29cf24u: goto label_29cf24;
        case 0x29cf28u: goto label_29cf28;
        case 0x29cf2cu: goto label_29cf2c;
        case 0x29cf30u: goto label_29cf30;
        case 0x29cf34u: goto label_29cf34;
        case 0x29cf38u: goto label_29cf38;
        case 0x29cf3cu: goto label_29cf3c;
        case 0x29cf40u: goto label_29cf40;
        case 0x29cf44u: goto label_29cf44;
        case 0x29cf48u: goto label_29cf48;
        case 0x29cf4cu: goto label_29cf4c;
        case 0x29cf50u: goto label_29cf50;
        case 0x29cf54u: goto label_29cf54;
        case 0x29cf58u: goto label_29cf58;
        case 0x29cf5cu: goto label_29cf5c;
        case 0x29cf60u: goto label_29cf60;
        case 0x29cf64u: goto label_29cf64;
        case 0x29cf68u: goto label_29cf68;
        case 0x29cf6cu: goto label_29cf6c;
        case 0x29cf70u: goto label_29cf70;
        case 0x29cf74u: goto label_29cf74;
        case 0x29cf78u: goto label_29cf78;
        case 0x29cf7cu: goto label_29cf7c;
        case 0x29cf80u: goto label_29cf80;
        case 0x29cf84u: goto label_29cf84;
        case 0x29cf88u: goto label_29cf88;
        case 0x29cf8cu: goto label_29cf8c;
        case 0x29cf90u: goto label_29cf90;
        case 0x29cf94u: goto label_29cf94;
        case 0x29cf98u: goto label_29cf98;
        case 0x29cf9cu: goto label_29cf9c;
        case 0x29cfa0u: goto label_29cfa0;
        case 0x29cfa4u: goto label_29cfa4;
        case 0x29cfa8u: goto label_29cfa8;
        case 0x29cfacu: goto label_29cfac;
        case 0x29cfb0u: goto label_29cfb0;
        case 0x29cfb4u: goto label_29cfb4;
        case 0x29cfb8u: goto label_29cfb8;
        case 0x29cfbcu: goto label_29cfbc;
        case 0x29cfc0u: goto label_29cfc0;
        case 0x29cfc4u: goto label_29cfc4;
        case 0x29cfc8u: goto label_29cfc8;
        case 0x29cfccu: goto label_29cfcc;
        case 0x29cfd0u: goto label_29cfd0;
        case 0x29cfd4u: goto label_29cfd4;
        case 0x29cfd8u: goto label_29cfd8;
        case 0x29cfdcu: goto label_29cfdc;
        case 0x29cfe0u: goto label_29cfe0;
        case 0x29cfe4u: goto label_29cfe4;
        case 0x29cfe8u: goto label_29cfe8;
        case 0x29cfecu: goto label_29cfec;
        case 0x29cff0u: goto label_29cff0;
        case 0x29cff4u: goto label_29cff4;
        case 0x29cff8u: goto label_29cff8;
        case 0x29cffcu: goto label_29cffc;
        case 0x29d000u: goto label_29d000;
        case 0x29d004u: goto label_29d004;
        case 0x29d008u: goto label_29d008;
        case 0x29d00cu: goto label_29d00c;
        case 0x29d010u: goto label_29d010;
        case 0x29d014u: goto label_29d014;
        case 0x29d018u: goto label_29d018;
        case 0x29d01cu: goto label_29d01c;
        case 0x29d020u: goto label_29d020;
        case 0x29d024u: goto label_29d024;
        case 0x29d028u: goto label_29d028;
        case 0x29d02cu: goto label_29d02c;
        case 0x29d030u: goto label_29d030;
        case 0x29d034u: goto label_29d034;
        case 0x29d038u: goto label_29d038;
        case 0x29d03cu: goto label_29d03c;
        case 0x29d040u: goto label_29d040;
        case 0x29d044u: goto label_29d044;
        case 0x29d048u: goto label_29d048;
        case 0x29d04cu: goto label_29d04c;
        case 0x29d050u: goto label_29d050;
        case 0x29d054u: goto label_29d054;
        case 0x29d058u: goto label_29d058;
        case 0x29d05cu: goto label_29d05c;
        case 0x29d060u: goto label_29d060;
        case 0x29d064u: goto label_29d064;
        case 0x29d068u: goto label_29d068;
        case 0x29d06cu: goto label_29d06c;
        case 0x29d070u: goto label_29d070;
        case 0x29d074u: goto label_29d074;
        case 0x29d078u: goto label_29d078;
        case 0x29d07cu: goto label_29d07c;
        case 0x29d080u: goto label_29d080;
        case 0x29d084u: goto label_29d084;
        case 0x29d088u: goto label_29d088;
        case 0x29d08cu: goto label_29d08c;
        default: break;
    }

    ctx->pc = 0x29c800u;

label_29c800:
    // 0x29c800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29c800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29c804:
    // 0x29c804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29c808:
    // 0x29c808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29c808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_29c80c:
    // 0x29c80c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x29c80cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_29c810:
    // 0x29c810: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29c814:
    // 0x29c814: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_29c818:
    if (ctx->pc == 0x29C818u) {
        ctx->pc = 0x29C81Cu;
        goto label_29c81c;
    }
    ctx->pc = 0x29C814u;
    {
        const bool branch_taken_0x29c814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c814) {
            ctx->pc = 0x29C870u;
            goto label_29c870;
        }
    }
    ctx->pc = 0x29C81Cu;
label_29c81c:
    // 0x29c81c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x29c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_29c820:
    // 0x29c820: 0x246361c0  addiu       $v1, $v1, 0x61C0
    ctx->pc = 0x29c820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25024));
label_29c824:
    // 0x29c824: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29c828:
    // 0x29c828: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29c828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_29c82c:
    // 0x29c82c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29c830:
    // 0x29c830: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29c830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_29c834:
    // 0x29c834: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29c834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29c838:
    // 0x29c838: 0xc0989ec  jal         func_2627B0
label_29c83c:
    if (ctx->pc == 0x29C83Cu) {
        ctx->pc = 0x29C840u;
        goto label_29c840;
    }
    ctx->pc = 0x29C838u;
    SET_GPR_U32(ctx, 31, 0x29C840u);
    ctx->pc = 0x2627B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2627B0u, 0x29C838u, 0x29C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C840u;
label_29c840:
    // 0x29c840: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29c840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29c844:
    // 0x29c844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c848:
    // 0x29c848: 0xc09d150  jal         func_274540
label_29c84c:
    if (ctx->pc == 0x29C84Cu) {
        ctx->pc = 0x29C850u;
        goto label_29c850;
    }
    ctx->pc = 0x29C848u;
    SET_GPR_U32(ctx, 31, 0x29C850u);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x29C848u, 0x29C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C850u;
label_29c850:
    // 0x29c850: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x29c850u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_29c854:
    // 0x29c854: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29c854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_29c858:
    // 0x29c858: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29c858u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29c85c:
    // 0x29c85c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_29c860:
    if (ctx->pc == 0x29C860u) {
        ctx->pc = 0x29C864u;
        goto label_29c864;
    }
    ctx->pc = 0x29C85Cu;
    {
        const bool branch_taken_0x29c85c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29c85c) {
            ctx->pc = 0x29C870u;
            goto label_29c870;
        }
    }
    ctx->pc = 0x29C864u;
label_29c864:
    // 0x29c864: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29c864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29c868:
    // 0x29c868: 0xc0ba070  jal         func_2E81C0
label_29c86c:
    if (ctx->pc == 0x29C86Cu) {
        ctx->pc = 0x29C870u;
        goto label_29c870;
    }
    ctx->pc = 0x29C868u;
    SET_GPR_U32(ctx, 31, 0x29C870u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x29C868u, 0x29C870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C870u;
label_29c870:
    // 0x29c870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29c874:
    // 0x29c874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c878:
    // 0x29c878: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29c878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29c87c:
    // 0x29c87c: 0x3e00008  jr          $ra
label_29c880:
    if (ctx->pc == 0x29C880u) {
        ctx->pc = 0x29C884u;
        goto label_29c884;
    }
    ctx->pc = 0x29C87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C884u;
label_29c884:
    // 0x29c884: 0x0  nop
    ctx->pc = 0x29c884u;
    // NOP
label_29c888:
    // 0x29c888: 0x0  nop
    ctx->pc = 0x29c888u;
    // NOP
label_29c88c:
    // 0x29c88c: 0x0  nop
    ctx->pc = 0x29c88cu;
    // NOP
label_29c890:
    // 0x29c890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29c890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29c894:
    // 0x29c894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29c894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29c898:
    // 0x29c898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29c89c:
    // 0x29c89c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_29c8a0:
    // 0x29c8a0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29c8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_29c8a4:
    // 0x29c8a4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x29c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_29c8a8:
    // 0x29c8a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29c8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_29c8ac:
    // 0x29c8ac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29c8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29c8b0:
    // 0x29c8b0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x29c8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29c8b4:
    // 0x29c8b4: 0xc09d18c  jal         func_274630
label_29c8b8:
    if (ctx->pc == 0x29C8B8u) {
        ctx->pc = 0x29C8BCu;
        goto label_29c8bc;
    }
    ctx->pc = 0x29C8B4u;
    SET_GPR_U32(ctx, 31, 0x29C8BCu);
    ctx->pc = 0x274630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274630u, 0x29C8B4u, 0x29C8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8BCu;
label_29c8bc:
    // 0x29c8bc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x29c8bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c8c0:
    // 0x29c8c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c8c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c8c4:
    // 0x29c8c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c8c8:
    // 0x29c8c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c8c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c8cc:
    // 0x29c8cc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29c8ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_29c8d0:
    // 0x29c8d0: 0x3e00008  jr          $ra
label_29c8d4:
    if (ctx->pc == 0x29C8D4u) {
        ctx->pc = 0x29C8D8u;
        goto label_29c8d8;
    }
    ctx->pc = 0x29C8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C8D8u;
label_29c8d8:
    // 0x29c8d8: 0x0  nop
    ctx->pc = 0x29c8d8u;
    // NOP
label_29c8dc:
    // 0x29c8dc: 0x0  nop
    ctx->pc = 0x29c8dcu;
    // NOP
label_29c8e0:
    // 0x29c8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29c8e4:
    // 0x29c8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29c8e8:
    // 0x29c8e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_29c8ec:
    // 0x29c8ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29c8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29c8f0:
    // 0x29c8f0: 0xc09d1d8  jal         func_274760
label_29c8f4:
    if (ctx->pc == 0x29C8F4u) {
        ctx->pc = 0x29C8F8u;
        goto label_29c8f8;
    }
    ctx->pc = 0x29C8F0u;
    SET_GPR_U32(ctx, 31, 0x29C8F8u);
    ctx->pc = 0x274760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274760u, 0x29C8F0u, 0x29C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8F8u;
label_29c8f8:
    // 0x29c8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c8fc:
    // 0x29c8fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29c8fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29c900:
    // 0x29c900: 0x3e00008  jr          $ra
label_29c904:
    if (ctx->pc == 0x29C904u) {
        ctx->pc = 0x29C908u;
        goto label_29c908;
    }
    ctx->pc = 0x29C900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C908u;
label_29c908:
    // 0x29c908: 0x0  nop
    ctx->pc = 0x29c908u;
    // NOP
label_29c90c:
    // 0x29c90c: 0x0  nop
    ctx->pc = 0x29c90cu;
    // NOP
label_29c910:
    // 0x29c910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29c914:
    // 0x29c914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29c918:
    // 0x29c918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29c91c:
    // 0x29c91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29c920:
    // 0x29c920: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x29c920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_29c924:
    // 0x29c924: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x29c924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_29c928:
    // 0x29c928: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x29c928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29c92c:
    // 0x29c92c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x29c92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29c930:
    // 0x29c930: 0xc09d1e4  jal         func_274790
label_29c934:
    if (ctx->pc == 0x29C934u) {
        ctx->pc = 0x29C938u;
        goto label_29c938;
    }
    ctx->pc = 0x29C930u;
    SET_GPR_U32(ctx, 31, 0x29C938u);
    ctx->pc = 0x274790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274790u, 0x29C930u, 0x29C938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C938u;
label_29c938:
    // 0x29c938: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x29c938u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c93c:
    // 0x29c93c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x29c93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_29c940:
    // 0x29c940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c944:
    // 0x29c944: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_29c948:
    if (ctx->pc == 0x29C948u) {
        ctx->pc = 0x29C94Cu;
        goto label_29c94c;
    }
    ctx->pc = 0x29C944u;
    {
        const bool branch_taken_0x29c944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29c944) {
            ctx->pc = 0x29C9BCu;
            goto label_29c9bc;
        }
    }
    ctx->pc = 0x29C94Cu;
label_29c94c:
    // 0x29c94c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29c950:
    // 0x29c950: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x29c950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_29c954:
    // 0x29c954: 0x240504cc  addiu       $a1, $zero, 0x4CC
    ctx->pc = 0x29c954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1228));
label_29c958:
    // 0x29c958: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29c958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c95c:
    // 0x29c95c: 0xc040ab0  jal         func_102AC0
label_29c960:
    if (ctx->pc == 0x29C960u) {
        ctx->pc = 0x29C964u;
        goto label_29c964;
    }
    ctx->pc = 0x29C95Cu;
    SET_GPR_U32(ctx, 31, 0x29C964u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x29C95Cu, 0x29C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C964u;
label_29c964:
    // 0x29c964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c968:
    // 0x29c968: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29c968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29c96c:
    // 0x29c96c: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_29c970:
    if (ctx->pc == 0x29C970u) {
        ctx->pc = 0x29C974u;
        goto label_29c974;
    }
    ctx->pc = 0x29C96Cu;
    {
        const bool branch_taken_0x29c96c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x29c96c) {
            ctx->pc = 0x29C994u;
            goto label_29c994;
        }
    }
    ctx->pc = 0x29C974u;
label_29c974:
    // 0x29c974: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29c978:
    // 0x29c978: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x29c978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_29c97c:
    // 0x29c97c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29c97cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_29c980:
    // 0x29c980: 0x24a5d8c0  addiu       $a1, $a1, -0x2740
    ctx->pc = 0x29c980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957248));
label_29c984:
    // 0x29c984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29c984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c988:
    // 0x29c988: 0xc047328  jal         func_11CCA0
label_29c98c:
    if (ctx->pc == 0x29C98Cu) {
        ctx->pc = 0x29C990u;
        goto label_29c990;
    }
    ctx->pc = 0x29C988u;
    SET_GPR_U32(ctx, 31, 0x29C990u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x29C988u, 0x29C990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C990u;
label_29c990:
    // 0x29c990: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x29c990u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c994:
    // 0x29c994: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29c998:
    // 0x29c998: 0xac500064  sw          $s0, 0x64($v0)
    ctx->pc = 0x29c998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 16));
label_29c99c:
    // 0x29c99c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29c9a0:
    // 0x29c9a0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x29c9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_29c9a4:
    // 0x29c9a4: 0x240504d0  addiu       $a1, $zero, 0x4D0
    ctx->pc = 0x29c9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
label_29c9a8:
    // 0x29c9a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29c9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c9ac:
    // 0x29c9ac: 0xc04146c  jal         func_1051B0
label_29c9b0:
    if (ctx->pc == 0x29C9B0u) {
        ctx->pc = 0x29C9B4u;
        goto label_29c9b4;
    }
    ctx->pc = 0x29C9ACu;
    SET_GPR_U32(ctx, 31, 0x29C9B4u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x29C9ACu, 0x29C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9B4u;
label_29c9b4:
    // 0x29c9b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29c9b8:
    // 0x29c9b8: 0xa0620068  sb          $v0, 0x68($v1)
    ctx->pc = 0x29c9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 2));
label_29c9bc:
    // 0x29c9bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29c9bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c9c0:
    // 0x29c9c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29c9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29c9c4:
    // 0x29c9c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c9c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29c9c8:
    // 0x29c9c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c9cc:
    // 0x29c9cc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29c9ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_29c9d0:
    // 0x29c9d0: 0x3e00008  jr          $ra
label_29c9d4:
    if (ctx->pc == 0x29C9D4u) {
        ctx->pc = 0x29C9D8u;
        goto label_29c9d8;
    }
    ctx->pc = 0x29C9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C9D8u;
label_29c9d8:
    // 0x29c9d8: 0x0  nop
    ctx->pc = 0x29c9d8u;
    // NOP
label_29c9dc:
    // 0x29c9dc: 0x0  nop
    ctx->pc = 0x29c9dcu;
    // NOP
label_29c9e0:
    // 0x29c9e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x29c9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_29c9e4:
    // 0x29c9e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29c9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_29c9e8:
    // 0x29c9e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x29c9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_29c9ec:
    // 0x29c9ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x29c9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_29c9f0:
    // 0x29c9f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x29c9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_29c9f4:
    // 0x29c9f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x29c9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_29c9f8:
    // 0x29c9f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29c9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_29c9fc:
    // 0x29c9fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29c9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_29ca00:
    // 0x29ca00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x29ca00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_29ca04:
    // 0x29ca04: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x29ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_29ca08:
    // 0x29ca08: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ca0c:
    // 0x29ca0c: 0xc09d248  jal         func_274920
label_29ca10:
    if (ctx->pc == 0x29CA10u) {
        ctx->pc = 0x29CA14u;
        goto label_29ca14;
    }
    ctx->pc = 0x29CA0Cu;
    SET_GPR_U32(ctx, 31, 0x29CA14u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x29CA0Cu, 0x29CA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA14u;
label_29ca14:
    // 0x29ca14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29ca18:
    // 0x29ca18: 0x1043018b  beq         $v0, $v1, . + 4 + (0x18B << 2)
label_29ca1c:
    if (ctx->pc == 0x29CA1Cu) {
        ctx->pc = 0x29CA20u;
        goto label_29ca20;
    }
    ctx->pc = 0x29CA18u;
    {
        const bool branch_taken_0x29ca18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29ca18) {
            ctx->pc = 0x29D048u;
            goto label_29d048;
        }
    }
    ctx->pc = 0x29CA20u;
label_29ca20:
    // 0x29ca20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29ca24:
    // 0x29ca24: 0x10430133  beq         $v0, $v1, . + 4 + (0x133 << 2)
label_29ca28:
    if (ctx->pc == 0x29CA28u) {
        ctx->pc = 0x29CA2Cu;
        goto label_29ca2c;
    }
    ctx->pc = 0x29CA24u;
    {
        const bool branch_taken_0x29ca24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29ca24) {
            ctx->pc = 0x29CEF4u;
            goto label_29cef4;
        }
    }
    ctx->pc = 0x29CA2Cu;
label_29ca2c:
    // 0x29ca2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ca30:
    // 0x29ca30: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_29ca34:
    if (ctx->pc == 0x29CA34u) {
        ctx->pc = 0x29CA38u;
        goto label_29ca38;
    }
    ctx->pc = 0x29CA30u;
    {
        const bool branch_taken_0x29ca30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29ca30) {
            ctx->pc = 0x29CA40u;
            goto label_29ca40;
        }
    }
    ctx->pc = 0x29CA38u;
label_29ca38:
    // 0x29ca38: 0x10000188  b           . + 4 + (0x188 << 2)
label_29ca3c:
    if (ctx->pc == 0x29CA3Cu) {
        ctx->pc = 0x29CA40u;
        goto label_29ca40;
    }
    ctx->pc = 0x29CA38u;
    {
        const bool branch_taken_0x29ca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ca38) {
            ctx->pc = 0x29D05Cu;
            goto label_29d05c;
        }
    }
    ctx->pc = 0x29CA40u;
label_29ca40:
    // 0x29ca40: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x29ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ca44:
    // 0x29ca44: 0x8c640064  lw          $a0, 0x64($v1)
    ctx->pc = 0x29ca44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_29ca48:
    // 0x29ca48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ca4c:
    // 0x29ca4c: 0x148300ff  bne         $a0, $v1, . + 4 + (0xFF << 2)
label_29ca50:
    if (ctx->pc == 0x29CA50u) {
        ctx->pc = 0x29CA54u;
        goto label_29ca54;
    }
    ctx->pc = 0x29CA4Cu;
    {
        const bool branch_taken_0x29ca4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29ca4c) {
            ctx->pc = 0x29CE4Cu;
            goto label_29ce4c;
        }
    }
    ctx->pc = 0x29CA54u;
label_29ca54:
    // 0x29ca54: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x29ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ca58:
    // 0x29ca58: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x29ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_29ca5c:
    // 0x29ca5c: 0x10030013  beq         $zero, $v1, . + 4 + (0x13 << 2)
label_29ca60:
    if (ctx->pc == 0x29CA60u) {
        ctx->pc = 0x29CA64u;
        goto label_29ca64;
    }
    ctx->pc = 0x29CA5Cu;
    {
        const bool branch_taken_0x29ca5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x29ca5c) {
            ctx->pc = 0x29CAACu;
            goto label_29caac;
        }
    }
    ctx->pc = 0x29CA64u;
label_29ca64:
    // 0x29ca64: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x29ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ca68:
    // 0x29ca68: 0x9063005c  lbu         $v1, 0x5C($v1)
    ctx->pc = 0x29ca68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 92)));
label_29ca6c:
    // 0x29ca6c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x29ca6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_29ca70:
    // 0x29ca70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ca74:
    // 0x29ca74: 0x14830089  bne         $a0, $v1, . + 4 + (0x89 << 2)
label_29ca78:
    if (ctx->pc == 0x29CA78u) {
        ctx->pc = 0x29CA7Cu;
        goto label_29ca7c;
    }
    ctx->pc = 0x29CA74u;
    {
        const bool branch_taken_0x29ca74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29ca74) {
            ctx->pc = 0x29CC9Cu;
            goto label_29cc9c;
        }
    }
    ctx->pc = 0x29CA7Cu;
label_29ca7c:
    // 0x29ca7c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ca80:
    // 0x29ca80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29ca80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29ca84:
    // 0x29ca84: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x29ca84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_29ca88:
    // 0x29ca88: 0x320f809  jalr        $t9
label_29ca8c:
    if (ctx->pc == 0x29CA8Cu) {
        ctx->pc = 0x29CA90u;
        goto label_29ca90;
    }
    ctx->pc = 0x29CA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29CA90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CA88u, 0x29CA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CA90u;
label_29ca90:
    // 0x29ca90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29ca90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ca94:
    // 0x29ca94: 0xc0a74b0  jal         func_29D2C0
label_29ca98:
    if (ctx->pc == 0x29CA98u) {
        ctx->pc = 0x29CA9Cu;
        goto label_29ca9c;
    }
    ctx->pc = 0x29CA94u;
    SET_GPR_U32(ctx, 31, 0x29CA9Cu);
    ctx->pc = 0x29D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D2C0u, 0x29CA94u, 0x29CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA9Cu;
label_29ca9c:
    // 0x29ca9c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x29ca9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29caa0:
    // 0x29caa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29caa4:
    // 0x29caa4: 0x1483007d  bne         $a0, $v1, . + 4 + (0x7D << 2)
label_29caa8:
    if (ctx->pc == 0x29CAA8u) {
        ctx->pc = 0x29CAACu;
        goto label_29caac;
    }
    ctx->pc = 0x29CAA4u;
    {
        const bool branch_taken_0x29caa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29caa4) {
            ctx->pc = 0x29CC9Cu;
            goto label_29cc9c;
        }
    }
    ctx->pc = 0x29CAACu;
label_29caac:
    // 0x29caac: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x29caacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_29cab0:
    // 0x29cab0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x29cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_29cab4:
    // 0x29cab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29cab8:
    // 0x29cab8: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x29cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_29cabc:
    // 0x29cabc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cac0:
    // 0x29cac0: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29cac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_29cac4:
    // 0x29cac4: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x29cac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_29cac8:
    // 0x29cac8: 0xc09921c  jal         func_264870
label_29cacc:
    if (ctx->pc == 0x29CACCu) {
        ctx->pc = 0x29CAD0u;
        goto label_29cad0;
    }
    ctx->pc = 0x29CAC8u;
    SET_GPR_U32(ctx, 31, 0x29CAD0u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x29CAC8u, 0x29CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CAD0u;
label_29cad0:
    // 0x29cad0: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x29cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_29cad4:
    // 0x29cad4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cad8:
    // 0x29cad8: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29cad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_29cadc:
    // 0x29cadc: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x29cadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_29cae0:
    // 0x29cae0: 0xc09921c  jal         func_264870
label_29cae4:
    if (ctx->pc == 0x29CAE4u) {
        ctx->pc = 0x29CAE8u;
        goto label_29cae8;
    }
    ctx->pc = 0x29CAE0u;
    SET_GPR_U32(ctx, 31, 0x29CAE8u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x29CAE0u, 0x29CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CAE8u;
label_29cae8:
    // 0x29cae8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29caec:
    // 0x29caec: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x29caecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_29caf0:
    // 0x29caf0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29caf4:
    // 0x29caf4: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29caf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_29caf8:
    // 0x29caf8: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x29caf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_29cafc:
    // 0x29cafc: 0xc09921c  jal         func_264870
label_29cb00:
    if (ctx->pc == 0x29CB00u) {
        ctx->pc = 0x29CB04u;
        goto label_29cb04;
    }
    ctx->pc = 0x29CAFCu;
    SET_GPR_U32(ctx, 31, 0x29CB04u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x29CAFCu, 0x29CB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB04u;
label_29cb04:
    // 0x29cb04: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cb08:
    // 0x29cb08: 0x90420068  lbu         $v0, 0x68($v0)
    ctx->pc = 0x29cb08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 104)));
label_29cb0c:
    // 0x29cb0c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29cb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29cb10:
    // 0x29cb10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29cb14:
    // 0x29cb14: 0x14620053  bne         $v1, $v0, . + 4 + (0x53 << 2)
label_29cb18:
    if (ctx->pc == 0x29CB18u) {
        ctx->pc = 0x29CB1Cu;
        goto label_29cb1c;
    }
    ctx->pc = 0x29CB14u;
    {
        const bool branch_taken_0x29cb14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29cb14) {
            ctx->pc = 0x29CC64u;
            goto label_29cc64;
        }
    }
    ctx->pc = 0x29CB1Cu;
label_29cb1c:
    // 0x29cb1c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cb20:
    // 0x29cb20: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x29cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_29cb24:
    // 0x29cb24: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_29cb28:
    // 0x29cb28: 0xc085538  jal         func_2154E0
label_29cb2c:
    if (ctx->pc == 0x29CB2Cu) {
        ctx->pc = 0x29CB30u;
        goto label_29cb30;
    }
    ctx->pc = 0x29CB28u;
    SET_GPR_U32(ctx, 31, 0x29CB30u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29CB28u, 0x29CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB30u;
label_29cb30:
    // 0x29cb30: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29cb30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29cb34:
    // 0x29cb34: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cb38:
    // 0x29cb38: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x29cb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cb3c:
    // 0x29cb3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29cb3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cb40:
    // 0x29cb40: 0x0  nop
    ctx->pc = 0x29cb40u;
    // NOP
label_29cb44:
    // 0x29cb44: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x29cb44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cb48:
    // 0x29cb48: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_29cb4c:
    if (ctx->pc == 0x29CB4Cu) {
        ctx->pc = 0x29CB50u;
        goto label_29cb50;
    }
    ctx->pc = 0x29CB48u;
    {
        const bool branch_taken_0x29cb48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cb48) {
            ctx->pc = 0x29CBACu;
            goto label_29cbac;
        }
    }
    ctx->pc = 0x29CB50u;
label_29cb50:
    // 0x29cb50: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x29cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cb54:
    // 0x29cb54: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x29cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_29cb58:
    // 0x29cb58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29cb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29cb5c:
    // 0x29cb5c: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x29cb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cb60:
    // 0x29cb60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29cb60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29cb64:
    // 0x29cb64: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x29cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_29cb68:
    // 0x29cb68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cb68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cb6c:
    // 0x29cb6c: 0x0  nop
    ctx->pc = 0x29cb6cu;
    // NOP
label_29cb70:
    // 0x29cb70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29cb70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cb74:
    // 0x29cb74: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_29cb78:
    if (ctx->pc == 0x29CB78u) {
        ctx->pc = 0x29CB7Cu;
        goto label_29cb7c;
    }
    ctx->pc = 0x29CB74u;
    {
        const bool branch_taken_0x29cb74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cb74) {
            ctx->pc = 0x29CB8Cu;
            goto label_29cb8c;
        }
    }
    ctx->pc = 0x29CB7Cu;
label_29cb7c:
    // 0x29cb7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cb7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_29cb80:
    // 0x29cb80: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29cb80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_29cb84:
    // 0x29cb84: 0x10000006  b           . + 4 + (0x6 << 2)
label_29cb88:
    if (ctx->pc == 0x29CB88u) {
        ctx->pc = 0x29CB8Cu;
        goto label_29cb8c;
    }
    ctx->pc = 0x29CB84u;
    {
        const bool branch_taken_0x29cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cb84) {
            ctx->pc = 0x29CBA0u;
            goto label_29cba0;
        }
    }
    ctx->pc = 0x29CB8Cu;
label_29cb8c:
    // 0x29cb8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29cb8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29cb90:
    // 0x29cb90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cb90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_29cb94:
    // 0x29cb94: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29cb94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_29cb98:
    // 0x29cb98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_29cb9c:
    // 0x29cb9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29cb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_29cba0:
    // 0x29cba0: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x29cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_29cba4:
    // 0x29cba4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_29cba8:
    if (ctx->pc == 0x29CBA8u) {
        ctx->pc = 0x29CBACu;
        goto label_29cbac;
    }
    ctx->pc = 0x29CBA4u;
    {
        const bool branch_taken_0x29cba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cba4) {
            ctx->pc = 0x29CC14u;
            goto label_29cc14;
        }
    }
    ctx->pc = 0x29CBACu;
label_29cbac:
    // 0x29cbac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29cbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29cbb0:
    // 0x29cbb0: 0xc0a82cc  jal         func_2A0B30
label_29cbb4:
    if (ctx->pc == 0x29CBB4u) {
        ctx->pc = 0x29CBB8u;
        goto label_29cbb8;
    }
    ctx->pc = 0x29CBB0u;
    SET_GPR_U32(ctx, 31, 0x29CBB8u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x29CBB0u, 0x29CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CBB8u;
label_29cbb8:
    // 0x29cbb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29cbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29cbbc:
    // 0x29cbbc: 0xc1218cc  jal         func_486330
label_29cbc0:
    if (ctx->pc == 0x29CBC0u) {
        ctx->pc = 0x29CBC4u;
        goto label_29cbc4;
    }
    ctx->pc = 0x29CBBCu;
    SET_GPR_U32(ctx, 31, 0x29CBC4u);
    ctx->pc = 0x486330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486330u, 0x29CBBCu, 0x29CBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CBC4u;
label_29cbc4:
    // 0x29cbc4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x29cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_29cbc8:
    // 0x29cbc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29cbc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29cbcc:
    // 0x29cbcc: 0x0  nop
    ctx->pc = 0x29cbccu;
    // NOP
label_29cbd0:
    // 0x29cbd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29cbd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29cbd4:
    // 0x29cbd4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x29cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_29cbd8:
    // 0x29cbd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cbd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cbdc:
    // 0x29cbdc: 0x0  nop
    ctx->pc = 0x29cbdcu;
    // NOP
label_29cbe0:
    // 0x29cbe0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29cbe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cbe4:
    // 0x29cbe4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_29cbe8:
    if (ctx->pc == 0x29CBE8u) {
        ctx->pc = 0x29CBECu;
        goto label_29cbec;
    }
    ctx->pc = 0x29CBE4u;
    {
        const bool branch_taken_0x29cbe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cbe4) {
            ctx->pc = 0x29CBFCu;
            goto label_29cbfc;
        }
    }
    ctx->pc = 0x29CBECu;
label_29cbec:
    // 0x29cbec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cbecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_29cbf0:
    // 0x29cbf0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29cbf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_29cbf4:
    // 0x29cbf4: 0x10000006  b           . + 4 + (0x6 << 2)
label_29cbf8:
    if (ctx->pc == 0x29CBF8u) {
        ctx->pc = 0x29CBFCu;
        goto label_29cbfc;
    }
    ctx->pc = 0x29CBF4u;
    {
        const bool branch_taken_0x29cbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cbf4) {
            ctx->pc = 0x29CC10u;
            goto label_29cc10;
        }
    }
    ctx->pc = 0x29CBFCu;
label_29cbfc:
    // 0x29cbfc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29cbfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29cc00:
    // 0x29cc00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cc00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_29cc04:
    // 0x29cc04: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29cc04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_29cc08:
    // 0x29cc08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_29cc0c:
    // 0x29cc0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29cc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_29cc10:
    // 0x29cc10: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x29cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_29cc14:
    // 0x29cc14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29cc18:
    // 0x29cc18: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x29cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_29cc1c:
    // 0x29cc1c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cc20:
    // 0x29cc20: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_29cc24:
    // 0x29cc24: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x29cc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_29cc28:
    // 0x29cc28: 0xc09921c  jal         func_264870
label_29cc2c:
    if (ctx->pc == 0x29CC2Cu) {
        ctx->pc = 0x29CC30u;
        goto label_29cc30;
    }
    ctx->pc = 0x29CC28u;
    SET_GPR_U32(ctx, 31, 0x29CC30u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x29CC28u, 0x29CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC30u;
label_29cc30:
    // 0x29cc30: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x29cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_29cc34:
    // 0x29cc34: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cc38:
    // 0x29cc38: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_29cc3c:
    // 0x29cc3c: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x29cc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_29cc40:
    // 0x29cc40: 0xc09921c  jal         func_264870
label_29cc44:
    if (ctx->pc == 0x29CC44u) {
        ctx->pc = 0x29CC48u;
        goto label_29cc48;
    }
    ctx->pc = 0x29CC40u;
    SET_GPR_U32(ctx, 31, 0x29CC48u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x29CC40u, 0x29CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC48u;
label_29cc48:
    // 0x29cc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29cc4c:
    // 0x29cc4c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x29cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_29cc50:
    // 0x29cc50: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cc54:
    // 0x29cc54: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29cc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_29cc58:
    // 0x29cc58: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x29cc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_29cc5c:
    // 0x29cc5c: 0xc09921c  jal         func_264870
label_29cc60:
    if (ctx->pc == 0x29CC60u) {
        ctx->pc = 0x29CC64u;
        goto label_29cc64;
    }
    ctx->pc = 0x29CC5Cu;
    SET_GPR_U32(ctx, 31, 0x29CC64u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x29CC5Cu, 0x29CC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC64u;
label_29cc64:
    // 0x29cc64: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cc68:
    // 0x29cc68: 0xc0a71c8  jal         func_29C720
label_29cc6c:
    if (ctx->pc == 0x29CC6Cu) {
        ctx->pc = 0x29CC70u;
        goto label_29cc70;
    }
    ctx->pc = 0x29CC68u;
    SET_GPR_U32(ctx, 31, 0x29CC70u);
    ctx->pc = 0x29C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C720u, 0x29CC68u, 0x29CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC70u;
label_29cc70:
    // 0x29cc70: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cc74:
    // 0x29cc74: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x29cc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cc78:
    // 0x29cc78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29cc78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_29cc7c:
    // 0x29cc7c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cc80:
    // 0x29cc80: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x29cc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_29cc84:
    // 0x29cc84: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cc88:
    // 0x29cc88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29cc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29cc8c:
    // 0x29cc8c: 0xc09d250  jal         func_274940
label_29cc90:
    if (ctx->pc == 0x29CC90u) {
        ctx->pc = 0x29CC94u;
        goto label_29cc94;
    }
    ctx->pc = 0x29CC8Cu;
    SET_GPR_U32(ctx, 31, 0x29CC94u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x29CC8Cu, 0x29CC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC94u;
label_29cc94:
    // 0x29cc94: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_29cc98:
    if (ctx->pc == 0x29CC98u) {
        ctx->pc = 0x29CC9Cu;
        goto label_29cc9c;
    }
    ctx->pc = 0x29CC94u;
    {
        const bool branch_taken_0x29cc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cc94) {
            ctx->pc = 0x29D05Cu;
            goto label_29d05c;
        }
    }
    ctx->pc = 0x29CC9Cu;
label_29cc9c:
    // 0x29cc9c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x29cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cca0:
    // 0x29cca0: 0x9063005c  lbu         $v1, 0x5C($v1)
    ctx->pc = 0x29cca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 92)));
label_29cca4:
    // 0x29cca4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x29cca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_29cca8:
    // 0x29cca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ccac:
    // 0x29ccac: 0x148300eb  bne         $a0, $v1, . + 4 + (0xEB << 2)
label_29ccb0:
    if (ctx->pc == 0x29CCB0u) {
        ctx->pc = 0x29CCB4u;
        goto label_29ccb4;
    }
    ctx->pc = 0x29CCACu;
    {
        const bool branch_taken_0x29ccac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29ccac) {
            ctx->pc = 0x29D05Cu;
            goto label_29d05c;
        }
    }
    ctx->pc = 0x29CCB4u;
label_29ccb4:
    // 0x29ccb4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ccb8:
    // 0x29ccb8: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x29ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29ccbc:
    // 0x29ccbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29ccbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29ccc0:
    // 0x29ccc0: 0x0  nop
    ctx->pc = 0x29ccc0u;
    // NOP
label_29ccc4:
    // 0x29ccc4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x29ccc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29ccc8:
    // 0x29ccc8: 0x4501004f  bc1t        . + 4 + (0x4F << 2)
label_29cccc:
    if (ctx->pc == 0x29CCCCu) {
        ctx->pc = 0x29CCD0u;
        goto label_29ccd0;
    }
    ctx->pc = 0x29CCC8u;
    {
        const bool branch_taken_0x29ccc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ccc8) {
            ctx->pc = 0x29CE08u;
            goto label_29ce08;
        }
    }
    ctx->pc = 0x29CCD0u;
label_29ccd0:
    // 0x29ccd0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ccd4:
    // 0x29ccd4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x29ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_29ccd8:
    // 0x29ccd8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29ccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_29ccdc:
    // 0x29ccdc: 0xc085538  jal         func_2154E0
label_29cce0:
    if (ctx->pc == 0x29CCE0u) {
        ctx->pc = 0x29CCE4u;
        goto label_29cce4;
    }
    ctx->pc = 0x29CCDCu;
    SET_GPR_U32(ctx, 31, 0x29CCE4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29CCDCu, 0x29CCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCE4u;
label_29cce4:
    // 0x29cce4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29cce4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29cce8:
    // 0x29cce8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29ccec:
    // 0x29ccec: 0xc0a82cc  jal         func_2A0B30
label_29ccf0:
    if (ctx->pc == 0x29CCF0u) {
        ctx->pc = 0x29CCF4u;
        goto label_29ccf4;
    }
    ctx->pc = 0x29CCECu;
    SET_GPR_U32(ctx, 31, 0x29CCF4u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x29CCECu, 0x29CCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCF4u;
label_29ccf4:
    // 0x29ccf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29ccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ccf8:
    // 0x29ccf8: 0xc1218cc  jal         func_486330
label_29ccfc:
    if (ctx->pc == 0x29CCFCu) {
        ctx->pc = 0x29CD00u;
        goto label_29cd00;
    }
    ctx->pc = 0x29CCF8u;
    SET_GPR_U32(ctx, 31, 0x29CD00u);
    ctx->pc = 0x486330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486330u, 0x29CCF8u, 0x29CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD00u;
label_29cd00:
    // 0x29cd00: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x29cd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_29cd04:
    // 0x29cd04: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cd08:
    // 0x29cd08: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_29cd0c:
    // 0x29cd0c: 0xc099308  jal         func_264C20
label_29cd10:
    if (ctx->pc == 0x29CD10u) {
        ctx->pc = 0x29CD14u;
        goto label_29cd14;
    }
    ctx->pc = 0x29CD0Cu;
    SET_GPR_U32(ctx, 31, 0x29CD14u);
    ctx->pc = 0x264C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C20u, 0x29CD0Cu, 0x29CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD14u;
label_29cd14:
    // 0x29cd14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29cd14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29cd18:
    // 0x29cd18: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x29cd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cd1c:
    // 0x29cd1c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x29cd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_29cd20:
    // 0x29cd20: 0x10000033  b           . + 4 + (0x33 << 2)
label_29cd24:
    if (ctx->pc == 0x29CD24u) {
        ctx->pc = 0x29CD28u;
        goto label_29cd28;
    }
    ctx->pc = 0x29CD20u;
    {
        const bool branch_taken_0x29cd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cd20) {
            ctx->pc = 0x29CDF0u;
            goto label_29cdf0;
        }
    }
    ctx->pc = 0x29CD28u;
label_29cd28:
    // 0x29cd28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29cd28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cd2c:
    // 0x29cd2c: 0x10000029  b           . + 4 + (0x29 << 2)
label_29cd30:
    if (ctx->pc == 0x29CD30u) {
        ctx->pc = 0x29CD34u;
        goto label_29cd34;
    }
    ctx->pc = 0x29CD2Cu;
    {
        const bool branch_taken_0x29cd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cd2c) {
            ctx->pc = 0x29CDD4u;
            goto label_29cdd4;
        }
    }
    ctx->pc = 0x29CD34u;
label_29cd34:
    // 0x29cd34: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cd38:
    // 0x29cd38: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_29cd3c:
    // 0x29cd3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29cd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29cd40:
    // 0x29cd40: 0xc0a74a0  jal         func_29D280
label_29cd44:
    if (ctx->pc == 0x29CD44u) {
        ctx->pc = 0x29CD48u;
        goto label_29cd48;
    }
    ctx->pc = 0x29CD40u;
    SET_GPR_U32(ctx, 31, 0x29CD48u);
    ctx->pc = 0x29D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D280u, 0x29CD40u, 0x29CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD48u;
label_29cd48:
    // 0x29cd48: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x29cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_29cd4c:
    // 0x29cd4c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x29cd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29cd50:
    // 0x29cd50: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x29cd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cd54:
    // 0x29cd54: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x29cd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cd58:
    // 0x29cd58: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x29cd58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_29cd5c:
    // 0x29cd5c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x29cd5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_29cd60:
    // 0x29cd60: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x29cd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_29cd64:
    // 0x29cd64: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x29cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_29cd68:
    // 0x29cd68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29cd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29cd6c:
    // 0x29cd6c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x29cd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cd70:
    // 0x29cd70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29cd70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29cd74:
    // 0x29cd74: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x29cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_29cd78:
    // 0x29cd78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cd78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cd7c:
    // 0x29cd7c: 0x0  nop
    ctx->pc = 0x29cd7cu;
    // NOP
label_29cd80:
    // 0x29cd80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29cd80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cd84:
    // 0x29cd84: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_29cd88:
    if (ctx->pc == 0x29CD88u) {
        ctx->pc = 0x29CD8Cu;
        goto label_29cd8c;
    }
    ctx->pc = 0x29CD84u;
    {
        const bool branch_taken_0x29cd84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cd84) {
            ctx->pc = 0x29CD9Cu;
            goto label_29cd9c;
        }
    }
    ctx->pc = 0x29CD8Cu;
label_29cd8c:
    // 0x29cd8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cd8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_29cd90:
    // 0x29cd90: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29cd90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_29cd94:
    // 0x29cd94: 0x10000006  b           . + 4 + (0x6 << 2)
label_29cd98:
    if (ctx->pc == 0x29CD98u) {
        ctx->pc = 0x29CD9Cu;
        goto label_29cd9c;
    }
    ctx->pc = 0x29CD94u;
    {
        const bool branch_taken_0x29cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cd94) {
            ctx->pc = 0x29CDB0u;
            goto label_29cdb0;
        }
    }
    ctx->pc = 0x29CD9Cu;
label_29cd9c:
    // 0x29cd9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29cd9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29cda0:
    // 0x29cda0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29cda0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_29cda4:
    // 0x29cda4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29cda4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_29cda8:
    // 0x29cda8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_29cdac:
    // 0x29cdac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29cdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_29cdb0:
    // 0x29cdb0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x29cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_29cdb4:
    // 0x29cdb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29cdb8:
    // 0x29cdb8: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x29cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_29cdbc:
    // 0x29cdbc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cdc0:
    // 0x29cdc0: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29cdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_29cdc4:
    // 0x29cdc4: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x29cdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_29cdc8:
    // 0x29cdc8: 0xc09921c  jal         func_264870
label_29cdcc:
    if (ctx->pc == 0x29CDCCu) {
        ctx->pc = 0x29CDD0u;
        goto label_29cdd0;
    }
    ctx->pc = 0x29CDC8u;
    SET_GPR_U32(ctx, 31, 0x29CDD0u);
    ctx->pc = 0x264870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264870u, 0x29CDC8u, 0x29CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CDD0u;
label_29cdd0:
    // 0x29cdd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29cdd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29cdd4:
    // 0x29cdd4: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x29cdd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_29cdd8:
    // 0x29cdd8: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_29cddc:
    if (ctx->pc == 0x29CDDCu) {
        ctx->pc = 0x29CDE0u;
        goto label_29cde0;
    }
    ctx->pc = 0x29CDD8u;
    {
        const bool branch_taken_0x29cdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29cdd8) {
            ctx->pc = 0x29CD34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cd34;
        }
    }
    ctx->pc = 0x29CDE0u;
label_29cde0:
    // 0x29cde0: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x29cde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cde4:
    // 0x29cde4: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x29cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cde8:
    // 0x29cde8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29cde8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_29cdec:
    // 0x29cdec: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x29cdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_29cdf0:
    // 0x29cdf0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cdf4:
    // 0x29cdf4: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x29cdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cdf8:
    // 0x29cdf8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x29cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cdfc:
    // 0x29cdfc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29cdfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29ce00:
    // 0x29ce00: 0x4501ffc9  bc1t        . + 4 + (-0x37 << 2)
label_29ce04:
    if (ctx->pc == 0x29CE04u) {
        ctx->pc = 0x29CE08u;
        goto label_29ce08;
    }
    ctx->pc = 0x29CE00u;
    {
        const bool branch_taken_0x29ce00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ce00) {
            ctx->pc = 0x29CD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cd28;
        }
    }
    ctx->pc = 0x29CE08u;
label_29ce08:
    // 0x29ce08: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29ce08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ce0c:
    // 0x29ce0c: 0xc0a71c8  jal         func_29C720
label_29ce10:
    if (ctx->pc == 0x29CE10u) {
        ctx->pc = 0x29CE14u;
        goto label_29ce14;
    }
    ctx->pc = 0x29CE0Cu;
    SET_GPR_U32(ctx, 31, 0x29CE14u);
    ctx->pc = 0x29C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C720u, 0x29CE0Cu, 0x29CE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE14u;
label_29ce14:
    // 0x29ce14: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ce18:
    // 0x29ce18: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x29ce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29ce1c:
    // 0x29ce1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29ce1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_29ce20:
    // 0x29ce20: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ce24:
    // 0x29ce24: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x29ce24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_29ce28:
    // 0x29ce28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ce2c:
    // 0x29ce2c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ce30:
    // 0x29ce30: 0xa043007c  sb          $v1, 0x7C($v0)
    ctx->pc = 0x29ce30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 3));
label_29ce34:
    // 0x29ce34: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ce38:
    // 0x29ce38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29ce38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29ce3c:
    // 0x29ce3c: 0xc09d250  jal         func_274940
label_29ce40:
    if (ctx->pc == 0x29CE40u) {
        ctx->pc = 0x29CE44u;
        goto label_29ce44;
    }
    ctx->pc = 0x29CE3Cu;
    SET_GPR_U32(ctx, 31, 0x29CE44u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x29CE3Cu, 0x29CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE44u;
label_29ce44:
    // 0x29ce44: 0x10000085  b           . + 4 + (0x85 << 2)
label_29ce48:
    if (ctx->pc == 0x29CE48u) {
        ctx->pc = 0x29CE4Cu;
        goto label_29ce4c;
    }
    ctx->pc = 0x29CE44u;
    {
        const bool branch_taken_0x29ce44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ce44) {
            ctx->pc = 0x29D05Cu;
            goto label_29d05c;
        }
    }
    ctx->pc = 0x29CE4Cu;
label_29ce4c:
    // 0x29ce4c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ce50:
    // 0x29ce50: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x29ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_29ce54:
    // 0x29ce54: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_29ce58:
    if (ctx->pc == 0x29CE58u) {
        ctx->pc = 0x29CE5Cu;
        goto label_29ce5c;
    }
    ctx->pc = 0x29CE54u;
    {
        const bool branch_taken_0x29ce54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ce54) {
            ctx->pc = 0x29CE74u;
            goto label_29ce74;
        }
    }
    ctx->pc = 0x29CE5Cu;
label_29ce5c:
    // 0x29ce5c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29ce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ce60:
    // 0x29ce60: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29ce60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29ce64:
    // 0x29ce64: 0xc09d250  jal         func_274940
label_29ce68:
    if (ctx->pc == 0x29CE68u) {
        ctx->pc = 0x29CE6Cu;
        goto label_29ce6c;
    }
    ctx->pc = 0x29CE64u;
    SET_GPR_U32(ctx, 31, 0x29CE6Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x29CE64u, 0x29CE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE6Cu;
label_29ce6c:
    // 0x29ce6c: 0x1000007b  b           . + 4 + (0x7B << 2)
label_29ce70:
    if (ctx->pc == 0x29CE70u) {
        ctx->pc = 0x29CE74u;
        goto label_29ce74;
    }
    ctx->pc = 0x29CE6Cu;
    {
        const bool branch_taken_0x29ce6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ce6c) {
            ctx->pc = 0x29D05Cu;
            goto label_29d05c;
        }
    }
    ctx->pc = 0x29CE74u;
label_29ce74:
    // 0x29ce74: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ce78:
    // 0x29ce78: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x29ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_29ce7c:
    // 0x29ce7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29ce80:
    // 0x29ce80: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_29ce84:
    if (ctx->pc == 0x29CE84u) {
        ctx->pc = 0x29CE88u;
        goto label_29ce88;
    }
    ctx->pc = 0x29CE80u;
    {
        const bool branch_taken_0x29ce80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29ce80) {
            ctx->pc = 0x29CEDCu;
            goto label_29cedc;
        }
    }
    ctx->pc = 0x29CE88u;
label_29ce88:
    // 0x29ce88: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29ce8c:
    // 0x29ce8c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x29ce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_29ce90:
    // 0x29ce90: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x29ce90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_29ce94:
    // 0x29ce94: 0xc085538  jal         func_2154E0
label_29ce98:
    if (ctx->pc == 0x29CE98u) {
        ctx->pc = 0x29CE9Cu;
        goto label_29ce9c;
    }
    ctx->pc = 0x29CE94u;
    SET_GPR_U32(ctx, 31, 0x29CE9Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29CE94u, 0x29CE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE9Cu;
label_29ce9c:
    // 0x29ce9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29ce9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29cea0:
    // 0x29cea0: 0x1012006e  beq         $zero, $s2, . + 4 + (0x6E << 2)
label_29cea4:
    if (ctx->pc == 0x29CEA4u) {
        ctx->pc = 0x29CEA8u;
        goto label_29cea8;
    }
    ctx->pc = 0x29CEA0u;
    {
        const bool branch_taken_0x29cea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x29cea0) {
            ctx->pc = 0x29D05Cu;
            goto label_29d05c;
        }
    }
    ctx->pc = 0x29CEA8u;
label_29cea8:
    // 0x29cea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29cea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29ceac:
    // 0x29ceac: 0xc096ad0  jal         func_25AB40
label_29ceb0:
    if (ctx->pc == 0x29CEB0u) {
        ctx->pc = 0x29CEB4u;
        goto label_29ceb4;
    }
    ctx->pc = 0x29CEACu;
    SET_GPR_U32(ctx, 31, 0x29CEB4u);
    ctx->pc = 0x25AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AB40u, 0x29CEACu, 0x29CEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CEB4u;
label_29ceb4:
    // 0x29ceb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29ceb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29ceb8:
    // 0x29ceb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29ceb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29cebc:
    // 0x29cebc: 0xc096a9c  jal         func_25AA70
label_29cec0:
    if (ctx->pc == 0x29CEC0u) {
        ctx->pc = 0x29CEC4u;
        goto label_29cec4;
    }
    ctx->pc = 0x29CEBCu;
    SET_GPR_U32(ctx, 31, 0x29CEC4u);
    ctx->pc = 0x25AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AA70u, 0x29CEBCu, 0x29CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CEC4u;
label_29cec4:
    // 0x29cec4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cec8:
    // 0x29cec8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29cec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29cecc:
    // 0x29cecc: 0xc09d250  jal         func_274940
label_29ced0:
    if (ctx->pc == 0x29CED0u) {
        ctx->pc = 0x29CED4u;
        goto label_29ced4;
    }
    ctx->pc = 0x29CECCu;
    SET_GPR_U32(ctx, 31, 0x29CED4u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x29CECCu, 0x29CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CED4u;
label_29ced4:
    // 0x29ced4: 0x10000061  b           . + 4 + (0x61 << 2)
label_29ced8:
    if (ctx->pc == 0x29CED8u) {
        ctx->pc = 0x29CEDCu;
        goto label_29cedc;
    }
    ctx->pc = 0x29CED4u;
    {
        const bool branch_taken_0x29ced4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ced4) {
            ctx->pc = 0x29D05Cu;
            goto label_29d05c;
        }
    }
    ctx->pc = 0x29CEDCu;
label_29cedc:
    // 0x29cedc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cee0:
    // 0x29cee0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29cee4:
    // 0x29cee4: 0xc09d250  jal         func_274940
label_29cee8:
    if (ctx->pc == 0x29CEE8u) {
        ctx->pc = 0x29CEECu;
        goto label_29ceec;
    }
    ctx->pc = 0x29CEE4u;
    SET_GPR_U32(ctx, 31, 0x29CEECu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x29CEE4u, 0x29CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CEECu;
label_29ceec:
    // 0x29ceec: 0x1000005b  b           . + 4 + (0x5B << 2)
label_29cef0:
    if (ctx->pc == 0x29CEF0u) {
        ctx->pc = 0x29CEF4u;
        goto label_29cef4;
    }
    ctx->pc = 0x29CEECu;
    {
        const bool branch_taken_0x29ceec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ceec) {
            ctx->pc = 0x29D05Cu;
            goto label_29d05c;
        }
    }
    ctx->pc = 0x29CEF4u;
label_29cef4:
    // 0x29cef4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x29cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cef8:
    // 0x29cef8: 0x8c640064  lw          $a0, 0x64($v1)
    ctx->pc = 0x29cef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_29cefc:
    // 0x29cefc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29cf00:
    // 0x29cf00: 0x14830056  bne         $a0, $v1, . + 4 + (0x56 << 2)
label_29cf04:
    if (ctx->pc == 0x29CF04u) {
        ctx->pc = 0x29CF08u;
        goto label_29cf08;
    }
    ctx->pc = 0x29CF00u;
    {
        const bool branch_taken_0x29cf00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29cf00) {
            ctx->pc = 0x29D05Cu;
            goto label_29d05c;
        }
    }
    ctx->pc = 0x29CF08u;
label_29cf08:
    // 0x29cf08: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cf0c:
    // 0x29cf0c: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_29cf10:
    // 0x29cf10: 0xc0a74b0  jal         func_29D2C0
label_29cf14:
    if (ctx->pc == 0x29CF14u) {
        ctx->pc = 0x29CF18u;
        goto label_29cf18;
    }
    ctx->pc = 0x29CF10u;
    SET_GPR_U32(ctx, 31, 0x29CF18u);
    ctx->pc = 0x29D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D2C0u, 0x29CF10u, 0x29CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF18u;
label_29cf18:
    // 0x29cf18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29cf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29cf1c:
    // 0x29cf1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29cf20:
    // 0x29cf20: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_29cf24:
    if (ctx->pc == 0x29CF24u) {
        ctx->pc = 0x29CF28u;
        goto label_29cf28;
    }
    ctx->pc = 0x29CF20u;
    {
        const bool branch_taken_0x29cf20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29cf20) {
            ctx->pc = 0x29CF38u;
            goto label_29cf38;
        }
    }
    ctx->pc = 0x29CF28u;
label_29cf28:
    // 0x29cf28: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29cf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cf2c:
    // 0x29cf2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29cf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29cf30:
    // 0x29cf30: 0xc09d250  jal         func_274940
label_29cf34:
    if (ctx->pc == 0x29CF34u) {
        ctx->pc = 0x29CF38u;
        goto label_29cf38;
    }
    ctx->pc = 0x29CF30u;
    SET_GPR_U32(ctx, 31, 0x29CF38u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x29CF30u, 0x29CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF38u;
label_29cf38:
    // 0x29cf38: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cf3c:
    // 0x29cf3c: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x29cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_29cf40:
    // 0x29cf40: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cf44:
    // 0x29cf44: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29cf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_29cf48:
    // 0x29cf48: 0xc0a7498  jal         func_29D260
label_29cf4c:
    if (ctx->pc == 0x29CF4Cu) {
        ctx->pc = 0x29CF50u;
        goto label_29cf50;
    }
    ctx->pc = 0x29CF48u;
    SET_GPR_U32(ctx, 31, 0x29CF50u);
    ctx->pc = 0x29D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D260u, 0x29CF48u, 0x29CF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF50u;
label_29cf50:
    // 0x29cf50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29cf50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29cf54:
    // 0x29cf54: 0x10000034  b           . + 4 + (0x34 << 2)
label_29cf58:
    if (ctx->pc == 0x29CF58u) {
        ctx->pc = 0x29CF5Cu;
        goto label_29cf5c;
    }
    ctx->pc = 0x29CF54u;
    {
        const bool branch_taken_0x29cf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cf54) {
            ctx->pc = 0x29D028u;
            goto label_29d028;
        }
    }
    ctx->pc = 0x29CF5Cu;
label_29cf5c:
    // 0x29cf5c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x29cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cf60:
    // 0x29cf60: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cf64:
    // 0x29cf64: 0x2464006c  addiu       $a0, $v1, 0x6C
    ctx->pc = 0x29cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
label_29cf68:
    // 0x29cf68: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x29cf68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_29cf6c:
    // 0x29cf6c: 0xc0a74a0  jal         func_29D280
label_29cf70:
    if (ctx->pc == 0x29CF70u) {
        ctx->pc = 0x29CF74u;
        goto label_29cf74;
    }
    ctx->pc = 0x29CF6Cu;
    SET_GPR_U32(ctx, 31, 0x29CF74u);
    ctx->pc = 0x29D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D280u, 0x29CF6Cu, 0x29CF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF74u;
label_29cf74:
    // 0x29cf74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29cf78:
    // 0x29cf78: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_29cf7c:
    if (ctx->pc == 0x29CF7Cu) {
        ctx->pc = 0x29CF80u;
        goto label_29cf80;
    }
    ctx->pc = 0x29CF78u;
    {
        const bool branch_taken_0x29cf78 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x29cf78) {
            ctx->pc = 0x29CF94u;
            goto label_29cf94;
        }
    }
    ctx->pc = 0x29CF80u;
label_29cf80:
    // 0x29cf80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cf80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cf84:
    // 0x29cf84: 0x0  nop
    ctx->pc = 0x29cf84u;
    // NOP
label_29cf88:
    // 0x29cf88: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29cf88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_29cf8c:
    // 0x29cf8c: 0x10000008  b           . + 4 + (0x8 << 2)
label_29cf90:
    if (ctx->pc == 0x29CF90u) {
        ctx->pc = 0x29CF94u;
        goto label_29cf94;
    }
    ctx->pc = 0x29CF8Cu;
    {
        const bool branch_taken_0x29cf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cf8c) {
            ctx->pc = 0x29CFB0u;
            goto label_29cfb0;
        }
    }
    ctx->pc = 0x29CF94u;
label_29cf94:
    // 0x29cf94: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x29cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_29cf98:
    // 0x29cf98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29cf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_29cf9c:
    // 0x29cf9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29cf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_29cfa0:
    // 0x29cfa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29cfa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cfa4:
    // 0x29cfa4: 0x0  nop
    ctx->pc = 0x29cfa4u;
    // NOP
label_29cfa8:
    // 0x29cfa8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29cfa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_29cfac:
    // 0x29cfac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29cfacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29cfb0:
    // 0x29cfb0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x29cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_29cfb4:
    // 0x29cfb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cfb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cfb8:
    // 0x29cfb8: 0x0  nop
    ctx->pc = 0x29cfb8u;
    // NOP
label_29cfbc:
    // 0x29cfbc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x29cfbcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_29cfc0:
    // 0x29cfc0: 0x0  nop
    ctx->pc = 0x29cfc0u;
    // NOP
label_29cfc4:
    // 0x29cfc4: 0x0  nop
    ctx->pc = 0x29cfc4u;
    // NOP
label_29cfc8:
    // 0x29cfc8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cfcc:
    // 0x29cfcc: 0xc0a71c8  jal         func_29C720
label_29cfd0:
    if (ctx->pc == 0x29CFD0u) {
        ctx->pc = 0x29CFD4u;
        goto label_29cfd4;
    }
    ctx->pc = 0x29CFCCu;
    SET_GPR_U32(ctx, 31, 0x29CFD4u);
    ctx->pc = 0x29C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C720u, 0x29CFCCu, 0x29CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CFD4u;
label_29cfd4:
    // 0x29cfd4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x29cfd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cfd8:
    // 0x29cfd8: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_29cfdc:
    if (ctx->pc == 0x29CFDCu) {
        ctx->pc = 0x29CFE0u;
        goto label_29cfe0;
    }
    ctx->pc = 0x29CFD8u;
    {
        const bool branch_taken_0x29cfd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cfd8) {
            ctx->pc = 0x29D014u;
            goto label_29d014;
        }
    }
    ctx->pc = 0x29CFE0u;
label_29cfe0:
    // 0x29cfe0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cfe4:
    // 0x29cfe4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29cfe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29cfe8:
    // 0x29cfe8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x29cfe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_29cfec:
    // 0x29cfec: 0x320f809  jalr        $t9
label_29cff0:
    if (ctx->pc == 0x29CFF0u) {
        ctx->pc = 0x29CFF4u;
        goto label_29cff4;
    }
    ctx->pc = 0x29CFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29CFF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CFECu, 0x29CFF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CFF4u;
label_29cff4:
    // 0x29cff4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29cff8:
    // 0x29cff8: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_29cffc:
    // 0x29cffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29cffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d000:
    // 0x29d000: 0xc0a742c  jal         func_29D0B0
label_29d004:
    if (ctx->pc == 0x29D004u) {
        ctx->pc = 0x29D008u;
        goto label_29d008;
    }
    ctx->pc = 0x29D000u;
    SET_GPR_U32(ctx, 31, 0x29D008u);
    ctx->pc = 0x29D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0B0u, 0x29D000u, 0x29D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D008u;
label_29d008:
    // 0x29d008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d00c:
    // 0x29d00c: 0x10000006  b           . + 4 + (0x6 << 2)
label_29d010:
    if (ctx->pc == 0x29D010u) {
        ctx->pc = 0x29D014u;
        goto label_29d014;
    }
    ctx->pc = 0x29D00Cu;
    {
        const bool branch_taken_0x29d00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d00c) {
            ctx->pc = 0x29D028u;
            goto label_29d028;
        }
    }
    ctx->pc = 0x29D014u;
label_29d014:
    // 0x29d014: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x29d014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_29d018:
    // 0x29d018: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x29d018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29d01c:
    // 0x29d01c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x29d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_29d020:
    // 0x29d020: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29d020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29d024:
    // 0x29d024: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x29d024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_29d028:
    // 0x29d028: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29d028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29d02c:
    // 0x29d02c: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x29d02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_29d030:
    // 0x29d030: 0xc0a7424  jal         func_29D090
label_29d034:
    if (ctx->pc == 0x29D034u) {
        ctx->pc = 0x29D038u;
        goto label_29d038;
    }
    ctx->pc = 0x29D030u;
    SET_GPR_U32(ctx, 31, 0x29D038u);
    ctx->pc = 0x29D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D090u, 0x29D030u, 0x29D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D038u;
label_29d038:
    // 0x29d038: 0x1602ffc8  bne         $s0, $v0, . + 4 + (-0x38 << 2)
label_29d03c:
    if (ctx->pc == 0x29D03Cu) {
        ctx->pc = 0x29D040u;
        goto label_29d040;
    }
    ctx->pc = 0x29D038u;
    {
        const bool branch_taken_0x29d038 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x29d038) {
            ctx->pc = 0x29CF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cf5c;
        }
    }
    ctx->pc = 0x29D040u;
label_29d040:
    // 0x29d040: 0x10000006  b           . + 4 + (0x6 << 2)
label_29d044:
    if (ctx->pc == 0x29D044u) {
        ctx->pc = 0x29D048u;
        goto label_29d048;
    }
    ctx->pc = 0x29D040u;
    {
        const bool branch_taken_0x29d040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d040) {
            ctx->pc = 0x29D05Cu;
            goto label_29d05c;
        }
    }
    ctx->pc = 0x29D048u;
label_29d048:
    // 0x29d048: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x29d048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29d04c:
    // 0x29d04c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29d04cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29d050:
    // 0x29d050: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x29d050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_29d054:
    // 0x29d054: 0x320f809  jalr        $t9
label_29d058:
    if (ctx->pc == 0x29D058u) {
        ctx->pc = 0x29D05Cu;
        goto label_29d05c;
    }
    ctx->pc = 0x29D054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29D05Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D054u, 0x29D05Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D05Cu;
label_29d05c:
    // 0x29d05c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29d05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29d060:
    // 0x29d060: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x29d060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29d064:
    // 0x29d064: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x29d064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29d068:
    // 0x29d068: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x29d068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29d06c:
    // 0x29d06c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x29d06cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29d070:
    // 0x29d070: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29d070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29d074:
    // 0x29d074: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29d074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29d078:
    // 0x29d078: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x29d078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29d07c:
    // 0x29d07c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x29d07cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_29d080:
    // 0x29d080: 0x3e00008  jr          $ra
label_29d084:
    if (ctx->pc == 0x29D084u) {
        ctx->pc = 0x29D088u;
        goto label_29d088;
    }
    ctx->pc = 0x29D080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D088u;
label_29d088:
    // 0x29d088: 0x0  nop
    ctx->pc = 0x29d088u;
    // NOP
label_29d08c:
    // 0x29d08c: 0x0  nop
    ctx->pc = 0x29d08cu;
    // NOP
    ctx->pc = 0x29d090u;
}
