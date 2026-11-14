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

// Function: sub_00172790
// Address: 0x172790 - 0x173900
void sub_00172790_0x172790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172790_0x172790");
#endif

    switch (ctx->pc) {
        case 0x172790u: goto label_172790;
        case 0x172794u: goto label_172794;
        case 0x172798u: goto label_172798;
        case 0x17279cu: goto label_17279c;
        case 0x1727a0u: goto label_1727a0;
        case 0x1727a4u: goto label_1727a4;
        case 0x1727a8u: goto label_1727a8;
        case 0x1727acu: goto label_1727ac;
        case 0x1727b0u: goto label_1727b0;
        case 0x1727b4u: goto label_1727b4;
        case 0x1727b8u: goto label_1727b8;
        case 0x1727bcu: goto label_1727bc;
        case 0x1727c0u: goto label_1727c0;
        case 0x1727c4u: goto label_1727c4;
        case 0x1727c8u: goto label_1727c8;
        case 0x1727ccu: goto label_1727cc;
        case 0x1727d0u: goto label_1727d0;
        case 0x1727d4u: goto label_1727d4;
        case 0x1727d8u: goto label_1727d8;
        case 0x1727dcu: goto label_1727dc;
        case 0x1727e0u: goto label_1727e0;
        case 0x1727e4u: goto label_1727e4;
        case 0x1727e8u: goto label_1727e8;
        case 0x1727ecu: goto label_1727ec;
        case 0x1727f0u: goto label_1727f0;
        case 0x1727f4u: goto label_1727f4;
        case 0x1727f8u: goto label_1727f8;
        case 0x1727fcu: goto label_1727fc;
        case 0x172800u: goto label_172800;
        case 0x172804u: goto label_172804;
        case 0x172808u: goto label_172808;
        case 0x17280cu: goto label_17280c;
        case 0x172810u: goto label_172810;
        case 0x172814u: goto label_172814;
        case 0x172818u: goto label_172818;
        case 0x17281cu: goto label_17281c;
        case 0x172820u: goto label_172820;
        case 0x172824u: goto label_172824;
        case 0x172828u: goto label_172828;
        case 0x17282cu: goto label_17282c;
        case 0x172830u: goto label_172830;
        case 0x172834u: goto label_172834;
        case 0x172838u: goto label_172838;
        case 0x17283cu: goto label_17283c;
        case 0x172840u: goto label_172840;
        case 0x172844u: goto label_172844;
        case 0x172848u: goto label_172848;
        case 0x17284cu: goto label_17284c;
        case 0x172850u: goto label_172850;
        case 0x172854u: goto label_172854;
        case 0x172858u: goto label_172858;
        case 0x17285cu: goto label_17285c;
        case 0x172860u: goto label_172860;
        case 0x172864u: goto label_172864;
        case 0x172868u: goto label_172868;
        case 0x17286cu: goto label_17286c;
        case 0x172870u: goto label_172870;
        case 0x172874u: goto label_172874;
        case 0x172878u: goto label_172878;
        case 0x17287cu: goto label_17287c;
        case 0x172880u: goto label_172880;
        case 0x172884u: goto label_172884;
        case 0x172888u: goto label_172888;
        case 0x17288cu: goto label_17288c;
        case 0x172890u: goto label_172890;
        case 0x172894u: goto label_172894;
        case 0x172898u: goto label_172898;
        case 0x17289cu: goto label_17289c;
        case 0x1728a0u: goto label_1728a0;
        case 0x1728a4u: goto label_1728a4;
        case 0x1728a8u: goto label_1728a8;
        case 0x1728acu: goto label_1728ac;
        case 0x1728b0u: goto label_1728b0;
        case 0x1728b4u: goto label_1728b4;
        case 0x1728b8u: goto label_1728b8;
        case 0x1728bcu: goto label_1728bc;
        case 0x1728c0u: goto label_1728c0;
        case 0x1728c4u: goto label_1728c4;
        case 0x1728c8u: goto label_1728c8;
        case 0x1728ccu: goto label_1728cc;
        case 0x1728d0u: goto label_1728d0;
        case 0x1728d4u: goto label_1728d4;
        case 0x1728d8u: goto label_1728d8;
        case 0x1728dcu: goto label_1728dc;
        case 0x1728e0u: goto label_1728e0;
        case 0x1728e4u: goto label_1728e4;
        case 0x1728e8u: goto label_1728e8;
        case 0x1728ecu: goto label_1728ec;
        case 0x1728f0u: goto label_1728f0;
        case 0x1728f4u: goto label_1728f4;
        case 0x1728f8u: goto label_1728f8;
        case 0x1728fcu: goto label_1728fc;
        case 0x172900u: goto label_172900;
        case 0x172904u: goto label_172904;
        case 0x172908u: goto label_172908;
        case 0x17290cu: goto label_17290c;
        case 0x172910u: goto label_172910;
        case 0x172914u: goto label_172914;
        case 0x172918u: goto label_172918;
        case 0x17291cu: goto label_17291c;
        case 0x172920u: goto label_172920;
        case 0x172924u: goto label_172924;
        case 0x172928u: goto label_172928;
        case 0x17292cu: goto label_17292c;
        case 0x172930u: goto label_172930;
        case 0x172934u: goto label_172934;
        case 0x172938u: goto label_172938;
        case 0x17293cu: goto label_17293c;
        case 0x172940u: goto label_172940;
        case 0x172944u: goto label_172944;
        case 0x172948u: goto label_172948;
        case 0x17294cu: goto label_17294c;
        case 0x172950u: goto label_172950;
        case 0x172954u: goto label_172954;
        case 0x172958u: goto label_172958;
        case 0x17295cu: goto label_17295c;
        case 0x172960u: goto label_172960;
        case 0x172964u: goto label_172964;
        case 0x172968u: goto label_172968;
        case 0x17296cu: goto label_17296c;
        case 0x172970u: goto label_172970;
        case 0x172974u: goto label_172974;
        case 0x172978u: goto label_172978;
        case 0x17297cu: goto label_17297c;
        case 0x172980u: goto label_172980;
        case 0x172984u: goto label_172984;
        case 0x172988u: goto label_172988;
        case 0x17298cu: goto label_17298c;
        case 0x172990u: goto label_172990;
        case 0x172994u: goto label_172994;
        case 0x172998u: goto label_172998;
        case 0x17299cu: goto label_17299c;
        case 0x1729a0u: goto label_1729a0;
        case 0x1729a4u: goto label_1729a4;
        case 0x1729a8u: goto label_1729a8;
        case 0x1729acu: goto label_1729ac;
        case 0x1729b0u: goto label_1729b0;
        case 0x1729b4u: goto label_1729b4;
        case 0x1729b8u: goto label_1729b8;
        case 0x1729bcu: goto label_1729bc;
        case 0x1729c0u: goto label_1729c0;
        case 0x1729c4u: goto label_1729c4;
        case 0x1729c8u: goto label_1729c8;
        case 0x1729ccu: goto label_1729cc;
        case 0x1729d0u: goto label_1729d0;
        case 0x1729d4u: goto label_1729d4;
        case 0x1729d8u: goto label_1729d8;
        case 0x1729dcu: goto label_1729dc;
        case 0x1729e0u: goto label_1729e0;
        case 0x1729e4u: goto label_1729e4;
        case 0x1729e8u: goto label_1729e8;
        case 0x1729ecu: goto label_1729ec;
        case 0x1729f0u: goto label_1729f0;
        case 0x1729f4u: goto label_1729f4;
        case 0x1729f8u: goto label_1729f8;
        case 0x1729fcu: goto label_1729fc;
        case 0x172a00u: goto label_172a00;
        case 0x172a04u: goto label_172a04;
        case 0x172a08u: goto label_172a08;
        case 0x172a0cu: goto label_172a0c;
        case 0x172a10u: goto label_172a10;
        case 0x172a14u: goto label_172a14;
        case 0x172a18u: goto label_172a18;
        case 0x172a1cu: goto label_172a1c;
        case 0x172a20u: goto label_172a20;
        case 0x172a24u: goto label_172a24;
        case 0x172a28u: goto label_172a28;
        case 0x172a2cu: goto label_172a2c;
        case 0x172a30u: goto label_172a30;
        case 0x172a34u: goto label_172a34;
        case 0x172a38u: goto label_172a38;
        case 0x172a3cu: goto label_172a3c;
        case 0x172a40u: goto label_172a40;
        case 0x172a44u: goto label_172a44;
        case 0x172a48u: goto label_172a48;
        case 0x172a4cu: goto label_172a4c;
        case 0x172a50u: goto label_172a50;
        case 0x172a54u: goto label_172a54;
        case 0x172a58u: goto label_172a58;
        case 0x172a5cu: goto label_172a5c;
        case 0x172a60u: goto label_172a60;
        case 0x172a64u: goto label_172a64;
        case 0x172a68u: goto label_172a68;
        case 0x172a6cu: goto label_172a6c;
        case 0x172a70u: goto label_172a70;
        case 0x172a74u: goto label_172a74;
        case 0x172a78u: goto label_172a78;
        case 0x172a7cu: goto label_172a7c;
        case 0x172a80u: goto label_172a80;
        case 0x172a84u: goto label_172a84;
        case 0x172a88u: goto label_172a88;
        case 0x172a8cu: goto label_172a8c;
        case 0x172a90u: goto label_172a90;
        case 0x172a94u: goto label_172a94;
        case 0x172a98u: goto label_172a98;
        case 0x172a9cu: goto label_172a9c;
        case 0x172aa0u: goto label_172aa0;
        case 0x172aa4u: goto label_172aa4;
        case 0x172aa8u: goto label_172aa8;
        case 0x172aacu: goto label_172aac;
        case 0x172ab0u: goto label_172ab0;
        case 0x172ab4u: goto label_172ab4;
        case 0x172ab8u: goto label_172ab8;
        case 0x172abcu: goto label_172abc;
        case 0x172ac0u: goto label_172ac0;
        case 0x172ac4u: goto label_172ac4;
        case 0x172ac8u: goto label_172ac8;
        case 0x172accu: goto label_172acc;
        case 0x172ad0u: goto label_172ad0;
        case 0x172ad4u: goto label_172ad4;
        case 0x172ad8u: goto label_172ad8;
        case 0x172adcu: goto label_172adc;
        case 0x172ae0u: goto label_172ae0;
        case 0x172ae4u: goto label_172ae4;
        case 0x172ae8u: goto label_172ae8;
        case 0x172aecu: goto label_172aec;
        case 0x172af0u: goto label_172af0;
        case 0x172af4u: goto label_172af4;
        case 0x172af8u: goto label_172af8;
        case 0x172afcu: goto label_172afc;
        case 0x172b00u: goto label_172b00;
        case 0x172b04u: goto label_172b04;
        case 0x172b08u: goto label_172b08;
        case 0x172b0cu: goto label_172b0c;
        case 0x172b10u: goto label_172b10;
        case 0x172b14u: goto label_172b14;
        case 0x172b18u: goto label_172b18;
        case 0x172b1cu: goto label_172b1c;
        case 0x172b20u: goto label_172b20;
        case 0x172b24u: goto label_172b24;
        case 0x172b28u: goto label_172b28;
        case 0x172b2cu: goto label_172b2c;
        case 0x172b30u: goto label_172b30;
        case 0x172b34u: goto label_172b34;
        case 0x172b38u: goto label_172b38;
        case 0x172b3cu: goto label_172b3c;
        case 0x172b40u: goto label_172b40;
        case 0x172b44u: goto label_172b44;
        case 0x172b48u: goto label_172b48;
        case 0x172b4cu: goto label_172b4c;
        case 0x172b50u: goto label_172b50;
        case 0x172b54u: goto label_172b54;
        case 0x172b58u: goto label_172b58;
        case 0x172b5cu: goto label_172b5c;
        case 0x172b60u: goto label_172b60;
        case 0x172b64u: goto label_172b64;
        case 0x172b68u: goto label_172b68;
        case 0x172b6cu: goto label_172b6c;
        case 0x172b70u: goto label_172b70;
        case 0x172b74u: goto label_172b74;
        case 0x172b78u: goto label_172b78;
        case 0x172b7cu: goto label_172b7c;
        case 0x172b80u: goto label_172b80;
        case 0x172b84u: goto label_172b84;
        case 0x172b88u: goto label_172b88;
        case 0x172b8cu: goto label_172b8c;
        case 0x172b90u: goto label_172b90;
        case 0x172b94u: goto label_172b94;
        case 0x172b98u: goto label_172b98;
        case 0x172b9cu: goto label_172b9c;
        case 0x172ba0u: goto label_172ba0;
        case 0x172ba4u: goto label_172ba4;
        case 0x172ba8u: goto label_172ba8;
        case 0x172bacu: goto label_172bac;
        case 0x172bb0u: goto label_172bb0;
        case 0x172bb4u: goto label_172bb4;
        case 0x172bb8u: goto label_172bb8;
        case 0x172bbcu: goto label_172bbc;
        case 0x172bc0u: goto label_172bc0;
        case 0x172bc4u: goto label_172bc4;
        case 0x172bc8u: goto label_172bc8;
        case 0x172bccu: goto label_172bcc;
        case 0x172bd0u: goto label_172bd0;
        case 0x172bd4u: goto label_172bd4;
        case 0x172bd8u: goto label_172bd8;
        case 0x172bdcu: goto label_172bdc;
        case 0x172be0u: goto label_172be0;
        case 0x172be4u: goto label_172be4;
        case 0x172be8u: goto label_172be8;
        case 0x172becu: goto label_172bec;
        case 0x172bf0u: goto label_172bf0;
        case 0x172bf4u: goto label_172bf4;
        case 0x172bf8u: goto label_172bf8;
        case 0x172bfcu: goto label_172bfc;
        case 0x172c00u: goto label_172c00;
        case 0x172c04u: goto label_172c04;
        case 0x172c08u: goto label_172c08;
        case 0x172c0cu: goto label_172c0c;
        case 0x172c10u: goto label_172c10;
        case 0x172c14u: goto label_172c14;
        case 0x172c18u: goto label_172c18;
        case 0x172c1cu: goto label_172c1c;
        case 0x172c20u: goto label_172c20;
        case 0x172c24u: goto label_172c24;
        case 0x172c28u: goto label_172c28;
        case 0x172c2cu: goto label_172c2c;
        case 0x172c30u: goto label_172c30;
        case 0x172c34u: goto label_172c34;
        case 0x172c38u: goto label_172c38;
        case 0x172c3cu: goto label_172c3c;
        case 0x172c40u: goto label_172c40;
        case 0x172c44u: goto label_172c44;
        case 0x172c48u: goto label_172c48;
        case 0x172c4cu: goto label_172c4c;
        case 0x172c50u: goto label_172c50;
        case 0x172c54u: goto label_172c54;
        case 0x172c58u: goto label_172c58;
        case 0x172c5cu: goto label_172c5c;
        case 0x172c60u: goto label_172c60;
        case 0x172c64u: goto label_172c64;
        case 0x172c68u: goto label_172c68;
        case 0x172c6cu: goto label_172c6c;
        case 0x172c70u: goto label_172c70;
        case 0x172c74u: goto label_172c74;
        case 0x172c78u: goto label_172c78;
        case 0x172c7cu: goto label_172c7c;
        case 0x172c80u: goto label_172c80;
        case 0x172c84u: goto label_172c84;
        case 0x172c88u: goto label_172c88;
        case 0x172c8cu: goto label_172c8c;
        case 0x172c90u: goto label_172c90;
        case 0x172c94u: goto label_172c94;
        case 0x172c98u: goto label_172c98;
        case 0x172c9cu: goto label_172c9c;
        case 0x172ca0u: goto label_172ca0;
        case 0x172ca4u: goto label_172ca4;
        case 0x172ca8u: goto label_172ca8;
        case 0x172cacu: goto label_172cac;
        case 0x172cb0u: goto label_172cb0;
        case 0x172cb4u: goto label_172cb4;
        case 0x172cb8u: goto label_172cb8;
        case 0x172cbcu: goto label_172cbc;
        case 0x172cc0u: goto label_172cc0;
        case 0x172cc4u: goto label_172cc4;
        case 0x172cc8u: goto label_172cc8;
        case 0x172cccu: goto label_172ccc;
        case 0x172cd0u: goto label_172cd0;
        case 0x172cd4u: goto label_172cd4;
        case 0x172cd8u: goto label_172cd8;
        case 0x172cdcu: goto label_172cdc;
        case 0x172ce0u: goto label_172ce0;
        case 0x172ce4u: goto label_172ce4;
        case 0x172ce8u: goto label_172ce8;
        case 0x172cecu: goto label_172cec;
        case 0x172cf0u: goto label_172cf0;
        case 0x172cf4u: goto label_172cf4;
        case 0x172cf8u: goto label_172cf8;
        case 0x172cfcu: goto label_172cfc;
        case 0x172d00u: goto label_172d00;
        case 0x172d04u: goto label_172d04;
        case 0x172d08u: goto label_172d08;
        case 0x172d0cu: goto label_172d0c;
        case 0x172d10u: goto label_172d10;
        case 0x172d14u: goto label_172d14;
        case 0x172d18u: goto label_172d18;
        case 0x172d1cu: goto label_172d1c;
        case 0x172d20u: goto label_172d20;
        case 0x172d24u: goto label_172d24;
        case 0x172d28u: goto label_172d28;
        case 0x172d2cu: goto label_172d2c;
        case 0x172d30u: goto label_172d30;
        case 0x172d34u: goto label_172d34;
        case 0x172d38u: goto label_172d38;
        case 0x172d3cu: goto label_172d3c;
        case 0x172d40u: goto label_172d40;
        case 0x172d44u: goto label_172d44;
        case 0x172d48u: goto label_172d48;
        case 0x172d4cu: goto label_172d4c;
        case 0x172d50u: goto label_172d50;
        case 0x172d54u: goto label_172d54;
        case 0x172d58u: goto label_172d58;
        case 0x172d5cu: goto label_172d5c;
        case 0x172d60u: goto label_172d60;
        case 0x172d64u: goto label_172d64;
        case 0x172d68u: goto label_172d68;
        case 0x172d6cu: goto label_172d6c;
        case 0x172d70u: goto label_172d70;
        case 0x172d74u: goto label_172d74;
        case 0x172d78u: goto label_172d78;
        case 0x172d7cu: goto label_172d7c;
        case 0x172d80u: goto label_172d80;
        case 0x172d84u: goto label_172d84;
        case 0x172d88u: goto label_172d88;
        case 0x172d8cu: goto label_172d8c;
        case 0x172d90u: goto label_172d90;
        case 0x172d94u: goto label_172d94;
        case 0x172d98u: goto label_172d98;
        case 0x172d9cu: goto label_172d9c;
        case 0x172da0u: goto label_172da0;
        case 0x172da4u: goto label_172da4;
        case 0x172da8u: goto label_172da8;
        case 0x172dacu: goto label_172dac;
        case 0x172db0u: goto label_172db0;
        case 0x172db4u: goto label_172db4;
        case 0x172db8u: goto label_172db8;
        case 0x172dbcu: goto label_172dbc;
        case 0x172dc0u: goto label_172dc0;
        case 0x172dc4u: goto label_172dc4;
        case 0x172dc8u: goto label_172dc8;
        case 0x172dccu: goto label_172dcc;
        case 0x172dd0u: goto label_172dd0;
        case 0x172dd4u: goto label_172dd4;
        case 0x172dd8u: goto label_172dd8;
        case 0x172ddcu: goto label_172ddc;
        case 0x172de0u: goto label_172de0;
        case 0x172de4u: goto label_172de4;
        case 0x172de8u: goto label_172de8;
        case 0x172decu: goto label_172dec;
        case 0x172df0u: goto label_172df0;
        case 0x172df4u: goto label_172df4;
        case 0x172df8u: goto label_172df8;
        case 0x172dfcu: goto label_172dfc;
        case 0x172e00u: goto label_172e00;
        case 0x172e04u: goto label_172e04;
        case 0x172e08u: goto label_172e08;
        case 0x172e0cu: goto label_172e0c;
        case 0x172e10u: goto label_172e10;
        case 0x172e14u: goto label_172e14;
        case 0x172e18u: goto label_172e18;
        case 0x172e1cu: goto label_172e1c;
        case 0x172e20u: goto label_172e20;
        case 0x172e24u: goto label_172e24;
        case 0x172e28u: goto label_172e28;
        case 0x172e2cu: goto label_172e2c;
        case 0x172e30u: goto label_172e30;
        case 0x172e34u: goto label_172e34;
        case 0x172e38u: goto label_172e38;
        case 0x172e3cu: goto label_172e3c;
        case 0x172e40u: goto label_172e40;
        case 0x172e44u: goto label_172e44;
        case 0x172e48u: goto label_172e48;
        case 0x172e4cu: goto label_172e4c;
        case 0x172e50u: goto label_172e50;
        case 0x172e54u: goto label_172e54;
        case 0x172e58u: goto label_172e58;
        case 0x172e5cu: goto label_172e5c;
        case 0x172e60u: goto label_172e60;
        case 0x172e64u: goto label_172e64;
        case 0x172e68u: goto label_172e68;
        case 0x172e6cu: goto label_172e6c;
        case 0x172e70u: goto label_172e70;
        case 0x172e74u: goto label_172e74;
        case 0x172e78u: goto label_172e78;
        case 0x172e7cu: goto label_172e7c;
        case 0x172e80u: goto label_172e80;
        case 0x172e84u: goto label_172e84;
        case 0x172e88u: goto label_172e88;
        case 0x172e8cu: goto label_172e8c;
        case 0x172e90u: goto label_172e90;
        case 0x172e94u: goto label_172e94;
        case 0x172e98u: goto label_172e98;
        case 0x172e9cu: goto label_172e9c;
        case 0x172ea0u: goto label_172ea0;
        case 0x172ea4u: goto label_172ea4;
        case 0x172ea8u: goto label_172ea8;
        case 0x172eacu: goto label_172eac;
        case 0x172eb0u: goto label_172eb0;
        case 0x172eb4u: goto label_172eb4;
        case 0x172eb8u: goto label_172eb8;
        case 0x172ebcu: goto label_172ebc;
        case 0x172ec0u: goto label_172ec0;
        case 0x172ec4u: goto label_172ec4;
        case 0x172ec8u: goto label_172ec8;
        case 0x172eccu: goto label_172ecc;
        case 0x172ed0u: goto label_172ed0;
        case 0x172ed4u: goto label_172ed4;
        case 0x172ed8u: goto label_172ed8;
        case 0x172edcu: goto label_172edc;
        case 0x172ee0u: goto label_172ee0;
        case 0x172ee4u: goto label_172ee4;
        case 0x172ee8u: goto label_172ee8;
        case 0x172eecu: goto label_172eec;
        case 0x172ef0u: goto label_172ef0;
        case 0x172ef4u: goto label_172ef4;
        case 0x172ef8u: goto label_172ef8;
        case 0x172efcu: goto label_172efc;
        case 0x172f00u: goto label_172f00;
        case 0x172f04u: goto label_172f04;
        case 0x172f08u: goto label_172f08;
        case 0x172f0cu: goto label_172f0c;
        case 0x172f10u: goto label_172f10;
        case 0x172f14u: goto label_172f14;
        case 0x172f18u: goto label_172f18;
        case 0x172f1cu: goto label_172f1c;
        case 0x172f20u: goto label_172f20;
        case 0x172f24u: goto label_172f24;
        case 0x172f28u: goto label_172f28;
        case 0x172f2cu: goto label_172f2c;
        case 0x172f30u: goto label_172f30;
        case 0x172f34u: goto label_172f34;
        case 0x172f38u: goto label_172f38;
        case 0x172f3cu: goto label_172f3c;
        case 0x172f40u: goto label_172f40;
        case 0x172f44u: goto label_172f44;
        case 0x172f48u: goto label_172f48;
        case 0x172f4cu: goto label_172f4c;
        case 0x172f50u: goto label_172f50;
        case 0x172f54u: goto label_172f54;
        case 0x172f58u: goto label_172f58;
        case 0x172f5cu: goto label_172f5c;
        case 0x172f60u: goto label_172f60;
        case 0x172f64u: goto label_172f64;
        case 0x172f68u: goto label_172f68;
        case 0x172f6cu: goto label_172f6c;
        case 0x172f70u: goto label_172f70;
        case 0x172f74u: goto label_172f74;
        case 0x172f78u: goto label_172f78;
        case 0x172f7cu: goto label_172f7c;
        case 0x172f80u: goto label_172f80;
        case 0x172f84u: goto label_172f84;
        case 0x172f88u: goto label_172f88;
        case 0x172f8cu: goto label_172f8c;
        case 0x172f90u: goto label_172f90;
        case 0x172f94u: goto label_172f94;
        case 0x172f98u: goto label_172f98;
        case 0x172f9cu: goto label_172f9c;
        case 0x172fa0u: goto label_172fa0;
        case 0x172fa4u: goto label_172fa4;
        case 0x172fa8u: goto label_172fa8;
        case 0x172facu: goto label_172fac;
        case 0x172fb0u: goto label_172fb0;
        case 0x172fb4u: goto label_172fb4;
        case 0x172fb8u: goto label_172fb8;
        case 0x172fbcu: goto label_172fbc;
        case 0x172fc0u: goto label_172fc0;
        case 0x172fc4u: goto label_172fc4;
        case 0x172fc8u: goto label_172fc8;
        case 0x172fccu: goto label_172fcc;
        case 0x172fd0u: goto label_172fd0;
        case 0x172fd4u: goto label_172fd4;
        case 0x172fd8u: goto label_172fd8;
        case 0x172fdcu: goto label_172fdc;
        case 0x172fe0u: goto label_172fe0;
        case 0x172fe4u: goto label_172fe4;
        case 0x172fe8u: goto label_172fe8;
        case 0x172fecu: goto label_172fec;
        case 0x172ff0u: goto label_172ff0;
        case 0x172ff4u: goto label_172ff4;
        case 0x172ff8u: goto label_172ff8;
        case 0x172ffcu: goto label_172ffc;
        case 0x173000u: goto label_173000;
        case 0x173004u: goto label_173004;
        case 0x173008u: goto label_173008;
        case 0x17300cu: goto label_17300c;
        case 0x173010u: goto label_173010;
        case 0x173014u: goto label_173014;
        case 0x173018u: goto label_173018;
        case 0x17301cu: goto label_17301c;
        case 0x173020u: goto label_173020;
        case 0x173024u: goto label_173024;
        case 0x173028u: goto label_173028;
        case 0x17302cu: goto label_17302c;
        case 0x173030u: goto label_173030;
        case 0x173034u: goto label_173034;
        case 0x173038u: goto label_173038;
        case 0x17303cu: goto label_17303c;
        case 0x173040u: goto label_173040;
        case 0x173044u: goto label_173044;
        case 0x173048u: goto label_173048;
        case 0x17304cu: goto label_17304c;
        case 0x173050u: goto label_173050;
        case 0x173054u: goto label_173054;
        case 0x173058u: goto label_173058;
        case 0x17305cu: goto label_17305c;
        case 0x173060u: goto label_173060;
        case 0x173064u: goto label_173064;
        case 0x173068u: goto label_173068;
        case 0x17306cu: goto label_17306c;
        case 0x173070u: goto label_173070;
        case 0x173074u: goto label_173074;
        case 0x173078u: goto label_173078;
        case 0x17307cu: goto label_17307c;
        case 0x173080u: goto label_173080;
        case 0x173084u: goto label_173084;
        case 0x173088u: goto label_173088;
        case 0x17308cu: goto label_17308c;
        case 0x173090u: goto label_173090;
        case 0x173094u: goto label_173094;
        case 0x173098u: goto label_173098;
        case 0x17309cu: goto label_17309c;
        case 0x1730a0u: goto label_1730a0;
        case 0x1730a4u: goto label_1730a4;
        case 0x1730a8u: goto label_1730a8;
        case 0x1730acu: goto label_1730ac;
        case 0x1730b0u: goto label_1730b0;
        case 0x1730b4u: goto label_1730b4;
        case 0x1730b8u: goto label_1730b8;
        case 0x1730bcu: goto label_1730bc;
        case 0x1730c0u: goto label_1730c0;
        case 0x1730c4u: goto label_1730c4;
        case 0x1730c8u: goto label_1730c8;
        case 0x1730ccu: goto label_1730cc;
        case 0x1730d0u: goto label_1730d0;
        case 0x1730d4u: goto label_1730d4;
        case 0x1730d8u: goto label_1730d8;
        case 0x1730dcu: goto label_1730dc;
        case 0x1730e0u: goto label_1730e0;
        case 0x1730e4u: goto label_1730e4;
        case 0x1730e8u: goto label_1730e8;
        case 0x1730ecu: goto label_1730ec;
        case 0x1730f0u: goto label_1730f0;
        case 0x1730f4u: goto label_1730f4;
        case 0x1730f8u: goto label_1730f8;
        case 0x1730fcu: goto label_1730fc;
        case 0x173100u: goto label_173100;
        case 0x173104u: goto label_173104;
        case 0x173108u: goto label_173108;
        case 0x17310cu: goto label_17310c;
        case 0x173110u: goto label_173110;
        case 0x173114u: goto label_173114;
        case 0x173118u: goto label_173118;
        case 0x17311cu: goto label_17311c;
        case 0x173120u: goto label_173120;
        case 0x173124u: goto label_173124;
        case 0x173128u: goto label_173128;
        case 0x17312cu: goto label_17312c;
        case 0x173130u: goto label_173130;
        case 0x173134u: goto label_173134;
        case 0x173138u: goto label_173138;
        case 0x17313cu: goto label_17313c;
        case 0x173140u: goto label_173140;
        case 0x173144u: goto label_173144;
        case 0x173148u: goto label_173148;
        case 0x17314cu: goto label_17314c;
        case 0x173150u: goto label_173150;
        case 0x173154u: goto label_173154;
        case 0x173158u: goto label_173158;
        case 0x17315cu: goto label_17315c;
        case 0x173160u: goto label_173160;
        case 0x173164u: goto label_173164;
        case 0x173168u: goto label_173168;
        case 0x17316cu: goto label_17316c;
        case 0x173170u: goto label_173170;
        case 0x173174u: goto label_173174;
        case 0x173178u: goto label_173178;
        case 0x17317cu: goto label_17317c;
        case 0x173180u: goto label_173180;
        case 0x173184u: goto label_173184;
        case 0x173188u: goto label_173188;
        case 0x17318cu: goto label_17318c;
        case 0x173190u: goto label_173190;
        case 0x173194u: goto label_173194;
        case 0x173198u: goto label_173198;
        case 0x17319cu: goto label_17319c;
        case 0x1731a0u: goto label_1731a0;
        case 0x1731a4u: goto label_1731a4;
        case 0x1731a8u: goto label_1731a8;
        case 0x1731acu: goto label_1731ac;
        case 0x1731b0u: goto label_1731b0;
        case 0x1731b4u: goto label_1731b4;
        case 0x1731b8u: goto label_1731b8;
        case 0x1731bcu: goto label_1731bc;
        case 0x1731c0u: goto label_1731c0;
        case 0x1731c4u: goto label_1731c4;
        case 0x1731c8u: goto label_1731c8;
        case 0x1731ccu: goto label_1731cc;
        case 0x1731d0u: goto label_1731d0;
        case 0x1731d4u: goto label_1731d4;
        case 0x1731d8u: goto label_1731d8;
        case 0x1731dcu: goto label_1731dc;
        case 0x1731e0u: goto label_1731e0;
        case 0x1731e4u: goto label_1731e4;
        case 0x1731e8u: goto label_1731e8;
        case 0x1731ecu: goto label_1731ec;
        case 0x1731f0u: goto label_1731f0;
        case 0x1731f4u: goto label_1731f4;
        case 0x1731f8u: goto label_1731f8;
        case 0x1731fcu: goto label_1731fc;
        case 0x173200u: goto label_173200;
        case 0x173204u: goto label_173204;
        case 0x173208u: goto label_173208;
        case 0x17320cu: goto label_17320c;
        case 0x173210u: goto label_173210;
        case 0x173214u: goto label_173214;
        case 0x173218u: goto label_173218;
        case 0x17321cu: goto label_17321c;
        case 0x173220u: goto label_173220;
        case 0x173224u: goto label_173224;
        case 0x173228u: goto label_173228;
        case 0x17322cu: goto label_17322c;
        case 0x173230u: goto label_173230;
        case 0x173234u: goto label_173234;
        case 0x173238u: goto label_173238;
        case 0x17323cu: goto label_17323c;
        case 0x173240u: goto label_173240;
        case 0x173244u: goto label_173244;
        case 0x173248u: goto label_173248;
        case 0x17324cu: goto label_17324c;
        case 0x173250u: goto label_173250;
        case 0x173254u: goto label_173254;
        case 0x173258u: goto label_173258;
        case 0x17325cu: goto label_17325c;
        case 0x173260u: goto label_173260;
        case 0x173264u: goto label_173264;
        case 0x173268u: goto label_173268;
        case 0x17326cu: goto label_17326c;
        case 0x173270u: goto label_173270;
        case 0x173274u: goto label_173274;
        case 0x173278u: goto label_173278;
        case 0x17327cu: goto label_17327c;
        case 0x173280u: goto label_173280;
        case 0x173284u: goto label_173284;
        case 0x173288u: goto label_173288;
        case 0x17328cu: goto label_17328c;
        case 0x173290u: goto label_173290;
        case 0x173294u: goto label_173294;
        case 0x173298u: goto label_173298;
        case 0x17329cu: goto label_17329c;
        case 0x1732a0u: goto label_1732a0;
        case 0x1732a4u: goto label_1732a4;
        case 0x1732a8u: goto label_1732a8;
        case 0x1732acu: goto label_1732ac;
        case 0x1732b0u: goto label_1732b0;
        case 0x1732b4u: goto label_1732b4;
        case 0x1732b8u: goto label_1732b8;
        case 0x1732bcu: goto label_1732bc;
        case 0x1732c0u: goto label_1732c0;
        case 0x1732c4u: goto label_1732c4;
        case 0x1732c8u: goto label_1732c8;
        case 0x1732ccu: goto label_1732cc;
        case 0x1732d0u: goto label_1732d0;
        case 0x1732d4u: goto label_1732d4;
        case 0x1732d8u: goto label_1732d8;
        case 0x1732dcu: goto label_1732dc;
        case 0x1732e0u: goto label_1732e0;
        case 0x1732e4u: goto label_1732e4;
        case 0x1732e8u: goto label_1732e8;
        case 0x1732ecu: goto label_1732ec;
        case 0x1732f0u: goto label_1732f0;
        case 0x1732f4u: goto label_1732f4;
        case 0x1732f8u: goto label_1732f8;
        case 0x1732fcu: goto label_1732fc;
        case 0x173300u: goto label_173300;
        case 0x173304u: goto label_173304;
        case 0x173308u: goto label_173308;
        case 0x17330cu: goto label_17330c;
        case 0x173310u: goto label_173310;
        case 0x173314u: goto label_173314;
        case 0x173318u: goto label_173318;
        case 0x17331cu: goto label_17331c;
        case 0x173320u: goto label_173320;
        case 0x173324u: goto label_173324;
        case 0x173328u: goto label_173328;
        case 0x17332cu: goto label_17332c;
        case 0x173330u: goto label_173330;
        case 0x173334u: goto label_173334;
        case 0x173338u: goto label_173338;
        case 0x17333cu: goto label_17333c;
        case 0x173340u: goto label_173340;
        case 0x173344u: goto label_173344;
        case 0x173348u: goto label_173348;
        case 0x17334cu: goto label_17334c;
        case 0x173350u: goto label_173350;
        case 0x173354u: goto label_173354;
        case 0x173358u: goto label_173358;
        case 0x17335cu: goto label_17335c;
        case 0x173360u: goto label_173360;
        case 0x173364u: goto label_173364;
        case 0x173368u: goto label_173368;
        case 0x17336cu: goto label_17336c;
        case 0x173370u: goto label_173370;
        case 0x173374u: goto label_173374;
        case 0x173378u: goto label_173378;
        case 0x17337cu: goto label_17337c;
        case 0x173380u: goto label_173380;
        case 0x173384u: goto label_173384;
        case 0x173388u: goto label_173388;
        case 0x17338cu: goto label_17338c;
        case 0x173390u: goto label_173390;
        case 0x173394u: goto label_173394;
        case 0x173398u: goto label_173398;
        case 0x17339cu: goto label_17339c;
        case 0x1733a0u: goto label_1733a0;
        case 0x1733a4u: goto label_1733a4;
        case 0x1733a8u: goto label_1733a8;
        case 0x1733acu: goto label_1733ac;
        case 0x1733b0u: goto label_1733b0;
        case 0x1733b4u: goto label_1733b4;
        case 0x1733b8u: goto label_1733b8;
        case 0x1733bcu: goto label_1733bc;
        case 0x1733c0u: goto label_1733c0;
        case 0x1733c4u: goto label_1733c4;
        case 0x1733c8u: goto label_1733c8;
        case 0x1733ccu: goto label_1733cc;
        case 0x1733d0u: goto label_1733d0;
        case 0x1733d4u: goto label_1733d4;
        case 0x1733d8u: goto label_1733d8;
        case 0x1733dcu: goto label_1733dc;
        case 0x1733e0u: goto label_1733e0;
        case 0x1733e4u: goto label_1733e4;
        case 0x1733e8u: goto label_1733e8;
        case 0x1733ecu: goto label_1733ec;
        case 0x1733f0u: goto label_1733f0;
        case 0x1733f4u: goto label_1733f4;
        case 0x1733f8u: goto label_1733f8;
        case 0x1733fcu: goto label_1733fc;
        case 0x173400u: goto label_173400;
        case 0x173404u: goto label_173404;
        case 0x173408u: goto label_173408;
        case 0x17340cu: goto label_17340c;
        case 0x173410u: goto label_173410;
        case 0x173414u: goto label_173414;
        case 0x173418u: goto label_173418;
        case 0x17341cu: goto label_17341c;
        case 0x173420u: goto label_173420;
        case 0x173424u: goto label_173424;
        case 0x173428u: goto label_173428;
        case 0x17342cu: goto label_17342c;
        case 0x173430u: goto label_173430;
        case 0x173434u: goto label_173434;
        case 0x173438u: goto label_173438;
        case 0x17343cu: goto label_17343c;
        case 0x173440u: goto label_173440;
        case 0x173444u: goto label_173444;
        case 0x173448u: goto label_173448;
        case 0x17344cu: goto label_17344c;
        case 0x173450u: goto label_173450;
        case 0x173454u: goto label_173454;
        case 0x173458u: goto label_173458;
        case 0x17345cu: goto label_17345c;
        case 0x173460u: goto label_173460;
        case 0x173464u: goto label_173464;
        case 0x173468u: goto label_173468;
        case 0x17346cu: goto label_17346c;
        case 0x173470u: goto label_173470;
        case 0x173474u: goto label_173474;
        case 0x173478u: goto label_173478;
        case 0x17347cu: goto label_17347c;
        case 0x173480u: goto label_173480;
        case 0x173484u: goto label_173484;
        case 0x173488u: goto label_173488;
        case 0x17348cu: goto label_17348c;
        case 0x173490u: goto label_173490;
        case 0x173494u: goto label_173494;
        case 0x173498u: goto label_173498;
        case 0x17349cu: goto label_17349c;
        case 0x1734a0u: goto label_1734a0;
        case 0x1734a4u: goto label_1734a4;
        case 0x1734a8u: goto label_1734a8;
        case 0x1734acu: goto label_1734ac;
        case 0x1734b0u: goto label_1734b0;
        case 0x1734b4u: goto label_1734b4;
        case 0x1734b8u: goto label_1734b8;
        case 0x1734bcu: goto label_1734bc;
        case 0x1734c0u: goto label_1734c0;
        case 0x1734c4u: goto label_1734c4;
        case 0x1734c8u: goto label_1734c8;
        case 0x1734ccu: goto label_1734cc;
        case 0x1734d0u: goto label_1734d0;
        case 0x1734d4u: goto label_1734d4;
        case 0x1734d8u: goto label_1734d8;
        case 0x1734dcu: goto label_1734dc;
        case 0x1734e0u: goto label_1734e0;
        case 0x1734e4u: goto label_1734e4;
        case 0x1734e8u: goto label_1734e8;
        case 0x1734ecu: goto label_1734ec;
        case 0x1734f0u: goto label_1734f0;
        case 0x1734f4u: goto label_1734f4;
        case 0x1734f8u: goto label_1734f8;
        case 0x1734fcu: goto label_1734fc;
        case 0x173500u: goto label_173500;
        case 0x173504u: goto label_173504;
        case 0x173508u: goto label_173508;
        case 0x17350cu: goto label_17350c;
        case 0x173510u: goto label_173510;
        case 0x173514u: goto label_173514;
        case 0x173518u: goto label_173518;
        case 0x17351cu: goto label_17351c;
        case 0x173520u: goto label_173520;
        case 0x173524u: goto label_173524;
        case 0x173528u: goto label_173528;
        case 0x17352cu: goto label_17352c;
        case 0x173530u: goto label_173530;
        case 0x173534u: goto label_173534;
        case 0x173538u: goto label_173538;
        case 0x17353cu: goto label_17353c;
        case 0x173540u: goto label_173540;
        case 0x173544u: goto label_173544;
        case 0x173548u: goto label_173548;
        case 0x17354cu: goto label_17354c;
        case 0x173550u: goto label_173550;
        case 0x173554u: goto label_173554;
        case 0x173558u: goto label_173558;
        case 0x17355cu: goto label_17355c;
        case 0x173560u: goto label_173560;
        case 0x173564u: goto label_173564;
        case 0x173568u: goto label_173568;
        case 0x17356cu: goto label_17356c;
        case 0x173570u: goto label_173570;
        case 0x173574u: goto label_173574;
        case 0x173578u: goto label_173578;
        case 0x17357cu: goto label_17357c;
        case 0x173580u: goto label_173580;
        case 0x173584u: goto label_173584;
        case 0x173588u: goto label_173588;
        case 0x17358cu: goto label_17358c;
        case 0x173590u: goto label_173590;
        case 0x173594u: goto label_173594;
        case 0x173598u: goto label_173598;
        case 0x17359cu: goto label_17359c;
        case 0x1735a0u: goto label_1735a0;
        case 0x1735a4u: goto label_1735a4;
        case 0x1735a8u: goto label_1735a8;
        case 0x1735acu: goto label_1735ac;
        case 0x1735b0u: goto label_1735b0;
        case 0x1735b4u: goto label_1735b4;
        case 0x1735b8u: goto label_1735b8;
        case 0x1735bcu: goto label_1735bc;
        case 0x1735c0u: goto label_1735c0;
        case 0x1735c4u: goto label_1735c4;
        case 0x1735c8u: goto label_1735c8;
        case 0x1735ccu: goto label_1735cc;
        case 0x1735d0u: goto label_1735d0;
        case 0x1735d4u: goto label_1735d4;
        case 0x1735d8u: goto label_1735d8;
        case 0x1735dcu: goto label_1735dc;
        case 0x1735e0u: goto label_1735e0;
        case 0x1735e4u: goto label_1735e4;
        case 0x1735e8u: goto label_1735e8;
        case 0x1735ecu: goto label_1735ec;
        case 0x1735f0u: goto label_1735f0;
        case 0x1735f4u: goto label_1735f4;
        case 0x1735f8u: goto label_1735f8;
        case 0x1735fcu: goto label_1735fc;
        case 0x173600u: goto label_173600;
        case 0x173604u: goto label_173604;
        case 0x173608u: goto label_173608;
        case 0x17360cu: goto label_17360c;
        case 0x173610u: goto label_173610;
        case 0x173614u: goto label_173614;
        case 0x173618u: goto label_173618;
        case 0x17361cu: goto label_17361c;
        case 0x173620u: goto label_173620;
        case 0x173624u: goto label_173624;
        case 0x173628u: goto label_173628;
        case 0x17362cu: goto label_17362c;
        case 0x173630u: goto label_173630;
        case 0x173634u: goto label_173634;
        case 0x173638u: goto label_173638;
        case 0x17363cu: goto label_17363c;
        case 0x173640u: goto label_173640;
        case 0x173644u: goto label_173644;
        case 0x173648u: goto label_173648;
        case 0x17364cu: goto label_17364c;
        case 0x173650u: goto label_173650;
        case 0x173654u: goto label_173654;
        case 0x173658u: goto label_173658;
        case 0x17365cu: goto label_17365c;
        case 0x173660u: goto label_173660;
        case 0x173664u: goto label_173664;
        case 0x173668u: goto label_173668;
        case 0x17366cu: goto label_17366c;
        case 0x173670u: goto label_173670;
        case 0x173674u: goto label_173674;
        case 0x173678u: goto label_173678;
        case 0x17367cu: goto label_17367c;
        case 0x173680u: goto label_173680;
        case 0x173684u: goto label_173684;
        case 0x173688u: goto label_173688;
        case 0x17368cu: goto label_17368c;
        case 0x173690u: goto label_173690;
        case 0x173694u: goto label_173694;
        case 0x173698u: goto label_173698;
        case 0x17369cu: goto label_17369c;
        case 0x1736a0u: goto label_1736a0;
        case 0x1736a4u: goto label_1736a4;
        case 0x1736a8u: goto label_1736a8;
        case 0x1736acu: goto label_1736ac;
        case 0x1736b0u: goto label_1736b0;
        case 0x1736b4u: goto label_1736b4;
        case 0x1736b8u: goto label_1736b8;
        case 0x1736bcu: goto label_1736bc;
        case 0x1736c0u: goto label_1736c0;
        case 0x1736c4u: goto label_1736c4;
        case 0x1736c8u: goto label_1736c8;
        case 0x1736ccu: goto label_1736cc;
        case 0x1736d0u: goto label_1736d0;
        case 0x1736d4u: goto label_1736d4;
        case 0x1736d8u: goto label_1736d8;
        case 0x1736dcu: goto label_1736dc;
        case 0x1736e0u: goto label_1736e0;
        case 0x1736e4u: goto label_1736e4;
        case 0x1736e8u: goto label_1736e8;
        case 0x1736ecu: goto label_1736ec;
        case 0x1736f0u: goto label_1736f0;
        case 0x1736f4u: goto label_1736f4;
        case 0x1736f8u: goto label_1736f8;
        case 0x1736fcu: goto label_1736fc;
        case 0x173700u: goto label_173700;
        case 0x173704u: goto label_173704;
        case 0x173708u: goto label_173708;
        case 0x17370cu: goto label_17370c;
        case 0x173710u: goto label_173710;
        case 0x173714u: goto label_173714;
        case 0x173718u: goto label_173718;
        case 0x17371cu: goto label_17371c;
        case 0x173720u: goto label_173720;
        case 0x173724u: goto label_173724;
        case 0x173728u: goto label_173728;
        case 0x17372cu: goto label_17372c;
        case 0x173730u: goto label_173730;
        case 0x173734u: goto label_173734;
        case 0x173738u: goto label_173738;
        case 0x17373cu: goto label_17373c;
        case 0x173740u: goto label_173740;
        case 0x173744u: goto label_173744;
        case 0x173748u: goto label_173748;
        case 0x17374cu: goto label_17374c;
        case 0x173750u: goto label_173750;
        case 0x173754u: goto label_173754;
        case 0x173758u: goto label_173758;
        case 0x17375cu: goto label_17375c;
        case 0x173760u: goto label_173760;
        case 0x173764u: goto label_173764;
        case 0x173768u: goto label_173768;
        case 0x17376cu: goto label_17376c;
        case 0x173770u: goto label_173770;
        case 0x173774u: goto label_173774;
        case 0x173778u: goto label_173778;
        case 0x17377cu: goto label_17377c;
        case 0x173780u: goto label_173780;
        case 0x173784u: goto label_173784;
        case 0x173788u: goto label_173788;
        case 0x17378cu: goto label_17378c;
        case 0x173790u: goto label_173790;
        case 0x173794u: goto label_173794;
        case 0x173798u: goto label_173798;
        case 0x17379cu: goto label_17379c;
        case 0x1737a0u: goto label_1737a0;
        case 0x1737a4u: goto label_1737a4;
        case 0x1737a8u: goto label_1737a8;
        case 0x1737acu: goto label_1737ac;
        case 0x1737b0u: goto label_1737b0;
        case 0x1737b4u: goto label_1737b4;
        case 0x1737b8u: goto label_1737b8;
        case 0x1737bcu: goto label_1737bc;
        case 0x1737c0u: goto label_1737c0;
        case 0x1737c4u: goto label_1737c4;
        case 0x1737c8u: goto label_1737c8;
        case 0x1737ccu: goto label_1737cc;
        case 0x1737d0u: goto label_1737d0;
        case 0x1737d4u: goto label_1737d4;
        case 0x1737d8u: goto label_1737d8;
        case 0x1737dcu: goto label_1737dc;
        case 0x1737e0u: goto label_1737e0;
        case 0x1737e4u: goto label_1737e4;
        case 0x1737e8u: goto label_1737e8;
        case 0x1737ecu: goto label_1737ec;
        case 0x1737f0u: goto label_1737f0;
        case 0x1737f4u: goto label_1737f4;
        case 0x1737f8u: goto label_1737f8;
        case 0x1737fcu: goto label_1737fc;
        case 0x173800u: goto label_173800;
        case 0x173804u: goto label_173804;
        case 0x173808u: goto label_173808;
        case 0x17380cu: goto label_17380c;
        case 0x173810u: goto label_173810;
        case 0x173814u: goto label_173814;
        case 0x173818u: goto label_173818;
        case 0x17381cu: goto label_17381c;
        case 0x173820u: goto label_173820;
        case 0x173824u: goto label_173824;
        case 0x173828u: goto label_173828;
        case 0x17382cu: goto label_17382c;
        case 0x173830u: goto label_173830;
        case 0x173834u: goto label_173834;
        case 0x173838u: goto label_173838;
        case 0x17383cu: goto label_17383c;
        case 0x173840u: goto label_173840;
        case 0x173844u: goto label_173844;
        case 0x173848u: goto label_173848;
        case 0x17384cu: goto label_17384c;
        case 0x173850u: goto label_173850;
        case 0x173854u: goto label_173854;
        case 0x173858u: goto label_173858;
        case 0x17385cu: goto label_17385c;
        case 0x173860u: goto label_173860;
        case 0x173864u: goto label_173864;
        case 0x173868u: goto label_173868;
        case 0x17386cu: goto label_17386c;
        case 0x173870u: goto label_173870;
        case 0x173874u: goto label_173874;
        case 0x173878u: goto label_173878;
        case 0x17387cu: goto label_17387c;
        case 0x173880u: goto label_173880;
        case 0x173884u: goto label_173884;
        case 0x173888u: goto label_173888;
        case 0x17388cu: goto label_17388c;
        case 0x173890u: goto label_173890;
        case 0x173894u: goto label_173894;
        case 0x173898u: goto label_173898;
        case 0x17389cu: goto label_17389c;
        case 0x1738a0u: goto label_1738a0;
        case 0x1738a4u: goto label_1738a4;
        case 0x1738a8u: goto label_1738a8;
        case 0x1738acu: goto label_1738ac;
        case 0x1738b0u: goto label_1738b0;
        case 0x1738b4u: goto label_1738b4;
        case 0x1738b8u: goto label_1738b8;
        case 0x1738bcu: goto label_1738bc;
        case 0x1738c0u: goto label_1738c0;
        case 0x1738c4u: goto label_1738c4;
        case 0x1738c8u: goto label_1738c8;
        case 0x1738ccu: goto label_1738cc;
        case 0x1738d0u: goto label_1738d0;
        case 0x1738d4u: goto label_1738d4;
        case 0x1738d8u: goto label_1738d8;
        case 0x1738dcu: goto label_1738dc;
        case 0x1738e0u: goto label_1738e0;
        case 0x1738e4u: goto label_1738e4;
        case 0x1738e8u: goto label_1738e8;
        case 0x1738ecu: goto label_1738ec;
        case 0x1738f0u: goto label_1738f0;
        case 0x1738f4u: goto label_1738f4;
        case 0x1738f8u: goto label_1738f8;
        case 0x1738fcu: goto label_1738fc;
        default: break;
    }

    ctx->pc = 0x172790u;

label_172790:
    // 0x172790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_172794:
    // 0x172794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_172798:
    // 0x172798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17279c:
    // 0x17279c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17279cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1727a0:
    // 0x1727a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1727a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1727a4:
    // 0x1727a4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1727a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1727a8:
    // 0x1727a8: 0xc0557e8  jal         func_155FA0
label_1727ac:
    if (ctx->pc == 0x1727ACu) {
        ctx->pc = 0x1727B0u;
        goto label_1727b0;
    }
    ctx->pc = 0x1727A8u;
    SET_GPR_U32(ctx, 31, 0x1727B0u);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x1727A8u, 0x1727B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727B0u;
label_1727b0:
    // 0x1727b0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1727b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1727b4:
    // 0x1727b4: 0x24633dd0  addiu       $v1, $v1, 0x3DD0
    ctx->pc = 0x1727b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15824));
label_1727b8:
    // 0x1727b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1727b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1727bc:
    // 0x1727bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1727bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1727c0:
    // 0x1727c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1727c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1727c4:
    // 0x1727c4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1727c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1727c8:
    // 0x1727c8: 0xc056254  jal         func_158950
label_1727cc:
    if (ctx->pc == 0x1727CCu) {
        ctx->pc = 0x1727D0u;
        goto label_1727d0;
    }
    ctx->pc = 0x1727C8u;
    SET_GPR_U32(ctx, 31, 0x1727D0u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1727C8u, 0x1727D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727D0u;
label_1727d0:
    // 0x1727d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1727d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1727d4:
    // 0x1727d4: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x1727d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_1727d8:
    // 0x1727d8: 0xc056254  jal         func_158950
label_1727dc:
    if (ctx->pc == 0x1727DCu) {
        ctx->pc = 0x1727E0u;
        goto label_1727e0;
    }
    ctx->pc = 0x1727D8u;
    SET_GPR_U32(ctx, 31, 0x1727E0u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1727D8u, 0x1727E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727E0u;
label_1727e0:
    // 0x1727e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1727e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1727e4:
    // 0x1727e4: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x1727e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1727e8:
    // 0x1727e8: 0xc056254  jal         func_158950
label_1727ec:
    if (ctx->pc == 0x1727ECu) {
        ctx->pc = 0x1727F0u;
        goto label_1727f0;
    }
    ctx->pc = 0x1727E8u;
    SET_GPR_U32(ctx, 31, 0x1727F0u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1727E8u, 0x1727F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727F0u;
label_1727f0:
    // 0x1727f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1727f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1727f4:
    // 0x1727f4: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x1727f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
label_1727f8:
    // 0x1727f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1727f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1727fc:
    // 0x1727fc: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x1727fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
label_172800:
    // 0x172800: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x172800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172804:
    // 0x172804: 0x10000006  b           . + 4 + (0x6 << 2)
label_172808:
    if (ctx->pc == 0x172808u) {
        ctx->pc = 0x17280Cu;
        goto label_17280c;
    }
    ctx->pc = 0x172804u;
    {
        const bool branch_taken_0x172804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172804) {
            ctx->pc = 0x172820u;
            goto label_172820;
        }
    }
    ctx->pc = 0x17280Cu;
label_17280c:
    // 0x17280c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17280cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_172810:
    // 0x172810: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x172810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_172814:
    // 0x172814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_172818:
    // 0x172818: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x172818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
label_17281c:
    // 0x17281c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17281cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_172820:
    // 0x172820: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x172820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_172824:
    // 0x172824: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_172828:
    if (ctx->pc == 0x172828u) {
        ctx->pc = 0x17282Cu;
        goto label_17282c;
    }
    ctx->pc = 0x172824u;
    {
        const bool branch_taken_0x172824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172824) {
            ctx->pc = 0x17280Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17280c;
        }
    }
    ctx->pc = 0x17282Cu;
label_17282c:
    // 0x17282c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_172830:
    // 0x172830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x172830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_172834:
    // 0x172834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_172838:
    // 0x172838: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x172838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17283c:
    // 0x17283c: 0x3e00008  jr          $ra
label_172840:
    if (ctx->pc == 0x172840u) {
        ctx->pc = 0x172844u;
        goto label_172844;
    }
    ctx->pc = 0x17283Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17283Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172844u;
label_172844:
    // 0x172844: 0x0  nop
    ctx->pc = 0x172844u;
    // NOP
label_172848:
    // 0x172848: 0x0  nop
    ctx->pc = 0x172848u;
    // NOP
label_17284c:
    // 0x17284c: 0x0  nop
    ctx->pc = 0x17284cu;
    // NOP
label_172850:
    // 0x172850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_172854:
    // 0x172854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_172858:
    // 0x172858: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x172858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17285c:
    // 0x17285c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x17285cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_172860:
    // 0x172860: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x172860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_172864:
    // 0x172864: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_172868:
    if (ctx->pc == 0x172868u) {
        ctx->pc = 0x17286Cu;
        goto label_17286c;
    }
    ctx->pc = 0x172864u;
    {
        const bool branch_taken_0x172864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172864) {
            ctx->pc = 0x1728E8u;
            goto label_1728e8;
        }
    }
    ctx->pc = 0x17286Cu;
label_17286c:
    // 0x17286c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17286cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_172870:
    // 0x172870: 0x24633dd0  addiu       $v1, $v1, 0x3DD0
    ctx->pc = 0x172870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15824));
label_172874:
    // 0x172874: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x172874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_172878:
    // 0x172878: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x172878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17287c:
    // 0x17287c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_172880:
    // 0x172880: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x172880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_172884:
    // 0x172884: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x172884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_172888:
    // 0x172888: 0xc056094  jal         func_158250
label_17288c:
    if (ctx->pc == 0x17288Cu) {
        ctx->pc = 0x172890u;
        goto label_172890;
    }
    ctx->pc = 0x172888u;
    SET_GPR_U32(ctx, 31, 0x172890u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x172888u, 0x172890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172890u;
label_172890:
    // 0x172890: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x172890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_172894:
    // 0x172894: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x172894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_172898:
    // 0x172898: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x172898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17289c:
    // 0x17289c: 0xc056094  jal         func_158250
label_1728a0:
    if (ctx->pc == 0x1728A0u) {
        ctx->pc = 0x1728A4u;
        goto label_1728a4;
    }
    ctx->pc = 0x17289Cu;
    SET_GPR_U32(ctx, 31, 0x1728A4u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x17289Cu, 0x1728A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1728A4u;
label_1728a4:
    // 0x1728a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1728a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1728a8:
    // 0x1728a8: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1728a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1728ac:
    // 0x1728ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1728acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1728b0:
    // 0x1728b0: 0xc056094  jal         func_158250
label_1728b4:
    if (ctx->pc == 0x1728B4u) {
        ctx->pc = 0x1728B8u;
        goto label_1728b8;
    }
    ctx->pc = 0x1728B0u;
    SET_GPR_U32(ctx, 31, 0x1728B8u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1728B0u, 0x1728B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1728B8u;
label_1728b8:
    // 0x1728b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1728b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1728bc:
    // 0x1728bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1728bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1728c0:
    // 0x1728c0: 0xc055950  jal         func_156540
label_1728c4:
    if (ctx->pc == 0x1728C4u) {
        ctx->pc = 0x1728C8u;
        goto label_1728c8;
    }
    ctx->pc = 0x1728C0u;
    SET_GPR_U32(ctx, 31, 0x1728C8u);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x1728C0u, 0x1728C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1728C8u;
label_1728c8:
    // 0x1728c8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1728c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_1728cc:
    // 0x1728cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1728ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1728d0:
    // 0x1728d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1728d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1728d4:
    // 0x1728d4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1728d8:
    if (ctx->pc == 0x1728D8u) {
        ctx->pc = 0x1728DCu;
        goto label_1728dc;
    }
    ctx->pc = 0x1728D4u;
    {
        const bool branch_taken_0x1728d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1728d4) {
            ctx->pc = 0x1728E8u;
            goto label_1728e8;
        }
    }
    ctx->pc = 0x1728DCu;
label_1728dc:
    // 0x1728dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1728dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1728e0:
    // 0x1728e0: 0xc0ba070  jal         func_2E81C0
label_1728e4:
    if (ctx->pc == 0x1728E4u) {
        ctx->pc = 0x1728E8u;
        goto label_1728e8;
    }
    ctx->pc = 0x1728E0u;
    SET_GPR_U32(ctx, 31, 0x1728E8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1728E0u, 0x1728E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1728E8u;
label_1728e8:
    // 0x1728e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1728e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1728ec:
    // 0x1728ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1728ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1728f0:
    // 0x1728f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1728f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1728f4:
    // 0x1728f4: 0x3e00008  jr          $ra
label_1728f8:
    if (ctx->pc == 0x1728F8u) {
        ctx->pc = 0x1728FCu;
        goto label_1728fc;
    }
    ctx->pc = 0x1728F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1728F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1728FCu;
label_1728fc:
    // 0x1728fc: 0x0  nop
    ctx->pc = 0x1728fcu;
    // NOP
label_172900:
    // 0x172900: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x172900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_172904:
    // 0x172904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x172904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_172908:
    // 0x172908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17290c:
    // 0x17290c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17290cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_172910:
    // 0x172910: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x172910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_172914:
    // 0x172914: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x172914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_172918:
    // 0x172918: 0xc055974  jal         func_1565D0
label_17291c:
    if (ctx->pc == 0x17291Cu) {
        ctx->pc = 0x172920u;
        goto label_172920;
    }
    ctx->pc = 0x172918u;
    SET_GPR_U32(ctx, 31, 0x172920u);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x172918u, 0x172920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172920u;
label_172920:
    // 0x172920: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x172920u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_172924:
    // 0x172924: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x172924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_172928:
    // 0x172928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17292c:
    // 0x17292c: 0x1462005c  bne         $v1, $v0, . + 4 + (0x5C << 2)
label_172930:
    if (ctx->pc == 0x172930u) {
        ctx->pc = 0x172934u;
        goto label_172934;
    }
    ctx->pc = 0x17292Cu;
    {
        const bool branch_taken_0x17292c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17292c) {
            ctx->pc = 0x172AA0u;
            goto label_172aa0;
        }
    }
    ctx->pc = 0x172934u;
label_172934:
    // 0x172934: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x172934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_172938:
    // 0x172938: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x172938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_17293c:
    // 0x17293c: 0x24a546e0  addiu       $a1, $a1, 0x46E0
    ctx->pc = 0x17293cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18144));
label_172940:
    // 0x172940: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x172940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172944:
    // 0x172944: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x172944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_172948:
    // 0x172948: 0x320f809  jalr        $t9
label_17294c:
    if (ctx->pc == 0x17294Cu) {
        ctx->pc = 0x172950u;
        goto label_172950;
    }
    ctx->pc = 0x172948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172950u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172948u, 0x172950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172950u;
label_172950:
    // 0x172950: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x172950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_172954:
    // 0x172954: 0x27859080  addiu       $a1, $gp, -0x6F80
    ctx->pc = 0x172954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938752));
label_172958:
    // 0x172958: 0xc0bc3e2  jal         func_2F0F88
label_17295c:
    if (ctx->pc == 0x17295Cu) {
        ctx->pc = 0x172960u;
        goto label_172960;
    }
    ctx->pc = 0x172958u;
    SET_GPR_U32(ctx, 31, 0x172960u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x172958u, 0x172960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172960u;
label_172960:
    // 0x172960: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x172960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_172964:
    // 0x172964: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x172964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_172968:
    // 0x172968: 0xc0552e4  jal         func_154B90
label_17296c:
    if (ctx->pc == 0x17296Cu) {
        ctx->pc = 0x172970u;
        goto label_172970;
    }
    ctx->pc = 0x172968u;
    SET_GPR_U32(ctx, 31, 0x172970u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x172968u, 0x172970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172970u;
label_172970:
    // 0x172970: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x172970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_172974:
    // 0x172974: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x172974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
label_172978:
    // 0x172978: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x172978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_17297c:
    // 0x17297c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_172980:
    // 0x172980: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x172980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_172984:
    // 0x172984: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x172984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_172988:
    // 0x172988: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17298c:
    // 0x17298c: 0xc08c8dc  jal         func_232370
label_172990:
    if (ctx->pc == 0x172990u) {
        ctx->pc = 0x172994u;
        goto label_172994;
    }
    ctx->pc = 0x17298Cu;
    SET_GPR_U32(ctx, 31, 0x172994u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17298Cu, 0x172994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172994u;
label_172994:
    // 0x172994: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x172994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_172998:
    // 0x172998: 0x27859088  addiu       $a1, $gp, -0x6F78
    ctx->pc = 0x172998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938760));
label_17299c:
    // 0x17299c: 0xc0bc3e2  jal         func_2F0F88
label_1729a0:
    if (ctx->pc == 0x1729A0u) {
        ctx->pc = 0x1729A4u;
        goto label_1729a4;
    }
    ctx->pc = 0x17299Cu;
    SET_GPR_U32(ctx, 31, 0x1729A4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x17299Cu, 0x1729A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1729A4u;
label_1729a4:
    // 0x1729a4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1729a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1729a8:
    // 0x1729a8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1729a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1729ac:
    // 0x1729ac: 0xc0552e4  jal         func_154B90
label_1729b0:
    if (ctx->pc == 0x1729B0u) {
        ctx->pc = 0x1729B4u;
        goto label_1729b4;
    }
    ctx->pc = 0x1729ACu;
    SET_GPR_U32(ctx, 31, 0x1729B4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1729ACu, 0x1729B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1729B4u;
label_1729b4:
    // 0x1729b4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1729b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1729b8:
    // 0x1729b8: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x1729b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
label_1729bc:
    // 0x1729bc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1729bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1729c0:
    // 0x1729c0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1729c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1729c4:
    // 0x1729c4: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1729c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1729c8:
    // 0x1729c8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1729c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1729cc:
    // 0x1729cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1729ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1729d0:
    // 0x1729d0: 0xc08c8dc  jal         func_232370
label_1729d4:
    if (ctx->pc == 0x1729D4u) {
        ctx->pc = 0x1729D8u;
        goto label_1729d8;
    }
    ctx->pc = 0x1729D0u;
    SET_GPR_U32(ctx, 31, 0x1729D8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1729D0u, 0x1729D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1729D8u;
label_1729d8:
    // 0x1729d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1729d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1729dc:
    // 0x1729dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1729dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1729e0:
    // 0x1729e0: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x1729e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1729e4:
    // 0x1729e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1729e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1729e8:
    // 0x1729e8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1729e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1729ec:
    // 0x1729ec: 0x24a54700  addiu       $a1, $a1, 0x4700
    ctx->pc = 0x1729ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18176));
label_1729f0:
    // 0x1729f0: 0xc0bc3e2  jal         func_2F0F88
label_1729f4:
    if (ctx->pc == 0x1729F4u) {
        ctx->pc = 0x1729F8u;
        goto label_1729f8;
    }
    ctx->pc = 0x1729F0u;
    SET_GPR_U32(ctx, 31, 0x1729F8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1729F0u, 0x1729F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1729F8u;
label_1729f8:
    // 0x1729f8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1729f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1729fc:
    // 0x1729fc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1729fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_172a00:
    // 0x172a00: 0xc05621c  jal         func_158870
label_172a04:
    if (ctx->pc == 0x172A04u) {
        ctx->pc = 0x172A08u;
        goto label_172a08;
    }
    ctx->pc = 0x172A00u;
    SET_GPR_U32(ctx, 31, 0x172A08u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x172A00u, 0x172A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A08u;
label_172a08:
    // 0x172a08: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x172a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_172a0c:
    // 0x172a0c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x172a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_172a10:
    // 0x172a10: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_172a14:
    if (ctx->pc == 0x172A14u) {
        ctx->pc = 0x172A18u;
        goto label_172a18;
    }
    ctx->pc = 0x172A10u;
    {
        const bool branch_taken_0x172a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172a10) {
            ctx->pc = 0x172A4Cu;
            goto label_172a4c;
        }
    }
    ctx->pc = 0x172A18u;
label_172a18:
    // 0x172a18: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x172a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_172a1c:
    // 0x172a1c: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x172a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_172a20:
    // 0x172a20: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x172a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_172a24:
    // 0x172a24: 0xc05614c  jal         func_158530
label_172a28:
    if (ctx->pc == 0x172A28u) {
        ctx->pc = 0x172A2Cu;
        goto label_172a2c;
    }
    ctx->pc = 0x172A24u;
    SET_GPR_U32(ctx, 31, 0x172A2Cu);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x172A24u, 0x172A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A2Cu;
label_172a2c:
    // 0x172a2c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x172a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_172a30:
    // 0x172a30: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x172a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_172a34:
    // 0x172a34: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x172a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_172a38:
    // 0x172a38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172a3c:
    // 0x172a3c: 0xc08c8dc  jal         func_232370
label_172a40:
    if (ctx->pc == 0x172A40u) {
        ctx->pc = 0x172A44u;
        goto label_172a44;
    }
    ctx->pc = 0x172A3Cu;
    SET_GPR_U32(ctx, 31, 0x172A44u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x172A3Cu, 0x172A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A44u;
label_172a44:
    // 0x172a44: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_172a48:
    if (ctx->pc == 0x172A48u) {
        ctx->pc = 0x172A4Cu;
        goto label_172a4c;
    }
    ctx->pc = 0x172A44u;
    {
        const bool branch_taken_0x172a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172a44) {
            ctx->pc = 0x1729DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1729dc;
        }
    }
    ctx->pc = 0x172A4Cu;
label_172a4c:
    // 0x172a4c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x172a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_172a50:
    // 0x172a50: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x172a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_172a54:
    // 0x172a54: 0x24a54710  addiu       $a1, $a1, 0x4710
    ctx->pc = 0x172a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18192));
label_172a58:
    // 0x172a58: 0xc0bc3e2  jal         func_2F0F88
label_172a5c:
    if (ctx->pc == 0x172A5Cu) {
        ctx->pc = 0x172A60u;
        goto label_172a60;
    }
    ctx->pc = 0x172A58u;
    SET_GPR_U32(ctx, 31, 0x172A60u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x172A58u, 0x172A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A60u;
label_172a60:
    // 0x172a60: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x172a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_172a64:
    // 0x172a64: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x172a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_172a68:
    // 0x172a68: 0xc0552e4  jal         func_154B90
label_172a6c:
    if (ctx->pc == 0x172A6Cu) {
        ctx->pc = 0x172A70u;
        goto label_172a70;
    }
    ctx->pc = 0x172A68u;
    SET_GPR_U32(ctx, 31, 0x172A70u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x172A68u, 0x172A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A70u;
label_172a70:
    // 0x172a70: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x172a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_172a74:
    // 0x172a74: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x172a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_172a78:
    // 0x172a78: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x172a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_172a7c:
    // 0x172a7c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x172a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_172a80:
    // 0x172a80: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x172a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_172a84:
    // 0x172a84: 0xc08c6c8  jal         func_231B20
label_172a88:
    if (ctx->pc == 0x172A88u) {
        ctx->pc = 0x172A8Cu;
        goto label_172a8c;
    }
    ctx->pc = 0x172A84u;
    SET_GPR_U32(ctx, 31, 0x172A8Cu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x172A84u, 0x172A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A8Cu;
label_172a8c:
    // 0x172a8c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x172a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172a90:
    // 0x172a90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172a90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_172a94:
    // 0x172a94: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x172a94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_172a98:
    // 0x172a98: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x172a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_172a9c:
    // 0x172a9c: 0xac43007c  sw          $v1, 0x7C($v0)
    ctx->pc = 0x172a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
label_172aa0:
    // 0x172aa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x172aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172aa4:
    // 0x172aa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_172aa8:
    // 0x172aa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_172aac:
    // 0x172aac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_172ab0:
    // 0x172ab0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x172ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_172ab4:
    // 0x172ab4: 0x3e00008  jr          $ra
label_172ab8:
    if (ctx->pc == 0x172AB8u) {
        ctx->pc = 0x172ABCu;
        goto label_172abc;
    }
    ctx->pc = 0x172AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172ABCu;
label_172abc:
    // 0x172abc: 0x0  nop
    ctx->pc = 0x172abcu;
    // NOP
label_172ac0:
    // 0x172ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_172ac4:
    // 0x172ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_172ac8:
    // 0x172ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_172acc:
    // 0x172acc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x172accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_172ad0:
    // 0x172ad0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x172ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_172ad4:
    // 0x172ad4: 0xc0559ac  jal         func_1566B0
label_172ad8:
    if (ctx->pc == 0x172AD8u) {
        ctx->pc = 0x172ADCu;
        goto label_172adc;
    }
    ctx->pc = 0x172AD4u;
    SET_GPR_U32(ctx, 31, 0x172ADCu);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x172AD4u, 0x172ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172ADCu;
label_172adc:
    // 0x172adc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x172adcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_172ae0:
    // 0x172ae0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x172ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172ae4:
    // 0x172ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x172ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_172ae8:
    // 0x172ae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_172aec:
    // 0x172aec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x172aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_172af0:
    // 0x172af0: 0x3e00008  jr          $ra
label_172af4:
    if (ctx->pc == 0x172AF4u) {
        ctx->pc = 0x172AF8u;
        goto label_172af8;
    }
    ctx->pc = 0x172AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172AF8u;
label_172af8:
    // 0x172af8: 0x0  nop
    ctx->pc = 0x172af8u;
    // NOP
label_172afc:
    // 0x172afc: 0x0  nop
    ctx->pc = 0x172afcu;
    // NOP
label_172b00:
    // 0x172b00: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x172b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_172b04:
    // 0x172b04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x172b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_172b08:
    // 0x172b08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x172b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_172b0c:
    // 0x172b0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x172b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_172b10:
    // 0x172b10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x172b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_172b14:
    // 0x172b14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x172b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_172b18:
    // 0x172b18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x172b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_172b1c:
    // 0x172b1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x172b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_172b20:
    // 0x172b20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x172b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_172b24:
    // 0x172b24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_172b28:
    // 0x172b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_172b2c:
    // 0x172b2c: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x172b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_172b30:
    // 0x172b30: 0xa3a50280  sb          $a1, 0x280($sp)
    ctx->pc = 0x172b30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 640), (uint8_t)GPR_U32(ctx, 5));
label_172b34:
    // 0x172b34: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x172b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_172b38:
    // 0x172b38: 0x93a50280  lbu         $a1, 0x280($sp)
    ctx->pc = 0x172b38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 640)));
label_172b3c:
    // 0x172b3c: 0xc055a78  jal         func_1569E0
label_172b40:
    if (ctx->pc == 0x172B40u) {
        ctx->pc = 0x172B44u;
        goto label_172b44;
    }
    ctx->pc = 0x172B3Cu;
    SET_GPR_U32(ctx, 31, 0x172B44u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x172B3Cu, 0x172B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B44u;
label_172b44:
    // 0x172b44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x172b44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172b48:
    // 0x172b48: 0xc05548c  jal         func_155230
label_172b4c:
    if (ctx->pc == 0x172B4Cu) {
        ctx->pc = 0x172B50u;
        goto label_172b50;
    }
    ctx->pc = 0x172B48u;
    SET_GPR_U32(ctx, 31, 0x172B50u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x172B48u, 0x172B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B50u;
label_172b50:
    // 0x172b50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172b54:
    // 0x172b54: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x172b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_172b58:
    // 0x172b58: 0xc0553d4  jal         func_154F50
label_172b5c:
    if (ctx->pc == 0x172B5Cu) {
        ctx->pc = 0x172B60u;
        goto label_172b60;
    }
    ctx->pc = 0x172B58u;
    SET_GPR_U32(ctx, 31, 0x172B60u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x172B58u, 0x172B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B60u;
label_172b60:
    // 0x172b60: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x172b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_172b64:
    // 0x172b64: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x172b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_172b68:
    // 0x172b68: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_172b6c:
    if (ctx->pc == 0x172B6Cu) {
        ctx->pc = 0x172B70u;
        goto label_172b70;
    }
    ctx->pc = 0x172B68u;
    {
        const bool branch_taken_0x172b68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x172b68) {
            ctx->pc = 0x172B94u;
            goto label_172b94;
        }
    }
    ctx->pc = 0x172B70u;
label_172b70:
    // 0x172b70: 0x93a40280  lbu         $a0, 0x280($sp)
    ctx->pc = 0x172b70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 640)));
label_172b74:
    // 0x172b74: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x172b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_172b78:
    // 0x172b78: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x172b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_172b7c:
    // 0x172b7c: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x172b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_172b80:
    // 0x172b80: 0x93a50280  lbu         $a1, 0x280($sp)
    ctx->pc = 0x172b80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 640)));
label_172b84:
    // 0x172b84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x172b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172b88:
    // 0x172b88: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x172b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_172b8c:
    // 0x172b8c: 0x320f809  jalr        $t9
label_172b90:
    if (ctx->pc == 0x172B90u) {
        ctx->pc = 0x172B94u;
        goto label_172b94;
    }
    ctx->pc = 0x172B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172B94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172B8Cu, 0x172B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172B94u;
label_172b94:
    // 0x172b94: 0xa3a0026f  sb          $zero, 0x26F($sp)
    ctx->pc = 0x172b94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 623), (uint8_t)GPR_U32(ctx, 0));
label_172b98:
    // 0x172b98: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x172b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_172b9c:
    // 0x172b9c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x172b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_172ba0:
    // 0x172ba0: 0xc047eb8  jal         func_11FAE0
label_172ba4:
    if (ctx->pc == 0x172BA4u) {
        ctx->pc = 0x172BA8u;
        goto label_172ba8;
    }
    ctx->pc = 0x172BA0u;
    SET_GPR_U32(ctx, 31, 0x172BA8u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x172BA0u, 0x172BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BA8u;
label_172ba8:
    // 0x172ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172bac:
    // 0x172bac: 0xc08d5d8  jal         func_235760
label_172bb0:
    if (ctx->pc == 0x172BB0u) {
        ctx->pc = 0x172BB4u;
        goto label_172bb4;
    }
    ctx->pc = 0x172BACu;
    SET_GPR_U32(ctx, 31, 0x172BB4u);
    ctx->pc = 0x235760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235760u, 0x172BACu, 0x172BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BB4u;
label_172bb4:
    // 0x172bb4: 0xe7a00264  swc1        $f0, 0x264($sp)
    ctx->pc = 0x172bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_172bb8:
    // 0x172bb8: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x172bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_172bbc:
    // 0x172bbc: 0x27859090  addiu       $a1, $gp, -0x6F70
    ctx->pc = 0x172bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938768));
label_172bc0:
    // 0x172bc0: 0xc05621c  jal         func_158870
label_172bc4:
    if (ctx->pc == 0x172BC4u) {
        ctx->pc = 0x172BC8u;
        goto label_172bc8;
    }
    ctx->pc = 0x172BC0u;
    SET_GPR_U32(ctx, 31, 0x172BC8u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x172BC0u, 0x172BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BC8u;
label_172bc8:
    // 0x172bc8: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x172bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_172bcc:
    // 0x172bcc: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x172bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_172bd0:
    // 0x172bd0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x172bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_172bd4:
    // 0x172bd4: 0x24a54738  addiu       $a1, $a1, 0x4738
    ctx->pc = 0x172bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18232));
label_172bd8:
    // 0x172bd8: 0xc05621c  jal         func_158870
label_172bdc:
    if (ctx->pc == 0x172BDCu) {
        ctx->pc = 0x172BE0u;
        goto label_172be0;
    }
    ctx->pc = 0x172BD8u;
    SET_GPR_U32(ctx, 31, 0x172BE0u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x172BD8u, 0x172BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BE0u;
label_172be0:
    // 0x172be0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x172be0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172be4:
    // 0x172be4: 0x93a70280  lbu         $a3, 0x280($sp)
    ctx->pc = 0x172be4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 640)));
label_172be8:
    // 0x172be8: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x172be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_172bec:
    // 0x172bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x172becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172bf0:
    // 0x172bf0: 0x14830175  bne         $a0, $v1, . + 4 + (0x175 << 2)
label_172bf4:
    if (ctx->pc == 0x172BF4u) {
        ctx->pc = 0x172BF8u;
        goto label_172bf8;
    }
    ctx->pc = 0x172BF0u;
    {
        const bool branch_taken_0x172bf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x172bf0) {
            ctx->pc = 0x1731C8u;
            goto label_1731c8;
        }
    }
    ctx->pc = 0x172BF8u;
label_172bf8:
    // 0x172bf8: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x172bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_172bfc:
    // 0x172bfc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_172c00:
    if (ctx->pc == 0x172C00u) {
        ctx->pc = 0x172C04u;
        goto label_172c04;
    }
    ctx->pc = 0x172BFCu;
    {
        const bool branch_taken_0x172bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172bfc) {
            ctx->pc = 0x172C20u;
            goto label_172c20;
        }
    }
    ctx->pc = 0x172C04u;
label_172c04:
    // 0x172c04: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x172c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_172c08:
    // 0x172c08: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x172c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_172c0c:
    // 0x172c0c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x172c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_172c10:
    // 0x172c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172c14:
    // 0x172c14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x172c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172c18:
    // 0x172c18: 0xc08c8dc  jal         func_232370
label_172c1c:
    if (ctx->pc == 0x172C1Cu) {
        ctx->pc = 0x172C20u;
        goto label_172c20;
    }
    ctx->pc = 0x172C18u;
    SET_GPR_U32(ctx, 31, 0x172C20u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x172C18u, 0x172C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C20u;
label_172c20:
    // 0x172c20: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
label_172c24:
    if (ctx->pc == 0x172C24u) {
        ctx->pc = 0x172C28u;
        goto label_172c28;
    }
    ctx->pc = 0x172C20u;
    {
        const bool branch_taken_0x172c20 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x172c20) {
            ctx->pc = 0x172C40u;
            goto label_172c40;
        }
    }
    ctx->pc = 0x172C28u;
label_172c28:
    // 0x172c28: 0x8fb70270  lw          $s7, 0x270($sp)
    ctx->pc = 0x172c28u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_172c2c:
    // 0x172c2c: 0x8ee40034  lw          $a0, 0x34($s7)
    ctx->pc = 0x172c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
label_172c30:
    // 0x172c30: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x172c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_172c34:
    // 0x172c34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x172c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172c38:
    // 0x172c38: 0xc08c8dc  jal         func_232370
label_172c3c:
    if (ctx->pc == 0x172C3Cu) {
        ctx->pc = 0x172C40u;
        goto label_172c40;
    }
    ctx->pc = 0x172C38u;
    SET_GPR_U32(ctx, 31, 0x172C40u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x172C38u, 0x172C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C40u;
label_172c40:
    // 0x172c40: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x172c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_172c44:
    // 0x172c44: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x172c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_172c48:
    // 0x172c48: 0x24a54748  addiu       $a1, $a1, 0x4748
    ctx->pc = 0x172c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18248));
label_172c4c:
    // 0x172c4c: 0xc05621c  jal         func_158870
label_172c50:
    if (ctx->pc == 0x172C50u) {
        ctx->pc = 0x172C54u;
        goto label_172c54;
    }
    ctx->pc = 0x172C4Cu;
    SET_GPR_U32(ctx, 31, 0x172C54u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x172C4Cu, 0x172C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C54u;
label_172c54:
    // 0x172c54: 0xafa2025c  sw          $v0, 0x25C($sp)
    ctx->pc = 0x172c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
label_172c58:
    // 0x172c58: 0x8fa4025c  lw          $a0, 0x25C($sp)
    ctx->pc = 0x172c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_172c5c:
    // 0x172c5c: 0x1080015a  beqz        $a0, . + 4 + (0x15A << 2)
label_172c60:
    if (ctx->pc == 0x172C60u) {
        ctx->pc = 0x172C64u;
        goto label_172c64;
    }
    ctx->pc = 0x172C5Cu;
    {
        const bool branch_taken_0x172c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172c5c) {
            ctx->pc = 0x1731C8u;
            goto label_1731c8;
        }
    }
    ctx->pc = 0x172C64u;
label_172c64:
    // 0x172c64: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x172c64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_172c68:
    // 0x172c68: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x172c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_172c6c:
    // 0x172c6c: 0xc047eb8  jal         func_11FAE0
label_172c70:
    if (ctx->pc == 0x172C70u) {
        ctx->pc = 0x172C74u;
        goto label_172c74;
    }
    ctx->pc = 0x172C6Cu;
    SET_GPR_U32(ctx, 31, 0x172C74u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x172C6Cu, 0x172C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C74u;
label_172c74:
    // 0x172c74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172c78:
    // 0x172c78: 0x24050533  addiu       $a1, $zero, 0x533
    ctx->pc = 0x172c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1331));
label_172c7c:
    // 0x172c7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172c80:
    // 0x172c80: 0xc040ab0  jal         func_102AC0
label_172c84:
    if (ctx->pc == 0x172C84u) {
        ctx->pc = 0x172C88u;
        goto label_172c88;
    }
    ctx->pc = 0x172C80u;
    SET_GPR_U32(ctx, 31, 0x172C88u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x172C80u, 0x172C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C88u;
label_172c88:
    // 0x172c88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x172c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172c8c:
    // 0x172c8c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x172c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_172c90:
    // 0x172c90: 0xc047eb8  jal         func_11FAE0
label_172c94:
    if (ctx->pc == 0x172C94u) {
        ctx->pc = 0x172C98u;
        goto label_172c98;
    }
    ctx->pc = 0x172C90u;
    SET_GPR_U32(ctx, 31, 0x172C98u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x172C90u, 0x172C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C98u;
label_172c98:
    // 0x172c98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172c9c:
    // 0x172c9c: 0xc047eb0  jal         func_11FAC0
label_172ca0:
    if (ctx->pc == 0x172CA0u) {
        ctx->pc = 0x172CA4u;
        goto label_172ca4;
    }
    ctx->pc = 0x172C9Cu;
    SET_GPR_U32(ctx, 31, 0x172CA4u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x172C9Cu, 0x172CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172CA4u;
label_172ca4:
    // 0x172ca4: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x172ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
label_172ca8:
    // 0x172ca8: 0x8fa30258  lw          $v1, 0x258($sp)
    ctx->pc = 0x172ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_172cac:
    // 0x172cac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x172cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_172cb0:
    // 0x172cb0: 0xafa30254  sw          $v1, 0x254($sp)
    ctx->pc = 0x172cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 3));
label_172cb4:
    // 0x172cb4: 0x8fa30254  lw          $v1, 0x254($sp)
    ctx->pc = 0x172cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_172cb8:
    // 0x172cb8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_172cbc:
    if (ctx->pc == 0x172CBCu) {
        ctx->pc = 0x172CC0u;
        goto label_172cc0;
    }
    ctx->pc = 0x172CB8u;
    {
        const bool branch_taken_0x172cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172cb8) {
            ctx->pc = 0x172D04u;
            goto label_172d04;
        }
    }
    ctx->pc = 0x172CC0u;
label_172cc0:
    // 0x172cc0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x172cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_172cc4:
    // 0x172cc4: 0xc047eb8  jal         func_11FAE0
label_172cc8:
    if (ctx->pc == 0x172CC8u) {
        ctx->pc = 0x172CCCu;
        goto label_172ccc;
    }
    ctx->pc = 0x172CC4u;
    SET_GPR_U32(ctx, 31, 0x172CCCu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x172CC4u, 0x172CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172CCCu;
label_172ccc:
    // 0x172ccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172cd0:
    // 0x172cd0: 0x24050572  addiu       $a1, $zero, 0x572
    ctx->pc = 0x172cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1394));
label_172cd4:
    // 0x172cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172cd8:
    // 0x172cd8: 0xc040ab0  jal         func_102AC0
label_172cdc:
    if (ctx->pc == 0x172CDCu) {
        ctx->pc = 0x172CE0u;
        goto label_172ce0;
    }
    ctx->pc = 0x172CD8u;
    SET_GPR_U32(ctx, 31, 0x172CE0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x172CD8u, 0x172CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172CE0u;
label_172ce0:
    // 0x172ce0: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x172ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
label_172ce4:
    // 0x172ce4: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x172ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_172ce8:
    // 0x172ce8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_172cec:
    if (ctx->pc == 0x172CECu) {
        ctx->pc = 0x172CF0u;
        goto label_172cf0;
    }
    ctx->pc = 0x172CE8u;
    {
        const bool branch_taken_0x172ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ce8) {
            ctx->pc = 0x172D04u;
            goto label_172d04;
        }
    }
    ctx->pc = 0x172CF0u;
label_172cf0:
    // 0x172cf0: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x172cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_172cf4:
    // 0x172cf4: 0x14d10003  bne         $a2, $s1, . + 4 + (0x3 << 2)
label_172cf8:
    if (ctx->pc == 0x172CF8u) {
        ctx->pc = 0x172CFCu;
        goto label_172cfc;
    }
    ctx->pc = 0x172CF4u;
    {
        const bool branch_taken_0x172cf4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x172cf4) {
            ctx->pc = 0x172D04u;
            goto label_172d04;
        }
    }
    ctx->pc = 0x172CFCu;
label_172cfc:
    // 0x172cfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x172cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172d00:
    // 0x172d00: 0xa3a3026f  sb          $v1, 0x26F($sp)
    ctx->pc = 0x172d00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 623), (uint8_t)GPR_U32(ctx, 3));
label_172d04:
    // 0x172d04: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x172d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_172d08:
    // 0x172d08: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x172d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172d0c:
    // 0x172d0c: 0x10a00059  beqz        $a1, . + 4 + (0x59 << 2)
label_172d10:
    if (ctx->pc == 0x172D10u) {
        ctx->pc = 0x172D14u;
        goto label_172d14;
    }
    ctx->pc = 0x172D0Cu;
    {
        const bool branch_taken_0x172d0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d0c) {
            ctx->pc = 0x172E74u;
            goto label_172e74;
        }
    }
    ctx->pc = 0x172D14u;
label_172d14:
    // 0x172d14: 0x220082a  slt         $at, $s1, $zero
    ctx->pc = 0x172d14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_172d18:
    // 0x172d18: 0x10200056  beqz        $at, . + 4 + (0x56 << 2)
label_172d1c:
    if (ctx->pc == 0x172D1Cu) {
        ctx->pc = 0x172D20u;
        goto label_172d20;
    }
    ctx->pc = 0x172D18u;
    {
        const bool branch_taken_0x172d18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d18) {
            ctx->pc = 0x172E74u;
            goto label_172e74;
        }
    }
    ctx->pc = 0x172D20u;
label_172d20:
    // 0x172d20: 0x2a21d8f1  slti        $at, $s1, -0x270F
    ctx->pc = 0x172d20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294957297) ? 1 : 0);
label_172d24:
    // 0x172d24: 0x14200053  bnez        $at, . + 4 + (0x53 << 2)
label_172d28:
    if (ctx->pc == 0x172D28u) {
        ctx->pc = 0x172D2Cu;
        goto label_172d2c;
    }
    ctx->pc = 0x172D24u;
    {
        const bool branch_taken_0x172d24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x172d24) {
            ctx->pc = 0x172E74u;
            goto label_172e74;
        }
    }
    ctx->pc = 0x172D2Cu;
label_172d2c:
    // 0x172d2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172d30:
    // 0x172d30: 0x0  nop
    ctx->pc = 0x172d30u;
    // NOP
label_172d34:
    // 0x172d34: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x172d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_172d38:
    // 0x172d38: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x172d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_172d3c:
    // 0x172d3c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x172d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172d40:
    // 0x172d40: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x172d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_172d44:
    // 0x172d44: 0xc085538  jal         func_2154E0
label_172d48:
    if (ctx->pc == 0x172D48u) {
        ctx->pc = 0x172D4Cu;
        goto label_172d4c;
    }
    ctx->pc = 0x172D44u;
    SET_GPR_U32(ctx, 31, 0x172D4Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x172D44u, 0x172D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D4Cu;
label_172d4c:
    // 0x172d4c: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x172d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_172d50:
    // 0x172d50: 0x8fa30248  lw          $v1, 0x248($sp)
    ctx->pc = 0x172d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_172d54:
    // 0x172d54: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_172d58:
    if (ctx->pc == 0x172D58u) {
        ctx->pc = 0x172D5Cu;
        goto label_172d5c;
    }
    ctx->pc = 0x172D54u;
    {
        const bool branch_taken_0x172d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d54) {
            ctx->pc = 0x172E74u;
            goto label_172e74;
        }
    }
    ctx->pc = 0x172D5Cu;
label_172d5c:
    // 0x172d5c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x172d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_172d60:
    // 0x172d60: 0x24634728  addiu       $v1, $v1, 0x4728
    ctx->pc = 0x172d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18216));
label_172d64:
    // 0x172d64: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x172d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_172d68:
    // 0x172d68: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x172d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_172d6c:
    // 0x172d6c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x172d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172d70:
    // 0x172d70: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x172d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172d74:
    // 0x172d74: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x172d74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_172d78:
    // 0x172d78: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x172d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_172d7c:
    // 0x172d7c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x172d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_172d80:
    // 0x172d80: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x172d80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172d84:
    // 0x172d84: 0x10000038  b           . + 4 + (0x38 << 2)
label_172d88:
    if (ctx->pc == 0x172D88u) {
        ctx->pc = 0x172D8Cu;
        goto label_172d8c;
    }
    ctx->pc = 0x172D84u;
    {
        const bool branch_taken_0x172d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d84) {
            ctx->pc = 0x172E68u;
            goto label_172e68;
        }
    }
    ctx->pc = 0x172D8Cu;
label_172d8c:
    // 0x172d8c: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x172d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_172d90:
    // 0x172d90: 0xc05ce40  jal         func_173900
label_172d94:
    if (ctx->pc == 0x172D94u) {
        ctx->pc = 0x172D98u;
        goto label_172d98;
    }
    ctx->pc = 0x172D90u;
    SET_GPR_U32(ctx, 31, 0x172D98u);
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x172D90u, 0x172D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D98u;
label_172d98:
    // 0x172d98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172d9c:
    // 0x172d9c: 0xc040aa8  jal         func_102AA0
label_172da0:
    if (ctx->pc == 0x172DA0u) {
        ctx->pc = 0x172DA4u;
        goto label_172da4;
    }
    ctx->pc = 0x172D9Cu;
    SET_GPR_U32(ctx, 31, 0x172DA4u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x172D9Cu, 0x172DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172DA4u;
label_172da4:
    // 0x172da4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172da8:
    // 0x172da8: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x172da8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_172dac:
    // 0x172dac: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x172dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_172db0:
    // 0x172db0: 0x8c460228  lw          $a2, 0x228($v0)
    ctx->pc = 0x172db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 552)));
label_172db4:
    // 0x172db4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x172db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_172db8:
    // 0x172db8: 0xc040a90  jal         func_102A40
label_172dbc:
    if (ctx->pc == 0x172DBCu) {
        ctx->pc = 0x172DC0u;
        goto label_172dc0;
    }
    ctx->pc = 0x172DB8u;
    SET_GPR_U32(ctx, 31, 0x172DC0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x172DB8u, 0x172DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172DC0u;
label_172dc0:
    // 0x172dc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x172dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_172dc4:
    // 0x172dc4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x172dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_172dc8:
    // 0x172dc8: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x172dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_172dcc:
    // 0x172dcc: 0xc05ce40  jal         func_173900
label_172dd0:
    if (ctx->pc == 0x172DD0u) {
        ctx->pc = 0x172DD4u;
        goto label_172dd4;
    }
    ctx->pc = 0x172DCCu;
    SET_GPR_U32(ctx, 31, 0x172DD4u);
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x172DCCu, 0x172DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172DD4u;
label_172dd4:
    // 0x172dd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172dd8:
    // 0x172dd8: 0xc040aa8  jal         func_102AA0
label_172ddc:
    if (ctx->pc == 0x172DDCu) {
        ctx->pc = 0x172DE0u;
        goto label_172de0;
    }
    ctx->pc = 0x172DD8u;
    SET_GPR_U32(ctx, 31, 0x172DE0u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x172DD8u, 0x172DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172DE0u;
label_172de0:
    // 0x172de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172de4:
    // 0x172de4: 0x153080  sll         $a2, $s5, 2
    ctx->pc = 0x172de4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_172de8:
    // 0x172de8: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x172de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_172dec:
    // 0x172dec: 0x8c450228  lw          $a1, 0x228($v0)
    ctx->pc = 0x172decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 552)));
label_172df0:
    // 0x172df0: 0xc040a90  jal         func_102A40
label_172df4:
    if (ctx->pc == 0x172DF4u) {
        ctx->pc = 0x172DF8u;
        goto label_172df8;
    }
    ctx->pc = 0x172DF0u;
    SET_GPR_U32(ctx, 31, 0x172DF8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x172DF0u, 0x172DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172DF8u;
label_172df8:
    // 0x172df8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x172df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_172dfc:
    // 0x172dfc: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x172dfcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_172e00:
    // 0x172e00: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x172e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172e04:
    // 0x172e04: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x172e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172e08:
    // 0x172e08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x172e08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_172e0c:
    // 0x172e0c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x172e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_172e10:
    // 0x172e10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172e14:
    // 0x172e14: 0x0  nop
    ctx->pc = 0x172e14u;
    // NOP
label_172e18:
    // 0x172e18: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x172e18u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_172e1c:
    // 0x172e1c: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x172e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_172e20:
    // 0x172e20: 0xc7a10244  lwc1        $f1, 0x244($sp)
    ctx->pc = 0x172e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172e24:
    // 0x172e24: 0x3c043f40  lui         $a0, 0x3F40
    ctx->pc = 0x172e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16192 << 16));
label_172e28:
    // 0x172e28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x172e28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172e2c:
    // 0x172e2c: 0x0  nop
    ctx->pc = 0x172e2cu;
    // NOP
label_172e30:
    // 0x172e30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x172e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172e34:
    // 0x172e34: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_172e38:
    if (ctx->pc == 0x172E38u) {
        ctx->pc = 0x172E3Cu;
        goto label_172e3c;
    }
    ctx->pc = 0x172E34u;
    {
        const bool branch_taken_0x172e34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172e34) {
            ctx->pc = 0x172E64u;
            goto label_172e64;
        }
    }
    ctx->pc = 0x172E3Cu;
label_172e3c:
    // 0x172e3c: 0xc7a10244  lwc1        $f1, 0x244($sp)
    ctx->pc = 0x172e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172e40:
    // 0x172e40: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x172e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172e44:
    // 0x172e44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172e48:
    // 0x172e48: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_172e4c:
    if (ctx->pc == 0x172E4Cu) {
        ctx->pc = 0x172E50u;
        goto label_172e50;
    }
    ctx->pc = 0x172E48u;
    {
        const bool branch_taken_0x172e48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172e48) {
            ctx->pc = 0x172E64u;
            goto label_172e64;
        }
    }
    ctx->pc = 0x172E50u;
label_172e50:
    // 0x172e50: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x172e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172e54:
    // 0x172e54: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x172e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_172e58:
    // 0x172e58: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x172e58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_172e5c:
    // 0x172e5c: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x172e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_172e60:
    // 0x172e60: 0x8c730228  lw          $s3, 0x228($v1)
    ctx->pc = 0x172e60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 552)));
label_172e64:
    // 0x172e64: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x172e64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_172e68:
    // 0x172e68: 0x2aa30003  slti        $v1, $s5, 0x3
    ctx->pc = 0x172e68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_172e6c:
    // 0x172e6c: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
label_172e70:
    if (ctx->pc == 0x172E70u) {
        ctx->pc = 0x172E74u;
        goto label_172e74;
    }
    ctx->pc = 0x172E6Cu;
    {
        const bool branch_taken_0x172e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172e6c) {
            ctx->pc = 0x172D8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172d8c;
        }
    }
    ctx->pc = 0x172E74u;
label_172e74:
    // 0x172e74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x172e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_172e78:
    // 0x172e78: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x172e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_172e7c:
    // 0x172e7c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x172e7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_172e80:
    // 0x172e80: 0x12630081  beq         $s3, $v1, . + 4 + (0x81 << 2)
label_172e84:
    if (ctx->pc == 0x172E84u) {
        ctx->pc = 0x172E88u;
        goto label_172e88;
    }
    ctx->pc = 0x172E80u;
    {
        const bool branch_taken_0x172e80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x172e80) {
            ctx->pc = 0x173088u;
            goto label_173088;
        }
    }
    ctx->pc = 0x172E88u;
label_172e88:
    // 0x172e88: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x172e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_172e8c:
    // 0x172e8c: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x172e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_172e90:
    // 0x172e90: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x172e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_172e94:
    // 0x172e94: 0x24a54760  addiu       $a1, $a1, 0x4760
    ctx->pc = 0x172e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18272));
label_172e98:
    // 0x172e98: 0x27869098  addiu       $a2, $gp, -0x6F68
    ctx->pc = 0x172e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938776));
label_172e9c:
    // 0x172e9c: 0xc04206c  jal         func_1081B0
label_172ea0:
    if (ctx->pc == 0x172EA0u) {
        ctx->pc = 0x172EA4u;
        goto label_172ea4;
    }
    ctx->pc = 0x172E9Cu;
    SET_GPR_U32(ctx, 31, 0x172EA4u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x172E9Cu, 0x172EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EA4u;
label_172ea4:
    // 0x172ea4: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x172ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_172ea8:
    // 0x172ea8: 0x27a50218  addiu       $a1, $sp, 0x218
    ctx->pc = 0x172ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_172eac:
    // 0x172eac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x172eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_172eb0:
    // 0x172eb0: 0xc041b48  jal         func_106D20
label_172eb4:
    if (ctx->pc == 0x172EB4u) {
        ctx->pc = 0x172EB8u;
        goto label_172eb8;
    }
    ctx->pc = 0x172EB0u;
    SET_GPR_U32(ctx, 31, 0x172EB8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x172EB0u, 0x172EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EB8u;
label_172eb8:
    // 0x172eb8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x172eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_172ebc:
    // 0x172ebc: 0x8fa50240  lw          $a1, 0x240($sp)
    ctx->pc = 0x172ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_172ec0:
    // 0x172ec0: 0xc040304  jal         func_100C10
label_172ec4:
    if (ctx->pc == 0x172EC4u) {
        ctx->pc = 0x172EC8u;
        goto label_172ec8;
    }
    ctx->pc = 0x172EC0u;
    SET_GPR_U32(ctx, 31, 0x172EC8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x172EC0u, 0x172EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EC8u;
label_172ec8:
    // 0x172ec8: 0x27a40218  addiu       $a0, $sp, 0x218
    ctx->pc = 0x172ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_172ecc:
    // 0x172ecc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x172eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_172ed0:
    // 0x172ed0: 0xc1190f4  jal         func_4643D0
label_172ed4:
    if (ctx->pc == 0x172ED4u) {
        ctx->pc = 0x172ED8u;
        goto label_172ed8;
    }
    ctx->pc = 0x172ED0u;
    SET_GPR_U32(ctx, 31, 0x172ED8u);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x172ED0u, 0x172ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172ED8u;
label_172ed8:
    // 0x172ed8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x172ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_172edc:
    // 0x172edc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x172edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_172ee0:
    // 0x172ee0: 0xc0402d4  jal         func_100B50
label_172ee4:
    if (ctx->pc == 0x172EE4u) {
        ctx->pc = 0x172EE8u;
        goto label_172ee8;
    }
    ctx->pc = 0x172EE0u;
    SET_GPR_U32(ctx, 31, 0x172EE8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x172EE0u, 0x172EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EE8u;
label_172ee8:
    // 0x172ee8: 0x27a40208  addiu       $a0, $sp, 0x208
    ctx->pc = 0x172ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_172eec:
    // 0x172eec: 0xc041b48  jal         func_106D20
label_172ef0:
    if (ctx->pc == 0x172EF0u) {
        ctx->pc = 0x172EF4u;
        goto label_172ef4;
    }
    ctx->pc = 0x172EECu;
    SET_GPR_U32(ctx, 31, 0x172EF4u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x172EECu, 0x172EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EF4u;
label_172ef4:
    // 0x172ef4: 0x27a30218  addiu       $v1, $sp, 0x218
    ctx->pc = 0x172ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_172ef8:
    // 0x172ef8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x172ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_172efc:
    // 0x172efc: 0xc041b38  jal         func_106CE0
label_172f00:
    if (ctx->pc == 0x172F00u) {
        ctx->pc = 0x172F04u;
        goto label_172f04;
    }
    ctx->pc = 0x172EFCu;
    SET_GPR_U32(ctx, 31, 0x172F04u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x172EFCu, 0x172F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F04u;
label_172f04:
    // 0x172f04: 0x27a60208  addiu       $a2, $sp, 0x208
    ctx->pc = 0x172f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_172f08:
    // 0x172f08: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x172f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_172f0c:
    // 0x172f0c: 0x278590a0  addiu       $a1, $gp, -0x6F60
    ctx->pc = 0x172f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938784));
label_172f10:
    // 0x172f10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x172f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172f14:
    // 0x172f14: 0xc0424a8  jal         func_1092A0
label_172f18:
    if (ctx->pc == 0x172F18u) {
        ctx->pc = 0x172F1Cu;
        goto label_172f1c;
    }
    ctx->pc = 0x172F14u;
    SET_GPR_U32(ctx, 31, 0x172F1Cu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x172F14u, 0x172F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F1Cu;
label_172f1c:
    // 0x172f1c: 0x260082a  slt         $at, $s3, $zero
    ctx->pc = 0x172f1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_172f20:
    // 0x172f20: 0x1420004f  bnez        $at, . + 4 + (0x4F << 2)
label_172f24:
    if (ctx->pc == 0x172F24u) {
        ctx->pc = 0x172F28u;
        goto label_172f28;
    }
    ctx->pc = 0x172F20u;
    {
        const bool branch_taken_0x172f20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x172f20) {
            ctx->pc = 0x173060u;
            goto label_173060;
        }
    }
    ctx->pc = 0x172F28u;
label_172f28:
    // 0x172f28: 0x27a40218  addiu       $a0, $sp, 0x218
    ctx->pc = 0x172f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_172f2c:
    // 0x172f2c: 0xc041b38  jal         func_106CE0
label_172f30:
    if (ctx->pc == 0x172F30u) {
        ctx->pc = 0x172F34u;
        goto label_172f34;
    }
    ctx->pc = 0x172F2Cu;
    SET_GPR_U32(ctx, 31, 0x172F34u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x172F2Cu, 0x172F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F34u;
label_172f34:
    // 0x172f34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x172f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172f38:
    // 0x172f38: 0x27a40208  addiu       $a0, $sp, 0x208
    ctx->pc = 0x172f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_172f3c:
    // 0x172f3c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x172f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_172f40:
    // 0x172f40: 0x24a54780  addiu       $a1, $a1, 0x4780
    ctx->pc = 0x172f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18304));
label_172f44:
    // 0x172f44: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x172f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_172f48:
    // 0x172f48: 0xc0424a8  jal         func_1092A0
label_172f4c:
    if (ctx->pc == 0x172F4Cu) {
        ctx->pc = 0x172F50u;
        goto label_172f50;
    }
    ctx->pc = 0x172F48u;
    SET_GPR_U32(ctx, 31, 0x172F50u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x172F48u, 0x172F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F50u;
label_172f50:
    // 0x172f50: 0x8f86bbb4  lw          $a2, -0x444C($gp)
    ctx->pc = 0x172f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_172f54:
    // 0x172f54: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x172f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_172f58:
    // 0x172f58: 0xc047eb8  jal         func_11FAE0
label_172f5c:
    if (ctx->pc == 0x172F5Cu) {
        ctx->pc = 0x172F60u;
        goto label_172f60;
    }
    ctx->pc = 0x172F58u;
    SET_GPR_U32(ctx, 31, 0x172F60u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x172F58u, 0x172F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F60u;
label_172f60:
    // 0x172f60: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x172f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_172f64:
    // 0x172f64: 0x27a40208  addiu       $a0, $sp, 0x208
    ctx->pc = 0x172f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_172f68:
    // 0x172f68: 0xc041b38  jal         func_106CE0
label_172f6c:
    if (ctx->pc == 0x172F6Cu) {
        ctx->pc = 0x172F70u;
        goto label_172f70;
    }
    ctx->pc = 0x172F68u;
    SET_GPR_U32(ctx, 31, 0x172F70u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x172F68u, 0x172F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F70u;
label_172f70:
    // 0x172f70: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x172f70u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_172f74:
    // 0x172f74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172f78:
    // 0x172f78: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x172f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_172f7c:
    // 0x172f7c: 0xc047970  jal         func_11E5C0
label_172f80:
    if (ctx->pc == 0x172F80u) {
        ctx->pc = 0x172F84u;
        goto label_172f84;
    }
    ctx->pc = 0x172F7Cu;
    SET_GPR_U32(ctx, 31, 0x172F84u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x172F7Cu, 0x172F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F84u;
label_172f84:
    // 0x172f84: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x172f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
label_172f88:
    // 0x172f88: 0x8fa5023c  lw          $a1, 0x23C($sp)
    ctx->pc = 0x172f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_172f8c:
    // 0x172f8c: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x172f8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_172f90:
    // 0x172f90: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
label_172f94:
    if (ctx->pc == 0x172F94u) {
        ctx->pc = 0x172F98u;
        goto label_172f98;
    }
    ctx->pc = 0x172F90u;
    {
        const bool branch_taken_0x172f90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f90) {
            ctx->pc = 0x173060u;
            goto label_173060;
        }
    }
    ctx->pc = 0x172F98u;
label_172f98:
    // 0x172f98: 0x27a501f8  addiu       $a1, $sp, 0x1F8
    ctx->pc = 0x172f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_172f9c:
    // 0x172f9c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x172f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_172fa0:
    // 0x172fa0: 0xc041b48  jal         func_106D20
label_172fa4:
    if (ctx->pc == 0x172FA4u) {
        ctx->pc = 0x172FA8u;
        goto label_172fa8;
    }
    ctx->pc = 0x172FA0u;
    SET_GPR_U32(ctx, 31, 0x172FA8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x172FA0u, 0x172FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172FA8u;
label_172fa8:
    // 0x172fa8: 0x27a40218  addiu       $a0, $sp, 0x218
    ctx->pc = 0x172fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_172fac:
    // 0x172fac: 0xc041b38  jal         func_106CE0
label_172fb0:
    if (ctx->pc == 0x172FB0u) {
        ctx->pc = 0x172FB4u;
        goto label_172fb4;
    }
    ctx->pc = 0x172FACu;
    SET_GPR_U32(ctx, 31, 0x172FB4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x172FACu, 0x172FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172FB4u;
label_172fb4:
    // 0x172fb4: 0x8fa3023c  lw          $v1, 0x23C($sp)
    ctx->pc = 0x172fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_172fb8:
    // 0x172fb8: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x172fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_172fbc:
    // 0x172fbc: 0x27a401f8  addiu       $a0, $sp, 0x1F8
    ctx->pc = 0x172fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_172fc0:
    // 0x172fc0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x172fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_172fc4:
    // 0x172fc4: 0x24a54790  addiu       $a1, $a1, 0x4790
    ctx->pc = 0x172fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18320));
label_172fc8:
    // 0x172fc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x172fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172fcc:
    // 0x172fcc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x172fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_172fd0:
    // 0x172fd0: 0xc0424a8  jal         func_1092A0
label_172fd4:
    if (ctx->pc == 0x172FD4u) {
        ctx->pc = 0x172FD8u;
        goto label_172fd8;
    }
    ctx->pc = 0x172FD0u;
    SET_GPR_U32(ctx, 31, 0x172FD8u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x172FD0u, 0x172FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172FD8u;
label_172fd8:
    // 0x172fd8: 0x27a701f8  addiu       $a3, $sp, 0x1F8
    ctx->pc = 0x172fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_172fdc:
    // 0x172fdc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x172fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_172fe0:
    // 0x172fe0: 0xc041b38  jal         func_106CE0
label_172fe4:
    if (ctx->pc == 0x172FE4u) {
        ctx->pc = 0x172FE8u;
        goto label_172fe8;
    }
    ctx->pc = 0x172FE0u;
    SET_GPR_U32(ctx, 31, 0x172FE8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x172FE0u, 0x172FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172FE8u;
label_172fe8:
    // 0x172fe8: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x172fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_172fec:
    // 0x172fec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172ff0:
    // 0x172ff0: 0xc08e57c  jal         func_2395F0
label_172ff4:
    if (ctx->pc == 0x172FF4u) {
        ctx->pc = 0x172FF8u;
        goto label_172ff8;
    }
    ctx->pc = 0x172FF0u;
    SET_GPR_U32(ctx, 31, 0x172FF8u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x172FF0u, 0x172FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172FF8u;
label_172ff8:
    // 0x172ff8: 0x27a401e8  addiu       $a0, $sp, 0x1E8
    ctx->pc = 0x172ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_172ffc:
    // 0x172ffc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173000:
    // 0x173000: 0xc0406d0  jal         func_101B40
label_173004:
    if (ctx->pc == 0x173004u) {
        ctx->pc = 0x173008u;
        goto label_173008;
    }
    ctx->pc = 0x173000u;
    SET_GPR_U32(ctx, 31, 0x173008u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x173000u, 0x173008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173008u;
label_173008:
    // 0x173008: 0x27a501e8  addiu       $a1, $sp, 0x1E8
    ctx->pc = 0x173008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_17300c:
    // 0x17300c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17300cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_173010:
    // 0x173010: 0xc04ddfc  jal         func_1377F0
label_173014:
    if (ctx->pc == 0x173014u) {
        ctx->pc = 0x173018u;
        goto label_173018;
    }
    ctx->pc = 0x173010u;
    SET_GPR_U32(ctx, 31, 0x173018u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x173010u, 0x173018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173018u;
label_173018:
    // 0x173018: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_17301c:
    if (ctx->pc == 0x17301Cu) {
        ctx->pc = 0x173020u;
        goto label_173020;
    }
    ctx->pc = 0x173018u;
    {
        const bool branch_taken_0x173018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173018) {
            ctx->pc = 0x173040u;
            goto label_173040;
        }
    }
    ctx->pc = 0x173020u;
label_173020:
    // 0x173020: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x173020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173024:
    // 0x173024: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x173024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173028:
    // 0x173028: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x173028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_17302c:
    // 0x17302c: 0x24a547a0  addiu       $a1, $a1, 0x47A0
    ctx->pc = 0x17302cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18336));
label_173030:
    // 0x173030: 0x27a601e8  addiu       $a2, $sp, 0x1E8
    ctx->pc = 0x173030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_173034:
    // 0x173034: 0x8c67007c  lw          $a3, 0x7C($v1)
    ctx->pc = 0x173034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_173038:
    // 0x173038: 0xc055fb0  jal         func_157EC0
label_17303c:
    if (ctx->pc == 0x17303Cu) {
        ctx->pc = 0x173040u;
        goto label_173040;
    }
    ctx->pc = 0x173038u;
    SET_GPR_U32(ctx, 31, 0x173040u);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x173038u, 0x173040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173040u;
label_173040:
    // 0x173040: 0x27a401e8  addiu       $a0, $sp, 0x1E8
    ctx->pc = 0x173040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_173044:
    // 0x173044: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x173044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_173048:
    // 0x173048: 0xc0406a0  jal         func_101A80
label_17304c:
    if (ctx->pc == 0x17304Cu) {
        ctx->pc = 0x173050u;
        goto label_173050;
    }
    ctx->pc = 0x173048u;
    SET_GPR_U32(ctx, 31, 0x173050u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x173048u, 0x173050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173050u;
label_173050:
    // 0x173050: 0x27a401f8  addiu       $a0, $sp, 0x1F8
    ctx->pc = 0x173050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_173054:
    // 0x173054: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x173054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_173058:
    // 0x173058: 0xc0402d4  jal         func_100B50
label_17305c:
    if (ctx->pc == 0x17305Cu) {
        ctx->pc = 0x173060u;
        goto label_173060;
    }
    ctx->pc = 0x173058u;
    SET_GPR_U32(ctx, 31, 0x173060u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x173058u, 0x173060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173060u;
label_173060:
    // 0x173060: 0x27a40208  addiu       $a0, $sp, 0x208
    ctx->pc = 0x173060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_173064:
    // 0x173064: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x173064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_173068:
    // 0x173068: 0xc0402d4  jal         func_100B50
label_17306c:
    if (ctx->pc == 0x17306Cu) {
        ctx->pc = 0x173070u;
        goto label_173070;
    }
    ctx->pc = 0x173068u;
    SET_GPR_U32(ctx, 31, 0x173070u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x173068u, 0x173070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173070u;
label_173070:
    // 0x173070: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x173070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173074:
    // 0x173074: 0x27a30218  addiu       $v1, $sp, 0x218
    ctx->pc = 0x173074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_173078:
    // 0x173078: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x173078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17307c:
    // 0x17307c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17307cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_173080:
    // 0x173080: 0xc0402d4  jal         func_100B50
label_173084:
    if (ctx->pc == 0x173084u) {
        ctx->pc = 0x173088u;
        goto label_173088;
    }
    ctx->pc = 0x173080u;
    SET_GPR_U32(ctx, 31, 0x173088u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x173080u, 0x173088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173088u;
label_173088:
    // 0x173088: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x173088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17308c:
    // 0x17308c: 0x1674004e  bne         $s3, $s4, . + 4 + (0x4E << 2)
label_173090:
    if (ctx->pc == 0x173090u) {
        ctx->pc = 0x173094u;
        goto label_173094;
    }
    ctx->pc = 0x17308Cu;
    {
        const bool branch_taken_0x17308c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x17308c) {
            ctx->pc = 0x1731C8u;
            goto label_1731c8;
        }
    }
    ctx->pc = 0x173094u;
label_173094:
    // 0x173094: 0x220082a  slt         $at, $s1, $zero
    ctx->pc = 0x173094u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_173098:
    // 0x173098: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_17309c:
    if (ctx->pc == 0x17309Cu) {
        ctx->pc = 0x1730A0u;
        goto label_1730a0;
    }
    ctx->pc = 0x173098u;
    {
        const bool branch_taken_0x173098 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x173098) {
            ctx->pc = 0x1730C8u;
            goto label_1730c8;
        }
    }
    ctx->pc = 0x1730A0u;
label_1730a0:
    // 0x1730a0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1730a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1730a4:
    // 0x1730a4: 0xc047eb8  jal         func_11FAE0
label_1730a8:
    if (ctx->pc == 0x1730A8u) {
        ctx->pc = 0x1730ACu;
        goto label_1730ac;
    }
    ctx->pc = 0x1730A4u;
    SET_GPR_U32(ctx, 31, 0x1730ACu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1730A4u, 0x1730ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1730ACu;
label_1730ac:
    // 0x1730ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1730acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1730b0:
    // 0x1730b0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1730b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1730b4:
    // 0x1730b4: 0x24a547b0  addiu       $a1, $a1, 0x47B0
    ctx->pc = 0x1730b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18352));
label_1730b8:
    // 0x1730b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1730b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1730bc:
    // 0x1730bc: 0xc047970  jal         func_11E5C0
label_1730c0:
    if (ctx->pc == 0x1730C0u) {
        ctx->pc = 0x1730C4u;
        goto label_1730c4;
    }
    ctx->pc = 0x1730BCu;
    SET_GPR_U32(ctx, 31, 0x1730C4u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x1730BCu, 0x1730C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1730C4u;
label_1730c4:
    // 0x1730c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1730c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1730c8:
    // 0x1730c8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1730c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1730cc:
    // 0x1730cc: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_1730d0:
    if (ctx->pc == 0x1730D0u) {
        ctx->pc = 0x1730D4u;
        goto label_1730d4;
    }
    ctx->pc = 0x1730CCu;
    {
        const bool branch_taken_0x1730cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1730cc) {
            ctx->pc = 0x173174u;
            goto label_173174;
        }
    }
    ctx->pc = 0x1730D4u;
label_1730d4:
    // 0x1730d4: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1730d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1730d8:
    // 0x1730d8: 0xc047eb8  jal         func_11FAE0
label_1730dc:
    if (ctx->pc == 0x1730DCu) {
        ctx->pc = 0x1730E0u;
        goto label_1730e0;
    }
    ctx->pc = 0x1730D8u;
    SET_GPR_U32(ctx, 31, 0x1730E0u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1730D8u, 0x1730E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1730E0u;
label_1730e0:
    // 0x1730e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1730e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1730e4:
    // 0x1730e4: 0xc047eb0  jal         func_11FAC0
label_1730e8:
    if (ctx->pc == 0x1730E8u) {
        ctx->pc = 0x1730ECu;
        goto label_1730ec;
    }
    ctx->pc = 0x1730E4u;
    SET_GPR_U32(ctx, 31, 0x1730ECu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x1730E4u, 0x1730ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1730ECu;
label_1730ec:
    // 0x1730ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1730ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1730f0:
    // 0x1730f0: 0xafa30238  sw          $v1, 0x238($sp)
    ctx->pc = 0x1730f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 3));
label_1730f4:
    // 0x1730f4: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x1730f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_1730f8:
    // 0x1730f8: 0x8fa20238  lw          $v0, 0x238($sp)
    ctx->pc = 0x1730f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_1730fc:
    // 0x1730fc: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1730fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_173100:
    // 0x173100: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x173100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_173104:
    // 0x173104: 0x24a547c0  addiu       $a1, $a1, 0x47C0
    ctx->pc = 0x173104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18368));
label_173108:
    // 0x173108: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x173108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17310c:
    // 0x17310c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x17310cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_173110:
    // 0x173110: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x173110u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173114:
    // 0x173114: 0xc0bc3e2  jal         func_2F0F88
label_173118:
    if (ctx->pc == 0x173118u) {
        ctx->pc = 0x17311Cu;
        goto label_17311c;
    }
    ctx->pc = 0x173114u;
    SET_GPR_U32(ctx, 31, 0x17311Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x173114u, 0x17311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17311Cu;
label_17311c:
    // 0x17311c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x17311cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_173120:
    // 0x173120: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x173120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_173124:
    // 0x173124: 0xc08e57c  jal         func_2395F0
label_173128:
    if (ctx->pc == 0x173128u) {
        ctx->pc = 0x17312Cu;
        goto label_17312c;
    }
    ctx->pc = 0x173124u;
    SET_GPR_U32(ctx, 31, 0x17312Cu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x173124u, 0x17312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17312Cu;
label_17312c:
    // 0x17312c: 0x27a401d8  addiu       $a0, $sp, 0x1D8
    ctx->pc = 0x17312cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_173130:
    // 0x173130: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173134:
    // 0x173134: 0xc0406d0  jal         func_101B40
label_173138:
    if (ctx->pc == 0x173138u) {
        ctx->pc = 0x17313Cu;
        goto label_17313c;
    }
    ctx->pc = 0x173134u;
    SET_GPR_U32(ctx, 31, 0x17313Cu);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x173134u, 0x17313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17313Cu;
label_17313c:
    // 0x17313c: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x17313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173140:
    // 0x173140: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x173140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173144:
    // 0x173144: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x173144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_173148:
    // 0x173148: 0x24a547a0  addiu       $a1, $a1, 0x47A0
    ctx->pc = 0x173148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18336));
label_17314c:
    // 0x17314c: 0x27a601d8  addiu       $a2, $sp, 0x1D8
    ctx->pc = 0x17314cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_173150:
    // 0x173150: 0x8c47007c  lw          $a3, 0x7C($v0)
    ctx->pc = 0x173150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_173154:
    // 0x173154: 0xc055fb0  jal         func_157EC0
label_173158:
    if (ctx->pc == 0x173158u) {
        ctx->pc = 0x17315Cu;
        goto label_17315c;
    }
    ctx->pc = 0x173154u;
    SET_GPR_U32(ctx, 31, 0x17315Cu);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x173154u, 0x17315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17315Cu;
label_17315c:
    // 0x17315c: 0x27a401d8  addiu       $a0, $sp, 0x1D8
    ctx->pc = 0x17315cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_173160:
    // 0x173160: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x173160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_173164:
    // 0x173164: 0xc0406a0  jal         func_101A80
label_173168:
    if (ctx->pc == 0x173168u) {
        ctx->pc = 0x17316Cu;
        goto label_17316c;
    }
    ctx->pc = 0x173164u;
    SET_GPR_U32(ctx, 31, 0x17316Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x173164u, 0x17316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17316Cu;
label_17316c:
    // 0x17316c: 0x10000016  b           . + 4 + (0x16 << 2)
label_173170:
    if (ctx->pc == 0x173170u) {
        ctx->pc = 0x173174u;
        goto label_173174;
    }
    ctx->pc = 0x17316Cu;
    {
        const bool branch_taken_0x17316c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17316c) {
            ctx->pc = 0x1731C8u;
            goto label_1731c8;
        }
    }
    ctx->pc = 0x173174u;
label_173174:
    // 0x173174: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x173174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_173178:
    // 0x173178: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x173178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_17317c:
    // 0x17317c: 0x24a547d8  addiu       $a1, $a1, 0x47D8
    ctx->pc = 0x17317cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18392));
label_173180:
    // 0x173180: 0xc08e57c  jal         func_2395F0
label_173184:
    if (ctx->pc == 0x173184u) {
        ctx->pc = 0x173188u;
        goto label_173188;
    }
    ctx->pc = 0x173180u;
    SET_GPR_U32(ctx, 31, 0x173188u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x173180u, 0x173188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173188u;
label_173188:
    // 0x173188: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x173188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_17318c:
    // 0x17318c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17318cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173190:
    // 0x173190: 0xc0406d0  jal         func_101B40
label_173194:
    if (ctx->pc == 0x173194u) {
        ctx->pc = 0x173198u;
        goto label_173198;
    }
    ctx->pc = 0x173190u;
    SET_GPR_U32(ctx, 31, 0x173198u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x173190u, 0x173198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173198u;
label_173198:
    // 0x173198: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x173198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_17319c:
    // 0x17319c: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x17319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1731a0:
    // 0x1731a0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1731a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1731a4:
    // 0x1731a4: 0x24a547a0  addiu       $a1, $a1, 0x47A0
    ctx->pc = 0x1731a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18336));
label_1731a8:
    // 0x1731a8: 0x27a601c8  addiu       $a2, $sp, 0x1C8
    ctx->pc = 0x1731a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_1731ac:
    // 0x1731ac: 0x8c47007c  lw          $a3, 0x7C($v0)
    ctx->pc = 0x1731acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1731b0:
    // 0x1731b0: 0xc055fb0  jal         func_157EC0
label_1731b4:
    if (ctx->pc == 0x1731B4u) {
        ctx->pc = 0x1731B8u;
        goto label_1731b8;
    }
    ctx->pc = 0x1731B0u;
    SET_GPR_U32(ctx, 31, 0x1731B8u);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x1731B0u, 0x1731B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731B8u;
label_1731b8:
    // 0x1731b8: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x1731b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_1731bc:
    // 0x1731bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1731bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1731c0:
    // 0x1731c0: 0xc0406a0  jal         func_101A80
label_1731c4:
    if (ctx->pc == 0x1731C4u) {
        ctx->pc = 0x1731C8u;
        goto label_1731c8;
    }
    ctx->pc = 0x1731C0u;
    SET_GPR_U32(ctx, 31, 0x1731C8u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1731C0u, 0x1731C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731C8u;
label_1731c8:
    // 0x1731c8: 0x93a30280  lbu         $v1, 0x280($sp)
    ctx->pc = 0x1731c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 640)));
label_1731cc:
    // 0x1731cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1731ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1731d0:
    // 0x1731d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1731d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1731d4:
    // 0x1731d4: 0x14830181  bne         $a0, $v1, . + 4 + (0x181 << 2)
label_1731d8:
    if (ctx->pc == 0x1731D8u) {
        ctx->pc = 0x1731DCu;
        goto label_1731dc;
    }
    ctx->pc = 0x1731D4u;
    {
        const bool branch_taken_0x1731d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1731d4) {
            ctx->pc = 0x1737DCu;
            goto label_1737dc;
        }
    }
    ctx->pc = 0x1731DCu;
label_1731dc:
    // 0x1731dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1731dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1731e0:
    // 0x1731e0: 0x10000020  b           . + 4 + (0x20 << 2)
label_1731e4:
    if (ctx->pc == 0x1731E4u) {
        ctx->pc = 0x1731E8u;
        goto label_1731e8;
    }
    ctx->pc = 0x1731E0u;
    {
        const bool branch_taken_0x1731e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1731e0) {
            ctx->pc = 0x173264u;
            goto label_173264;
        }
    }
    ctx->pc = 0x1731E8u;
label_1731e8:
    // 0x1731e8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1731e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1731ec:
    // 0x1731ec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1731ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1731f0:
    // 0x1731f0: 0x24a547e8  addiu       $a1, $a1, 0x47E8
    ctx->pc = 0x1731f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18408));
label_1731f4:
    // 0x1731f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1731f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1731f8:
    // 0x1731f8: 0xc0bc3e2  jal         func_2F0F88
label_1731fc:
    if (ctx->pc == 0x1731FCu) {
        ctx->pc = 0x173200u;
        goto label_173200;
    }
    ctx->pc = 0x1731F8u;
    SET_GPR_U32(ctx, 31, 0x173200u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1731F8u, 0x173200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173200u;
label_173200:
    // 0x173200: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x173200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173204:
    // 0x173204: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x173204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_173208:
    // 0x173208: 0xc05621c  jal         func_158870
label_17320c:
    if (ctx->pc == 0x17320Cu) {
        ctx->pc = 0x173210u;
        goto label_173210;
    }
    ctx->pc = 0x173208u;
    SET_GPR_U32(ctx, 31, 0x173210u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x173208u, 0x173210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173210u;
label_173210:
    // 0x173210: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x173210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_173214:
    // 0x173214: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x173214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173218:
    // 0x173218: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x173218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17321c:
    // 0x17321c: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x17321cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_173220:
    // 0x173220: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x173220u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_173224:
    // 0x173224: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x173224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173228:
    // 0x173228: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x173228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17322c:
    // 0x17322c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x17322cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_173230:
    // 0x173230: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_173234:
    if (ctx->pc == 0x173234u) {
        ctx->pc = 0x173238u;
        goto label_173238;
    }
    ctx->pc = 0x173230u;
    {
        const bool branch_taken_0x173230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173230) {
            ctx->pc = 0x17325Cu;
            goto label_17325c;
        }
    }
    ctx->pc = 0x173238u;
label_173238:
    // 0x173238: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x173238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_17323c:
    // 0x17323c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x17323cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_173240:
    // 0x173240: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x173240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173244:
    // 0x173244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_173248:
    // 0x173248: 0x8c450084  lw          $a1, 0x84($v0)
    ctx->pc = 0x173248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_17324c:
    // 0x17324c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x17324cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_173250:
    // 0x173250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173254:
    // 0x173254: 0xc08c8dc  jal         func_232370
label_173258:
    if (ctx->pc == 0x173258u) {
        ctx->pc = 0x17325Cu;
        goto label_17325c;
    }
    ctx->pc = 0x173254u;
    SET_GPR_U32(ctx, 31, 0x17325Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x173254u, 0x17325Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17325Cu;
label_17325c:
    // 0x17325c: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x17325cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_173260:
    // 0x173260: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x173260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173264:
    // 0x173264: 0x2a450003  slti        $a1, $s2, 0x3
    ctx->pc = 0x173264u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_173268:
    // 0x173268: 0x14a0ffdf  bnez        $a1, . + 4 + (-0x21 << 2)
label_17326c:
    if (ctx->pc == 0x17326Cu) {
        ctx->pc = 0x173270u;
        goto label_173270;
    }
    ctx->pc = 0x173268u;
    {
        const bool branch_taken_0x173268 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x173268) {
            ctx->pc = 0x1731E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1731e8;
        }
    }
    ctx->pc = 0x173270u;
label_173270:
    // 0x173270: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x173270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_173274:
    // 0x173274: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x173274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173278:
    // 0x173278: 0xc7a00264  lwc1        $f0, 0x264($sp)
    ctx->pc = 0x173278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17327c:
    // 0x17327c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17327cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_173280:
    // 0x173280: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_173284:
    if (ctx->pc == 0x173284u) {
        ctx->pc = 0x173288u;
        goto label_173288;
    }
    ctx->pc = 0x173280u;
    {
        const bool branch_taken_0x173280 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173280) {
            ctx->pc = 0x173294u;
            goto label_173294;
        }
    }
    ctx->pc = 0x173288u;
label_173288:
    // 0x173288: 0x93a4026f  lbu         $a0, 0x26F($sp)
    ctx->pc = 0x173288u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 623)));
label_17328c:
    // 0x17328c: 0x1080018d  beqz        $a0, . + 4 + (0x18D << 2)
label_173290:
    if (ctx->pc == 0x173290u) {
        ctx->pc = 0x173294u;
        goto label_173294;
    }
    ctx->pc = 0x17328Cu;
    {
        const bool branch_taken_0x17328c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17328c) {
            ctx->pc = 0x1738C4u;
            goto label_1738c4;
        }
    }
    ctx->pc = 0x173294u;
label_173294:
    // 0x173294: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x173294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_173298:
    // 0x173298: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_17329c:
    if (ctx->pc == 0x17329Cu) {
        ctx->pc = 0x1732A0u;
        goto label_1732a0;
    }
    ctx->pc = 0x173298u;
    {
        const bool branch_taken_0x173298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x173298) {
            ctx->pc = 0x1732B8u;
            goto label_1732b8;
        }
    }
    ctx->pc = 0x1732A0u;
label_1732a0:
    // 0x1732a0: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x1732a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1732a4:
    // 0x1732a4: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x1732a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_1732a8:
    // 0x1732a8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1732a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1732ac:
    // 0x1732ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1732acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1732b0:
    // 0x1732b0: 0xc08c8dc  jal         func_232370
label_1732b4:
    if (ctx->pc == 0x1732B4u) {
        ctx->pc = 0x1732B8u;
        goto label_1732b8;
    }
    ctx->pc = 0x1732B0u;
    SET_GPR_U32(ctx, 31, 0x1732B8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1732B0u, 0x1732B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1732B8u;
label_1732b8:
    // 0x1732b8: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
label_1732bc:
    if (ctx->pc == 0x1732BCu) {
        ctx->pc = 0x1732C0u;
        goto label_1732c0;
    }
    ctx->pc = 0x1732B8u;
    {
        const bool branch_taken_0x1732b8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1732b8) {
            ctx->pc = 0x1732DCu;
            goto label_1732dc;
        }
    }
    ctx->pc = 0x1732C0u;
label_1732c0:
    // 0x1732c0: 0x8fa60270  lw          $a2, 0x270($sp)
    ctx->pc = 0x1732c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1732c4:
    // 0x1732c4: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x1732c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1732c8:
    // 0x1732c8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1732c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1732cc:
    // 0x1732cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1732ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1732d0:
    // 0x1732d0: 0xc08c8dc  jal         func_232370
label_1732d4:
    if (ctx->pc == 0x1732D4u) {
        ctx->pc = 0x1732D8u;
        goto label_1732d8;
    }
    ctx->pc = 0x1732D0u;
    SET_GPR_U32(ctx, 31, 0x1732D8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1732D0u, 0x1732D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1732D8u;
label_1732d8:
    // 0x1732d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1732d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1732dc:
    // 0x1732dc: 0x8f82bbdc  lw          $v0, -0x4424($gp)
    ctx->pc = 0x1732dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1732e0:
    // 0x1732e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1732e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1732e4:
    // 0x1732e4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1732e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1732e8:
    // 0x1732e8: 0x24a547d8  addiu       $a1, $a1, 0x47D8
    ctx->pc = 0x1732e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18392));
label_1732ec:
    // 0x1732ec: 0xc08e57c  jal         func_2395F0
label_1732f0:
    if (ctx->pc == 0x1732F0u) {
        ctx->pc = 0x1732F4u;
        goto label_1732f4;
    }
    ctx->pc = 0x1732ECu;
    SET_GPR_U32(ctx, 31, 0x1732F4u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1732ECu, 0x1732F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1732F4u;
label_1732f4:
    // 0x1732f4: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x1732f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_1732f8:
    // 0x1732f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1732f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1732fc:
    // 0x1732fc: 0xc0406d0  jal         func_101B40
label_173300:
    if (ctx->pc == 0x173300u) {
        ctx->pc = 0x173304u;
        goto label_173304;
    }
    ctx->pc = 0x1732FCu;
    SET_GPR_U32(ctx, 31, 0x173304u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1732FCu, 0x173304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173304u;
label_173304:
    // 0x173304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173308:
    // 0x173308: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x173308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_17330c:
    // 0x17330c: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x17330cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173310:
    // 0x173310: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x173310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_173314:
    // 0x173314: 0x24a547a0  addiu       $a1, $a1, 0x47A0
    ctx->pc = 0x173314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18336));
label_173318:
    // 0x173318: 0x27be01b8  addiu       $fp, $sp, 0x1B8
    ctx->pc = 0x173318u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_17331c:
    // 0x17331c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x17331cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_173320:
    // 0x173320: 0x8c47007c  lw          $a3, 0x7C($v0)
    ctx->pc = 0x173320u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_173324:
    // 0x173324: 0xc055fb0  jal         func_157EC0
label_173328:
    if (ctx->pc == 0x173328u) {
        ctx->pc = 0x17332Cu;
        goto label_17332c;
    }
    ctx->pc = 0x173324u;
    SET_GPR_U32(ctx, 31, 0x17332Cu);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x173324u, 0x17332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17332Cu;
label_17332c:
    // 0x17332c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17332cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173330:
    // 0x173330: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x173330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173334:
    // 0x173334: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x173334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_173338:
    // 0x173338: 0xc056144  jal         func_158510
label_17333c:
    if (ctx->pc == 0x17333Cu) {
        ctx->pc = 0x173340u;
        goto label_173340;
    }
    ctx->pc = 0x173338u;
    SET_GPR_U32(ctx, 31, 0x173340u);
    ctx->pc = 0x158510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158510u, 0x173338u, 0x173340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173340u;
label_173340:
    // 0x173340: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x173340u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173344:
    // 0x173344: 0x1000000a  b           . + 4 + (0xA << 2)
label_173348:
    if (ctx->pc == 0x173348u) {
        ctx->pc = 0x17334Cu;
        goto label_17334c;
    }
    ctx->pc = 0x173344u;
    {
        const bool branch_taken_0x173344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173344) {
            ctx->pc = 0x173370u;
            goto label_173370;
        }
    }
    ctx->pc = 0x17334Cu;
label_17334c:
    // 0x17334c: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x17334cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173350:
    // 0x173350: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x173350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_173354:
    // 0x173354: 0x8ca60034  lw          $a2, 0x34($a1)
    ctx->pc = 0x173354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_173358:
    // 0x173358: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x173358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17335c:
    // 0x17335c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17335cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173360:
    // 0x173360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173364:
    // 0x173364: 0xc08c8dc  jal         func_232370
label_173368:
    if (ctx->pc == 0x173368u) {
        ctx->pc = 0x17336Cu;
        goto label_17336c;
    }
    ctx->pc = 0x173364u;
    SET_GPR_U32(ctx, 31, 0x17336Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x173364u, 0x17336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17336Cu;
label_17336c:
    // 0x17336c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x17336cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_173370:
    // 0x173370: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x173370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173374:
    // 0x173374: 0x24860070  addiu       $a2, $a0, 0x70
    ctx->pc = 0x173374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_173378:
    // 0x173378: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x173378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17337c:
    // 0x17337c: 0xc05613c  jal         func_1584F0
label_173380:
    if (ctx->pc == 0x173380u) {
        ctx->pc = 0x173384u;
        goto label_173384;
    }
    ctx->pc = 0x17337Cu;
    SET_GPR_U32(ctx, 31, 0x173384u);
    ctx->pc = 0x1584F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584F0u, 0x17337Cu, 0x173384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173384u;
label_173384:
    // 0x173384: 0x16e2fff1  bne         $s7, $v0, . + 4 + (-0xF << 2)
label_173388:
    if (ctx->pc == 0x173388u) {
        ctx->pc = 0x17338Cu;
        goto label_17338c;
    }
    ctx->pc = 0x173384u;
    {
        const bool branch_taken_0x173384 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x173384) {
            ctx->pc = 0x17334Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17334c;
        }
    }
    ctx->pc = 0x17338Cu;
label_17338c:
    // 0x17338c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x17338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_173390:
    // 0x173390: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x173390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_173394:
    // 0x173394: 0x24a547f8  addiu       $a1, $a1, 0x47F8
    ctx->pc = 0x173394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18424));
label_173398:
    // 0x173398: 0xc08e57c  jal         func_2395F0
label_17339c:
    if (ctx->pc == 0x17339Cu) {
        ctx->pc = 0x1733A0u;
        goto label_1733a0;
    }
    ctx->pc = 0x173398u;
    SET_GPR_U32(ctx, 31, 0x1733A0u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x173398u, 0x1733A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1733A0u;
label_1733a0:
    // 0x1733a0: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x1733a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_1733a4:
    // 0x1733a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1733a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1733a8:
    // 0x1733a8: 0xc0406d0  jal         func_101B40
label_1733ac:
    if (ctx->pc == 0x1733ACu) {
        ctx->pc = 0x1733B0u;
        goto label_1733b0;
    }
    ctx->pc = 0x1733A8u;
    SET_GPR_U32(ctx, 31, 0x1733B0u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1733A8u, 0x1733B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1733B0u;
label_1733b0:
    // 0x1733b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1733b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1733b4:
    // 0x1733b4: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x1733b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1733b8:
    // 0x1733b8: 0x27a201a8  addiu       $v0, $sp, 0x1A8
    ctx->pc = 0x1733b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_1733bc:
    // 0x1733bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1733bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1733c0:
    // 0x1733c0: 0xc05cfb8  jal         func_173EE0
label_1733c4:
    if (ctx->pc == 0x1733C4u) {
        ctx->pc = 0x1733C8u;
        goto label_1733c8;
    }
    ctx->pc = 0x1733C0u;
    SET_GPR_U32(ctx, 31, 0x1733C8u);
    ctx->pc = 0x173EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173EE0u, 0x1733C0u, 0x1733C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1733C8u;
label_1733c8:
    // 0x1733c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1733c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1733cc:
    // 0x1733cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1733ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1733d0:
    // 0x1733d0: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_1733d4:
    if (ctx->pc == 0x1733D4u) {
        ctx->pc = 0x1733D8u;
        goto label_1733d8;
    }
    ctx->pc = 0x1733D0u;
    {
        const bool branch_taken_0x1733d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1733d0) {
            ctx->pc = 0x17372Cu;
            goto label_17372c;
        }
    }
    ctx->pc = 0x1733D8u;
label_1733d8:
    // 0x1733d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1733d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1733dc:
    // 0x1733dc: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x1733dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1733e0:
    // 0x1733e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1733e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1733e4:
    // 0x1733e4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1733e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1733e8:
    // 0x1733e8: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
label_1733ec:
    if (ctx->pc == 0x1733ECu) {
        ctx->pc = 0x1733F0u;
        goto label_1733f0;
    }
    ctx->pc = 0x1733E8u;
    {
        const bool branch_taken_0x1733e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1733e8) {
            ctx->pc = 0x173724u;
            goto label_173724;
        }
    }
    ctx->pc = 0x1733F0u;
label_1733f0:
    // 0x1733f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1733f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1733f4:
    // 0x1733f4: 0x120300ba  beq         $s0, $v1, . + 4 + (0xBA << 2)
label_1733f8:
    if (ctx->pc == 0x1733F8u) {
        ctx->pc = 0x1733FCu;
        goto label_1733fc;
    }
    ctx->pc = 0x1733F4u;
    {
        const bool branch_taken_0x1733f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1733f4) {
            ctx->pc = 0x1736E0u;
            goto label_1736e0;
        }
    }
    ctx->pc = 0x1733FCu;
label_1733fc:
    // 0x1733fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1733fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173400:
    // 0x173400: 0x120300a9  beq         $s0, $v1, . + 4 + (0xA9 << 2)
label_173404:
    if (ctx->pc == 0x173404u) {
        ctx->pc = 0x173408u;
        goto label_173408;
    }
    ctx->pc = 0x173400u;
    {
        const bool branch_taken_0x173400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x173400) {
            ctx->pc = 0x1736A8u;
            goto label_1736a8;
        }
    }
    ctx->pc = 0x173408u;
label_173408:
    // 0x173408: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_17340c:
    if (ctx->pc == 0x17340Cu) {
        ctx->pc = 0x173410u;
        goto label_173410;
    }
    ctx->pc = 0x173408u;
    {
        const bool branch_taken_0x173408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x173408) {
            ctx->pc = 0x173418u;
            goto label_173418;
        }
    }
    ctx->pc = 0x173410u;
label_173410:
    // 0x173410: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_173414:
    if (ctx->pc == 0x173414u) {
        ctx->pc = 0x173418u;
        goto label_173418;
    }
    ctx->pc = 0x173410u;
    {
        const bool branch_taken_0x173410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173410) {
            ctx->pc = 0x173724u;
            goto label_173724;
        }
    }
    ctx->pc = 0x173418u;
label_173418:
    // 0x173418: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x173418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_17341c:
    // 0x17341c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x17341cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_173420:
    // 0x173420: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x173420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173424:
    // 0x173424: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x173424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_173428:
    // 0x173428: 0x8ca20084  lw          $v0, 0x84($a1)
    ctx->pc = 0x173428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
label_17342c:
    // 0x17342c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17342cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_173430:
    // 0x173430: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173434:
    // 0x173434: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x173434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173438:
    // 0x173438: 0xc08c8dc  jal         func_232370
label_17343c:
    if (ctx->pc == 0x17343Cu) {
        ctx->pc = 0x173440u;
        goto label_173440;
    }
    ctx->pc = 0x173438u;
    SET_GPR_U32(ctx, 31, 0x173440u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x173438u, 0x173440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173440u;
label_173440:
    // 0x173440: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x173440u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173444:
    // 0x173444: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x173444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_173448:
    // 0x173448: 0xc119b68  jal         func_466DA0
label_17344c:
    if (ctx->pc == 0x17344Cu) {
        ctx->pc = 0x173450u;
        goto label_173450;
    }
    ctx->pc = 0x173448u;
    SET_GPR_U32(ctx, 31, 0x173450u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x173448u, 0x173450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173450u;
label_173450:
    // 0x173450: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173454:
    // 0x173454: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x173454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_173458:
    // 0x173458: 0xc0400e0  jal         func_100380
label_17345c:
    if (ctx->pc == 0x17345Cu) {
        ctx->pc = 0x173460u;
        goto label_173460;
    }
    ctx->pc = 0x173458u;
    SET_GPR_U32(ctx, 31, 0x173460u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x173458u, 0x173460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173460u;
label_173460:
    // 0x173460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173464:
    // 0x173464: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x173464u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173468:
    // 0x173468: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
label_17346c:
    if (ctx->pc == 0x17346Cu) {
        ctx->pc = 0x173470u;
        goto label_173470;
    }
    ctx->pc = 0x173468u;
    {
        const bool branch_taken_0x173468 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x173468) {
            ctx->pc = 0x173484u;
            goto label_173484;
        }
    }
    ctx->pc = 0x173470u;
label_173470:
    // 0x173470: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x173470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_173474:
    // 0x173474: 0xc08424c  jal         func_210930
label_173478:
    if (ctx->pc == 0x173478u) {
        ctx->pc = 0x17347Cu;
        goto label_17347c;
    }
    ctx->pc = 0x173474u;
    SET_GPR_U32(ctx, 31, 0x17347Cu);
    ctx->pc = 0x210930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210930u, 0x173474u, 0x17347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17347Cu;
label_17347c:
    // 0x17347c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17347cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173480:
    // 0x173480: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x173480u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_173484:
    // 0x173484: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x173484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173488:
    // 0x173488: 0xac560080  sw          $s6, 0x80($v0)
    ctx->pc = 0x173488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 22));
label_17348c:
    // 0x17348c: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x17348cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173490:
    // 0x173490: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x173490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_173494:
    // 0x173494: 0x106000a3  beqz        $v1, . + 4 + (0xA3 << 2)
label_173498:
    if (ctx->pc == 0x173498u) {
        ctx->pc = 0x17349Cu;
        goto label_17349c;
    }
    ctx->pc = 0x173494u;
    {
        const bool branch_taken_0x173494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173494) {
            ctx->pc = 0x173724u;
            goto label_173724;
        }
    }
    ctx->pc = 0x17349Cu;
label_17349c:
    // 0x17349c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17349cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1734a0:
    // 0x1734a0: 0xc084504  jal         func_211410
label_1734a4:
    if (ctx->pc == 0x1734A4u) {
        ctx->pc = 0x1734A8u;
        goto label_1734a8;
    }
    ctx->pc = 0x1734A0u;
    SET_GPR_U32(ctx, 31, 0x1734A8u);
    ctx->pc = 0x211410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211410u, 0x1734A0u, 0x1734A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734A8u;
label_1734a8:
    // 0x1734a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1734a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1734ac:
    // 0x1734ac: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x1734acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1734b0:
    // 0x1734b0: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x1734b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1734b4:
    // 0x1734b4: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x1734b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_1734b8:
    // 0x1734b8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1734b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1734bc:
    // 0x1734bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1734bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1734c0:
    // 0x1734c0: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x1734c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1734c4:
    // 0x1734c4: 0xc08c6c8  jal         func_231B20
label_1734c8:
    if (ctx->pc == 0x1734C8u) {
        ctx->pc = 0x1734CCu;
        goto label_1734cc;
    }
    ctx->pc = 0x1734C4u;
    SET_GPR_U32(ctx, 31, 0x1734CCu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1734C4u, 0x1734CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734CCu;
label_1734cc:
    // 0x1734cc: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x1734ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1734d0:
    // 0x1734d0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1734d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_1734d4:
    // 0x1734d4: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x1734d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1734d8:
    // 0x1734d8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1734d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_1734dc:
    // 0x1734dc: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1734dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1734e0:
    // 0x1734e0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1734e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1734e4:
    // 0x1734e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1734e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1734e8:
    // 0x1734e8: 0x27a600fc  addiu       $a2, $sp, 0xFC
    ctx->pc = 0x1734e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_1734ec:
    // 0x1734ec: 0xc08c744  jal         func_231D10
label_1734f0:
    if (ctx->pc == 0x1734F0u) {
        ctx->pc = 0x1734F4u;
        goto label_1734f4;
    }
    ctx->pc = 0x1734ECu;
    SET_GPR_U32(ctx, 31, 0x1734F4u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x1734ECu, 0x1734F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1734F4u;
label_1734f4:
    // 0x1734f4: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1734f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_1734f8:
    // 0x1734f8: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1734f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1734fc:
    // 0x1734fc: 0xc7a201a0  lwc1        $f2, 0x1A0($sp)
    ctx->pc = 0x1734fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_173500:
    // 0x173500: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x173500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_173504:
    // 0x173504: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173508:
    // 0x173508: 0x0  nop
    ctx->pc = 0x173508u;
    // NOP
label_17350c:
    // 0x17350c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x17350cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_173510:
    // 0x173510: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x173510u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_173514:
    // 0x173514: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x173514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_173518:
    // 0x173518: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x173518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_17351c:
    // 0x17351c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x17351cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_173520:
    // 0x173520: 0xc7a201a4  lwc1        $f2, 0x1A4($sp)
    ctx->pc = 0x173520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_173524:
    // 0x173524: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x173524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_173528:
    // 0x173528: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17352c:
    // 0x17352c: 0x0  nop
    ctx->pc = 0x17352cu;
    // NOP
label_173530:
    // 0x173530: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x173530u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_173534:
    // 0x173534: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x173534u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_173538:
    // 0x173538: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x173538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_17353c:
    // 0x17353c: 0xc7808290  lwc1        $f0, -0x7D70($gp)
    ctx->pc = 0x17353cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173540:
    // 0x173540: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x173540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_173544:
    // 0x173544: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173548:
    // 0x173548: 0x0  nop
    ctx->pc = 0x173548u;
    // NOP
label_17354c:
    // 0x17354c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x17354cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_173550:
    // 0x173550: 0xc78083e0  lwc1        $f0, -0x7C20($gp)
    ctx->pc = 0x173550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173554:
    // 0x173554: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x173554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_173558:
    // 0x173558: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x173558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17355c:
    // 0x17355c: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x17355cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_173560:
    // 0x173560: 0x3c044250  lui         $a0, 0x4250
    ctx->pc = 0x173560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16976 << 16));
label_173564:
    // 0x173564: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x173564u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173568:
    // 0x173568: 0x0  nop
    ctx->pc = 0x173568u;
    // NOP
label_17356c:
    // 0x17356c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x17356cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_173570:
    // 0x173570: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173574:
    // 0x173574: 0x0  nop
    ctx->pc = 0x173574u;
    // NOP
label_173578:
    // 0x173578: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x173578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_17357c:
    // 0x17357c: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x17357cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173580:
    // 0x173580: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x173580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_173584:
    // 0x173584: 0xc7808420  lwc1        $f0, -0x7BE0($gp)
    ctx->pc = 0x173584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173588:
    // 0x173588: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x173588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_17358c:
    // 0x17358c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17358cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173590:
    // 0x173590: 0x0  nop
    ctx->pc = 0x173590u;
    // NOP
label_173594:
    // 0x173594: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x173594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_173598:
    // 0x173598: 0xc7808424  lwc1        $f0, -0x7BDC($gp)
    ctx->pc = 0x173598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17359c:
    // 0x17359c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x17359cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1735a0:
    // 0x1735a0: 0xc7808428  lwc1        $f0, -0x7BD8($gp)
    ctx->pc = 0x1735a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1735a4:
    // 0x1735a4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1735a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1735a8:
    // 0x1735a8: 0xc7808420  lwc1        $f0, -0x7BE0($gp)
    ctx->pc = 0x1735a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1735ac:
    // 0x1735ac: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1735acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1735b0:
    // 0x1735b0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1735b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1735b4:
    // 0x1735b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1735b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1735b8:
    // 0x1735b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1735b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1735bc:
    // 0x1735bc: 0x0  nop
    ctx->pc = 0x1735bcu;
    // NOP
label_1735c0:
    // 0x1735c0: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1735c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1735c4:
    // 0x1735c4: 0xc780829c  lwc1        $f0, -0x7D64($gp)
    ctx->pc = 0x1735c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1735c8:
    // 0x1735c8: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1735c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1735cc:
    // 0x1735cc: 0x27a4013c  addiu       $a0, $sp, 0x13C
    ctx->pc = 0x1735ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_1735d0:
    // 0x1735d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1735d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1735d4:
    // 0x1735d4: 0xc056708  jal         func_159C20
label_1735d8:
    if (ctx->pc == 0x1735D8u) {
        ctx->pc = 0x1735DCu;
        goto label_1735dc;
    }
    ctx->pc = 0x1735D4u;
    SET_GPR_U32(ctx, 31, 0x1735DCu);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1735D4u, 0x1735DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1735DCu;
label_1735dc:
    // 0x1735dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1735dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1735e0:
    // 0x1735e0: 0x109880  sll         $s3, $s0, 2
    ctx->pc = 0x1735e0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1735e4:
    // 0x1735e4: 0x8fb50270  lw          $s5, 0x270($sp)
    ctx->pc = 0x1735e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1735e8:
    // 0x1735e8: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x1735e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_1735ec:
    // 0x1735ec: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1735ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1735f0:
    // 0x1735f0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1735f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1735f4:
    // 0x1735f4: 0x27a4013c  addiu       $a0, $sp, 0x13C
    ctx->pc = 0x1735f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_1735f8:
    // 0x1735f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1735f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1735fc:
    // 0x1735fc: 0xc05612c  jal         func_1584B0
label_173600:
    if (ctx->pc == 0x173600u) {
        ctx->pc = 0x173604u;
        goto label_173604;
    }
    ctx->pc = 0x1735FCu;
    SET_GPR_U32(ctx, 31, 0x173604u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1735FCu, 0x173604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173604u;
label_173604:
    // 0x173604: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173608:
    // 0x173608: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x173608u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_17360c:
    // 0x17360c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17360cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_173610:
    // 0x173610: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x173610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173614:
    // 0x173614: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x173614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_173618:
    // 0x173618: 0xc7808420  lwc1        $f0, -0x7BE0($gp)
    ctx->pc = 0x173618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17361c:
    // 0x17361c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x17361cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_173620:
    // 0x173620: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x173620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173624:
    // 0x173624: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x173624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_173628:
    // 0x173628: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x173628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17362c:
    // 0x17362c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x17362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_173630:
    // 0x173630: 0xc78082c8  lwc1        $f0, -0x7D38($gp)
    ctx->pc = 0x173630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_173634:
    // 0x173634: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x173634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_173638:
    // 0x173638: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x173638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_17363c:
    // 0x17363c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17363cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_173640:
    // 0x173640: 0x0  nop
    ctx->pc = 0x173640u;
    // NOP
label_173644:
    // 0x173644: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x173644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_173648:
    // 0x173648: 0x8fa60270  lw          $a2, 0x270($sp)
    ctx->pc = 0x173648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_17364c:
    // 0x17364c: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x17364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
label_173650:
    // 0x173650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173654:
    // 0x173654: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x173654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_173658:
    // 0x173658: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x173658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_17365c:
    // 0x17365c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17365cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173660:
    // 0x173660: 0xc0842c0  jal         func_210B00
label_173664:
    if (ctx->pc == 0x173664u) {
        ctx->pc = 0x173668u;
        goto label_173668;
    }
    ctx->pc = 0x173660u;
    SET_GPR_U32(ctx, 31, 0x173668u);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x173660u, 0x173668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173668u;
label_173668:
    // 0x173668: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17366c:
    // 0x17366c: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x17366cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173670:
    // 0x173670: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x173670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_173674:
    // 0x173674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173678:
    // 0x173678: 0xc0843c8  jal         func_210F20
label_17367c:
    if (ctx->pc == 0x17367Cu) {
        ctx->pc = 0x173680u;
        goto label_173680;
    }
    ctx->pc = 0x173678u;
    SET_GPR_U32(ctx, 31, 0x173680u);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x173678u, 0x173680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173680u;
label_173680:
    // 0x173680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173684:
    // 0x173684: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x173684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_173688:
    // 0x173688: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x173688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17368c:
    // 0x17368c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_173690:
    // 0x173690: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173694:
    // 0x173694: 0xc08455c  jal         func_211570
label_173698:
    if (ctx->pc == 0x173698u) {
        ctx->pc = 0x17369Cu;
        goto label_17369c;
    }
    ctx->pc = 0x173694u;
    SET_GPR_U32(ctx, 31, 0x17369Cu);
    ctx->pc = 0x211570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211570u, 0x173694u, 0x17369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17369Cu;
label_17369c:
    // 0x17369c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17369cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1736a0:
    // 0x1736a0: 0x10000020  b           . + 4 + (0x20 << 2)
label_1736a4:
    if (ctx->pc == 0x1736A4u) {
        ctx->pc = 0x1736A8u;
        goto label_1736a8;
    }
    ctx->pc = 0x1736A0u;
    {
        const bool branch_taken_0x1736a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1736a0) {
            ctx->pc = 0x173724u;
            goto label_173724;
        }
    }
    ctx->pc = 0x1736A8u;
label_1736a8:
    // 0x1736a8: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x1736a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1736ac:
    // 0x1736ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1736acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1736b0:
    // 0x1736b0: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x1736b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1736b4:
    // 0x1736b4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1736b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1736b8:
    // 0x1736b8: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x1736b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1736bc:
    // 0x1736bc: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1736bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1736c0:
    // 0x1736c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1736c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1736c4:
    // 0x1736c4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1736c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1736c8:
    // 0x1736c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1736c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1736cc:
    // 0x1736cc: 0xc08c8dc  jal         func_232370
label_1736d0:
    if (ctx->pc == 0x1736D0u) {
        ctx->pc = 0x1736D4u;
        goto label_1736d4;
    }
    ctx->pc = 0x1736CCu;
    SET_GPR_U32(ctx, 31, 0x1736D4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1736CCu, 0x1736D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1736D4u;
label_1736d4:
    // 0x1736d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1736d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1736d8:
    // 0x1736d8: 0x10000012  b           . + 4 + (0x12 << 2)
label_1736dc:
    if (ctx->pc == 0x1736DCu) {
        ctx->pc = 0x1736E0u;
        goto label_1736e0;
    }
    ctx->pc = 0x1736D8u;
    {
        const bool branch_taken_0x1736d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1736d8) {
            ctx->pc = 0x173724u;
            goto label_173724;
        }
    }
    ctx->pc = 0x1736E0u;
label_1736e0:
    // 0x1736e0: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x1736e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1736e4:
    // 0x1736e4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1736e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1736e8:
    // 0x1736e8: 0x8fa60270  lw          $a2, 0x270($sp)
    ctx->pc = 0x1736e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1736ec:
    // 0x1736ec: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1736ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1736f0:
    // 0x1736f0: 0x8c850084  lw          $a1, 0x84($a0)
    ctx->pc = 0x1736f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_1736f4:
    // 0x1736f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1736f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1736f8:
    // 0x1736f8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1736f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1736fc:
    // 0x1736fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1736fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173700:
    // 0x173700: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x173700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_173704:
    // 0x173704: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173708:
    // 0x173708: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17370c:
    // 0x17370c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173710:
    // 0x173710: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x173710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_173714:
    // 0x173714: 0x7ba900a0  lq          $t1, 0xA0($sp)
    ctx->pc = 0x173714u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_173718:
    // 0x173718: 0xc08bbf4  jal         func_22EFD0
label_17371c:
    if (ctx->pc == 0x17371Cu) {
        ctx->pc = 0x173720u;
        goto label_173720;
    }
    ctx->pc = 0x173718u;
    SET_GPR_U32(ctx, 31, 0x173720u);
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x173718u, 0x173720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173720u;
label_173720:
    // 0x173720: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173724:
    // 0x173724: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x173724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_173728:
    // 0x173728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x173728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17372c:
    // 0x17372c: 0x2a060003  slti        $a2, $s0, 0x3
    ctx->pc = 0x17372cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_173730:
    // 0x173730: 0x14c0ff29  bnez        $a2, . + 4 + (-0xD7 << 2)
label_173734:
    if (ctx->pc == 0x173734u) {
        ctx->pc = 0x173738u;
        goto label_173738;
    }
    ctx->pc = 0x173730u;
    {
        const bool branch_taken_0x173730 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x173730) {
            ctx->pc = 0x1733D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1733d8;
        }
    }
    ctx->pc = 0x173738u;
label_173738:
    // 0x173738: 0x8f82bbdc  lw          $v0, -0x4424($gp)
    ctx->pc = 0x173738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_17373c:
    // 0x17373c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17373cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173740:
    // 0x173740: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x173740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_173744:
    // 0x173744: 0x24a54808  addiu       $a1, $a1, 0x4808
    ctx->pc = 0x173744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18440));
label_173748:
    // 0x173748: 0xc08e57c  jal         func_2395F0
label_17374c:
    if (ctx->pc == 0x17374Cu) {
        ctx->pc = 0x173750u;
        goto label_173750;
    }
    ctx->pc = 0x173748u;
    SET_GPR_U32(ctx, 31, 0x173750u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x173748u, 0x173750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173750u;
label_173750:
    // 0x173750: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173754:
    // 0x173754: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x173754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_173758:
    // 0x173758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17375c:
    // 0x17375c: 0xc0477e8  jal         func_11DFA0
label_173760:
    if (ctx->pc == 0x173760u) {
        ctx->pc = 0x173764u;
        goto label_173764;
    }
    ctx->pc = 0x17375Cu;
    SET_GPR_U32(ctx, 31, 0x173764u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17375Cu, 0x173764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173764u;
label_173764:
    // 0x173764: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173768:
    // 0x173768: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x173768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_17376c:
    // 0x17376c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17376cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173770:
    // 0x173770: 0xc04ddfc  jal         func_1377F0
label_173774:
    if (ctx->pc == 0x173774u) {
        ctx->pc = 0x173778u;
        goto label_173778;
    }
    ctx->pc = 0x173770u;
    SET_GPR_U32(ctx, 31, 0x173778u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x173770u, 0x173778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173778u;
label_173778:
    // 0x173778: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x173778u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17377c:
    // 0x17377c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_173780:
    if (ctx->pc == 0x173780u) {
        ctx->pc = 0x173784u;
        goto label_173784;
    }
    ctx->pc = 0x17377Cu;
    {
        const bool branch_taken_0x17377c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17377c) {
            ctx->pc = 0x1737A8u;
            goto label_1737a8;
        }
    }
    ctx->pc = 0x173784u;
label_173784:
    // 0x173784: 0x8fa80270  lw          $t0, 0x270($sp)
    ctx->pc = 0x173784u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173788:
    // 0x173788: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x173788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_17378c:
    // 0x17378c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x17378cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_173790:
    // 0x173790: 0x24a547a0  addiu       $a1, $a1, 0x47A0
    ctx->pc = 0x173790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18336));
label_173794:
    // 0x173794: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x173794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_173798:
    // 0x173798: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x173798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17379c:
    // 0x17379c: 0x8d07007c  lw          $a3, 0x7C($t0)
    ctx->pc = 0x17379cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 124)));
label_1737a0:
    // 0x1737a0: 0xc055fb0  jal         func_157EC0
label_1737a4:
    if (ctx->pc == 0x1737A4u) {
        ctx->pc = 0x1737A8u;
        goto label_1737a8;
    }
    ctx->pc = 0x1737A0u;
    SET_GPR_U32(ctx, 31, 0x1737A8u);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x1737A0u, 0x1737A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1737A8u;
label_1737a8:
    // 0x1737a8: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x1737a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_1737ac:
    // 0x1737ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1737acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1737b0:
    // 0x1737b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1737b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1737b4:
    // 0x1737b4: 0xc0406a0  jal         func_101A80
label_1737b8:
    if (ctx->pc == 0x1737B8u) {
        ctx->pc = 0x1737BCu;
        goto label_1737bc;
    }
    ctx->pc = 0x1737B4u;
    SET_GPR_U32(ctx, 31, 0x1737BCu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1737B4u, 0x1737BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1737BCu;
label_1737bc:
    // 0x1737bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1737bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1737c0:
    // 0x1737c0: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x1737c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_1737c4:
    // 0x1737c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1737c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1737c8:
    // 0x1737c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1737c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1737cc:
    // 0x1737cc: 0xc0406a0  jal         func_101A80
label_1737d0:
    if (ctx->pc == 0x1737D0u) {
        ctx->pc = 0x1737D4u;
        goto label_1737d4;
    }
    ctx->pc = 0x1737CCu;
    SET_GPR_U32(ctx, 31, 0x1737D4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1737CCu, 0x1737D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1737D4u;
label_1737d4:
    // 0x1737d4: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1737d8:
    if (ctx->pc == 0x1737D8u) {
        ctx->pc = 0x1737DCu;
        goto label_1737dc;
    }
    ctx->pc = 0x1737D4u;
    {
        const bool branch_taken_0x1737d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1737d4) {
            ctx->pc = 0x1738C4u;
            goto label_1738c4;
        }
    }
    ctx->pc = 0x1737DCu;
label_1737dc:
    // 0x1737dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1737dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1737e0:
    // 0x1737e0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1737e4:
    if (ctx->pc == 0x1737E4u) {
        ctx->pc = 0x1737E8u;
        goto label_1737e8;
    }
    ctx->pc = 0x1737E0u;
    {
        const bool branch_taken_0x1737e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1737e0) {
            ctx->pc = 0x173858u;
            goto label_173858;
        }
    }
    ctx->pc = 0x1737E8u;
label_1737e8:
    // 0x1737e8: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1737e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1737ec:
    // 0x1737ec: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x1737ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1737f0:
    // 0x1737f0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1737f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1737f4:
    // 0x1737f4: 0x8ca60084  lw          $a2, 0x84($a1)
    ctx->pc = 0x1737f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
label_1737f8:
    // 0x1737f8: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
label_1737fc:
    if (ctx->pc == 0x1737FCu) {
        ctx->pc = 0x173800u;
        goto label_173800;
    }
    ctx->pc = 0x1737F8u;
    {
        const bool branch_taken_0x1737f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1737f8) {
            ctx->pc = 0x173854u;
            goto label_173854;
        }
    }
    ctx->pc = 0x173800u;
label_173800:
    // 0x173800: 0x8fa70270  lw          $a3, 0x270($sp)
    ctx->pc = 0x173800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173804:
    // 0x173804: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x173804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_173808:
    // 0x173808: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x173808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_17380c:
    // 0x17380c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x17380cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_173810:
    // 0x173810: 0x8ca20084  lw          $v0, 0x84($a1)
    ctx->pc = 0x173810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
label_173814:
    // 0x173814: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x173814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_173818:
    // 0x173818: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17381c:
    // 0x17381c: 0xc08c910  jal         func_232440
label_173820:
    if (ctx->pc == 0x173820u) {
        ctx->pc = 0x173824u;
        goto label_173824;
    }
    ctx->pc = 0x17381Cu;
    SET_GPR_U32(ctx, 31, 0x173824u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x17381Cu, 0x173824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173824u;
label_173824:
    // 0x173824: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173828:
    // 0x173828: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x173828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_17382c:
    // 0x17382c: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x17382cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_173830:
    // 0x173830: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x173830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173834:
    // 0x173834: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x173834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_173838:
    // 0x173838: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x173838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_17383c:
    // 0x17383c: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x17383cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_173840:
    // 0x173840: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x173840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_173844:
    // 0x173844: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x173844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_173848:
    // 0x173848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17384c:
    // 0x17384c: 0xc08c8dc  jal         func_232370
label_173850:
    if (ctx->pc == 0x173850u) {
        ctx->pc = 0x173854u;
        goto label_173854;
    }
    ctx->pc = 0x17384Cu;
    SET_GPR_U32(ctx, 31, 0x173854u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17384Cu, 0x173854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173854u;
label_173854:
    // 0x173854: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x173854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_173858:
    // 0x173858: 0x2a840003  slti        $a0, $s4, 0x3
    ctx->pc = 0x173858u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_17385c:
    // 0x17385c: 0x1480ffe2  bnez        $a0, . + 4 + (-0x1E << 2)
label_173860:
    if (ctx->pc == 0x173860u) {
        ctx->pc = 0x173864u;
        goto label_173864;
    }
    ctx->pc = 0x17385Cu;
    {
        const bool branch_taken_0x17385c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17385c) {
            ctx->pc = 0x1737E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1737e8;
        }
    }
    ctx->pc = 0x173864u;
label_173864:
    // 0x173864: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x173864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173868:
    // 0x173868: 0x8c850080  lw          $a1, 0x80($a0)
    ctx->pc = 0x173868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_17386c:
    // 0x17386c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_173870:
    if (ctx->pc == 0x173870u) {
        ctx->pc = 0x173874u;
        goto label_173874;
    }
    ctx->pc = 0x17386Cu;
    {
        const bool branch_taken_0x17386c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17386c) {
            ctx->pc = 0x1738C4u;
            goto label_1738c4;
        }
    }
    ctx->pc = 0x173874u;
label_173874:
    // 0x173874: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x173874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173878:
    // 0x173878: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x173878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_17387c:
    // 0x17387c: 0xc0843f0  jal         func_210FC0
label_173880:
    if (ctx->pc == 0x173880u) {
        ctx->pc = 0x173884u;
        goto label_173884;
    }
    ctx->pc = 0x17387Cu;
    SET_GPR_U32(ctx, 31, 0x173884u);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x17387Cu, 0x173884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173884u;
label_173884:
    // 0x173884: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x173884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173888:
    // 0x173888: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x173888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_17388c:
    // 0x17388c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_173890:
    if (ctx->pc == 0x173890u) {
        ctx->pc = 0x173894u;
        goto label_173894;
    }
    ctx->pc = 0x17388Cu;
    {
        const bool branch_taken_0x17388c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17388c) {
            ctx->pc = 0x1738C4u;
            goto label_1738c4;
        }
    }
    ctx->pc = 0x173894u;
label_173894:
    // 0x173894: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x173894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_173898:
    // 0x173898: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x173898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_17389c:
    // 0x17389c: 0xc056ee8  jal         func_15BBA0
label_1738a0:
    if (ctx->pc == 0x1738A0u) {
        ctx->pc = 0x1738A4u;
        goto label_1738a4;
    }
    ctx->pc = 0x17389Cu;
    SET_GPR_U32(ctx, 31, 0x1738A4u);
    ctx->pc = 0x15BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BBA0u, 0x17389Cu, 0x1738A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1738A4u;
label_1738a4:
    // 0x1738a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1738a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1738a8:
    // 0x1738a8: 0x8fa60270  lw          $a2, 0x270($sp)
    ctx->pc = 0x1738a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1738ac:
    // 0x1738ac: 0x8cc70080  lw          $a3, 0x80($a2)
    ctx->pc = 0x1738acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
label_1738b0:
    // 0x1738b0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1738b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1738b4:
    // 0x1738b4: 0xc119c5c  jal         func_467170
label_1738b8:
    if (ctx->pc == 0x1738B8u) {
        ctx->pc = 0x1738BCu;
        goto label_1738bc;
    }
    ctx->pc = 0x1738B4u;
    SET_GPR_U32(ctx, 31, 0x1738BCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1738B4u, 0x1738BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1738BCu;
label_1738bc:
    // 0x1738bc: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x1738bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_1738c0:
    // 0x1738c0: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1738c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
label_1738c4:
    // 0x1738c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1738c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1738c8:
    // 0x1738c8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1738c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1738cc:
    // 0x1738cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1738ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1738d0:
    // 0x1738d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1738d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1738d4:
    // 0x1738d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1738d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1738d8:
    // 0x1738d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1738d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1738dc:
    // 0x1738dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1738dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1738e0:
    // 0x1738e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1738e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1738e4:
    // 0x1738e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1738e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1738e8:
    // 0x1738e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1738e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1738ec:
    // 0x1738ec: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x1738ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_1738f0:
    // 0x1738f0: 0x3e00008  jr          $ra
label_1738f4:
    if (ctx->pc == 0x1738F4u) {
        ctx->pc = 0x1738F8u;
        goto label_1738f8;
    }
    ctx->pc = 0x1738F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1738F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1738F8u;
label_1738f8:
    // 0x1738f8: 0x0  nop
    ctx->pc = 0x1738f8u;
    // NOP
label_1738fc:
    // 0x1738fc: 0x0  nop
    ctx->pc = 0x1738fcu;
    // NOP
    ctx->pc = 0x173900u;
}
