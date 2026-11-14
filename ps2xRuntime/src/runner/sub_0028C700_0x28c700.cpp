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

// Function: sub_0028C700
// Address: 0x28c700 - 0x28d5d0
void sub_0028C700_0x28c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C700_0x28c700");
#endif

    switch (ctx->pc) {
        case 0x28c700u: goto label_28c700;
        case 0x28c704u: goto label_28c704;
        case 0x28c708u: goto label_28c708;
        case 0x28c70cu: goto label_28c70c;
        case 0x28c710u: goto label_28c710;
        case 0x28c714u: goto label_28c714;
        case 0x28c718u: goto label_28c718;
        case 0x28c71cu: goto label_28c71c;
        case 0x28c720u: goto label_28c720;
        case 0x28c724u: goto label_28c724;
        case 0x28c728u: goto label_28c728;
        case 0x28c72cu: goto label_28c72c;
        case 0x28c730u: goto label_28c730;
        case 0x28c734u: goto label_28c734;
        case 0x28c738u: goto label_28c738;
        case 0x28c73cu: goto label_28c73c;
        case 0x28c740u: goto label_28c740;
        case 0x28c744u: goto label_28c744;
        case 0x28c748u: goto label_28c748;
        case 0x28c74cu: goto label_28c74c;
        case 0x28c750u: goto label_28c750;
        case 0x28c754u: goto label_28c754;
        case 0x28c758u: goto label_28c758;
        case 0x28c75cu: goto label_28c75c;
        case 0x28c760u: goto label_28c760;
        case 0x28c764u: goto label_28c764;
        case 0x28c768u: goto label_28c768;
        case 0x28c76cu: goto label_28c76c;
        case 0x28c770u: goto label_28c770;
        case 0x28c774u: goto label_28c774;
        case 0x28c778u: goto label_28c778;
        case 0x28c77cu: goto label_28c77c;
        case 0x28c780u: goto label_28c780;
        case 0x28c784u: goto label_28c784;
        case 0x28c788u: goto label_28c788;
        case 0x28c78cu: goto label_28c78c;
        case 0x28c790u: goto label_28c790;
        case 0x28c794u: goto label_28c794;
        case 0x28c798u: goto label_28c798;
        case 0x28c79cu: goto label_28c79c;
        case 0x28c7a0u: goto label_28c7a0;
        case 0x28c7a4u: goto label_28c7a4;
        case 0x28c7a8u: goto label_28c7a8;
        case 0x28c7acu: goto label_28c7ac;
        case 0x28c7b0u: goto label_28c7b0;
        case 0x28c7b4u: goto label_28c7b4;
        case 0x28c7b8u: goto label_28c7b8;
        case 0x28c7bcu: goto label_28c7bc;
        case 0x28c7c0u: goto label_28c7c0;
        case 0x28c7c4u: goto label_28c7c4;
        case 0x28c7c8u: goto label_28c7c8;
        case 0x28c7ccu: goto label_28c7cc;
        case 0x28c7d0u: goto label_28c7d0;
        case 0x28c7d4u: goto label_28c7d4;
        case 0x28c7d8u: goto label_28c7d8;
        case 0x28c7dcu: goto label_28c7dc;
        case 0x28c7e0u: goto label_28c7e0;
        case 0x28c7e4u: goto label_28c7e4;
        case 0x28c7e8u: goto label_28c7e8;
        case 0x28c7ecu: goto label_28c7ec;
        case 0x28c7f0u: goto label_28c7f0;
        case 0x28c7f4u: goto label_28c7f4;
        case 0x28c7f8u: goto label_28c7f8;
        case 0x28c7fcu: goto label_28c7fc;
        case 0x28c800u: goto label_28c800;
        case 0x28c804u: goto label_28c804;
        case 0x28c808u: goto label_28c808;
        case 0x28c80cu: goto label_28c80c;
        case 0x28c810u: goto label_28c810;
        case 0x28c814u: goto label_28c814;
        case 0x28c818u: goto label_28c818;
        case 0x28c81cu: goto label_28c81c;
        case 0x28c820u: goto label_28c820;
        case 0x28c824u: goto label_28c824;
        case 0x28c828u: goto label_28c828;
        case 0x28c82cu: goto label_28c82c;
        case 0x28c830u: goto label_28c830;
        case 0x28c834u: goto label_28c834;
        case 0x28c838u: goto label_28c838;
        case 0x28c83cu: goto label_28c83c;
        case 0x28c840u: goto label_28c840;
        case 0x28c844u: goto label_28c844;
        case 0x28c848u: goto label_28c848;
        case 0x28c84cu: goto label_28c84c;
        case 0x28c850u: goto label_28c850;
        case 0x28c854u: goto label_28c854;
        case 0x28c858u: goto label_28c858;
        case 0x28c85cu: goto label_28c85c;
        case 0x28c860u: goto label_28c860;
        case 0x28c864u: goto label_28c864;
        case 0x28c868u: goto label_28c868;
        case 0x28c86cu: goto label_28c86c;
        case 0x28c870u: goto label_28c870;
        case 0x28c874u: goto label_28c874;
        case 0x28c878u: goto label_28c878;
        case 0x28c87cu: goto label_28c87c;
        case 0x28c880u: goto label_28c880;
        case 0x28c884u: goto label_28c884;
        case 0x28c888u: goto label_28c888;
        case 0x28c88cu: goto label_28c88c;
        case 0x28c890u: goto label_28c890;
        case 0x28c894u: goto label_28c894;
        case 0x28c898u: goto label_28c898;
        case 0x28c89cu: goto label_28c89c;
        case 0x28c8a0u: goto label_28c8a0;
        case 0x28c8a4u: goto label_28c8a4;
        case 0x28c8a8u: goto label_28c8a8;
        case 0x28c8acu: goto label_28c8ac;
        case 0x28c8b0u: goto label_28c8b0;
        case 0x28c8b4u: goto label_28c8b4;
        case 0x28c8b8u: goto label_28c8b8;
        case 0x28c8bcu: goto label_28c8bc;
        case 0x28c8c0u: goto label_28c8c0;
        case 0x28c8c4u: goto label_28c8c4;
        case 0x28c8c8u: goto label_28c8c8;
        case 0x28c8ccu: goto label_28c8cc;
        case 0x28c8d0u: goto label_28c8d0;
        case 0x28c8d4u: goto label_28c8d4;
        case 0x28c8d8u: goto label_28c8d8;
        case 0x28c8dcu: goto label_28c8dc;
        case 0x28c8e0u: goto label_28c8e0;
        case 0x28c8e4u: goto label_28c8e4;
        case 0x28c8e8u: goto label_28c8e8;
        case 0x28c8ecu: goto label_28c8ec;
        case 0x28c8f0u: goto label_28c8f0;
        case 0x28c8f4u: goto label_28c8f4;
        case 0x28c8f8u: goto label_28c8f8;
        case 0x28c8fcu: goto label_28c8fc;
        case 0x28c900u: goto label_28c900;
        case 0x28c904u: goto label_28c904;
        case 0x28c908u: goto label_28c908;
        case 0x28c90cu: goto label_28c90c;
        case 0x28c910u: goto label_28c910;
        case 0x28c914u: goto label_28c914;
        case 0x28c918u: goto label_28c918;
        case 0x28c91cu: goto label_28c91c;
        case 0x28c920u: goto label_28c920;
        case 0x28c924u: goto label_28c924;
        case 0x28c928u: goto label_28c928;
        case 0x28c92cu: goto label_28c92c;
        case 0x28c930u: goto label_28c930;
        case 0x28c934u: goto label_28c934;
        case 0x28c938u: goto label_28c938;
        case 0x28c93cu: goto label_28c93c;
        case 0x28c940u: goto label_28c940;
        case 0x28c944u: goto label_28c944;
        case 0x28c948u: goto label_28c948;
        case 0x28c94cu: goto label_28c94c;
        case 0x28c950u: goto label_28c950;
        case 0x28c954u: goto label_28c954;
        case 0x28c958u: goto label_28c958;
        case 0x28c95cu: goto label_28c95c;
        case 0x28c960u: goto label_28c960;
        case 0x28c964u: goto label_28c964;
        case 0x28c968u: goto label_28c968;
        case 0x28c96cu: goto label_28c96c;
        case 0x28c970u: goto label_28c970;
        case 0x28c974u: goto label_28c974;
        case 0x28c978u: goto label_28c978;
        case 0x28c97cu: goto label_28c97c;
        case 0x28c980u: goto label_28c980;
        case 0x28c984u: goto label_28c984;
        case 0x28c988u: goto label_28c988;
        case 0x28c98cu: goto label_28c98c;
        case 0x28c990u: goto label_28c990;
        case 0x28c994u: goto label_28c994;
        case 0x28c998u: goto label_28c998;
        case 0x28c99cu: goto label_28c99c;
        case 0x28c9a0u: goto label_28c9a0;
        case 0x28c9a4u: goto label_28c9a4;
        case 0x28c9a8u: goto label_28c9a8;
        case 0x28c9acu: goto label_28c9ac;
        case 0x28c9b0u: goto label_28c9b0;
        case 0x28c9b4u: goto label_28c9b4;
        case 0x28c9b8u: goto label_28c9b8;
        case 0x28c9bcu: goto label_28c9bc;
        case 0x28c9c0u: goto label_28c9c0;
        case 0x28c9c4u: goto label_28c9c4;
        case 0x28c9c8u: goto label_28c9c8;
        case 0x28c9ccu: goto label_28c9cc;
        case 0x28c9d0u: goto label_28c9d0;
        case 0x28c9d4u: goto label_28c9d4;
        case 0x28c9d8u: goto label_28c9d8;
        case 0x28c9dcu: goto label_28c9dc;
        case 0x28c9e0u: goto label_28c9e0;
        case 0x28c9e4u: goto label_28c9e4;
        case 0x28c9e8u: goto label_28c9e8;
        case 0x28c9ecu: goto label_28c9ec;
        case 0x28c9f0u: goto label_28c9f0;
        case 0x28c9f4u: goto label_28c9f4;
        case 0x28c9f8u: goto label_28c9f8;
        case 0x28c9fcu: goto label_28c9fc;
        case 0x28ca00u: goto label_28ca00;
        case 0x28ca04u: goto label_28ca04;
        case 0x28ca08u: goto label_28ca08;
        case 0x28ca0cu: goto label_28ca0c;
        case 0x28ca10u: goto label_28ca10;
        case 0x28ca14u: goto label_28ca14;
        case 0x28ca18u: goto label_28ca18;
        case 0x28ca1cu: goto label_28ca1c;
        case 0x28ca20u: goto label_28ca20;
        case 0x28ca24u: goto label_28ca24;
        case 0x28ca28u: goto label_28ca28;
        case 0x28ca2cu: goto label_28ca2c;
        case 0x28ca30u: goto label_28ca30;
        case 0x28ca34u: goto label_28ca34;
        case 0x28ca38u: goto label_28ca38;
        case 0x28ca3cu: goto label_28ca3c;
        case 0x28ca40u: goto label_28ca40;
        case 0x28ca44u: goto label_28ca44;
        case 0x28ca48u: goto label_28ca48;
        case 0x28ca4cu: goto label_28ca4c;
        case 0x28ca50u: goto label_28ca50;
        case 0x28ca54u: goto label_28ca54;
        case 0x28ca58u: goto label_28ca58;
        case 0x28ca5cu: goto label_28ca5c;
        case 0x28ca60u: goto label_28ca60;
        case 0x28ca64u: goto label_28ca64;
        case 0x28ca68u: goto label_28ca68;
        case 0x28ca6cu: goto label_28ca6c;
        case 0x28ca70u: goto label_28ca70;
        case 0x28ca74u: goto label_28ca74;
        case 0x28ca78u: goto label_28ca78;
        case 0x28ca7cu: goto label_28ca7c;
        case 0x28ca80u: goto label_28ca80;
        case 0x28ca84u: goto label_28ca84;
        case 0x28ca88u: goto label_28ca88;
        case 0x28ca8cu: goto label_28ca8c;
        case 0x28ca90u: goto label_28ca90;
        case 0x28ca94u: goto label_28ca94;
        case 0x28ca98u: goto label_28ca98;
        case 0x28ca9cu: goto label_28ca9c;
        case 0x28caa0u: goto label_28caa0;
        case 0x28caa4u: goto label_28caa4;
        case 0x28caa8u: goto label_28caa8;
        case 0x28caacu: goto label_28caac;
        case 0x28cab0u: goto label_28cab0;
        case 0x28cab4u: goto label_28cab4;
        case 0x28cab8u: goto label_28cab8;
        case 0x28cabcu: goto label_28cabc;
        case 0x28cac0u: goto label_28cac0;
        case 0x28cac4u: goto label_28cac4;
        case 0x28cac8u: goto label_28cac8;
        case 0x28caccu: goto label_28cacc;
        case 0x28cad0u: goto label_28cad0;
        case 0x28cad4u: goto label_28cad4;
        case 0x28cad8u: goto label_28cad8;
        case 0x28cadcu: goto label_28cadc;
        case 0x28cae0u: goto label_28cae0;
        case 0x28cae4u: goto label_28cae4;
        case 0x28cae8u: goto label_28cae8;
        case 0x28caecu: goto label_28caec;
        case 0x28caf0u: goto label_28caf0;
        case 0x28caf4u: goto label_28caf4;
        case 0x28caf8u: goto label_28caf8;
        case 0x28cafcu: goto label_28cafc;
        case 0x28cb00u: goto label_28cb00;
        case 0x28cb04u: goto label_28cb04;
        case 0x28cb08u: goto label_28cb08;
        case 0x28cb0cu: goto label_28cb0c;
        case 0x28cb10u: goto label_28cb10;
        case 0x28cb14u: goto label_28cb14;
        case 0x28cb18u: goto label_28cb18;
        case 0x28cb1cu: goto label_28cb1c;
        case 0x28cb20u: goto label_28cb20;
        case 0x28cb24u: goto label_28cb24;
        case 0x28cb28u: goto label_28cb28;
        case 0x28cb2cu: goto label_28cb2c;
        case 0x28cb30u: goto label_28cb30;
        case 0x28cb34u: goto label_28cb34;
        case 0x28cb38u: goto label_28cb38;
        case 0x28cb3cu: goto label_28cb3c;
        case 0x28cb40u: goto label_28cb40;
        case 0x28cb44u: goto label_28cb44;
        case 0x28cb48u: goto label_28cb48;
        case 0x28cb4cu: goto label_28cb4c;
        case 0x28cb50u: goto label_28cb50;
        case 0x28cb54u: goto label_28cb54;
        case 0x28cb58u: goto label_28cb58;
        case 0x28cb5cu: goto label_28cb5c;
        case 0x28cb60u: goto label_28cb60;
        case 0x28cb64u: goto label_28cb64;
        case 0x28cb68u: goto label_28cb68;
        case 0x28cb6cu: goto label_28cb6c;
        case 0x28cb70u: goto label_28cb70;
        case 0x28cb74u: goto label_28cb74;
        case 0x28cb78u: goto label_28cb78;
        case 0x28cb7cu: goto label_28cb7c;
        case 0x28cb80u: goto label_28cb80;
        case 0x28cb84u: goto label_28cb84;
        case 0x28cb88u: goto label_28cb88;
        case 0x28cb8cu: goto label_28cb8c;
        case 0x28cb90u: goto label_28cb90;
        case 0x28cb94u: goto label_28cb94;
        case 0x28cb98u: goto label_28cb98;
        case 0x28cb9cu: goto label_28cb9c;
        case 0x28cba0u: goto label_28cba0;
        case 0x28cba4u: goto label_28cba4;
        case 0x28cba8u: goto label_28cba8;
        case 0x28cbacu: goto label_28cbac;
        case 0x28cbb0u: goto label_28cbb0;
        case 0x28cbb4u: goto label_28cbb4;
        case 0x28cbb8u: goto label_28cbb8;
        case 0x28cbbcu: goto label_28cbbc;
        case 0x28cbc0u: goto label_28cbc0;
        case 0x28cbc4u: goto label_28cbc4;
        case 0x28cbc8u: goto label_28cbc8;
        case 0x28cbccu: goto label_28cbcc;
        case 0x28cbd0u: goto label_28cbd0;
        case 0x28cbd4u: goto label_28cbd4;
        case 0x28cbd8u: goto label_28cbd8;
        case 0x28cbdcu: goto label_28cbdc;
        case 0x28cbe0u: goto label_28cbe0;
        case 0x28cbe4u: goto label_28cbe4;
        case 0x28cbe8u: goto label_28cbe8;
        case 0x28cbecu: goto label_28cbec;
        case 0x28cbf0u: goto label_28cbf0;
        case 0x28cbf4u: goto label_28cbf4;
        case 0x28cbf8u: goto label_28cbf8;
        case 0x28cbfcu: goto label_28cbfc;
        case 0x28cc00u: goto label_28cc00;
        case 0x28cc04u: goto label_28cc04;
        case 0x28cc08u: goto label_28cc08;
        case 0x28cc0cu: goto label_28cc0c;
        case 0x28cc10u: goto label_28cc10;
        case 0x28cc14u: goto label_28cc14;
        case 0x28cc18u: goto label_28cc18;
        case 0x28cc1cu: goto label_28cc1c;
        case 0x28cc20u: goto label_28cc20;
        case 0x28cc24u: goto label_28cc24;
        case 0x28cc28u: goto label_28cc28;
        case 0x28cc2cu: goto label_28cc2c;
        case 0x28cc30u: goto label_28cc30;
        case 0x28cc34u: goto label_28cc34;
        case 0x28cc38u: goto label_28cc38;
        case 0x28cc3cu: goto label_28cc3c;
        case 0x28cc40u: goto label_28cc40;
        case 0x28cc44u: goto label_28cc44;
        case 0x28cc48u: goto label_28cc48;
        case 0x28cc4cu: goto label_28cc4c;
        case 0x28cc50u: goto label_28cc50;
        case 0x28cc54u: goto label_28cc54;
        case 0x28cc58u: goto label_28cc58;
        case 0x28cc5cu: goto label_28cc5c;
        case 0x28cc60u: goto label_28cc60;
        case 0x28cc64u: goto label_28cc64;
        case 0x28cc68u: goto label_28cc68;
        case 0x28cc6cu: goto label_28cc6c;
        case 0x28cc70u: goto label_28cc70;
        case 0x28cc74u: goto label_28cc74;
        case 0x28cc78u: goto label_28cc78;
        case 0x28cc7cu: goto label_28cc7c;
        case 0x28cc80u: goto label_28cc80;
        case 0x28cc84u: goto label_28cc84;
        case 0x28cc88u: goto label_28cc88;
        case 0x28cc8cu: goto label_28cc8c;
        case 0x28cc90u: goto label_28cc90;
        case 0x28cc94u: goto label_28cc94;
        case 0x28cc98u: goto label_28cc98;
        case 0x28cc9cu: goto label_28cc9c;
        case 0x28cca0u: goto label_28cca0;
        case 0x28cca4u: goto label_28cca4;
        case 0x28cca8u: goto label_28cca8;
        case 0x28ccacu: goto label_28ccac;
        case 0x28ccb0u: goto label_28ccb0;
        case 0x28ccb4u: goto label_28ccb4;
        case 0x28ccb8u: goto label_28ccb8;
        case 0x28ccbcu: goto label_28ccbc;
        case 0x28ccc0u: goto label_28ccc0;
        case 0x28ccc4u: goto label_28ccc4;
        case 0x28ccc8u: goto label_28ccc8;
        case 0x28ccccu: goto label_28cccc;
        case 0x28ccd0u: goto label_28ccd0;
        case 0x28ccd4u: goto label_28ccd4;
        case 0x28ccd8u: goto label_28ccd8;
        case 0x28ccdcu: goto label_28ccdc;
        case 0x28cce0u: goto label_28cce0;
        case 0x28cce4u: goto label_28cce4;
        case 0x28cce8u: goto label_28cce8;
        case 0x28ccecu: goto label_28ccec;
        case 0x28ccf0u: goto label_28ccf0;
        case 0x28ccf4u: goto label_28ccf4;
        case 0x28ccf8u: goto label_28ccf8;
        case 0x28ccfcu: goto label_28ccfc;
        case 0x28cd00u: goto label_28cd00;
        case 0x28cd04u: goto label_28cd04;
        case 0x28cd08u: goto label_28cd08;
        case 0x28cd0cu: goto label_28cd0c;
        case 0x28cd10u: goto label_28cd10;
        case 0x28cd14u: goto label_28cd14;
        case 0x28cd18u: goto label_28cd18;
        case 0x28cd1cu: goto label_28cd1c;
        case 0x28cd20u: goto label_28cd20;
        case 0x28cd24u: goto label_28cd24;
        case 0x28cd28u: goto label_28cd28;
        case 0x28cd2cu: goto label_28cd2c;
        case 0x28cd30u: goto label_28cd30;
        case 0x28cd34u: goto label_28cd34;
        case 0x28cd38u: goto label_28cd38;
        case 0x28cd3cu: goto label_28cd3c;
        case 0x28cd40u: goto label_28cd40;
        case 0x28cd44u: goto label_28cd44;
        case 0x28cd48u: goto label_28cd48;
        case 0x28cd4cu: goto label_28cd4c;
        case 0x28cd50u: goto label_28cd50;
        case 0x28cd54u: goto label_28cd54;
        case 0x28cd58u: goto label_28cd58;
        case 0x28cd5cu: goto label_28cd5c;
        case 0x28cd60u: goto label_28cd60;
        case 0x28cd64u: goto label_28cd64;
        case 0x28cd68u: goto label_28cd68;
        case 0x28cd6cu: goto label_28cd6c;
        case 0x28cd70u: goto label_28cd70;
        case 0x28cd74u: goto label_28cd74;
        case 0x28cd78u: goto label_28cd78;
        case 0x28cd7cu: goto label_28cd7c;
        case 0x28cd80u: goto label_28cd80;
        case 0x28cd84u: goto label_28cd84;
        case 0x28cd88u: goto label_28cd88;
        case 0x28cd8cu: goto label_28cd8c;
        case 0x28cd90u: goto label_28cd90;
        case 0x28cd94u: goto label_28cd94;
        case 0x28cd98u: goto label_28cd98;
        case 0x28cd9cu: goto label_28cd9c;
        case 0x28cda0u: goto label_28cda0;
        case 0x28cda4u: goto label_28cda4;
        case 0x28cda8u: goto label_28cda8;
        case 0x28cdacu: goto label_28cdac;
        case 0x28cdb0u: goto label_28cdb0;
        case 0x28cdb4u: goto label_28cdb4;
        case 0x28cdb8u: goto label_28cdb8;
        case 0x28cdbcu: goto label_28cdbc;
        case 0x28cdc0u: goto label_28cdc0;
        case 0x28cdc4u: goto label_28cdc4;
        case 0x28cdc8u: goto label_28cdc8;
        case 0x28cdccu: goto label_28cdcc;
        case 0x28cdd0u: goto label_28cdd0;
        case 0x28cdd4u: goto label_28cdd4;
        case 0x28cdd8u: goto label_28cdd8;
        case 0x28cddcu: goto label_28cddc;
        case 0x28cde0u: goto label_28cde0;
        case 0x28cde4u: goto label_28cde4;
        case 0x28cde8u: goto label_28cde8;
        case 0x28cdecu: goto label_28cdec;
        case 0x28cdf0u: goto label_28cdf0;
        case 0x28cdf4u: goto label_28cdf4;
        case 0x28cdf8u: goto label_28cdf8;
        case 0x28cdfcu: goto label_28cdfc;
        case 0x28ce00u: goto label_28ce00;
        case 0x28ce04u: goto label_28ce04;
        case 0x28ce08u: goto label_28ce08;
        case 0x28ce0cu: goto label_28ce0c;
        case 0x28ce10u: goto label_28ce10;
        case 0x28ce14u: goto label_28ce14;
        case 0x28ce18u: goto label_28ce18;
        case 0x28ce1cu: goto label_28ce1c;
        case 0x28ce20u: goto label_28ce20;
        case 0x28ce24u: goto label_28ce24;
        case 0x28ce28u: goto label_28ce28;
        case 0x28ce2cu: goto label_28ce2c;
        case 0x28ce30u: goto label_28ce30;
        case 0x28ce34u: goto label_28ce34;
        case 0x28ce38u: goto label_28ce38;
        case 0x28ce3cu: goto label_28ce3c;
        case 0x28ce40u: goto label_28ce40;
        case 0x28ce44u: goto label_28ce44;
        case 0x28ce48u: goto label_28ce48;
        case 0x28ce4cu: goto label_28ce4c;
        case 0x28ce50u: goto label_28ce50;
        case 0x28ce54u: goto label_28ce54;
        case 0x28ce58u: goto label_28ce58;
        case 0x28ce5cu: goto label_28ce5c;
        case 0x28ce60u: goto label_28ce60;
        case 0x28ce64u: goto label_28ce64;
        case 0x28ce68u: goto label_28ce68;
        case 0x28ce6cu: goto label_28ce6c;
        case 0x28ce70u: goto label_28ce70;
        case 0x28ce74u: goto label_28ce74;
        case 0x28ce78u: goto label_28ce78;
        case 0x28ce7cu: goto label_28ce7c;
        case 0x28ce80u: goto label_28ce80;
        case 0x28ce84u: goto label_28ce84;
        case 0x28ce88u: goto label_28ce88;
        case 0x28ce8cu: goto label_28ce8c;
        case 0x28ce90u: goto label_28ce90;
        case 0x28ce94u: goto label_28ce94;
        case 0x28ce98u: goto label_28ce98;
        case 0x28ce9cu: goto label_28ce9c;
        case 0x28cea0u: goto label_28cea0;
        case 0x28cea4u: goto label_28cea4;
        case 0x28cea8u: goto label_28cea8;
        case 0x28ceacu: goto label_28ceac;
        case 0x28ceb0u: goto label_28ceb0;
        case 0x28ceb4u: goto label_28ceb4;
        case 0x28ceb8u: goto label_28ceb8;
        case 0x28cebcu: goto label_28cebc;
        case 0x28cec0u: goto label_28cec0;
        case 0x28cec4u: goto label_28cec4;
        case 0x28cec8u: goto label_28cec8;
        case 0x28ceccu: goto label_28cecc;
        case 0x28ced0u: goto label_28ced0;
        case 0x28ced4u: goto label_28ced4;
        case 0x28ced8u: goto label_28ced8;
        case 0x28cedcu: goto label_28cedc;
        case 0x28cee0u: goto label_28cee0;
        case 0x28cee4u: goto label_28cee4;
        case 0x28cee8u: goto label_28cee8;
        case 0x28ceecu: goto label_28ceec;
        case 0x28cef0u: goto label_28cef0;
        case 0x28cef4u: goto label_28cef4;
        case 0x28cef8u: goto label_28cef8;
        case 0x28cefcu: goto label_28cefc;
        case 0x28cf00u: goto label_28cf00;
        case 0x28cf04u: goto label_28cf04;
        case 0x28cf08u: goto label_28cf08;
        case 0x28cf0cu: goto label_28cf0c;
        case 0x28cf10u: goto label_28cf10;
        case 0x28cf14u: goto label_28cf14;
        case 0x28cf18u: goto label_28cf18;
        case 0x28cf1cu: goto label_28cf1c;
        case 0x28cf20u: goto label_28cf20;
        case 0x28cf24u: goto label_28cf24;
        case 0x28cf28u: goto label_28cf28;
        case 0x28cf2cu: goto label_28cf2c;
        case 0x28cf30u: goto label_28cf30;
        case 0x28cf34u: goto label_28cf34;
        case 0x28cf38u: goto label_28cf38;
        case 0x28cf3cu: goto label_28cf3c;
        case 0x28cf40u: goto label_28cf40;
        case 0x28cf44u: goto label_28cf44;
        case 0x28cf48u: goto label_28cf48;
        case 0x28cf4cu: goto label_28cf4c;
        case 0x28cf50u: goto label_28cf50;
        case 0x28cf54u: goto label_28cf54;
        case 0x28cf58u: goto label_28cf58;
        case 0x28cf5cu: goto label_28cf5c;
        case 0x28cf60u: goto label_28cf60;
        case 0x28cf64u: goto label_28cf64;
        case 0x28cf68u: goto label_28cf68;
        case 0x28cf6cu: goto label_28cf6c;
        case 0x28cf70u: goto label_28cf70;
        case 0x28cf74u: goto label_28cf74;
        case 0x28cf78u: goto label_28cf78;
        case 0x28cf7cu: goto label_28cf7c;
        case 0x28cf80u: goto label_28cf80;
        case 0x28cf84u: goto label_28cf84;
        case 0x28cf88u: goto label_28cf88;
        case 0x28cf8cu: goto label_28cf8c;
        case 0x28cf90u: goto label_28cf90;
        case 0x28cf94u: goto label_28cf94;
        case 0x28cf98u: goto label_28cf98;
        case 0x28cf9cu: goto label_28cf9c;
        case 0x28cfa0u: goto label_28cfa0;
        case 0x28cfa4u: goto label_28cfa4;
        case 0x28cfa8u: goto label_28cfa8;
        case 0x28cfacu: goto label_28cfac;
        case 0x28cfb0u: goto label_28cfb0;
        case 0x28cfb4u: goto label_28cfb4;
        case 0x28cfb8u: goto label_28cfb8;
        case 0x28cfbcu: goto label_28cfbc;
        case 0x28cfc0u: goto label_28cfc0;
        case 0x28cfc4u: goto label_28cfc4;
        case 0x28cfc8u: goto label_28cfc8;
        case 0x28cfccu: goto label_28cfcc;
        case 0x28cfd0u: goto label_28cfd0;
        case 0x28cfd4u: goto label_28cfd4;
        case 0x28cfd8u: goto label_28cfd8;
        case 0x28cfdcu: goto label_28cfdc;
        case 0x28cfe0u: goto label_28cfe0;
        case 0x28cfe4u: goto label_28cfe4;
        case 0x28cfe8u: goto label_28cfe8;
        case 0x28cfecu: goto label_28cfec;
        case 0x28cff0u: goto label_28cff0;
        case 0x28cff4u: goto label_28cff4;
        case 0x28cff8u: goto label_28cff8;
        case 0x28cffcu: goto label_28cffc;
        case 0x28d000u: goto label_28d000;
        case 0x28d004u: goto label_28d004;
        case 0x28d008u: goto label_28d008;
        case 0x28d00cu: goto label_28d00c;
        case 0x28d010u: goto label_28d010;
        case 0x28d014u: goto label_28d014;
        case 0x28d018u: goto label_28d018;
        case 0x28d01cu: goto label_28d01c;
        case 0x28d020u: goto label_28d020;
        case 0x28d024u: goto label_28d024;
        case 0x28d028u: goto label_28d028;
        case 0x28d02cu: goto label_28d02c;
        case 0x28d030u: goto label_28d030;
        case 0x28d034u: goto label_28d034;
        case 0x28d038u: goto label_28d038;
        case 0x28d03cu: goto label_28d03c;
        case 0x28d040u: goto label_28d040;
        case 0x28d044u: goto label_28d044;
        case 0x28d048u: goto label_28d048;
        case 0x28d04cu: goto label_28d04c;
        case 0x28d050u: goto label_28d050;
        case 0x28d054u: goto label_28d054;
        case 0x28d058u: goto label_28d058;
        case 0x28d05cu: goto label_28d05c;
        case 0x28d060u: goto label_28d060;
        case 0x28d064u: goto label_28d064;
        case 0x28d068u: goto label_28d068;
        case 0x28d06cu: goto label_28d06c;
        case 0x28d070u: goto label_28d070;
        case 0x28d074u: goto label_28d074;
        case 0x28d078u: goto label_28d078;
        case 0x28d07cu: goto label_28d07c;
        case 0x28d080u: goto label_28d080;
        case 0x28d084u: goto label_28d084;
        case 0x28d088u: goto label_28d088;
        case 0x28d08cu: goto label_28d08c;
        case 0x28d090u: goto label_28d090;
        case 0x28d094u: goto label_28d094;
        case 0x28d098u: goto label_28d098;
        case 0x28d09cu: goto label_28d09c;
        case 0x28d0a0u: goto label_28d0a0;
        case 0x28d0a4u: goto label_28d0a4;
        case 0x28d0a8u: goto label_28d0a8;
        case 0x28d0acu: goto label_28d0ac;
        case 0x28d0b0u: goto label_28d0b0;
        case 0x28d0b4u: goto label_28d0b4;
        case 0x28d0b8u: goto label_28d0b8;
        case 0x28d0bcu: goto label_28d0bc;
        case 0x28d0c0u: goto label_28d0c0;
        case 0x28d0c4u: goto label_28d0c4;
        case 0x28d0c8u: goto label_28d0c8;
        case 0x28d0ccu: goto label_28d0cc;
        case 0x28d0d0u: goto label_28d0d0;
        case 0x28d0d4u: goto label_28d0d4;
        case 0x28d0d8u: goto label_28d0d8;
        case 0x28d0dcu: goto label_28d0dc;
        case 0x28d0e0u: goto label_28d0e0;
        case 0x28d0e4u: goto label_28d0e4;
        case 0x28d0e8u: goto label_28d0e8;
        case 0x28d0ecu: goto label_28d0ec;
        case 0x28d0f0u: goto label_28d0f0;
        case 0x28d0f4u: goto label_28d0f4;
        case 0x28d0f8u: goto label_28d0f8;
        case 0x28d0fcu: goto label_28d0fc;
        case 0x28d100u: goto label_28d100;
        case 0x28d104u: goto label_28d104;
        case 0x28d108u: goto label_28d108;
        case 0x28d10cu: goto label_28d10c;
        case 0x28d110u: goto label_28d110;
        case 0x28d114u: goto label_28d114;
        case 0x28d118u: goto label_28d118;
        case 0x28d11cu: goto label_28d11c;
        case 0x28d120u: goto label_28d120;
        case 0x28d124u: goto label_28d124;
        case 0x28d128u: goto label_28d128;
        case 0x28d12cu: goto label_28d12c;
        case 0x28d130u: goto label_28d130;
        case 0x28d134u: goto label_28d134;
        case 0x28d138u: goto label_28d138;
        case 0x28d13cu: goto label_28d13c;
        case 0x28d140u: goto label_28d140;
        case 0x28d144u: goto label_28d144;
        case 0x28d148u: goto label_28d148;
        case 0x28d14cu: goto label_28d14c;
        case 0x28d150u: goto label_28d150;
        case 0x28d154u: goto label_28d154;
        case 0x28d158u: goto label_28d158;
        case 0x28d15cu: goto label_28d15c;
        case 0x28d160u: goto label_28d160;
        case 0x28d164u: goto label_28d164;
        case 0x28d168u: goto label_28d168;
        case 0x28d16cu: goto label_28d16c;
        case 0x28d170u: goto label_28d170;
        case 0x28d174u: goto label_28d174;
        case 0x28d178u: goto label_28d178;
        case 0x28d17cu: goto label_28d17c;
        case 0x28d180u: goto label_28d180;
        case 0x28d184u: goto label_28d184;
        case 0x28d188u: goto label_28d188;
        case 0x28d18cu: goto label_28d18c;
        case 0x28d190u: goto label_28d190;
        case 0x28d194u: goto label_28d194;
        case 0x28d198u: goto label_28d198;
        case 0x28d19cu: goto label_28d19c;
        case 0x28d1a0u: goto label_28d1a0;
        case 0x28d1a4u: goto label_28d1a4;
        case 0x28d1a8u: goto label_28d1a8;
        case 0x28d1acu: goto label_28d1ac;
        case 0x28d1b0u: goto label_28d1b0;
        case 0x28d1b4u: goto label_28d1b4;
        case 0x28d1b8u: goto label_28d1b8;
        case 0x28d1bcu: goto label_28d1bc;
        case 0x28d1c0u: goto label_28d1c0;
        case 0x28d1c4u: goto label_28d1c4;
        case 0x28d1c8u: goto label_28d1c8;
        case 0x28d1ccu: goto label_28d1cc;
        case 0x28d1d0u: goto label_28d1d0;
        case 0x28d1d4u: goto label_28d1d4;
        case 0x28d1d8u: goto label_28d1d8;
        case 0x28d1dcu: goto label_28d1dc;
        case 0x28d1e0u: goto label_28d1e0;
        case 0x28d1e4u: goto label_28d1e4;
        case 0x28d1e8u: goto label_28d1e8;
        case 0x28d1ecu: goto label_28d1ec;
        case 0x28d1f0u: goto label_28d1f0;
        case 0x28d1f4u: goto label_28d1f4;
        case 0x28d1f8u: goto label_28d1f8;
        case 0x28d1fcu: goto label_28d1fc;
        case 0x28d200u: goto label_28d200;
        case 0x28d204u: goto label_28d204;
        case 0x28d208u: goto label_28d208;
        case 0x28d20cu: goto label_28d20c;
        case 0x28d210u: goto label_28d210;
        case 0x28d214u: goto label_28d214;
        case 0x28d218u: goto label_28d218;
        case 0x28d21cu: goto label_28d21c;
        case 0x28d220u: goto label_28d220;
        case 0x28d224u: goto label_28d224;
        case 0x28d228u: goto label_28d228;
        case 0x28d22cu: goto label_28d22c;
        case 0x28d230u: goto label_28d230;
        case 0x28d234u: goto label_28d234;
        case 0x28d238u: goto label_28d238;
        case 0x28d23cu: goto label_28d23c;
        case 0x28d240u: goto label_28d240;
        case 0x28d244u: goto label_28d244;
        case 0x28d248u: goto label_28d248;
        case 0x28d24cu: goto label_28d24c;
        case 0x28d250u: goto label_28d250;
        case 0x28d254u: goto label_28d254;
        case 0x28d258u: goto label_28d258;
        case 0x28d25cu: goto label_28d25c;
        case 0x28d260u: goto label_28d260;
        case 0x28d264u: goto label_28d264;
        case 0x28d268u: goto label_28d268;
        case 0x28d26cu: goto label_28d26c;
        case 0x28d270u: goto label_28d270;
        case 0x28d274u: goto label_28d274;
        case 0x28d278u: goto label_28d278;
        case 0x28d27cu: goto label_28d27c;
        case 0x28d280u: goto label_28d280;
        case 0x28d284u: goto label_28d284;
        case 0x28d288u: goto label_28d288;
        case 0x28d28cu: goto label_28d28c;
        case 0x28d290u: goto label_28d290;
        case 0x28d294u: goto label_28d294;
        case 0x28d298u: goto label_28d298;
        case 0x28d29cu: goto label_28d29c;
        case 0x28d2a0u: goto label_28d2a0;
        case 0x28d2a4u: goto label_28d2a4;
        case 0x28d2a8u: goto label_28d2a8;
        case 0x28d2acu: goto label_28d2ac;
        case 0x28d2b0u: goto label_28d2b0;
        case 0x28d2b4u: goto label_28d2b4;
        case 0x28d2b8u: goto label_28d2b8;
        case 0x28d2bcu: goto label_28d2bc;
        case 0x28d2c0u: goto label_28d2c0;
        case 0x28d2c4u: goto label_28d2c4;
        case 0x28d2c8u: goto label_28d2c8;
        case 0x28d2ccu: goto label_28d2cc;
        case 0x28d2d0u: goto label_28d2d0;
        case 0x28d2d4u: goto label_28d2d4;
        case 0x28d2d8u: goto label_28d2d8;
        case 0x28d2dcu: goto label_28d2dc;
        case 0x28d2e0u: goto label_28d2e0;
        case 0x28d2e4u: goto label_28d2e4;
        case 0x28d2e8u: goto label_28d2e8;
        case 0x28d2ecu: goto label_28d2ec;
        case 0x28d2f0u: goto label_28d2f0;
        case 0x28d2f4u: goto label_28d2f4;
        case 0x28d2f8u: goto label_28d2f8;
        case 0x28d2fcu: goto label_28d2fc;
        case 0x28d300u: goto label_28d300;
        case 0x28d304u: goto label_28d304;
        case 0x28d308u: goto label_28d308;
        case 0x28d30cu: goto label_28d30c;
        case 0x28d310u: goto label_28d310;
        case 0x28d314u: goto label_28d314;
        case 0x28d318u: goto label_28d318;
        case 0x28d31cu: goto label_28d31c;
        case 0x28d320u: goto label_28d320;
        case 0x28d324u: goto label_28d324;
        case 0x28d328u: goto label_28d328;
        case 0x28d32cu: goto label_28d32c;
        case 0x28d330u: goto label_28d330;
        case 0x28d334u: goto label_28d334;
        case 0x28d338u: goto label_28d338;
        case 0x28d33cu: goto label_28d33c;
        case 0x28d340u: goto label_28d340;
        case 0x28d344u: goto label_28d344;
        case 0x28d348u: goto label_28d348;
        case 0x28d34cu: goto label_28d34c;
        case 0x28d350u: goto label_28d350;
        case 0x28d354u: goto label_28d354;
        case 0x28d358u: goto label_28d358;
        case 0x28d35cu: goto label_28d35c;
        case 0x28d360u: goto label_28d360;
        case 0x28d364u: goto label_28d364;
        case 0x28d368u: goto label_28d368;
        case 0x28d36cu: goto label_28d36c;
        case 0x28d370u: goto label_28d370;
        case 0x28d374u: goto label_28d374;
        case 0x28d378u: goto label_28d378;
        case 0x28d37cu: goto label_28d37c;
        case 0x28d380u: goto label_28d380;
        case 0x28d384u: goto label_28d384;
        case 0x28d388u: goto label_28d388;
        case 0x28d38cu: goto label_28d38c;
        case 0x28d390u: goto label_28d390;
        case 0x28d394u: goto label_28d394;
        case 0x28d398u: goto label_28d398;
        case 0x28d39cu: goto label_28d39c;
        case 0x28d3a0u: goto label_28d3a0;
        case 0x28d3a4u: goto label_28d3a4;
        case 0x28d3a8u: goto label_28d3a8;
        case 0x28d3acu: goto label_28d3ac;
        case 0x28d3b0u: goto label_28d3b0;
        case 0x28d3b4u: goto label_28d3b4;
        case 0x28d3b8u: goto label_28d3b8;
        case 0x28d3bcu: goto label_28d3bc;
        case 0x28d3c0u: goto label_28d3c0;
        case 0x28d3c4u: goto label_28d3c4;
        case 0x28d3c8u: goto label_28d3c8;
        case 0x28d3ccu: goto label_28d3cc;
        case 0x28d3d0u: goto label_28d3d0;
        case 0x28d3d4u: goto label_28d3d4;
        case 0x28d3d8u: goto label_28d3d8;
        case 0x28d3dcu: goto label_28d3dc;
        case 0x28d3e0u: goto label_28d3e0;
        case 0x28d3e4u: goto label_28d3e4;
        case 0x28d3e8u: goto label_28d3e8;
        case 0x28d3ecu: goto label_28d3ec;
        case 0x28d3f0u: goto label_28d3f0;
        case 0x28d3f4u: goto label_28d3f4;
        case 0x28d3f8u: goto label_28d3f8;
        case 0x28d3fcu: goto label_28d3fc;
        case 0x28d400u: goto label_28d400;
        case 0x28d404u: goto label_28d404;
        case 0x28d408u: goto label_28d408;
        case 0x28d40cu: goto label_28d40c;
        case 0x28d410u: goto label_28d410;
        case 0x28d414u: goto label_28d414;
        case 0x28d418u: goto label_28d418;
        case 0x28d41cu: goto label_28d41c;
        case 0x28d420u: goto label_28d420;
        case 0x28d424u: goto label_28d424;
        case 0x28d428u: goto label_28d428;
        case 0x28d42cu: goto label_28d42c;
        case 0x28d430u: goto label_28d430;
        case 0x28d434u: goto label_28d434;
        case 0x28d438u: goto label_28d438;
        case 0x28d43cu: goto label_28d43c;
        case 0x28d440u: goto label_28d440;
        case 0x28d444u: goto label_28d444;
        case 0x28d448u: goto label_28d448;
        case 0x28d44cu: goto label_28d44c;
        case 0x28d450u: goto label_28d450;
        case 0x28d454u: goto label_28d454;
        case 0x28d458u: goto label_28d458;
        case 0x28d45cu: goto label_28d45c;
        case 0x28d460u: goto label_28d460;
        case 0x28d464u: goto label_28d464;
        case 0x28d468u: goto label_28d468;
        case 0x28d46cu: goto label_28d46c;
        case 0x28d470u: goto label_28d470;
        case 0x28d474u: goto label_28d474;
        case 0x28d478u: goto label_28d478;
        case 0x28d47cu: goto label_28d47c;
        case 0x28d480u: goto label_28d480;
        case 0x28d484u: goto label_28d484;
        case 0x28d488u: goto label_28d488;
        case 0x28d48cu: goto label_28d48c;
        case 0x28d490u: goto label_28d490;
        case 0x28d494u: goto label_28d494;
        case 0x28d498u: goto label_28d498;
        case 0x28d49cu: goto label_28d49c;
        case 0x28d4a0u: goto label_28d4a0;
        case 0x28d4a4u: goto label_28d4a4;
        case 0x28d4a8u: goto label_28d4a8;
        case 0x28d4acu: goto label_28d4ac;
        case 0x28d4b0u: goto label_28d4b0;
        case 0x28d4b4u: goto label_28d4b4;
        case 0x28d4b8u: goto label_28d4b8;
        case 0x28d4bcu: goto label_28d4bc;
        case 0x28d4c0u: goto label_28d4c0;
        case 0x28d4c4u: goto label_28d4c4;
        case 0x28d4c8u: goto label_28d4c8;
        case 0x28d4ccu: goto label_28d4cc;
        case 0x28d4d0u: goto label_28d4d0;
        case 0x28d4d4u: goto label_28d4d4;
        case 0x28d4d8u: goto label_28d4d8;
        case 0x28d4dcu: goto label_28d4dc;
        case 0x28d4e0u: goto label_28d4e0;
        case 0x28d4e4u: goto label_28d4e4;
        case 0x28d4e8u: goto label_28d4e8;
        case 0x28d4ecu: goto label_28d4ec;
        case 0x28d4f0u: goto label_28d4f0;
        case 0x28d4f4u: goto label_28d4f4;
        case 0x28d4f8u: goto label_28d4f8;
        case 0x28d4fcu: goto label_28d4fc;
        case 0x28d500u: goto label_28d500;
        case 0x28d504u: goto label_28d504;
        case 0x28d508u: goto label_28d508;
        case 0x28d50cu: goto label_28d50c;
        case 0x28d510u: goto label_28d510;
        case 0x28d514u: goto label_28d514;
        case 0x28d518u: goto label_28d518;
        case 0x28d51cu: goto label_28d51c;
        case 0x28d520u: goto label_28d520;
        case 0x28d524u: goto label_28d524;
        case 0x28d528u: goto label_28d528;
        case 0x28d52cu: goto label_28d52c;
        case 0x28d530u: goto label_28d530;
        case 0x28d534u: goto label_28d534;
        case 0x28d538u: goto label_28d538;
        case 0x28d53cu: goto label_28d53c;
        case 0x28d540u: goto label_28d540;
        case 0x28d544u: goto label_28d544;
        case 0x28d548u: goto label_28d548;
        case 0x28d54cu: goto label_28d54c;
        case 0x28d550u: goto label_28d550;
        case 0x28d554u: goto label_28d554;
        case 0x28d558u: goto label_28d558;
        case 0x28d55cu: goto label_28d55c;
        case 0x28d560u: goto label_28d560;
        case 0x28d564u: goto label_28d564;
        case 0x28d568u: goto label_28d568;
        case 0x28d56cu: goto label_28d56c;
        case 0x28d570u: goto label_28d570;
        case 0x28d574u: goto label_28d574;
        case 0x28d578u: goto label_28d578;
        case 0x28d57cu: goto label_28d57c;
        case 0x28d580u: goto label_28d580;
        case 0x28d584u: goto label_28d584;
        case 0x28d588u: goto label_28d588;
        case 0x28d58cu: goto label_28d58c;
        case 0x28d590u: goto label_28d590;
        case 0x28d594u: goto label_28d594;
        case 0x28d598u: goto label_28d598;
        case 0x28d59cu: goto label_28d59c;
        case 0x28d5a0u: goto label_28d5a0;
        case 0x28d5a4u: goto label_28d5a4;
        case 0x28d5a8u: goto label_28d5a8;
        case 0x28d5acu: goto label_28d5ac;
        case 0x28d5b0u: goto label_28d5b0;
        case 0x28d5b4u: goto label_28d5b4;
        case 0x28d5b8u: goto label_28d5b8;
        case 0x28d5bcu: goto label_28d5bc;
        case 0x28d5c0u: goto label_28d5c0;
        case 0x28d5c4u: goto label_28d5c4;
        case 0x28d5c8u: goto label_28d5c8;
        case 0x28d5ccu: goto label_28d5cc;
        default: break;
    }

    ctx->pc = 0x28c700u;

label_28c700:
    // 0x28c700: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x28c700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_28c704:
    // 0x28c704: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28c704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_28c708:
    // 0x28c708: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28c708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_28c70c:
    // 0x28c70c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28c70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_28c710:
    // 0x28c710: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28c710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_28c714:
    // 0x28c714: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28c714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_28c718:
    // 0x28c718: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28c718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28c71c:
    // 0x28c71c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28c71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28c720:
    // 0x28c720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28c724:
    // 0x28c724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28c728:
    // 0x28c728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28c72c:
    // 0x28c72c: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x28c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_28c730:
    // 0x28c730: 0xafa60180  sw          $a2, 0x180($sp)
    ctx->pc = 0x28c730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 6));
label_28c734:
    // 0x28c734: 0xafa70190  sw          $a3, 0x190($sp)
    ctx->pc = 0x28c734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 7));
label_28c738:
    // 0x28c738: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x28c738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_28c73c:
    // 0x28c73c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x28c73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c740:
    // 0x28c740: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x28c740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_28c744:
    // 0x28c744: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x28c744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_28c748:
    // 0x28c748: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x28c748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c74c:
    // 0x28c74c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x28c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
label_28c750:
    // 0x28c750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c754:
    // 0x28c754: 0x0  nop
    ctx->pc = 0x28c754u;
    // NOP
label_28c758:
    // 0x28c758: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28c758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28c75c:
    // 0x28c75c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x28c75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_28c760:
    // 0x28c760: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x28c760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28c764:
    // 0x28c764: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x28c764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c768:
    // 0x28c768: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28c768u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_28c76c:
    // 0x28c76c: 0x3c1342a0  lui         $s3, 0x42A0
    ctx->pc = 0x28c76cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)17056 << 16));
label_28c770:
    // 0x28c770: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28c770u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c774:
    // 0x28c774: 0x0  nop
    ctx->pc = 0x28c774u;
    // NOP
label_28c778:
    // 0x28c778: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x28c778u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_28c77c:
    // 0x28c77c: 0x3c103f80  lui         $s0, 0x3F80
    ctx->pc = 0x28c77cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16256 << 16));
label_28c780:
    // 0x28c780: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x28c780u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c784:
    // 0x28c784: 0x0  nop
    ctx->pc = 0x28c784u;
    // NOP
label_28c788:
    // 0x28c788: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x28c788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28c78c:
    // 0x28c78c: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x28c78cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_28c790:
    // 0x28c790: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28c790u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c794:
    // 0x28c794: 0x0  nop
    ctx->pc = 0x28c794u;
    // NOP
label_28c798:
    // 0x28c798: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28c798u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c79c:
    // 0x28c79c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_28c7a0:
    if (ctx->pc == 0x28C7A0u) {
        ctx->pc = 0x28C7A4u;
        goto label_28c7a4;
    }
    ctx->pc = 0x28C79Cu;
    {
        const bool branch_taken_0x28c79c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c79c) {
            ctx->pc = 0x28C7B4u;
            goto label_28c7b4;
        }
    }
    ctx->pc = 0x28C7A4u;
label_28c7a4:
    // 0x28c7a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28c7a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_28c7a8:
    // 0x28c7a8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x28c7a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_28c7ac:
    // 0x28c7ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_28c7b0:
    if (ctx->pc == 0x28C7B0u) {
        ctx->pc = 0x28C7B4u;
        goto label_28c7b4;
    }
    ctx->pc = 0x28C7ACu;
    {
        const bool branch_taken_0x28c7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c7ac) {
            ctx->pc = 0x28C7C8u;
            goto label_28c7c8;
        }
    }
    ctx->pc = 0x28C7B4u;
label_28c7b4:
    // 0x28c7b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28c7b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_28c7b8:
    // 0x28c7b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28c7b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_28c7bc:
    // 0x28c7bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x28c7bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_28c7c0:
    // 0x28c7c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_28c7c4:
    // 0x28c7c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28c7c8:
    // 0x28c7c8: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x28c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_28c7cc:
    // 0x28c7cc: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x28c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_28c7d0:
    // 0x28c7d0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x28c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_28c7d4:
    // 0x28c7d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28c7d8:
    // 0x28c7d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x28c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_28c7dc:
    // 0x28c7dc: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x28c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_28c7e0:
    // 0x28c7e0: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x28c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_28c7e4:
    // 0x28c7e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_28c7e8:
    // 0x28c7e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x28c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_28c7ec:
    // 0x28c7ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x28c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_28c7f0:
    // 0x28c7f0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x28c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_28c7f4:
    // 0x28c7f4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x28c7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_28c7f8:
    // 0x28c7f8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x28c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_28c7fc:
    // 0x28c7fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28c800:
    // 0x28c800: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x28c800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_28c804:
    // 0x28c804: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x28c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_28c808:
    // 0x28c808: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x28c808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28c80c:
    // 0x28c80c: 0xafa40144  sw          $a0, 0x144($sp)
    ctx->pc = 0x28c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 4));
label_28c810:
    // 0x28c810: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x28c810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_28c814:
    // 0x28c814: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x28c814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_28c818:
    // 0x28c818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c81c:
    // 0x28c81c: 0x2406003d  addiu       $a2, $zero, 0x3D
    ctx->pc = 0x28c81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_28c820:
    // 0x28c820: 0xc0e2dbc  jal         func_38B6F0
label_28c824:
    if (ctx->pc == 0x28C824u) {
        ctx->pc = 0x28C828u;
        goto label_28c828;
    }
    ctx->pc = 0x28C820u;
    SET_GPR_U32(ctx, 31, 0x28C828u);
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x28C820u, 0x28C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C828u;
label_28c828:
    // 0x28c828: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28c828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c82c:
    // 0x28c82c: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x28c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_28c830:
    // 0x28c830: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x28c830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_28c834:
    // 0x28c834: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x28c834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_28c838:
    // 0x28c838: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x28c838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_28c83c:
    // 0x28c83c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28c83cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28c840:
    // 0x28c840: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x28c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_28c844:
    // 0x28c844: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x28c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_28c848:
    // 0x28c848: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x28c848u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c84c:
    // 0x28c84c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x28c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_28c850:
    // 0x28c850: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28c850u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c854:
    // 0x28c854: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x28c854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_28c858:
    // 0x28c858: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x28c858u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c85c:
    // 0x28c85c: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x28c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_28c860:
    // 0x28c860: 0xc780a29c  lwc1        $f0, -0x5D64($gp)
    ctx->pc = 0x28c860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c864:
    // 0x28c864: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28c864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28c868:
    // 0x28c868: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x28c868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_28c86c:
    // 0x28c86c: 0x2484d4d0  addiu       $a0, $a0, -0x2B30
    ctx->pc = 0x28c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956240));
label_28c870:
    // 0x28c870: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x28c870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_28c874:
    // 0x28c874: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x28c874u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_28c878:
    // 0x28c878: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x28c878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c87c:
    // 0x28c87c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x28c87cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_28c880:
    // 0x28c880: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28c880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_28c884:
    // 0x28c884: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x28c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_28c888:
    // 0x28c888: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x28c888u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c88c:
    // 0x28c88c: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x28c88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_28c890:
    // 0x28c890: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x28c890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28c894:
    // 0x28c894: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28c894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28c898:
    // 0x28c898: 0xc0a69b0  jal         func_29A6C0
label_28c89c:
    if (ctx->pc == 0x28C89Cu) {
        ctx->pc = 0x28C8A0u;
        goto label_28c8a0;
    }
    ctx->pc = 0x28C898u;
    SET_GPR_U32(ctx, 31, 0x28C8A0u);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x28C898u, 0x28C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C8A0u;
label_28c8a0:
    // 0x28c8a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c8a4:
    // 0x28c8a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c8a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c8a8:
    // 0x28c8a8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x28c8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_28c8ac:
    // 0x28c8ac: 0x320f809  jalr        $t9
label_28c8b0:
    if (ctx->pc == 0x28C8B0u) {
        ctx->pc = 0x28C8B4u;
        goto label_28c8b4;
    }
    ctx->pc = 0x28C8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C8B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C8ACu, 0x28C8B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C8B4u;
label_28c8b4:
    // 0x28c8b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28c8b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c8b8:
    // 0x28c8b8: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x28c8b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28c8bc:
    // 0x28c8bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28c8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c8c0:
    // 0x28c8c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28c8c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c8c4:
    // 0x28c8c4: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x28c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_28c8c8:
    // 0x28c8c8: 0x10000294  b           . + 4 + (0x294 << 2)
label_28c8cc:
    if (ctx->pc == 0x28C8CCu) {
        ctx->pc = 0x28C8D0u;
        goto label_28c8d0;
    }
    ctx->pc = 0x28C8C8u;
    {
        const bool branch_taken_0x28c8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c8c8) {
            ctx->pc = 0x28D31Cu;
            goto label_28d31c;
        }
    }
    ctx->pc = 0x28C8D0u;
label_28c8d0:
    // 0x28c8d0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x28c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_28c8d4:
    // 0x28c8d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28c8d8:
    // 0x28c8d8: 0x1082006b  beq         $a0, $v0, . + 4 + (0x6B << 2)
label_28c8dc:
    if (ctx->pc == 0x28C8DCu) {
        ctx->pc = 0x28C8E0u;
        goto label_28c8e0;
    }
    ctx->pc = 0x28C8D8u;
    {
        const bool branch_taken_0x28c8d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x28c8d8) {
            ctx->pc = 0x28CA88u;
            goto label_28ca88;
        }
    }
    ctx->pc = 0x28C8E0u;
label_28c8e0:
    // 0x28c8e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_28c8e4:
    // 0x28c8e4: 0x10820048  beq         $a0, $v0, . + 4 + (0x48 << 2)
label_28c8e8:
    if (ctx->pc == 0x28C8E8u) {
        ctx->pc = 0x28C8ECu;
        goto label_28c8ec;
    }
    ctx->pc = 0x28C8E4u;
    {
        const bool branch_taken_0x28c8e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x28c8e4) {
            ctx->pc = 0x28CA08u;
            goto label_28ca08;
        }
    }
    ctx->pc = 0x28C8ECu;
label_28c8ec:
    // 0x28c8ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c8f0:
    // 0x28c8f0: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
label_28c8f4:
    if (ctx->pc == 0x28C8F4u) {
        ctx->pc = 0x28C8F8u;
        goto label_28c8f8;
    }
    ctx->pc = 0x28C8F0u;
    {
        const bool branch_taken_0x28c8f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28c8f0) {
            ctx->pc = 0x28C988u;
            goto label_28c988;
        }
    }
    ctx->pc = 0x28C8F8u;
label_28c8f8:
    // 0x28c8f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_28c8fc:
    if (ctx->pc == 0x28C8FCu) {
        ctx->pc = 0x28C900u;
        goto label_28c900;
    }
    ctx->pc = 0x28C8F8u;
    {
        const bool branch_taken_0x28c8f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c8f8) {
            ctx->pc = 0x28C908u;
            goto label_28c908;
        }
    }
    ctx->pc = 0x28C900u;
label_28c900:
    // 0x28c900: 0x1000007f  b           . + 4 + (0x7F << 2)
label_28c904:
    if (ctx->pc == 0x28C904u) {
        ctx->pc = 0x28C908u;
        goto label_28c908;
    }
    ctx->pc = 0x28C900u;
    {
        const bool branch_taken_0x28c900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c900) {
            ctx->pc = 0x28CB00u;
            goto label_28cb00;
        }
    }
    ctx->pc = 0x28C908u;
label_28c908:
    // 0x28c908: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x28c908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
label_28c90c:
    // 0x28c90c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c910:
    // 0x28c910: 0x0  nop
    ctx->pc = 0x28c910u;
    // NOP
label_28c914:
    // 0x28c914: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x28c914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_28c918:
    // 0x28c918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28c918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c91c:
    // 0x28c91c: 0x0  nop
    ctx->pc = 0x28c91cu;
    // NOP
label_28c920:
    // 0x28c920: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x28c920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_28c924:
    // 0x28c924: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x28c924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
label_28c928:
    // 0x28c928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c92c:
    // 0x28c92c: 0x0  nop
    ctx->pc = 0x28c92cu;
    // NOP
label_28c930:
    // 0x28c930: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x28c930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_28c934:
    // 0x28c934: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x28c934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
label_28c938:
    // 0x28c938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c93c:
    // 0x28c93c: 0x0  nop
    ctx->pc = 0x28c93cu;
    // NOP
label_28c940:
    // 0x28c940: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x28c940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_28c944:
    // 0x28c944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28c944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c948:
    // 0x28c948: 0x0  nop
    ctx->pc = 0x28c948u;
    // NOP
label_28c94c:
    // 0x28c94c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x28c94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_28c950:
    // 0x28c950: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x28c950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
label_28c954:
    // 0x28c954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c958:
    // 0x28c958: 0x0  nop
    ctx->pc = 0x28c958u;
    // NOP
label_28c95c:
    // 0x28c95c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x28c95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_28c960:
    // 0x28c960: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x28c960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_28c964:
    // 0x28c964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c968:
    // 0x28c968: 0x0  nop
    ctx->pc = 0x28c968u;
    // NOP
label_28c96c:
    // 0x28c96c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x28c96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_28c970:
    // 0x28c970: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x28c970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_28c974:
    // 0x28c974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c978:
    // 0x28c978: 0x0  nop
    ctx->pc = 0x28c978u;
    // NOP
label_28c97c:
    // 0x28c97c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x28c97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_28c980:
    // 0x28c980: 0x1000005f  b           . + 4 + (0x5F << 2)
label_28c984:
    if (ctx->pc == 0x28C984u) {
        ctx->pc = 0x28C988u;
        goto label_28c988;
    }
    ctx->pc = 0x28C980u;
    {
        const bool branch_taken_0x28c980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c980) {
            ctx->pc = 0x28CB00u;
            goto label_28cb00;
        }
    }
    ctx->pc = 0x28C988u;
label_28c988:
    // 0x28c988: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28c988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c98c:
    // 0x28c98c: 0x0  nop
    ctx->pc = 0x28c98cu;
    // NOP
label_28c990:
    // 0x28c990: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x28c990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_28c994:
    // 0x28c994: 0x3c04c100  lui         $a0, 0xC100
    ctx->pc = 0x28c994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49408 << 16));
label_28c998:
    // 0x28c998: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28c998u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c99c:
    // 0x28c99c: 0x0  nop
    ctx->pc = 0x28c99cu;
    // NOP
label_28c9a0:
    // 0x28c9a0: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x28c9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_28c9a4:
    // 0x28c9a4: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x28c9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
label_28c9a8:
    // 0x28c9a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28c9a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c9ac:
    // 0x28c9ac: 0x0  nop
    ctx->pc = 0x28c9acu;
    // NOP
label_28c9b0:
    // 0x28c9b0: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x28c9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_28c9b4:
    // 0x28c9b4: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x28c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
label_28c9b8:
    // 0x28c9b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c9bc:
    // 0x28c9bc: 0x0  nop
    ctx->pc = 0x28c9bcu;
    // NOP
label_28c9c0:
    // 0x28c9c0: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x28c9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_28c9c4:
    // 0x28c9c4: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x28c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_28c9c8:
    // 0x28c9c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c9c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c9cc:
    // 0x28c9cc: 0x0  nop
    ctx->pc = 0x28c9ccu;
    // NOP
label_28c9d0:
    // 0x28c9d0: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x28c9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_28c9d4:
    // 0x28c9d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28c9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c9d8:
    // 0x28c9d8: 0x0  nop
    ctx->pc = 0x28c9d8u;
    // NOP
label_28c9dc:
    // 0x28c9dc: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x28c9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_28c9e0:
    // 0x28c9e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28c9e4:
    // 0x28c9e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c9e8:
    // 0x28c9e8: 0x0  nop
    ctx->pc = 0x28c9e8u;
    // NOP
label_28c9ec:
    // 0x28c9ec: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x28c9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_28c9f0:
    // 0x28c9f0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x28c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_28c9f4:
    // 0x28c9f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28c9f8:
    // 0x28c9f8: 0x0  nop
    ctx->pc = 0x28c9f8u;
    // NOP
label_28c9fc:
    // 0x28c9fc: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x28c9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_28ca00:
    // 0x28ca00: 0x1000003f  b           . + 4 + (0x3F << 2)
label_28ca04:
    if (ctx->pc == 0x28CA04u) {
        ctx->pc = 0x28CA08u;
        goto label_28ca08;
    }
    ctx->pc = 0x28CA00u;
    {
        const bool branch_taken_0x28ca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ca00) {
            ctx->pc = 0x28CB00u;
            goto label_28cb00;
        }
    }
    ctx->pc = 0x28CA08u;
label_28ca08:
    // 0x28ca08: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x28ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_28ca0c:
    // 0x28ca0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ca0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ca10:
    // 0x28ca10: 0x0  nop
    ctx->pc = 0x28ca10u;
    // NOP
label_28ca14:
    // 0x28ca14: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x28ca14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_28ca18:
    // 0x28ca18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28ca18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ca1c:
    // 0x28ca1c: 0x0  nop
    ctx->pc = 0x28ca1cu;
    // NOP
label_28ca20:
    // 0x28ca20: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x28ca20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_28ca24:
    // 0x28ca24: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x28ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
label_28ca28:
    // 0x28ca28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28ca28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ca2c:
    // 0x28ca2c: 0x0  nop
    ctx->pc = 0x28ca2cu;
    // NOP
label_28ca30:
    // 0x28ca30: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x28ca30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_28ca34:
    // 0x28ca34: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x28ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
label_28ca38:
    // 0x28ca38: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28ca38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ca3c:
    // 0x28ca3c: 0x0  nop
    ctx->pc = 0x28ca3cu;
    // NOP
label_28ca40:
    // 0x28ca40: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x28ca40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_28ca44:
    // 0x28ca44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28ca44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ca48:
    // 0x28ca48: 0x0  nop
    ctx->pc = 0x28ca48u;
    // NOP
label_28ca4c:
    // 0x28ca4c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x28ca4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_28ca50:
    // 0x28ca50: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x28ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_28ca54:
    // 0x28ca54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ca54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ca58:
    // 0x28ca58: 0x0  nop
    ctx->pc = 0x28ca58u;
    // NOP
label_28ca5c:
    // 0x28ca5c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x28ca5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_28ca60:
    // 0x28ca60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28ca64:
    // 0x28ca64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ca64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ca68:
    // 0x28ca68: 0x0  nop
    ctx->pc = 0x28ca68u;
    // NOP
label_28ca6c:
    // 0x28ca6c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x28ca6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_28ca70:
    // 0x28ca70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28ca74:
    // 0x28ca74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ca74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ca78:
    // 0x28ca78: 0x0  nop
    ctx->pc = 0x28ca78u;
    // NOP
label_28ca7c:
    // 0x28ca7c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x28ca7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_28ca80:
    // 0x28ca80: 0x1000001f  b           . + 4 + (0x1F << 2)
label_28ca84:
    if (ctx->pc == 0x28CA84u) {
        ctx->pc = 0x28CA88u;
        goto label_28ca88;
    }
    ctx->pc = 0x28CA80u;
    {
        const bool branch_taken_0x28ca80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ca80) {
            ctx->pc = 0x28CB00u;
            goto label_28cb00;
        }
    }
    ctx->pc = 0x28CA88u;
label_28ca88:
    // 0x28ca88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28ca88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ca8c:
    // 0x28ca8c: 0x0  nop
    ctx->pc = 0x28ca8cu;
    // NOP
label_28ca90:
    // 0x28ca90: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x28ca90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_28ca94:
    // 0x28ca94: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x28ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_28ca98:
    // 0x28ca98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ca98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ca9c:
    // 0x28ca9c: 0x0  nop
    ctx->pc = 0x28ca9cu;
    // NOP
label_28caa0:
    // 0x28caa0: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x28caa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_28caa4:
    // 0x28caa4: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x28caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
label_28caa8:
    // 0x28caa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28caa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28caac:
    // 0x28caac: 0x0  nop
    ctx->pc = 0x28caacu;
    // NOP
label_28cab0:
    // 0x28cab0: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x28cab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_28cab4:
    // 0x28cab4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x28cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_28cab8:
    // 0x28cab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28cab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28cabc:
    // 0x28cabc: 0x0  nop
    ctx->pc = 0x28cabcu;
    // NOP
label_28cac0:
    // 0x28cac0: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x28cac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_28cac4:
    // 0x28cac4: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x28cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
label_28cac8:
    // 0x28cac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28cac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28cacc:
    // 0x28cacc: 0x0  nop
    ctx->pc = 0x28caccu;
    // NOP
label_28cad0:
    // 0x28cad0: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x28cad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_28cad4:
    // 0x28cad4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28cad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28cad8:
    // 0x28cad8: 0x0  nop
    ctx->pc = 0x28cad8u;
    // NOP
label_28cadc:
    // 0x28cadc: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x28cadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_28cae0:
    // 0x28cae0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x28cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_28cae4:
    // 0x28cae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28cae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28cae8:
    // 0x28cae8: 0x0  nop
    ctx->pc = 0x28cae8u;
    // NOP
label_28caec:
    // 0x28caec: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x28caecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_28caf0:
    // 0x28caf0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28caf4:
    // 0x28caf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28caf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28caf8:
    // 0x28caf8: 0x0  nop
    ctx->pc = 0x28caf8u;
    // NOP
label_28cafc:
    // 0x28cafc: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x28cafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_28cb00:
    // 0x28cb00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28cb00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28cb04:
    // 0x28cb04: 0x0  nop
    ctx->pc = 0x28cb04u;
    // NOP
label_28cb08:
    // 0x28cb08: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x28cb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_28cb0c:
    // 0x28cb0c: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x28cb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cb10:
    // 0x28cb10: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x28cb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_28cb14:
    // 0x28cb14: 0x10000112  b           . + 4 + (0x112 << 2)
label_28cb18:
    if (ctx->pc == 0x28CB18u) {
        ctx->pc = 0x28CB1Cu;
        goto label_28cb1c;
    }
    ctx->pc = 0x28CB14u;
    {
        const bool branch_taken_0x28cb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cb14) {
            ctx->pc = 0x28CF60u;
            goto label_28cf60;
        }
    }
    ctx->pc = 0x28CB1Cu;
label_28cb1c:
    // 0x28cb1c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x28cb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cb20:
    // 0x28cb20: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x28cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28cb24:
    // 0x28cb24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_28cb28:
    // 0x28cb28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28cb2c:
    // 0x28cb2c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28cb30:
    // 0x28cb30: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28cb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28cb34:
    // 0x28cb34: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x28cb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cb38:
    // 0x28cb38: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x28cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28cb3c:
    // 0x28cb3c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x28cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_28cb40:
    // 0x28cb40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28cb44:
    // 0x28cb44: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28cb48:
    // 0x28cb48: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28cb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28cb4c:
    // 0x28cb4c: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x28cb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cb50:
    // 0x28cb50: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x28cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28cb54:
    // 0x28cb54: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x28cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_28cb58:
    // 0x28cb58: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x28cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28cb5c:
    // 0x28cb5c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28cb60:
    // 0x28cb60: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28cb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28cb64:
    // 0x28cb64: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x28cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_28cb68:
    // 0x28cb68: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x28cb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_28cb6c:
    // 0x28cb6c: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x28cb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_28cb70:
    // 0x28cb70: 0xc052608  jal         func_149820
label_28cb74:
    if (ctx->pc == 0x28CB74u) {
        ctx->pc = 0x28CB78u;
        goto label_28cb78;
    }
    ctx->pc = 0x28CB70u;
    SET_GPR_U32(ctx, 31, 0x28CB78u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x28CB70u, 0x28CB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CB78u;
label_28cb78:
    // 0x28cb78: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x28cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cb7c:
    // 0x28cb7c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x28cb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_28cb80:
    // 0x28cb80: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x28cb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cb84:
    // 0x28cb84: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x28cb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_28cb88:
    // 0x28cb88: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x28cb88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28cb8c:
    // 0x28cb8c: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x28cb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_28cb90:
    // 0x28cb90: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x28cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_28cb94:
    // 0x28cb94: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x28cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_28cb98:
    // 0x28cb98: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x28cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_28cb9c:
    // 0x28cb9c: 0xc104cf2  jal         func_4133C8
label_28cba0:
    if (ctx->pc == 0x28CBA0u) {
        ctx->pc = 0x28CBA4u;
        goto label_28cba4;
    }
    ctx->pc = 0x28CB9Cu;
    SET_GPR_U32(ctx, 31, 0x28CBA4u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x28CB9Cu, 0x28CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CBA4u;
label_28cba4:
    // 0x28cba4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_28cba8:
    // 0x28cba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28cba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28cbac:
    // 0x28cbac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x28cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_28cbb0:
    // 0x28cbb0: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x28cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_28cbb4:
    // 0x28cbb4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28cbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_28cbb8:
    // 0x28cbb8: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x28cbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_28cbbc:
    // 0x28cbbc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28cbbcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28cbc0:
    // 0x28cbc0: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x28cbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cbc4:
    // 0x28cbc4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x28cbc4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_28cbc8:
    // 0x28cbc8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x28cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_28cbcc:
    // 0x28cbcc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_28cbd0:
    // 0x28cbd0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28cbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28cbd4:
    // 0x28cbd4: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x28cbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cbd8:
    // 0x28cbd8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x28cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28cbdc:
    // 0x28cbdc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28cbe0:
    // 0x28cbe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28cbe4:
    // 0x28cbe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28cbe8:
    // 0x28cbe8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28cbec:
    // 0x28cbec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28cbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28cbf0:
    // 0x28cbf0: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x28cbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cbf4:
    // 0x28cbf4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28cbf8:
    // 0x28cbf8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x28cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_28cbfc:
    // 0x28cbfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28cc00:
    // 0x28cc00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28cc04:
    // 0x28cc04: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28cc08:
    // 0x28cc08: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28cc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28cc0c:
    // 0x28cc0c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x28cc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cc10:
    // 0x28cc10: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x28cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28cc14:
    // 0x28cc14: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28cc18:
    // 0x28cc18: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x28cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28cc1c:
    // 0x28cc1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x28cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28cc20:
    // 0x28cc20: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28cc24:
    // 0x28cc24: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28cc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28cc28:
    // 0x28cc28: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28cc2c:
    // 0x28cc2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28cc30:
    // 0x28cc30: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x28cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_28cc34:
    // 0x28cc34: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x28cc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_28cc38:
    // 0x28cc38: 0xc052608  jal         func_149820
label_28cc3c:
    if (ctx->pc == 0x28CC3Cu) {
        ctx->pc = 0x28CC40u;
        goto label_28cc40;
    }
    ctx->pc = 0x28CC38u;
    SET_GPR_U32(ctx, 31, 0x28CC40u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x28CC38u, 0x28CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC40u;
label_28cc40:
    // 0x28cc40: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x28cc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cc44:
    // 0x28cc44: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x28cc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_28cc48:
    // 0x28cc48: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x28cc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cc4c:
    // 0x28cc4c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x28cc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_28cc50:
    // 0x28cc50: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x28cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28cc54:
    // 0x28cc54: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28cc58:
    // 0x28cc58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28cc5c:
    // 0x28cc5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28cc60:
    // 0x28cc60: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x28cc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_28cc64:
    // 0x28cc64: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x28cc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_28cc68:
    // 0x28cc68: 0xc104cf2  jal         func_4133C8
label_28cc6c:
    if (ctx->pc == 0x28CC6Cu) {
        ctx->pc = 0x28CC70u;
        goto label_28cc70;
    }
    ctx->pc = 0x28CC68u;
    SET_GPR_U32(ctx, 31, 0x28CC70u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x28CC68u, 0x28CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC70u;
label_28cc70:
    // 0x28cc70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28cc74:
    // 0x28cc74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28cc74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28cc78:
    // 0x28cc78: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x28cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28cc7c:
    // 0x28cc7c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x28cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_28cc80:
    // 0x28cc80: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_28cc84:
    // 0x28cc84: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28cc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28cc88:
    // 0x28cc88: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x28cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_28cc8c:
    // 0x28cc8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28cc8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28cc90:
    // 0x28cc90: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x28cc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cc94:
    // 0x28cc94: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x28cc94u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_28cc98:
    // 0x28cc98: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x28cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28cc9c:
    // 0x28cc9c: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x28cc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_28cca0:
    // 0x28cca0: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x28cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_28cca4:
    // 0x28cca4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28cca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28cca8:
    // 0x28cca8: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x28cca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ccac:
    // 0x28ccac: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x28ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28ccb0:
    // 0x28ccb0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28ccb4:
    // 0x28ccb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28ccb8:
    // 0x28ccb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28ccbc:
    // 0x28ccbc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28ccc0:
    // 0x28ccc0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28ccc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28ccc4:
    // 0x28ccc4: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x28ccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ccc8:
    // 0x28ccc8: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x28ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28cccc:
    // 0x28cccc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28ccd0:
    // 0x28ccd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28ccd4:
    // 0x28ccd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28ccd8:
    // 0x28ccd8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x28ccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28ccdc:
    // 0x28ccdc: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x28ccdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_28cce0:
    // 0x28cce0: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x28cce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cce4:
    // 0x28cce4: 0x26060002  addiu       $a2, $s0, 0x2
    ctx->pc = 0x28cce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28cce8:
    // 0x28cce8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x28cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_28ccec:
    // 0x28ccec: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x28ccecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_28ccf0:
    // 0x28ccf0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x28ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_28ccf4:
    // 0x28ccf4: 0x2224021  addu        $t0, $s1, $v0
    ctx->pc = 0x28ccf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28ccf8:
    // 0x28ccf8: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x28ccf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_28ccfc:
    // 0x28ccfc: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x28ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28cd00:
    // 0x28cd00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28cd04:
    // 0x28cd04: 0x2c22821  addu        $a1, $s6, $v0
    ctx->pc = 0x28cd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_28cd08:
    // 0x28cd08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28cd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28cd0c:
    // 0x28cd0c: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x28cd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_28cd10:
    // 0x28cd10: 0xc052608  jal         func_149820
label_28cd14:
    if (ctx->pc == 0x28CD14u) {
        ctx->pc = 0x28CD18u;
        goto label_28cd18;
    }
    ctx->pc = 0x28CD10u;
    SET_GPR_U32(ctx, 31, 0x28CD18u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x28CD10u, 0x28CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD18u;
label_28cd18:
    // 0x28cd18: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x28cd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cd1c:
    // 0x28cd1c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x28cd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_28cd20:
    // 0x28cd20: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x28cd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cd24:
    // 0x28cd24: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x28cd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_28cd28:
    // 0x28cd28: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x28cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28cd2c:
    // 0x28cd2c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28cd30:
    // 0x28cd30: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x28cd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28cd34:
    // 0x28cd34: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x28cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_28cd38:
    // 0x28cd38: 0x2e33821  addu        $a3, $s7, $v1
    ctx->pc = 0x28cd38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_28cd3c:
    // 0x28cd3c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x28cd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28cd40:
    // 0x28cd40: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x28cd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_28cd44:
    // 0x28cd44: 0xc104cf2  jal         func_4133C8
label_28cd48:
    if (ctx->pc == 0x28CD48u) {
        ctx->pc = 0x28CD4Cu;
        goto label_28cd4c;
    }
    ctx->pc = 0x28CD44u;
    SET_GPR_U32(ctx, 31, 0x28CD4Cu);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x28CD44u, 0x28CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD4Cu;
label_28cd4c:
    // 0x28cd4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28cd4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28cd50:
    // 0x28cd50: 0x26080002  addiu       $t0, $s0, 0x2
    ctx->pc = 0x28cd50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28cd54:
    // 0x28cd54: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x28cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_28cd58:
    // 0x28cd58: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_28cd5c:
    // 0x28cd5c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28cd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28cd60:
    // 0x28cd60: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x28cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_28cd64:
    // 0x28cd64: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28cd64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28cd68:
    // 0x28cd68: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x28cd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cd6c:
    // 0x28cd6c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x28cd6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_28cd70:
    // 0x28cd70: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x28cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28cd74:
    // 0x28cd74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28cd78:
    // 0x28cd78: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_28cd7c:
    // 0x28cd7c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28cd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28cd80:
    // 0x28cd80: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x28cd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cd84:
    // 0x28cd84: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x28cd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cd88:
    // 0x28cd88: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x28cd88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28cd8c:
    // 0x28cd8c: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_28cd90:
    if (ctx->pc == 0x28CD90u) {
        ctx->pc = 0x28CD94u;
        goto label_28cd94;
    }
    ctx->pc = 0x28CD8Cu;
    {
        const bool branch_taken_0x28cd8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28cd8c) {
            ctx->pc = 0x28CE14u;
            goto label_28ce14;
        }
    }
    ctx->pc = 0x28CD94u;
label_28cd94:
    // 0x28cd94: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x28cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28cd98:
    // 0x28cd98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_28cd9c:
    // 0x28cd9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28cda0:
    // 0x28cda0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28cda4:
    // 0x28cda4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28cda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cda8:
    // 0x28cda8: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x28cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
label_28cdac:
    // 0x28cdac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28cdacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28cdb0:
    // 0x28cdb0: 0x0  nop
    ctx->pc = 0x28cdb0u;
    // NOP
label_28cdb4:
    // 0x28cdb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28cdb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28cdb8:
    // 0x28cdb8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28cdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28cdbc:
    // 0x28cdbc: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x28cdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28cdc0:
    // 0x28cdc0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x28cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_28cdc4:
    // 0x28cdc4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_28cdc8:
    // 0x28cdc8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x28cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28cdcc:
    // 0x28cdcc: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x28cdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_28cdd0:
    // 0x28cdd0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x28cdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cdd4:
    // 0x28cdd4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x28cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_28cdd8:
    // 0x28cdd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28cdd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28cddc:
    // 0x28cddc: 0x0  nop
    ctx->pc = 0x28cddcu;
    // NOP
label_28cde0:
    // 0x28cde0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28cde0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28cde4:
    // 0x28cde4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x28cde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_28cde8:
    // 0x28cde8: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x28cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28cdec:
    // 0x28cdec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28cdf0:
    // 0x28cdf0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x28cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28cdf4:
    // 0x28cdf4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x28cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28cdf8:
    // 0x28cdf8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x28cdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28cdfc:
    // 0x28cdfc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x28cdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ce00:
    // 0x28ce00: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x28ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_28ce04:
    // 0x28ce04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ce04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ce08:
    // 0x28ce08: 0x0  nop
    ctx->pc = 0x28ce08u;
    // NOP
label_28ce0c:
    // 0x28ce0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28ce0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28ce10:
    // 0x28ce10: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x28ce10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_28ce14:
    // 0x28ce14: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x28ce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ce18:
    // 0x28ce18: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x28ce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ce1c:
    // 0x28ce1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28ce1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28ce20:
    // 0x28ce20: 0x45000048  bc1f        . + 4 + (0x48 << 2)
label_28ce24:
    if (ctx->pc == 0x28CE24u) {
        ctx->pc = 0x28CE28u;
        goto label_28ce28;
    }
    ctx->pc = 0x28CE20u;
    {
        const bool branch_taken_0x28ce20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28ce20) {
            ctx->pc = 0x28CF44u;
            goto label_28cf44;
        }
    }
    ctx->pc = 0x28CE28u;
label_28ce28:
    // 0x28ce28: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x28ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_28ce2c:
    // 0x28ce2c: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x28ce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28ce30:
    // 0x28ce30: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x28ce30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_28ce34:
    // 0x28ce34: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x28ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_28ce38:
    // 0x28ce38: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x28ce38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_28ce3c:
    // 0x28ce3c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x28ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28ce40:
    // 0x28ce40: 0x3088ffff  andi        $t0, $a0, 0xFFFF
    ctx->pc = 0x28ce40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_28ce44:
    // 0x28ce44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28ce44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ce48:
    // 0x28ce48: 0xc0e3356  jal         func_38CD58
label_28ce4c:
    if (ctx->pc == 0x28CE4Cu) {
        ctx->pc = 0x28CE50u;
        goto label_28ce50;
    }
    ctx->pc = 0x28CE48u;
    SET_GPR_U32(ctx, 31, 0x28CE50u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x28CE48u, 0x28CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE50u;
label_28ce50:
    // 0x28ce50: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x28ce50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_28ce54:
    // 0x28ce54: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x28ce54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_28ce58:
    // 0x28ce58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28ce58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ce5c:
    // 0x28ce5c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28ce5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28ce60:
    // 0x28ce60: 0xc0e335c  jal         func_38CD70
label_28ce64:
    if (ctx->pc == 0x28CE64u) {
        ctx->pc = 0x28CE68u;
        goto label_28ce68;
    }
    ctx->pc = 0x28CE60u;
    SET_GPR_U32(ctx, 31, 0x28CE68u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x28CE60u, 0x28CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE68u;
label_28ce68:
    // 0x28ce68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28ce68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28ce6c:
    // 0x28ce6c: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x28ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_28ce70:
    // 0x28ce70: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x28ce70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28ce74:
    // 0x28ce74: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x28ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_28ce78:
    // 0x28ce78: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x28ce78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28ce7c:
    // 0x28ce7c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x28ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_28ce80:
    // 0x28ce80: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x28ce80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28ce84:
    // 0x28ce84: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28ce88:
    // 0x28ce88: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x28ce88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28ce8c:
    // 0x28ce8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28ce8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ce90:
    // 0x28ce90: 0xc0e3356  jal         func_38CD58
label_28ce94:
    if (ctx->pc == 0x28CE94u) {
        ctx->pc = 0x28CE98u;
        goto label_28ce98;
    }
    ctx->pc = 0x28CE90u;
    SET_GPR_U32(ctx, 31, 0x28CE98u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x28CE90u, 0x28CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE98u;
label_28ce98:
    // 0x28ce98: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x28ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_28ce9c:
    // 0x28ce9c: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x28ce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_28cea0:
    // 0x28cea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28cea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28cea4:
    // 0x28cea4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28cea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28cea8:
    // 0x28cea8: 0xc0e335c  jal         func_38CD70
label_28ceac:
    if (ctx->pc == 0x28CEACu) {
        ctx->pc = 0x28CEB0u;
        goto label_28ceb0;
    }
    ctx->pc = 0x28CEA8u;
    SET_GPR_U32(ctx, 31, 0x28CEB0u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x28CEA8u, 0x28CEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CEB0u;
label_28ceb0:
    // 0x28ceb0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28ceb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28ceb4:
    // 0x28ceb4: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x28ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_28ceb8:
    // 0x28ceb8: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x28ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28cebc:
    // 0x28cebc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28cec0:
    // 0x28cec0: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x28cec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28cec4:
    // 0x28cec4: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x28cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_28cec8:
    // 0x28cec8: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x28cec8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_28cecc:
    // 0x28cecc: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x28ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28ced0:
    // 0x28ced0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x28ced0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28ced4:
    // 0x28ced4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28ced4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ced8:
    // 0x28ced8: 0xc0e3356  jal         func_38CD58
label_28cedc:
    if (ctx->pc == 0x28CEDCu) {
        ctx->pc = 0x28CEE0u;
        goto label_28cee0;
    }
    ctx->pc = 0x28CED8u;
    SET_GPR_U32(ctx, 31, 0x28CEE0u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x28CED8u, 0x28CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CEE0u;
label_28cee0:
    // 0x28cee0: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x28cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_28cee4:
    // 0x28cee4: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x28cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_28cee8:
    // 0x28cee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28cee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ceec:
    // 0x28ceec: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28ceecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28cef0:
    // 0x28cef0: 0xc0e335c  jal         func_38CD70
label_28cef4:
    if (ctx->pc == 0x28CEF4u) {
        ctx->pc = 0x28CEF8u;
        goto label_28cef8;
    }
    ctx->pc = 0x28CEF0u;
    SET_GPR_U32(ctx, 31, 0x28CEF8u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x28CEF0u, 0x28CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CEF8u;
label_28cef8:
    // 0x28cef8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28cef8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28cefc:
    // 0x28cefc: 0x1330c0  sll         $a2, $s3, 3
    ctx->pc = 0x28cefcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_28cf00:
    // 0x28cf00: 0x2a62821  addu        $a1, $s5, $a2
    ctx->pc = 0x28cf00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_28cf04:
    // 0x28cf04: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x28cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_28cf08:
    // 0x28cf08: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x28cf08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28cf0c:
    // 0x28cf0c: 0x26020005  addiu       $v0, $s0, 0x5
    ctx->pc = 0x28cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_28cf10:
    // 0x28cf10: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x28cf10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28cf14:
    // 0x28cf14: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x28cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28cf18:
    // 0x28cf18: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x28cf18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28cf1c:
    // 0x28cf1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28cf20:
    // 0x28cf20: 0xc0e3356  jal         func_38CD58
label_28cf24:
    if (ctx->pc == 0x28CF24u) {
        ctx->pc = 0x28CF28u;
        goto label_28cf28;
    }
    ctx->pc = 0x28CF20u;
    SET_GPR_U32(ctx, 31, 0x28CF28u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x28CF20u, 0x28CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF28u;
label_28cf28:
    // 0x28cf28: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x28cf28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_28cf2c:
    // 0x28cf2c: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x28cf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_28cf30:
    // 0x28cf30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28cf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28cf34:
    // 0x28cf34: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28cf34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28cf38:
    // 0x28cf38: 0xc0e335c  jal         func_38CD70
label_28cf3c:
    if (ctx->pc == 0x28CF3Cu) {
        ctx->pc = 0x28CF40u;
        goto label_28cf40;
    }
    ctx->pc = 0x28CF38u;
    SET_GPR_U32(ctx, 31, 0x28CF40u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x28CF38u, 0x28CF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF40u;
label_28cf40:
    // 0x28cf40: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28cf40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28cf44:
    // 0x28cf44: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x28cf44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_28cf48:
    // 0x28cf48: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x28cf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cf4c:
    // 0x28cf4c: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x28cf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_28cf50:
    // 0x28cf50: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28cf50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28cf54:
    // 0x28cf54: 0x0  nop
    ctx->pc = 0x28cf54u;
    // NOP
label_28cf58:
    // 0x28cf58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28cf58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28cf5c:
    // 0x28cf5c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x28cf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_28cf60:
    // 0x28cf60: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x28cf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28cf64:
    // 0x28cf64: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x28cf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cf68:
    // 0x28cf68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28cf68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28cf6c:
    // 0x28cf6c: 0x4501feeb  bc1t        . + 4 + (-0x115 << 2)
label_28cf70:
    if (ctx->pc == 0x28CF70u) {
        ctx->pc = 0x28CF74u;
        goto label_28cf74;
    }
    ctx->pc = 0x28CF6Cu;
    {
        const bool branch_taken_0x28cf6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28cf6c) {
            ctx->pc = 0x28CB1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28cb1c;
        }
    }
    ctx->pc = 0x28CF74u;
label_28cf74:
    // 0x28cf74: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x28cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cf78:
    // 0x28cf78: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x28cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28cf7c:
    // 0x28cf7c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x28cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_28cf80:
    // 0x28cf80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x28cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_28cf84:
    // 0x28cf84: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x28cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28cf88:
    // 0x28cf88: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x28cf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_28cf8c:
    // 0x28cf8c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x28cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_28cf90:
    // 0x28cf90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28cf90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28cf94:
    // 0x28cf94: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x28cf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cf98:
    // 0x28cf98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28cf98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28cf9c:
    // 0x28cf9c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x28cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28cfa0:
    // 0x28cfa0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_28cfa4:
    // 0x28cfa4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28cfa8:
    // 0x28cfa8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28cfac:
    // 0x28cfac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28cfacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28cfb0:
    // 0x28cfb0: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x28cfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28cfb4:
    // 0x28cfb4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x28cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28cfb8:
    // 0x28cfb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_28cfbc:
    // 0x28cfbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28cfc0:
    // 0x28cfc0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28cfc4:
    // 0x28cfc4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28cfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28cfc8:
    // 0x28cfc8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x28cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_28cfcc:
    // 0x28cfcc: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x28cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_28cfd0:
    // 0x28cfd0: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x28cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_28cfd4:
    // 0x28cfd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28cfd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cfd8:
    // 0x28cfd8: 0xc052608  jal         func_149820
label_28cfdc:
    if (ctx->pc == 0x28CFDCu) {
        ctx->pc = 0x28CFE0u;
        goto label_28cfe0;
    }
    ctx->pc = 0x28CFD8u;
    SET_GPR_U32(ctx, 31, 0x28CFE0u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x28CFD8u, 0x28CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CFE0u;
label_28cfe0:
    // 0x28cfe0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28cfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cfe4:
    // 0x28cfe4: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x28cfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_28cfe8:
    // 0x28cfe8: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x28cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_28cfec:
    // 0x28cfec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28cff0:
    // 0x28cff0: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x28cff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_28cff4:
    // 0x28cff4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x28cff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_28cff8:
    // 0x28cff8: 0xc041d58  jal         func_107560
label_28cffc:
    if (ctx->pc == 0x28CFFCu) {
        ctx->pc = 0x28D000u;
        goto label_28d000;
    }
    ctx->pc = 0x28CFF8u;
    SET_GPR_U32(ctx, 31, 0x28D000u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x28CFF8u, 0x28D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D000u;
label_28d000:
    // 0x28d000: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d004:
    // 0x28d004: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x28d004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_28d008:
    // 0x28d008: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28d008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_28d00c:
    // 0x28d00c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28d00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28d010:
    // 0x28d010: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28d010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28d014:
    // 0x28d014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d018:
    // 0x28d018: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x28d018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_28d01c:
    // 0x28d01c: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x28d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_28d020:
    // 0x28d020: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x28d020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_28d024:
    // 0x28d024: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x28d024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d028:
    // 0x28d028: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x28d028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28d02c:
    // 0x28d02c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28d030:
    // 0x28d030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28d034:
    // 0x28d034: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x28d034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d038:
    // 0x28d038: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x28d038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_28d03c:
    // 0x28d03c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x28d03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_28d040:
    // 0x28d040: 0x3c064100  lui         $a2, 0x4100
    ctx->pc = 0x28d040u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16640 << 16));
label_28d044:
    // 0x28d044: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x28d044u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28d048:
    // 0x28d048: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x28d048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d04c:
    // 0x28d04c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d04cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28d050:
    // 0x28d050: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28d050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28d054:
    // 0x28d054: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x28d054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_28d058:
    // 0x28d058: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x28d058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28d05c:
    // 0x28d05c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x28d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28d060:
    // 0x28d060: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28d060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28d064:
    // 0x28d064: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28d064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28d068:
    // 0x28d068: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x28d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d06c:
    // 0x28d06c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x28d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28d070:
    // 0x28d070: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28d070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28d074:
    // 0x28d074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28d078:
    // 0x28d078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d07c:
    // 0x28d07c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28d080:
    // 0x28d080: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28d080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28d084:
    // 0x28d084: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28d084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28d088:
    // 0x28d088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d08c:
    // 0x28d08c: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x28d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_28d090:
    // 0x28d090: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x28d090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_28d094:
    // 0x28d094: 0xc052608  jal         func_149820
label_28d098:
    if (ctx->pc == 0x28D098u) {
        ctx->pc = 0x28D09Cu;
        goto label_28d09c;
    }
    ctx->pc = 0x28D094u;
    SET_GPR_U32(ctx, 31, 0x28D09Cu);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x28D094u, 0x28D09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D09Cu;
label_28d09c:
    // 0x28d09c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x28d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28d0a0:
    // 0x28d0a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28d0a4:
    // 0x28d0a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28d0a8:
    // 0x28d0a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d0ac:
    // 0x28d0ac: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x28d0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_28d0b0:
    // 0x28d0b0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x28d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_28d0b4:
    // 0x28d0b4: 0xc041d58  jal         func_107560
label_28d0b8:
    if (ctx->pc == 0x28D0B8u) {
        ctx->pc = 0x28D0BCu;
        goto label_28d0bc;
    }
    ctx->pc = 0x28D0B4u;
    SET_GPR_U32(ctx, 31, 0x28D0BCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x28D0B4u, 0x28D0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D0BCu;
label_28d0bc:
    // 0x28d0bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d0bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d0c0:
    // 0x28d0c0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28d0c4:
    // 0x28d0c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28d0c8:
    // 0x28d0c8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_28d0cc:
    // 0x28d0cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28d0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28d0d0:
    // 0x28d0d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d0d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d0d4:
    // 0x28d0d4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28d0d8:
    // 0x28d0d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28d0dc:
    // 0x28d0dc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_28d0e0:
    // 0x28d0e0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28d0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28d0e4:
    // 0x28d0e4: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x28d0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d0e8:
    // 0x28d0e8: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x28d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28d0ec:
    // 0x28d0ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28d0f0:
    // 0x28d0f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28d0f4:
    // 0x28d0f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d0f8:
    // 0x28d0f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28d0fc:
    // 0x28d0fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28d0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28d100:
    // 0x28d100: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x28d100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_28d104:
    // 0x28d104: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28d104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28d108:
    // 0x28d108: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x28d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d10c:
    // 0x28d10c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28d110:
    // 0x28d110: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x28d110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28d114:
    // 0x28d114: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28d114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28d118:
    // 0x28d118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28d11c:
    // 0x28d11c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d120:
    // 0x28d120: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28d120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28d124:
    // 0x28d124: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28d124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28d128:
    // 0x28d128: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x28d128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d12c:
    // 0x28d12c: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x28d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28d130:
    // 0x28d130: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28d130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28d134:
    // 0x28d134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28d138:
    // 0x28d138: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d13c:
    // 0x28d13c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x28d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28d140:
    // 0x28d140: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x28d140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_28d144:
    // 0x28d144: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x28d144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28d148:
    // 0x28d148: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x28d148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_28d14c:
    // 0x28d14c: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x28d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_28d150:
    // 0x28d150: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x28d150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_28d154:
    // 0x28d154: 0xc052608  jal         func_149820
label_28d158:
    if (ctx->pc == 0x28D158u) {
        ctx->pc = 0x28D15Cu;
        goto label_28d15c;
    }
    ctx->pc = 0x28D154u;
    SET_GPR_U32(ctx, 31, 0x28D15Cu);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x28D154u, 0x28D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D15Cu;
label_28d15c:
    // 0x28d15c: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x28d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28d160:
    // 0x28d160: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x28d160u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_28d164:
    // 0x28d164: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x28d164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_28d168:
    // 0x28d168: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d16c:
    // 0x28d16c: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x28d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_28d170:
    // 0x28d170: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x28d170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_28d174:
    // 0x28d174: 0xc041d58  jal         func_107560
label_28d178:
    if (ctx->pc == 0x28D178u) {
        ctx->pc = 0x28D17Cu;
        goto label_28d17c;
    }
    ctx->pc = 0x28D174u;
    SET_GPR_U32(ctx, 31, 0x28D17Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x28D174u, 0x28D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D17Cu;
label_28d17c:
    // 0x28d17c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28d180:
    // 0x28d180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d184:
    // 0x28d184: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x28d184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28d188:
    // 0x28d188: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x28d188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_28d18c:
    // 0x28d18c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_28d190:
    // 0x28d190: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28d190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28d194:
    // 0x28d194: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d198:
    // 0x28d198: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x28d198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28d19c:
    // 0x28d19c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28d1a0:
    // 0x28d1a0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_28d1a4:
    // 0x28d1a4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28d1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28d1a8:
    // 0x28d1a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d1a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d1ac:
    // 0x28d1ac: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x28d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_28d1b0:
    // 0x28d1b0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28d1b4:
    // 0x28d1b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28d1b8:
    // 0x28d1b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d1bc:
    // 0x28d1bc: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x28d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28d1c0:
    // 0x28d1c0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x28d1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_28d1c4:
    // 0x28d1c4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x28d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_28d1c8:
    // 0x28d1c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28d1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28d1cc:
    // 0x28d1cc: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x28d1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d1d0:
    // 0x28d1d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d1d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28d1d4:
    // 0x28d1d4: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x28d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_28d1d8:
    // 0x28d1d8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28d1dc:
    // 0x28d1dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28d1e0:
    // 0x28d1e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d1e4:
    // 0x28d1e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28d1e8:
    // 0x28d1e8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28d1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28d1ec:
    // 0x28d1ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d1ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d1f0:
    // 0x28d1f0: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x28d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_28d1f4:
    // 0x28d1f4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x28d1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_28d1f8:
    // 0x28d1f8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x28d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_28d1fc:
    // 0x28d1fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x28d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d200:
    // 0x28d200: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x28d200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_28d204:
    // 0x28d204: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28d204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_28d208:
    // 0x28d208: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x28d208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_28d20c:
    // 0x28d20c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d210:
    // 0x28d210: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x28d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_28d214:
    // 0x28d214: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x28d214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_28d218:
    // 0x28d218: 0xc052608  jal         func_149820
label_28d21c:
    if (ctx->pc == 0x28D21Cu) {
        ctx->pc = 0x28D220u;
        goto label_28d220;
    }
    ctx->pc = 0x28D218u;
    SET_GPR_U32(ctx, 31, 0x28D220u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x28D218u, 0x28D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D220u;
label_28d220:
    // 0x28d220: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x28d220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_28d224:
    // 0x28d224: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28d224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28d228:
    // 0x28d228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28d22c:
    // 0x28d22c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28d230:
    // 0x28d230: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x28d230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_28d234:
    // 0x28d234: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x28d234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_28d238:
    // 0x28d238: 0xc041d58  jal         func_107560
label_28d23c:
    if (ctx->pc == 0x28D23Cu) {
        ctx->pc = 0x28D240u;
        goto label_28d240;
    }
    ctx->pc = 0x28D238u;
    SET_GPR_U32(ctx, 31, 0x28D240u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x28D238u, 0x28D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D240u;
label_28d240:
    // 0x28d240: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28d240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_28d244:
    // 0x28d244: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d248:
    // 0x28d248: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x28d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_28d24c:
    // 0x28d24c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28d250:
    // 0x28d250: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28d250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_28d254:
    // 0x28d254: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28d254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28d258:
    // 0x28d258: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28d258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28d25c:
    // 0x28d25c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d260:
    // 0x28d260: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x28d260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_28d264:
    // 0x28d264: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x28d264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_28d268:
    // 0x28d268: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28d268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_28d26c:
    // 0x28d26c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28d26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28d270:
    // 0x28d270: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x28d270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_28d274:
    // 0x28d274: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x28d274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28d278:
    // 0x28d278: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x28d278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_28d27c:
    // 0x28d27c: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x28d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28d280:
    // 0x28d280: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x28d280u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28d284:
    // 0x28d284: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28d284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28d288:
    // 0x28d288: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x28d288u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28d28c:
    // 0x28d28c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d290:
    // 0x28d290: 0xc0e3356  jal         func_38CD58
label_28d294:
    if (ctx->pc == 0x28D294u) {
        ctx->pc = 0x28D298u;
        goto label_28d298;
    }
    ctx->pc = 0x28D290u;
    SET_GPR_U32(ctx, 31, 0x28D298u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x28D290u, 0x28D298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D298u;
label_28d298:
    // 0x28d298: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x28d298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_28d29c:
    // 0x28d29c: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x28d29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28d2a0:
    // 0x28d2a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d2a4:
    // 0x28d2a4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28d2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28d2a8:
    // 0x28d2a8: 0xc0e335c  jal         func_38CD70
label_28d2ac:
    if (ctx->pc == 0x28D2ACu) {
        ctx->pc = 0x28D2B0u;
        goto label_28d2b0;
    }
    ctx->pc = 0x28D2A8u;
    SET_GPR_U32(ctx, 31, 0x28D2B0u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x28D2A8u, 0x28D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2B0u;
label_28d2b0:
    // 0x28d2b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28d2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d2b4:
    // 0x28d2b4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x28d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28d2b8:
    // 0x28d2b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28d2b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d2bc:
    // 0x28d2bc: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x28d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_28d2c0:
    // 0x28d2c0: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x28d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_28d2c4:
    // 0x28d2c4: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x28d2c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_28d2c8:
    // 0x28d2c8: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x28d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_28d2cc:
    // 0x28d2cc: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x28d2ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_28d2d0:
    // 0x28d2d0: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x28d2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28d2d4:
    // 0x28d2d4: 0x30a8ffff  andi        $t0, $a1, 0xFFFF
    ctx->pc = 0x28d2d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_28d2d8:
    // 0x28d2d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d2dc:
    // 0x28d2dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28d2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d2e0:
    // 0x28d2e0: 0xc0e3356  jal         func_38CD58
label_28d2e4:
    if (ctx->pc == 0x28D2E4u) {
        ctx->pc = 0x28D2E8u;
        goto label_28d2e8;
    }
    ctx->pc = 0x28D2E0u;
    SET_GPR_U32(ctx, 31, 0x28D2E8u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x28D2E0u, 0x28D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2E8u;
label_28d2e8:
    // 0x28d2e8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x28d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_28d2ec:
    // 0x28d2ec: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x28d2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28d2f0:
    // 0x28d2f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d2f4:
    // 0x28d2f4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28d2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28d2f8:
    // 0x28d2f8: 0xc0e335c  jal         func_38CD70
label_28d2fc:
    if (ctx->pc == 0x28D2FCu) {
        ctx->pc = 0x28D300u;
        goto label_28d300;
    }
    ctx->pc = 0x28D2F8u;
    SET_GPR_U32(ctx, 31, 0x28D300u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x28D2F8u, 0x28D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D300u;
label_28d300:
    // 0x28d300: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x28d300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28d304:
    // 0x28d304: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28d304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d308:
    // 0x28d308: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x28d308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_28d30c:
    // 0x28d30c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28d30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d310:
    // 0x28d310: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x28d310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_28d314:
    // 0x28d314: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28d314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28d318:
    // 0x28d318: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x28d318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_28d31c:
    // 0x28d31c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x28d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_28d320:
    // 0x28d320: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x28d320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_28d324:
    // 0x28d324: 0x1440fd6a  bnez        $v0, . + 4 + (-0x296 << 2)
label_28d328:
    if (ctx->pc == 0x28D328u) {
        ctx->pc = 0x28D32Cu;
        goto label_28d32c;
    }
    ctx->pc = 0x28D324u;
    {
        const bool branch_taken_0x28d324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d324) {
            ctx->pc = 0x28C8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c8d0;
        }
    }
    ctx->pc = 0x28D32Cu;
label_28d32c:
    // 0x28d32c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x28d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_28d330:
    // 0x28d330: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x28d330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_28d334:
    // 0x28d334: 0xc0e2ab0  jal         func_38AAC0
label_28d338:
    if (ctx->pc == 0x28D338u) {
        ctx->pc = 0x28D33Cu;
        goto label_28d33c;
    }
    ctx->pc = 0x28D334u;
    SET_GPR_U32(ctx, 31, 0x28D33Cu);
    ctx->pc = 0x38AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AAC0u, 0x28D334u, 0x28D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D33Cu;
label_28d33c:
    // 0x28d33c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x28d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_28d340:
    // 0x28d340: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x28d340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_28d344:
    // 0x28d344: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x28d344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_28d348:
    // 0x28d348: 0xc046270  jal         func_1189C0
label_28d34c:
    if (ctx->pc == 0x28D34Cu) {
        ctx->pc = 0x28D350u;
        goto label_28d350;
    }
    ctx->pc = 0x28D348u;
    SET_GPR_U32(ctx, 31, 0x28D350u);
    ctx->pc = 0x1189C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C0u, 0x28D348u, 0x28D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D350u;
label_28d350:
    // 0x28d350: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x28d350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_28d354:
    // 0x28d354: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x28d354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
label_28d358:
    // 0x28d358: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x28d358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_28d35c:
    // 0x28d35c: 0xafb20110  sw          $s2, 0x110($sp)
    ctx->pc = 0x28d35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 18));
label_28d360:
    // 0x28d360: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x28d360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_28d364:
    // 0x28d364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28d364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d368:
    // 0x28d368: 0xc0e751e  jal         func_39D478
label_28d36c:
    if (ctx->pc == 0x28D36Cu) {
        ctx->pc = 0x28D370u;
        goto label_28d370;
    }
    ctx->pc = 0x28D368u;
    SET_GPR_U32(ctx, 31, 0x28D370u);
    ctx->pc = 0x39D478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D478u, 0x28D368u, 0x28D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D370u;
label_28d370:
    // 0x28d370: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28d370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d374:
    // 0x28d374: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x28d374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_28d378:
    // 0x28d378: 0xc0e3414  jal         func_38D050
label_28d37c:
    if (ctx->pc == 0x28D37Cu) {
        ctx->pc = 0x28D380u;
        goto label_28d380;
    }
    ctx->pc = 0x28D378u;
    SET_GPR_U32(ctx, 31, 0x28D380u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x28D378u, 0x28D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D380u;
label_28d380:
    // 0x28d380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d384:
    // 0x28d384: 0xc0e2d08  jal         func_38B420
label_28d388:
    if (ctx->pc == 0x28D388u) {
        ctx->pc = 0x28D38Cu;
        goto label_28d38c;
    }
    ctx->pc = 0x28D384u;
    SET_GPR_U32(ctx, 31, 0x28D38Cu);
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x28D384u, 0x28D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D38Cu;
label_28d38c:
    // 0x28d38c: 0xc0e2094  jal         func_388250
label_28d390:
    if (ctx->pc == 0x28D390u) {
        ctx->pc = 0x28D394u;
        goto label_28d394;
    }
    ctx->pc = 0x28D38Cu;
    SET_GPR_U32(ctx, 31, 0x28D394u);
    ctx->pc = 0x388250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388250u, 0x28D38Cu, 0x28D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D394u;
label_28d394:
    // 0x28d394: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28d394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d398:
    // 0x28d398: 0xafa5010c  sw          $a1, 0x10C($sp)
    ctx->pc = 0x28d398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 5));
label_28d39c:
    // 0x28d39c: 0xc1067b0  jal         func_419EC0
label_28d3a0:
    if (ctx->pc == 0x28D3A0u) {
        ctx->pc = 0x28D3A4u;
        goto label_28d3a4;
    }
    ctx->pc = 0x28D39Cu;
    SET_GPR_U32(ctx, 31, 0x28D3A4u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x28D39Cu, 0x28D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3A4u;
label_28d3a4:
    // 0x28d3a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28d3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d3a8:
    // 0x28d3a8: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x28d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
label_28d3ac:
    // 0x28d3ac: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x28d3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_28d3b0:
    // 0x28d3b0: 0xc106638  jal         func_4198E0
label_28d3b4:
    if (ctx->pc == 0x28D3B4u) {
        ctx->pc = 0x28D3B8u;
        goto label_28d3b8;
    }
    ctx->pc = 0x28D3B0u;
    SET_GPR_U32(ctx, 31, 0x28D3B8u);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x28D3B0u, 0x28D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3B8u;
label_28d3b8:
    // 0x28d3b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28d3b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d3bc:
    // 0x28d3bc: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x28d3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_28d3c0:
    // 0x28d3c0: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x28d3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_28d3c4:
    // 0x28d3c4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x28d3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28d3c8:
    // 0x28d3c8: 0xc0e2686  jal         func_389A18
label_28d3cc:
    if (ctx->pc == 0x28D3CCu) {
        ctx->pc = 0x28D3D0u;
        goto label_28d3d0;
    }
    ctx->pc = 0x28D3C8u;
    SET_GPR_U32(ctx, 31, 0x28D3D0u);
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x28D3C8u, 0x28D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3D0u;
label_28d3d0:
    // 0x28d3d0: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x28d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_28d3d4:
    // 0x28d3d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28d3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d3d8:
    // 0x28d3d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28d3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d3dc:
    // 0x28d3dc: 0xc0e2836  jal         func_38A0D8
label_28d3e0:
    if (ctx->pc == 0x28D3E0u) {
        ctx->pc = 0x28D3E4u;
        goto label_28d3e4;
    }
    ctx->pc = 0x28D3DCu;
    SET_GPR_U32(ctx, 31, 0x28D3E4u);
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x28D3DCu, 0x28D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3E4u;
label_28d3e4:
    // 0x28d3e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28d3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d3e8:
    // 0x28d3e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d3ec:
    // 0x28d3ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28d3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d3f0:
    // 0x28d3f0: 0xc0c5380  jal         func_314E00
label_28d3f4:
    if (ctx->pc == 0x28D3F4u) {
        ctx->pc = 0x28D3F8u;
        goto label_28d3f8;
    }
    ctx->pc = 0x28D3F0u;
    SET_GPR_U32(ctx, 31, 0x28D3F8u);
    ctx->pc = 0x314E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314E00u, 0x28D3F0u, 0x28D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3F8u;
label_28d3f8:
    // 0x28d3f8: 0xc0e2744  jal         func_389D10
label_28d3fc:
    if (ctx->pc == 0x28D3FCu) {
        ctx->pc = 0x28D400u;
        goto label_28d400;
    }
    ctx->pc = 0x28D3F8u;
    SET_GPR_U32(ctx, 31, 0x28D400u);
    ctx->pc = 0x389D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389D10u, 0x28D3F8u, 0x28D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D400u;
label_28d400:
    // 0x28d400: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28d400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d404:
    // 0x28d404: 0xafb30108  sw          $s3, 0x108($sp)
    ctx->pc = 0x28d404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 19));
label_28d408:
    // 0x28d408: 0xc1067b0  jal         func_419EC0
label_28d40c:
    if (ctx->pc == 0x28D40Cu) {
        ctx->pc = 0x28D410u;
        goto label_28d410;
    }
    ctx->pc = 0x28D408u;
    SET_GPR_U32(ctx, 31, 0x28D410u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x28D408u, 0x28D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D410u;
label_28d410:
    // 0x28d410: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x28d410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_28d414:
    // 0x28d414: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x28d414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_28d418:
    // 0x28d418: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28d418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28d41c:
    // 0x28d41c: 0xc106638  jal         func_4198E0
label_28d420:
    if (ctx->pc == 0x28D420u) {
        ctx->pc = 0x28D424u;
        goto label_28d424;
    }
    ctx->pc = 0x28D41Cu;
    SET_GPR_U32(ctx, 31, 0x28D424u);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x28D41Cu, 0x28D424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D424u;
label_28d424:
    // 0x28d424: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x28d424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_28d428:
    // 0x28d428: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x28d428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28d42c:
    // 0x28d42c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_28d430:
    if (ctx->pc == 0x28D430u) {
        ctx->pc = 0x28D434u;
        goto label_28d434;
    }
    ctx->pc = 0x28D42Cu;
    {
        const bool branch_taken_0x28d42c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d42c) {
            ctx->pc = 0x28D454u;
            goto label_28d454;
        }
    }
    ctx->pc = 0x28D434u;
label_28d434:
    // 0x28d434: 0xc03821  addu        $a3, $a2, $zero
    ctx->pc = 0x28d434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
label_28d438:
    // 0x28d438: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x28d438u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_28d43c:
    // 0x28d43c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28d43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_28d440:
    // 0x28d440: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28d440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_28d444:
    // 0x28d444: 0x0  nop
    ctx->pc = 0x28d444u;
    // NOP
label_28d448:
    // 0x28d448: 0x0  nop
    ctx->pc = 0x28d448u;
    // NOP
label_28d44c:
    // 0x28d44c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_28d450:
    if (ctx->pc == 0x28D450u) {
        ctx->pc = 0x28D454u;
        goto label_28d454;
    }
    ctx->pc = 0x28D44Cu;
    {
        const bool branch_taken_0x28d44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d44c) {
            ctx->pc = 0x28D438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d438;
        }
    }
    ctx->pc = 0x28D454u;
label_28d454:
    // 0x28d454: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x28d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_28d458:
    // 0x28d458: 0x8c480038  lw          $t0, 0x38($v0)
    ctx->pc = 0x28d458u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_28d45c:
    // 0x28d45c: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x28d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_28d460:
    // 0x28d460: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x28d460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_28d464:
    // 0x28d464: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x28d464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28d468:
    // 0x28d468: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x28d468u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_28d46c:
    // 0x28d46c: 0x1010  mfhi        $v0
    ctx->pc = 0x28d46cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_28d470:
    // 0x28d470: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28d474:
    if (ctx->pc == 0x28D474u) {
        ctx->pc = 0x28D478u;
        goto label_28d478;
    }
    ctx->pc = 0x28D470u;
    {
        const bool branch_taken_0x28d470 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28d470) {
            ctx->pc = 0x28D48Cu;
            goto label_28d48c;
        }
    }
    ctx->pc = 0x28D478u;
label_28d478:
    // 0x28d478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d47c:
    // 0x28d47c: 0x0  nop
    ctx->pc = 0x28d47cu;
    // NOP
label_28d480:
    // 0x28d480: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28d480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28d484:
    // 0x28d484: 0x10000008  b           . + 4 + (0x8 << 2)
label_28d488:
    if (ctx->pc == 0x28D488u) {
        ctx->pc = 0x28D48Cu;
        goto label_28d48c;
    }
    ctx->pc = 0x28D484u;
    {
        const bool branch_taken_0x28d484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d484) {
            ctx->pc = 0x28D4A8u;
            goto label_28d4a8;
        }
    }
    ctx->pc = 0x28D48Cu;
label_28d48c:
    // 0x28d48c: 0x29842  srl         $s3, $v0, 1
    ctx->pc = 0x28d48cu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_28d490:
    // 0x28d490: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28d490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28d494:
    // 0x28d494: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x28d494u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_28d498:
    // 0x28d498: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28d498u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d49c:
    // 0x28d49c: 0x0  nop
    ctx->pc = 0x28d49cu;
    // NOP
label_28d4a0:
    // 0x28d4a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28d4a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28d4a4:
    // 0x28d4a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28d4a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28d4a8:
    // 0x28d4a8: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x28d4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_28d4ac:
    // 0x28d4ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28d4acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d4b0:
    // 0x28d4b0: 0x0  nop
    ctx->pc = 0x28d4b0u;
    // NOP
label_28d4b4:
    // 0x28d4b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28d4b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28d4b8:
    // 0x28d4b8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x28d4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_28d4bc:
    // 0x28d4bc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x28d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_28d4c0:
    // 0x28d4c0: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x28d4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_28d4c4:
    // 0x28d4c4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x28d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_28d4c8:
    // 0x28d4c8: 0x8fa70190  lw          $a3, 0x190($sp)
    ctx->pc = 0x28d4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_28d4cc:
    // 0x28d4cc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x28d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_28d4d0:
    // 0x28d4d0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x28d4d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_28d4d4:
    // 0x28d4d4: 0x4012  mflo        $t0
    ctx->pc = 0x28d4d4u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_28d4d8:
    // 0x28d4d8: 0x5000006  bltz        $t0, . + 4 + (0x6 << 2)
label_28d4dc:
    if (ctx->pc == 0x28D4DCu) {
        ctx->pc = 0x28D4E0u;
        goto label_28d4e0;
    }
    ctx->pc = 0x28D4D8u;
    {
        const bool branch_taken_0x28d4d8 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x28d4d8) {
            ctx->pc = 0x28D4F4u;
            goto label_28d4f4;
        }
    }
    ctx->pc = 0x28D4E0u;
label_28d4e0:
    // 0x28d4e0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x28d4e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d4e4:
    // 0x28d4e4: 0x0  nop
    ctx->pc = 0x28d4e4u;
    // NOP
label_28d4e8:
    // 0x28d4e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28d4e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28d4ec:
    // 0x28d4ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_28d4f0:
    if (ctx->pc == 0x28D4F0u) {
        ctx->pc = 0x28D4F4u;
        goto label_28d4f4;
    }
    ctx->pc = 0x28D4ECu;
    {
        const bool branch_taken_0x28d4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d4ec) {
            ctx->pc = 0x28D510u;
            goto label_28d510;
        }
    }
    ctx->pc = 0x28D4F4u;
label_28d4f4:
    // 0x28d4f4: 0x81042  srl         $v0, $t0, 1
    ctx->pc = 0x28d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
label_28d4f8:
    // 0x28d4f8: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x28d4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_28d4fc:
    // 0x28d4fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28d4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28d500:
    // 0x28d500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d504:
    // 0x28d504: 0x0  nop
    ctx->pc = 0x28d504u;
    // NOP
label_28d508:
    // 0x28d508: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28d508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28d50c:
    // 0x28d50c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28d50cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28d510:
    // 0x28d510: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x28d510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_28d514:
    // 0x28d514: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28d514u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28d518:
    // 0x28d518: 0x0  nop
    ctx->pc = 0x28d518u;
    // NOP
label_28d51c:
    // 0x28d51c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28d51cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28d520:
    // 0x28d520: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x28d520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_28d524:
    // 0x28d524: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x28d524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_28d528:
    // 0x28d528: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x28d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_28d52c:
    // 0x28d52c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28d52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d530:
    // 0x28d530: 0x27b300d0  addiu       $s3, $sp, 0xD0
    ctx->pc = 0x28d530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_28d534:
    // 0x28d534: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28d534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28d538:
    // 0x28d538: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28d538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28d53c:
    // 0x28d53c: 0xc106598  jal         func_419660
label_28d540:
    if (ctx->pc == 0x28D540u) {
        ctx->pc = 0x28D544u;
        goto label_28d544;
    }
    ctx->pc = 0x28D53Cu;
    SET_GPR_U32(ctx, 31, 0x28D544u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x28D53Cu, 0x28D544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D544u;
label_28d544:
    // 0x28d544: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28d544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d548:
    // 0x28d548: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x28d548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_28d54c:
    // 0x28d54c: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x28d54cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_28d550:
    // 0x28d550: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x28d550u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_28d554:
    // 0x28d554: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x28d554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_28d558:
    // 0x28d558: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x28d558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_28d55c:
    // 0x28d55c: 0x8fa700fc  lw          $a3, 0xFC($sp)
    ctx->pc = 0x28d55cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_28d560:
    // 0x28d560: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x28d560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_28d564:
    // 0x28d564: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x28d564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_28d568:
    // 0x28d568: 0xc0e2700  jal         func_389C00
label_28d56c:
    if (ctx->pc == 0x28D56Cu) {
        ctx->pc = 0x28D570u;
        goto label_28d570;
    }
    ctx->pc = 0x28D568u;
    SET_GPR_U32(ctx, 31, 0x28D570u);
    ctx->pc = 0x389C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389C00u, 0x28D568u, 0x28D570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D570u;
label_28d570:
    // 0x28d570: 0x8fb30108  lw          $s3, 0x108($sp)
    ctx->pc = 0x28d570u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_28d574:
    // 0x28d574: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x28d574u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28d578:
    // 0x28d578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d57c:
    // 0x28d57c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x28d57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_28d580:
    // 0x28d580: 0xc10671c  jal         func_419C70
label_28d584:
    if (ctx->pc == 0x28D584u) {
        ctx->pc = 0x28D588u;
        goto label_28d588;
    }
    ctx->pc = 0x28D580u;
    SET_GPR_U32(ctx, 31, 0x28D588u);
    ctx->pc = 0x419C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C70u, 0x28D580u, 0x28D588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D588u;
label_28d588:
    // 0x28d588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28d588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d58c:
    // 0x28d58c: 0xc0e3414  jal         func_38D050
label_28d590:
    if (ctx->pc == 0x28D590u) {
        ctx->pc = 0x28D594u;
        goto label_28d594;
    }
    ctx->pc = 0x28D58Cu;
    SET_GPR_U32(ctx, 31, 0x28D594u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x28D58Cu, 0x28D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D594u;
label_28d594:
    // 0x28d594: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28d594u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d598:
    // 0x28d598: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x28d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_28d59c:
    // 0x28d59c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28d59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_28d5a0:
    // 0x28d5a0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28d5a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28d5a4:
    // 0x28d5a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28d5a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28d5a8:
    // 0x28d5a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28d5a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28d5ac:
    // 0x28d5ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28d5acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28d5b0:
    // 0x28d5b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28d5b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28d5b4:
    // 0x28d5b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28d5b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28d5b8:
    // 0x28d5b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28d5b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28d5bc:
    // 0x28d5bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d5bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28d5c0:
    // 0x28d5c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28d5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28d5c4:
    // 0x28d5c4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x28d5c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_28d5c8:
    // 0x28d5c8: 0x3e00008  jr          $ra
label_28d5cc:
    if (ctx->pc == 0x28D5CCu) {
        ctx->pc = 0x28D5D0u;
        goto label_fallthrough_0x28d5c8;
    }
    ctx->pc = 0x28D5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28d5c8:
    ctx->pc = 0x28D5D0u;
}
