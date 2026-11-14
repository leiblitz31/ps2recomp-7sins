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

// Function: sub_001B5700
// Address: 0x1b5700 - 0x1b5df0
void sub_001B5700_0x1b5700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5700_0x1b5700");
#endif

    switch (ctx->pc) {
        case 0x1b5700u: goto label_1b5700;
        case 0x1b5704u: goto label_1b5704;
        case 0x1b5708u: goto label_1b5708;
        case 0x1b570cu: goto label_1b570c;
        case 0x1b5710u: goto label_1b5710;
        case 0x1b5714u: goto label_1b5714;
        case 0x1b5718u: goto label_1b5718;
        case 0x1b571cu: goto label_1b571c;
        case 0x1b5720u: goto label_1b5720;
        case 0x1b5724u: goto label_1b5724;
        case 0x1b5728u: goto label_1b5728;
        case 0x1b572cu: goto label_1b572c;
        case 0x1b5730u: goto label_1b5730;
        case 0x1b5734u: goto label_1b5734;
        case 0x1b5738u: goto label_1b5738;
        case 0x1b573cu: goto label_1b573c;
        case 0x1b5740u: goto label_1b5740;
        case 0x1b5744u: goto label_1b5744;
        case 0x1b5748u: goto label_1b5748;
        case 0x1b574cu: goto label_1b574c;
        case 0x1b5750u: goto label_1b5750;
        case 0x1b5754u: goto label_1b5754;
        case 0x1b5758u: goto label_1b5758;
        case 0x1b575cu: goto label_1b575c;
        case 0x1b5760u: goto label_1b5760;
        case 0x1b5764u: goto label_1b5764;
        case 0x1b5768u: goto label_1b5768;
        case 0x1b576cu: goto label_1b576c;
        case 0x1b5770u: goto label_1b5770;
        case 0x1b5774u: goto label_1b5774;
        case 0x1b5778u: goto label_1b5778;
        case 0x1b577cu: goto label_1b577c;
        case 0x1b5780u: goto label_1b5780;
        case 0x1b5784u: goto label_1b5784;
        case 0x1b5788u: goto label_1b5788;
        case 0x1b578cu: goto label_1b578c;
        case 0x1b5790u: goto label_1b5790;
        case 0x1b5794u: goto label_1b5794;
        case 0x1b5798u: goto label_1b5798;
        case 0x1b579cu: goto label_1b579c;
        case 0x1b57a0u: goto label_1b57a0;
        case 0x1b57a4u: goto label_1b57a4;
        case 0x1b57a8u: goto label_1b57a8;
        case 0x1b57acu: goto label_1b57ac;
        case 0x1b57b0u: goto label_1b57b0;
        case 0x1b57b4u: goto label_1b57b4;
        case 0x1b57b8u: goto label_1b57b8;
        case 0x1b57bcu: goto label_1b57bc;
        case 0x1b57c0u: goto label_1b57c0;
        case 0x1b57c4u: goto label_1b57c4;
        case 0x1b57c8u: goto label_1b57c8;
        case 0x1b57ccu: goto label_1b57cc;
        case 0x1b57d0u: goto label_1b57d0;
        case 0x1b57d4u: goto label_1b57d4;
        case 0x1b57d8u: goto label_1b57d8;
        case 0x1b57dcu: goto label_1b57dc;
        case 0x1b57e0u: goto label_1b57e0;
        case 0x1b57e4u: goto label_1b57e4;
        case 0x1b57e8u: goto label_1b57e8;
        case 0x1b57ecu: goto label_1b57ec;
        case 0x1b57f0u: goto label_1b57f0;
        case 0x1b57f4u: goto label_1b57f4;
        case 0x1b57f8u: goto label_1b57f8;
        case 0x1b57fcu: goto label_1b57fc;
        case 0x1b5800u: goto label_1b5800;
        case 0x1b5804u: goto label_1b5804;
        case 0x1b5808u: goto label_1b5808;
        case 0x1b580cu: goto label_1b580c;
        case 0x1b5810u: goto label_1b5810;
        case 0x1b5814u: goto label_1b5814;
        case 0x1b5818u: goto label_1b5818;
        case 0x1b581cu: goto label_1b581c;
        case 0x1b5820u: goto label_1b5820;
        case 0x1b5824u: goto label_1b5824;
        case 0x1b5828u: goto label_1b5828;
        case 0x1b582cu: goto label_1b582c;
        case 0x1b5830u: goto label_1b5830;
        case 0x1b5834u: goto label_1b5834;
        case 0x1b5838u: goto label_1b5838;
        case 0x1b583cu: goto label_1b583c;
        case 0x1b5840u: goto label_1b5840;
        case 0x1b5844u: goto label_1b5844;
        case 0x1b5848u: goto label_1b5848;
        case 0x1b584cu: goto label_1b584c;
        case 0x1b5850u: goto label_1b5850;
        case 0x1b5854u: goto label_1b5854;
        case 0x1b5858u: goto label_1b5858;
        case 0x1b585cu: goto label_1b585c;
        case 0x1b5860u: goto label_1b5860;
        case 0x1b5864u: goto label_1b5864;
        case 0x1b5868u: goto label_1b5868;
        case 0x1b586cu: goto label_1b586c;
        case 0x1b5870u: goto label_1b5870;
        case 0x1b5874u: goto label_1b5874;
        case 0x1b5878u: goto label_1b5878;
        case 0x1b587cu: goto label_1b587c;
        case 0x1b5880u: goto label_1b5880;
        case 0x1b5884u: goto label_1b5884;
        case 0x1b5888u: goto label_1b5888;
        case 0x1b588cu: goto label_1b588c;
        case 0x1b5890u: goto label_1b5890;
        case 0x1b5894u: goto label_1b5894;
        case 0x1b5898u: goto label_1b5898;
        case 0x1b589cu: goto label_1b589c;
        case 0x1b58a0u: goto label_1b58a0;
        case 0x1b58a4u: goto label_1b58a4;
        case 0x1b58a8u: goto label_1b58a8;
        case 0x1b58acu: goto label_1b58ac;
        case 0x1b58b0u: goto label_1b58b0;
        case 0x1b58b4u: goto label_1b58b4;
        case 0x1b58b8u: goto label_1b58b8;
        case 0x1b58bcu: goto label_1b58bc;
        case 0x1b58c0u: goto label_1b58c0;
        case 0x1b58c4u: goto label_1b58c4;
        case 0x1b58c8u: goto label_1b58c8;
        case 0x1b58ccu: goto label_1b58cc;
        case 0x1b58d0u: goto label_1b58d0;
        case 0x1b58d4u: goto label_1b58d4;
        case 0x1b58d8u: goto label_1b58d8;
        case 0x1b58dcu: goto label_1b58dc;
        case 0x1b58e0u: goto label_1b58e0;
        case 0x1b58e4u: goto label_1b58e4;
        case 0x1b58e8u: goto label_1b58e8;
        case 0x1b58ecu: goto label_1b58ec;
        case 0x1b58f0u: goto label_1b58f0;
        case 0x1b58f4u: goto label_1b58f4;
        case 0x1b58f8u: goto label_1b58f8;
        case 0x1b58fcu: goto label_1b58fc;
        case 0x1b5900u: goto label_1b5900;
        case 0x1b5904u: goto label_1b5904;
        case 0x1b5908u: goto label_1b5908;
        case 0x1b590cu: goto label_1b590c;
        case 0x1b5910u: goto label_1b5910;
        case 0x1b5914u: goto label_1b5914;
        case 0x1b5918u: goto label_1b5918;
        case 0x1b591cu: goto label_1b591c;
        case 0x1b5920u: goto label_1b5920;
        case 0x1b5924u: goto label_1b5924;
        case 0x1b5928u: goto label_1b5928;
        case 0x1b592cu: goto label_1b592c;
        case 0x1b5930u: goto label_1b5930;
        case 0x1b5934u: goto label_1b5934;
        case 0x1b5938u: goto label_1b5938;
        case 0x1b593cu: goto label_1b593c;
        case 0x1b5940u: goto label_1b5940;
        case 0x1b5944u: goto label_1b5944;
        case 0x1b5948u: goto label_1b5948;
        case 0x1b594cu: goto label_1b594c;
        case 0x1b5950u: goto label_1b5950;
        case 0x1b5954u: goto label_1b5954;
        case 0x1b5958u: goto label_1b5958;
        case 0x1b595cu: goto label_1b595c;
        case 0x1b5960u: goto label_1b5960;
        case 0x1b5964u: goto label_1b5964;
        case 0x1b5968u: goto label_1b5968;
        case 0x1b596cu: goto label_1b596c;
        case 0x1b5970u: goto label_1b5970;
        case 0x1b5974u: goto label_1b5974;
        case 0x1b5978u: goto label_1b5978;
        case 0x1b597cu: goto label_1b597c;
        case 0x1b5980u: goto label_1b5980;
        case 0x1b5984u: goto label_1b5984;
        case 0x1b5988u: goto label_1b5988;
        case 0x1b598cu: goto label_1b598c;
        case 0x1b5990u: goto label_1b5990;
        case 0x1b5994u: goto label_1b5994;
        case 0x1b5998u: goto label_1b5998;
        case 0x1b599cu: goto label_1b599c;
        case 0x1b59a0u: goto label_1b59a0;
        case 0x1b59a4u: goto label_1b59a4;
        case 0x1b59a8u: goto label_1b59a8;
        case 0x1b59acu: goto label_1b59ac;
        case 0x1b59b0u: goto label_1b59b0;
        case 0x1b59b4u: goto label_1b59b4;
        case 0x1b59b8u: goto label_1b59b8;
        case 0x1b59bcu: goto label_1b59bc;
        case 0x1b59c0u: goto label_1b59c0;
        case 0x1b59c4u: goto label_1b59c4;
        case 0x1b59c8u: goto label_1b59c8;
        case 0x1b59ccu: goto label_1b59cc;
        case 0x1b59d0u: goto label_1b59d0;
        case 0x1b59d4u: goto label_1b59d4;
        case 0x1b59d8u: goto label_1b59d8;
        case 0x1b59dcu: goto label_1b59dc;
        case 0x1b59e0u: goto label_1b59e0;
        case 0x1b59e4u: goto label_1b59e4;
        case 0x1b59e8u: goto label_1b59e8;
        case 0x1b59ecu: goto label_1b59ec;
        case 0x1b59f0u: goto label_1b59f0;
        case 0x1b59f4u: goto label_1b59f4;
        case 0x1b59f8u: goto label_1b59f8;
        case 0x1b59fcu: goto label_1b59fc;
        case 0x1b5a00u: goto label_1b5a00;
        case 0x1b5a04u: goto label_1b5a04;
        case 0x1b5a08u: goto label_1b5a08;
        case 0x1b5a0cu: goto label_1b5a0c;
        case 0x1b5a10u: goto label_1b5a10;
        case 0x1b5a14u: goto label_1b5a14;
        case 0x1b5a18u: goto label_1b5a18;
        case 0x1b5a1cu: goto label_1b5a1c;
        case 0x1b5a20u: goto label_1b5a20;
        case 0x1b5a24u: goto label_1b5a24;
        case 0x1b5a28u: goto label_1b5a28;
        case 0x1b5a2cu: goto label_1b5a2c;
        case 0x1b5a30u: goto label_1b5a30;
        case 0x1b5a34u: goto label_1b5a34;
        case 0x1b5a38u: goto label_1b5a38;
        case 0x1b5a3cu: goto label_1b5a3c;
        case 0x1b5a40u: goto label_1b5a40;
        case 0x1b5a44u: goto label_1b5a44;
        case 0x1b5a48u: goto label_1b5a48;
        case 0x1b5a4cu: goto label_1b5a4c;
        case 0x1b5a50u: goto label_1b5a50;
        case 0x1b5a54u: goto label_1b5a54;
        case 0x1b5a58u: goto label_1b5a58;
        case 0x1b5a5cu: goto label_1b5a5c;
        case 0x1b5a60u: goto label_1b5a60;
        case 0x1b5a64u: goto label_1b5a64;
        case 0x1b5a68u: goto label_1b5a68;
        case 0x1b5a6cu: goto label_1b5a6c;
        case 0x1b5a70u: goto label_1b5a70;
        case 0x1b5a74u: goto label_1b5a74;
        case 0x1b5a78u: goto label_1b5a78;
        case 0x1b5a7cu: goto label_1b5a7c;
        case 0x1b5a80u: goto label_1b5a80;
        case 0x1b5a84u: goto label_1b5a84;
        case 0x1b5a88u: goto label_1b5a88;
        case 0x1b5a8cu: goto label_1b5a8c;
        case 0x1b5a90u: goto label_1b5a90;
        case 0x1b5a94u: goto label_1b5a94;
        case 0x1b5a98u: goto label_1b5a98;
        case 0x1b5a9cu: goto label_1b5a9c;
        case 0x1b5aa0u: goto label_1b5aa0;
        case 0x1b5aa4u: goto label_1b5aa4;
        case 0x1b5aa8u: goto label_1b5aa8;
        case 0x1b5aacu: goto label_1b5aac;
        case 0x1b5ab0u: goto label_1b5ab0;
        case 0x1b5ab4u: goto label_1b5ab4;
        case 0x1b5ab8u: goto label_1b5ab8;
        case 0x1b5abcu: goto label_1b5abc;
        case 0x1b5ac0u: goto label_1b5ac0;
        case 0x1b5ac4u: goto label_1b5ac4;
        case 0x1b5ac8u: goto label_1b5ac8;
        case 0x1b5accu: goto label_1b5acc;
        case 0x1b5ad0u: goto label_1b5ad0;
        case 0x1b5ad4u: goto label_1b5ad4;
        case 0x1b5ad8u: goto label_1b5ad8;
        case 0x1b5adcu: goto label_1b5adc;
        case 0x1b5ae0u: goto label_1b5ae0;
        case 0x1b5ae4u: goto label_1b5ae4;
        case 0x1b5ae8u: goto label_1b5ae8;
        case 0x1b5aecu: goto label_1b5aec;
        case 0x1b5af0u: goto label_1b5af0;
        case 0x1b5af4u: goto label_1b5af4;
        case 0x1b5af8u: goto label_1b5af8;
        case 0x1b5afcu: goto label_1b5afc;
        case 0x1b5b00u: goto label_1b5b00;
        case 0x1b5b04u: goto label_1b5b04;
        case 0x1b5b08u: goto label_1b5b08;
        case 0x1b5b0cu: goto label_1b5b0c;
        case 0x1b5b10u: goto label_1b5b10;
        case 0x1b5b14u: goto label_1b5b14;
        case 0x1b5b18u: goto label_1b5b18;
        case 0x1b5b1cu: goto label_1b5b1c;
        case 0x1b5b20u: goto label_1b5b20;
        case 0x1b5b24u: goto label_1b5b24;
        case 0x1b5b28u: goto label_1b5b28;
        case 0x1b5b2cu: goto label_1b5b2c;
        case 0x1b5b30u: goto label_1b5b30;
        case 0x1b5b34u: goto label_1b5b34;
        case 0x1b5b38u: goto label_1b5b38;
        case 0x1b5b3cu: goto label_1b5b3c;
        case 0x1b5b40u: goto label_1b5b40;
        case 0x1b5b44u: goto label_1b5b44;
        case 0x1b5b48u: goto label_1b5b48;
        case 0x1b5b4cu: goto label_1b5b4c;
        case 0x1b5b50u: goto label_1b5b50;
        case 0x1b5b54u: goto label_1b5b54;
        case 0x1b5b58u: goto label_1b5b58;
        case 0x1b5b5cu: goto label_1b5b5c;
        case 0x1b5b60u: goto label_1b5b60;
        case 0x1b5b64u: goto label_1b5b64;
        case 0x1b5b68u: goto label_1b5b68;
        case 0x1b5b6cu: goto label_1b5b6c;
        case 0x1b5b70u: goto label_1b5b70;
        case 0x1b5b74u: goto label_1b5b74;
        case 0x1b5b78u: goto label_1b5b78;
        case 0x1b5b7cu: goto label_1b5b7c;
        case 0x1b5b80u: goto label_1b5b80;
        case 0x1b5b84u: goto label_1b5b84;
        case 0x1b5b88u: goto label_1b5b88;
        case 0x1b5b8cu: goto label_1b5b8c;
        case 0x1b5b90u: goto label_1b5b90;
        case 0x1b5b94u: goto label_1b5b94;
        case 0x1b5b98u: goto label_1b5b98;
        case 0x1b5b9cu: goto label_1b5b9c;
        case 0x1b5ba0u: goto label_1b5ba0;
        case 0x1b5ba4u: goto label_1b5ba4;
        case 0x1b5ba8u: goto label_1b5ba8;
        case 0x1b5bacu: goto label_1b5bac;
        case 0x1b5bb0u: goto label_1b5bb0;
        case 0x1b5bb4u: goto label_1b5bb4;
        case 0x1b5bb8u: goto label_1b5bb8;
        case 0x1b5bbcu: goto label_1b5bbc;
        case 0x1b5bc0u: goto label_1b5bc0;
        case 0x1b5bc4u: goto label_1b5bc4;
        case 0x1b5bc8u: goto label_1b5bc8;
        case 0x1b5bccu: goto label_1b5bcc;
        case 0x1b5bd0u: goto label_1b5bd0;
        case 0x1b5bd4u: goto label_1b5bd4;
        case 0x1b5bd8u: goto label_1b5bd8;
        case 0x1b5bdcu: goto label_1b5bdc;
        case 0x1b5be0u: goto label_1b5be0;
        case 0x1b5be4u: goto label_1b5be4;
        case 0x1b5be8u: goto label_1b5be8;
        case 0x1b5becu: goto label_1b5bec;
        case 0x1b5bf0u: goto label_1b5bf0;
        case 0x1b5bf4u: goto label_1b5bf4;
        case 0x1b5bf8u: goto label_1b5bf8;
        case 0x1b5bfcu: goto label_1b5bfc;
        case 0x1b5c00u: goto label_1b5c00;
        case 0x1b5c04u: goto label_1b5c04;
        case 0x1b5c08u: goto label_1b5c08;
        case 0x1b5c0cu: goto label_1b5c0c;
        case 0x1b5c10u: goto label_1b5c10;
        case 0x1b5c14u: goto label_1b5c14;
        case 0x1b5c18u: goto label_1b5c18;
        case 0x1b5c1cu: goto label_1b5c1c;
        case 0x1b5c20u: goto label_1b5c20;
        case 0x1b5c24u: goto label_1b5c24;
        case 0x1b5c28u: goto label_1b5c28;
        case 0x1b5c2cu: goto label_1b5c2c;
        case 0x1b5c30u: goto label_1b5c30;
        case 0x1b5c34u: goto label_1b5c34;
        case 0x1b5c38u: goto label_1b5c38;
        case 0x1b5c3cu: goto label_1b5c3c;
        case 0x1b5c40u: goto label_1b5c40;
        case 0x1b5c44u: goto label_1b5c44;
        case 0x1b5c48u: goto label_1b5c48;
        case 0x1b5c4cu: goto label_1b5c4c;
        case 0x1b5c50u: goto label_1b5c50;
        case 0x1b5c54u: goto label_1b5c54;
        case 0x1b5c58u: goto label_1b5c58;
        case 0x1b5c5cu: goto label_1b5c5c;
        case 0x1b5c60u: goto label_1b5c60;
        case 0x1b5c64u: goto label_1b5c64;
        case 0x1b5c68u: goto label_1b5c68;
        case 0x1b5c6cu: goto label_1b5c6c;
        case 0x1b5c70u: goto label_1b5c70;
        case 0x1b5c74u: goto label_1b5c74;
        case 0x1b5c78u: goto label_1b5c78;
        case 0x1b5c7cu: goto label_1b5c7c;
        case 0x1b5c80u: goto label_1b5c80;
        case 0x1b5c84u: goto label_1b5c84;
        case 0x1b5c88u: goto label_1b5c88;
        case 0x1b5c8cu: goto label_1b5c8c;
        case 0x1b5c90u: goto label_1b5c90;
        case 0x1b5c94u: goto label_1b5c94;
        case 0x1b5c98u: goto label_1b5c98;
        case 0x1b5c9cu: goto label_1b5c9c;
        case 0x1b5ca0u: goto label_1b5ca0;
        case 0x1b5ca4u: goto label_1b5ca4;
        case 0x1b5ca8u: goto label_1b5ca8;
        case 0x1b5cacu: goto label_1b5cac;
        case 0x1b5cb0u: goto label_1b5cb0;
        case 0x1b5cb4u: goto label_1b5cb4;
        case 0x1b5cb8u: goto label_1b5cb8;
        case 0x1b5cbcu: goto label_1b5cbc;
        case 0x1b5cc0u: goto label_1b5cc0;
        case 0x1b5cc4u: goto label_1b5cc4;
        case 0x1b5cc8u: goto label_1b5cc8;
        case 0x1b5cccu: goto label_1b5ccc;
        case 0x1b5cd0u: goto label_1b5cd0;
        case 0x1b5cd4u: goto label_1b5cd4;
        case 0x1b5cd8u: goto label_1b5cd8;
        case 0x1b5cdcu: goto label_1b5cdc;
        case 0x1b5ce0u: goto label_1b5ce0;
        case 0x1b5ce4u: goto label_1b5ce4;
        case 0x1b5ce8u: goto label_1b5ce8;
        case 0x1b5cecu: goto label_1b5cec;
        case 0x1b5cf0u: goto label_1b5cf0;
        case 0x1b5cf4u: goto label_1b5cf4;
        case 0x1b5cf8u: goto label_1b5cf8;
        case 0x1b5cfcu: goto label_1b5cfc;
        case 0x1b5d00u: goto label_1b5d00;
        case 0x1b5d04u: goto label_1b5d04;
        case 0x1b5d08u: goto label_1b5d08;
        case 0x1b5d0cu: goto label_1b5d0c;
        case 0x1b5d10u: goto label_1b5d10;
        case 0x1b5d14u: goto label_1b5d14;
        case 0x1b5d18u: goto label_1b5d18;
        case 0x1b5d1cu: goto label_1b5d1c;
        case 0x1b5d20u: goto label_1b5d20;
        case 0x1b5d24u: goto label_1b5d24;
        case 0x1b5d28u: goto label_1b5d28;
        case 0x1b5d2cu: goto label_1b5d2c;
        case 0x1b5d30u: goto label_1b5d30;
        case 0x1b5d34u: goto label_1b5d34;
        case 0x1b5d38u: goto label_1b5d38;
        case 0x1b5d3cu: goto label_1b5d3c;
        case 0x1b5d40u: goto label_1b5d40;
        case 0x1b5d44u: goto label_1b5d44;
        case 0x1b5d48u: goto label_1b5d48;
        case 0x1b5d4cu: goto label_1b5d4c;
        case 0x1b5d50u: goto label_1b5d50;
        case 0x1b5d54u: goto label_1b5d54;
        case 0x1b5d58u: goto label_1b5d58;
        case 0x1b5d5cu: goto label_1b5d5c;
        case 0x1b5d60u: goto label_1b5d60;
        case 0x1b5d64u: goto label_1b5d64;
        case 0x1b5d68u: goto label_1b5d68;
        case 0x1b5d6cu: goto label_1b5d6c;
        case 0x1b5d70u: goto label_1b5d70;
        case 0x1b5d74u: goto label_1b5d74;
        case 0x1b5d78u: goto label_1b5d78;
        case 0x1b5d7cu: goto label_1b5d7c;
        case 0x1b5d80u: goto label_1b5d80;
        case 0x1b5d84u: goto label_1b5d84;
        case 0x1b5d88u: goto label_1b5d88;
        case 0x1b5d8cu: goto label_1b5d8c;
        case 0x1b5d90u: goto label_1b5d90;
        case 0x1b5d94u: goto label_1b5d94;
        case 0x1b5d98u: goto label_1b5d98;
        case 0x1b5d9cu: goto label_1b5d9c;
        case 0x1b5da0u: goto label_1b5da0;
        case 0x1b5da4u: goto label_1b5da4;
        case 0x1b5da8u: goto label_1b5da8;
        case 0x1b5dacu: goto label_1b5dac;
        case 0x1b5db0u: goto label_1b5db0;
        case 0x1b5db4u: goto label_1b5db4;
        case 0x1b5db8u: goto label_1b5db8;
        case 0x1b5dbcu: goto label_1b5dbc;
        case 0x1b5dc0u: goto label_1b5dc0;
        case 0x1b5dc4u: goto label_1b5dc4;
        case 0x1b5dc8u: goto label_1b5dc8;
        case 0x1b5dccu: goto label_1b5dcc;
        case 0x1b5dd0u: goto label_1b5dd0;
        case 0x1b5dd4u: goto label_1b5dd4;
        case 0x1b5dd8u: goto label_1b5dd8;
        case 0x1b5ddcu: goto label_1b5ddc;
        case 0x1b5de0u: goto label_1b5de0;
        case 0x1b5de4u: goto label_1b5de4;
        case 0x1b5de8u: goto label_1b5de8;
        case 0x1b5decu: goto label_1b5dec;
        default: break;
    }

    ctx->pc = 0x1b5700u;

label_1b5700:
    // 0x1b5700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b5700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b5704:
    // 0x1b5704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b5708:
    // 0x1b5708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b570c:
    // 0x1b570c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b570cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1b5710:
    // 0x1b5710: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1b5710u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1b5714:
    // 0x1b5714: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b5714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5718:
    // 0x1b5718: 0x10000012  b           . + 4 + (0x12 << 2)
label_1b571c:
    if (ctx->pc == 0x1B571Cu) {
        ctx->pc = 0x1B5720u;
        goto label_1b5720;
    }
    ctx->pc = 0x1B5718u;
    {
        const bool branch_taken_0x1b5718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5718) {
            ctx->pc = 0x1B5764u;
            goto label_1b5764;
        }
    }
    ctx->pc = 0x1B5720u;
label_1b5720:
    // 0x1b5720: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b5720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5724:
    // 0x1b5724: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b5724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
label_1b5728:
    // 0x1b5728: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b5728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b572c:
    // 0x1b572c: 0xc06c53c  jal         func_1B14F0
label_1b5730:
    if (ctx->pc == 0x1B5730u) {
        ctx->pc = 0x1B5734u;
        goto label_1b5734;
    }
    ctx->pc = 0x1B572Cu;
    SET_GPR_U32(ctx, 31, 0x1B5734u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B572Cu, 0x1B5734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5734u;
label_1b5734:
    // 0x1b5734: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b5734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5738:
    // 0x1b5738: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1b573c:
    if (ctx->pc == 0x1B573Cu) {
        ctx->pc = 0x1B5740u;
        goto label_1b5740;
    }
    ctx->pc = 0x1B5738u;
    {
        const bool branch_taken_0x1b5738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5738) {
            ctx->pc = 0x1B5760u;
            goto label_1b5760;
        }
    }
    ctx->pc = 0x1B5740u;
label_1b5740:
    // 0x1b5740: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b5740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5744:
    // 0x1b5744: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1b5744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5748:
    // 0x1b5748: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1b5748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1b574c:
    // 0x1b574c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5750:
    // 0x1b5750: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b5754:
    // 0x1b5754: 0x8c420454  lw          $v0, 0x454($v0)
    ctx->pc = 0x1b5754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1108)));
label_1b5758:
    // 0x1b5758: 0x40f809  jalr        $v0
label_1b575c:
    if (ctx->pc == 0x1B575Cu) {
        ctx->pc = 0x1B5760u;
        goto label_1b5760;
    }
    ctx->pc = 0x1B5758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5760u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5758u, 0x1B5760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5760u;
label_1b5760:
    // 0x1b5760: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b5760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b5764:
    // 0x1b5764: 0x2e03000d  sltiu       $v1, $s0, 0xD
    ctx->pc = 0x1b5764u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_1b5768:
    // 0x1b5768: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_1b576c:
    if (ctx->pc == 0x1B576Cu) {
        ctx->pc = 0x1B5770u;
        goto label_1b5770;
    }
    ctx->pc = 0x1B5768u;
    {
        const bool branch_taken_0x1b5768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5768) {
            ctx->pc = 0x1B5720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5720;
        }
    }
    ctx->pc = 0x1B5770u;
label_1b5770:
    // 0x1b5770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5774:
    // 0x1b5774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5778:
    // 0x1b5778: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b5778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b577c:
    // 0x1b577c: 0x3e00008  jr          $ra
label_1b5780:
    if (ctx->pc == 0x1B5780u) {
        ctx->pc = 0x1B5784u;
        goto label_1b5784;
    }
    ctx->pc = 0x1B577Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B577Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5784u;
label_1b5784:
    // 0x1b5784: 0x0  nop
    ctx->pc = 0x1b5784u;
    // NOP
label_1b5788:
    // 0x1b5788: 0x0  nop
    ctx->pc = 0x1b5788u;
    // NOP
label_1b578c:
    // 0x1b578c: 0x0  nop
    ctx->pc = 0x1b578cu;
    // NOP
label_1b5790:
    // 0x1b5790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b5790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b5794:
    // 0x1b5794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b5798:
    // 0x1b5798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b579c:
    // 0x1b579c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b579cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b57a0:
    // 0x1b57a0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1b57a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1b57a4:
    // 0x1b57a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b57a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b57a8:
    // 0x1b57a8: 0xc06479c  jal         func_191E70
label_1b57ac:
    if (ctx->pc == 0x1B57ACu) {
        ctx->pc = 0x1B57B0u;
        goto label_1b57b0;
    }
    ctx->pc = 0x1B57A8u;
    SET_GPR_U32(ctx, 31, 0x1B57B0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B57A8u, 0x1B57B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57B0u;
label_1b57b0:
    // 0x1b57b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b57b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b57b4:
    // 0x1b57b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b57b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b57b8:
    // 0x1b57b8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b57b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1b57bc:
    // 0x1b57bc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1b57bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1b57c0:
    // 0x1b57c0: 0xc05612c  jal         func_1584B0
label_1b57c4:
    if (ctx->pc == 0x1B57C4u) {
        ctx->pc = 0x1B57C8u;
        goto label_1b57c8;
    }
    ctx->pc = 0x1B57C0u;
    SET_GPR_U32(ctx, 31, 0x1B57C8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B57C0u, 0x1B57C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57C8u;
label_1b57c8:
    // 0x1b57c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b57c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b57cc:
    // 0x1b57cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b57ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b57d0:
    // 0x1b57d0: 0xc08c258  jal         func_230960
label_1b57d4:
    if (ctx->pc == 0x1B57D4u) {
        ctx->pc = 0x1B57D8u;
        goto label_1b57d8;
    }
    ctx->pc = 0x1B57D0u;
    SET_GPR_U32(ctx, 31, 0x1B57D8u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1B57D0u, 0x1B57D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57D8u;
label_1b57d8:
    // 0x1b57d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b57d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b57dc:
    // 0x1b57dc: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1b57e0:
    if (ctx->pc == 0x1B57E0u) {
        ctx->pc = 0x1B57E4u;
        goto label_1b57e4;
    }
    ctx->pc = 0x1B57DCu;
    {
        const bool branch_taken_0x1b57dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b57dc) {
            ctx->pc = 0x1B588Cu;
            goto label_1b588c;
        }
    }
    ctx->pc = 0x1B57E4u;
label_1b57e4:
    // 0x1b57e4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b57e8:
    // 0x1b57e8: 0xc06479c  jal         func_191E70
label_1b57ec:
    if (ctx->pc == 0x1B57ECu) {
        ctx->pc = 0x1B57F0u;
        goto label_1b57f0;
    }
    ctx->pc = 0x1B57E8u;
    SET_GPR_U32(ctx, 31, 0x1B57F0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B57E8u, 0x1B57F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57F0u;
label_1b57f0:
    // 0x1b57f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b57f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b57f4:
    // 0x1b57f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b57f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b57f8:
    // 0x1b57f8: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x1b57f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1b57fc:
    // 0x1b57fc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b57fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1b5800:
    // 0x1b5800: 0xc05612c  jal         func_1584B0
label_1b5804:
    if (ctx->pc == 0x1B5804u) {
        ctx->pc = 0x1B5808u;
        goto label_1b5808;
    }
    ctx->pc = 0x1B5800u;
    SET_GPR_U32(ctx, 31, 0x1B5808u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B5800u, 0x1B5808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5808u;
label_1b5808:
    // 0x1b5808: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b5808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b580c:
    // 0x1b580c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b580cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5810:
    // 0x1b5810: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b5810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5814:
    // 0x1b5814: 0xc08c8dc  jal         func_232370
label_1b5818:
    if (ctx->pc == 0x1B5818u) {
        ctx->pc = 0x1B581Cu;
        goto label_1b581c;
    }
    ctx->pc = 0x1B5814u;
    SET_GPR_U32(ctx, 31, 0x1B581Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B5814u, 0x1B581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B581Cu;
label_1b581c:
    // 0x1b581c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b581cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5820:
    // 0x1b5820: 0xc06479c  jal         func_191E70
label_1b5824:
    if (ctx->pc == 0x1B5824u) {
        ctx->pc = 0x1B5828u;
        goto label_1b5828;
    }
    ctx->pc = 0x1B5820u;
    SET_GPR_U32(ctx, 31, 0x1B5828u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5820u, 0x1B5828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5828u;
label_1b5828:
    // 0x1b5828: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b582c:
    // 0x1b582c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b582cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5830:
    // 0x1b5830: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x1b5830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1b5834:
    // 0x1b5834: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b5834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1b5838:
    // 0x1b5838: 0xc05612c  jal         func_1584B0
label_1b583c:
    if (ctx->pc == 0x1B583Cu) {
        ctx->pc = 0x1B5840u;
        goto label_1b5840;
    }
    ctx->pc = 0x1B5838u;
    SET_GPR_U32(ctx, 31, 0x1B5840u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B5838u, 0x1B5840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5840u;
label_1b5840:
    // 0x1b5840: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b5840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5844:
    // 0x1b5844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5848:
    // 0x1b5848: 0xc08c258  jal         func_230960
label_1b584c:
    if (ctx->pc == 0x1B584Cu) {
        ctx->pc = 0x1B5850u;
        goto label_1b5850;
    }
    ctx->pc = 0x1B5848u;
    SET_GPR_U32(ctx, 31, 0x1B5850u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1B5848u, 0x1B5850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5850u;
label_1b5850:
    // 0x1b5850: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b5850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5854:
    // 0x1b5854: 0xc06479c  jal         func_191E70
label_1b5858:
    if (ctx->pc == 0x1B5858u) {
        ctx->pc = 0x1B585Cu;
        goto label_1b585c;
    }
    ctx->pc = 0x1B5854u;
    SET_GPR_U32(ctx, 31, 0x1B585Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5854u, 0x1B585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B585Cu;
label_1b585c:
    // 0x1b585c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b585cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5860:
    // 0x1b5860: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b5860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5864:
    // 0x1b5864: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x1b5864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1b5868:
    // 0x1b5868: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b5868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1b586c:
    // 0x1b586c: 0xc05612c  jal         func_1584B0
label_1b5870:
    if (ctx->pc == 0x1B5870u) {
        ctx->pc = 0x1B5874u;
        goto label_1b5874;
    }
    ctx->pc = 0x1B586Cu;
    SET_GPR_U32(ctx, 31, 0x1B5874u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B586Cu, 0x1B5874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5874u;
label_1b5874:
    // 0x1b5874: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b5874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5878:
    // 0x1b5878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b587c:
    // 0x1b587c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b587cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5880:
    // 0x1b5880: 0xc08c8dc  jal         func_232370
label_1b5884:
    if (ctx->pc == 0x1B5884u) {
        ctx->pc = 0x1B5888u;
        goto label_1b5888;
    }
    ctx->pc = 0x1B5880u;
    SET_GPR_U32(ctx, 31, 0x1B5888u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B5880u, 0x1B5888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5888u;
label_1b5888:
    // 0x1b5888: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b5888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b588c:
    // 0x1b588c: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1b588cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1b5890:
    // 0x1b5890: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_1b5894:
    if (ctx->pc == 0x1B5894u) {
        ctx->pc = 0x1B5898u;
        goto label_1b5898;
    }
    ctx->pc = 0x1B5890u;
    {
        const bool branch_taken_0x1b5890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5890) {
            ctx->pc = 0x1B57E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b57e4;
        }
    }
    ctx->pc = 0x1B5898u;
label_1b5898:
    // 0x1b5898: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b5898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b589c:
    // 0x1b589c: 0xc06479c  jal         func_191E70
label_1b58a0:
    if (ctx->pc == 0x1B58A0u) {
        ctx->pc = 0x1B58A4u;
        goto label_1b58a4;
    }
    ctx->pc = 0x1B589Cu;
    SET_GPR_U32(ctx, 31, 0x1B58A4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B589Cu, 0x1B58A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58A4u;
label_1b58a4:
    // 0x1b58a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b58a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b58a8:
    // 0x1b58a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b58ac:
    // 0x1b58ac: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b58acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1b58b0:
    // 0x1b58b0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b58b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1b58b4:
    // 0x1b58b4: 0xc05612c  jal         func_1584B0
label_1b58b8:
    if (ctx->pc == 0x1B58B8u) {
        ctx->pc = 0x1B58BCu;
        goto label_1b58bc;
    }
    ctx->pc = 0x1B58B4u;
    SET_GPR_U32(ctx, 31, 0x1B58BCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B58B4u, 0x1B58BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58BCu;
label_1b58bc:
    // 0x1b58bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b58bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b58c0:
    // 0x1b58c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b58c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b58c4:
    // 0x1b58c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b58c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b58c8:
    // 0x1b58c8: 0xc08c8dc  jal         func_232370
label_1b58cc:
    if (ctx->pc == 0x1B58CCu) {
        ctx->pc = 0x1B58D0u;
        goto label_1b58d0;
    }
    ctx->pc = 0x1B58C8u;
    SET_GPR_U32(ctx, 31, 0x1B58D0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B58C8u, 0x1B58D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58D0u;
label_1b58d0:
    // 0x1b58d0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b58d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b58d4:
    // 0x1b58d4: 0xc06479c  jal         func_191E70
label_1b58d8:
    if (ctx->pc == 0x1B58D8u) {
        ctx->pc = 0x1B58DCu;
        goto label_1b58dc;
    }
    ctx->pc = 0x1B58D4u;
    SET_GPR_U32(ctx, 31, 0x1B58DCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B58D4u, 0x1B58DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58DCu;
label_1b58dc:
    // 0x1b58dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b58dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b58e0:
    // 0x1b58e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b58e4:
    // 0x1b58e4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b58e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1b58e8:
    // 0x1b58e8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1b58e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b58ec:
    // 0x1b58ec: 0xc05612c  jal         func_1584B0
label_1b58f0:
    if (ctx->pc == 0x1B58F0u) {
        ctx->pc = 0x1B58F4u;
        goto label_1b58f4;
    }
    ctx->pc = 0x1B58ECu;
    SET_GPR_U32(ctx, 31, 0x1B58F4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B58ECu, 0x1B58F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B58F4u;
label_1b58f4:
    // 0x1b58f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b58f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b58f8:
    // 0x1b58f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b58f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b58fc:
    // 0x1b58fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b58fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5900:
    // 0x1b5900: 0xc08c8dc  jal         func_232370
label_1b5904:
    if (ctx->pc == 0x1B5904u) {
        ctx->pc = 0x1B5908u;
        goto label_1b5908;
    }
    ctx->pc = 0x1B5900u;
    SET_GPR_U32(ctx, 31, 0x1B5908u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B5900u, 0x1B5908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5908u;
label_1b5908:
    // 0x1b5908: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b5908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b590c:
    // 0x1b590c: 0xc06479c  jal         func_191E70
label_1b5910:
    if (ctx->pc == 0x1B5910u) {
        ctx->pc = 0x1B5914u;
        goto label_1b5914;
    }
    ctx->pc = 0x1B590Cu;
    SET_GPR_U32(ctx, 31, 0x1B5914u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B590Cu, 0x1B5914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5914u;
label_1b5914:
    // 0x1b5914: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5918:
    // 0x1b5918: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b5918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b591c:
    // 0x1b591c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b591cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1b5920:
    // 0x1b5920: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1b5920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1b5924:
    // 0x1b5924: 0xc05612c  jal         func_1584B0
label_1b5928:
    if (ctx->pc == 0x1B5928u) {
        ctx->pc = 0x1B592Cu;
        goto label_1b592c;
    }
    ctx->pc = 0x1B5924u;
    SET_GPR_U32(ctx, 31, 0x1B592Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B5924u, 0x1B592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B592Cu;
label_1b592c:
    // 0x1b592c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b592cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5930:
    // 0x1b5930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5934:
    // 0x1b5934: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b5934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5938:
    // 0x1b5938: 0xc08c8dc  jal         func_232370
label_1b593c:
    if (ctx->pc == 0x1B593Cu) {
        ctx->pc = 0x1B5940u;
        goto label_1b5940;
    }
    ctx->pc = 0x1B5938u;
    SET_GPR_U32(ctx, 31, 0x1B5940u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B5938u, 0x1B5940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5940u;
label_1b5940:
    // 0x1b5940: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b5940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5944:
    // 0x1b5944: 0xc06479c  jal         func_191E70
label_1b5948:
    if (ctx->pc == 0x1B5948u) {
        ctx->pc = 0x1B594Cu;
        goto label_1b594c;
    }
    ctx->pc = 0x1B5944u;
    SET_GPR_U32(ctx, 31, 0x1B594Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5944u, 0x1B594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B594Cu;
label_1b594c:
    // 0x1b594c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b594cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5950:
    // 0x1b5950: 0x24640214  addiu       $a0, $v1, 0x214
    ctx->pc = 0x1b5950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 532));
label_1b5954:
    // 0x1b5954: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b5954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5958:
    // 0x1b5958: 0xc0844d0  jal         func_211340
label_1b595c:
    if (ctx->pc == 0x1B595Cu) {
        ctx->pc = 0x1B5960u;
        goto label_1b5960;
    }
    ctx->pc = 0x1B5958u;
    SET_GPR_U32(ctx, 31, 0x1B5960u);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x1B5958u, 0x1B5960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5960u;
label_1b5960:
    // 0x1b5960: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b5960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5964:
    // 0x1b5964: 0xc06479c  jal         func_191E70
label_1b5968:
    if (ctx->pc == 0x1B5968u) {
        ctx->pc = 0x1B596Cu;
        goto label_1b596c;
    }
    ctx->pc = 0x1B5964u;
    SET_GPR_U32(ctx, 31, 0x1B596Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5964u, 0x1B596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B596Cu;
label_1b596c:
    // 0x1b596c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b596cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5970:
    // 0x1b5970: 0x24640334  addiu       $a0, $v1, 0x334
    ctx->pc = 0x1b5970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 820));
label_1b5974:
    // 0x1b5974: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b5974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5978:
    // 0x1b5978: 0xc0844d0  jal         func_211340
label_1b597c:
    if (ctx->pc == 0x1B597Cu) {
        ctx->pc = 0x1B5980u;
        goto label_1b5980;
    }
    ctx->pc = 0x1B5978u;
    SET_GPR_U32(ctx, 31, 0x1B5980u);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x1B5978u, 0x1B5980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5980u;
label_1b5980:
    // 0x1b5980: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b5980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5984:
    // 0x1b5984: 0xc06479c  jal         func_191E70
label_1b5988:
    if (ctx->pc == 0x1B5988u) {
        ctx->pc = 0x1B598Cu;
        goto label_1b598c;
    }
    ctx->pc = 0x1B5984u;
    SET_GPR_U32(ctx, 31, 0x1B598Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5984u, 0x1B598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B598Cu;
label_1b598c:
    // 0x1b598c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b598cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5990:
    // 0x1b5990: 0x246402a4  addiu       $a0, $v1, 0x2A4
    ctx->pc = 0x1b5990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 676));
label_1b5994:
    // 0x1b5994: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b5994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5998:
    // 0x1b5998: 0xc0844d0  jal         func_211340
label_1b599c:
    if (ctx->pc == 0x1B599Cu) {
        ctx->pc = 0x1B59A0u;
        goto label_1b59a0;
    }
    ctx->pc = 0x1B5998u;
    SET_GPR_U32(ctx, 31, 0x1B59A0u);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x1B5998u, 0x1B59A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59A0u;
label_1b59a0:
    // 0x1b59a0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b59a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b59a4:
    // 0x1b59a4: 0xc06479c  jal         func_191E70
label_1b59a8:
    if (ctx->pc == 0x1B59A8u) {
        ctx->pc = 0x1B59ACu;
        goto label_1b59ac;
    }
    ctx->pc = 0x1B59A4u;
    SET_GPR_U32(ctx, 31, 0x1B59ACu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B59A4u, 0x1B59ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59ACu;
label_1b59ac:
    // 0x1b59ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b59acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b59b0:
    // 0x1b59b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b59b4:
    // 0x1b59b4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b59b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1b59b8:
    // 0x1b59b8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b59b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1b59bc:
    // 0x1b59bc: 0xc05612c  jal         func_1584B0
label_1b59c0:
    if (ctx->pc == 0x1B59C0u) {
        ctx->pc = 0x1B59C4u;
        goto label_1b59c4;
    }
    ctx->pc = 0x1B59BCu;
    SET_GPR_U32(ctx, 31, 0x1B59C4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B59BCu, 0x1B59C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59C4u;
label_1b59c4:
    // 0x1b59c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b59c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b59c8:
    // 0x1b59c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b59c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b59cc:
    // 0x1b59cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b59ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b59d0:
    // 0x1b59d0: 0xc08c8dc  jal         func_232370
label_1b59d4:
    if (ctx->pc == 0x1B59D4u) {
        ctx->pc = 0x1B59D8u;
        goto label_1b59d8;
    }
    ctx->pc = 0x1B59D0u;
    SET_GPR_U32(ctx, 31, 0x1B59D8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B59D0u, 0x1B59D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59D8u;
label_1b59d8:
    // 0x1b59d8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b59d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b59dc:
    // 0x1b59dc: 0xc06479c  jal         func_191E70
label_1b59e0:
    if (ctx->pc == 0x1B59E0u) {
        ctx->pc = 0x1B59E4u;
        goto label_1b59e4;
    }
    ctx->pc = 0x1B59DCu;
    SET_GPR_U32(ctx, 31, 0x1B59E4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B59DCu, 0x1B59E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59E4u;
label_1b59e4:
    // 0x1b59e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b59e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b59e8:
    // 0x1b59e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b59ec:
    // 0x1b59ec: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b59ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1b59f0:
    // 0x1b59f0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1b59f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b59f4:
    // 0x1b59f4: 0xc05612c  jal         func_1584B0
label_1b59f8:
    if (ctx->pc == 0x1B59F8u) {
        ctx->pc = 0x1B59FCu;
        goto label_1b59fc;
    }
    ctx->pc = 0x1B59F4u;
    SET_GPR_U32(ctx, 31, 0x1B59FCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B59F4u, 0x1B59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B59FCu;
label_1b59fc:
    // 0x1b59fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b59fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5a00:
    // 0x1b5a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a04:
    // 0x1b5a04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a08:
    // 0x1b5a08: 0xc08c8dc  jal         func_232370
label_1b5a0c:
    if (ctx->pc == 0x1B5A0Cu) {
        ctx->pc = 0x1B5A10u;
        goto label_1b5a10;
    }
    ctx->pc = 0x1B5A08u;
    SET_GPR_U32(ctx, 31, 0x1B5A10u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B5A08u, 0x1B5A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A10u;
label_1b5a10:
    // 0x1b5a10: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b5a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5a14:
    // 0x1b5a14: 0xc06479c  jal         func_191E70
label_1b5a18:
    if (ctx->pc == 0x1B5A18u) {
        ctx->pc = 0x1B5A1Cu;
        goto label_1b5a1c;
    }
    ctx->pc = 0x1B5A14u;
    SET_GPR_U32(ctx, 31, 0x1B5A1Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5A14u, 0x1B5A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A1Cu;
label_1b5a1c:
    // 0x1b5a1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a20:
    // 0x1b5a20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5a24:
    // 0x1b5a24: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b5a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1b5a28:
    // 0x1b5a28: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1b5a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1b5a2c:
    // 0x1b5a2c: 0xc05612c  jal         func_1584B0
label_1b5a30:
    if (ctx->pc == 0x1B5A30u) {
        ctx->pc = 0x1B5A34u;
        goto label_1b5a34;
    }
    ctx->pc = 0x1B5A2Cu;
    SET_GPR_U32(ctx, 31, 0x1B5A34u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B5A2Cu, 0x1B5A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A34u;
label_1b5a34:
    // 0x1b5a34: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b5a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5a38:
    // 0x1b5a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a3c:
    // 0x1b5a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a40:
    // 0x1b5a40: 0xc08c8dc  jal         func_232370
label_1b5a44:
    if (ctx->pc == 0x1B5A44u) {
        ctx->pc = 0x1B5A48u;
        goto label_1b5a48;
    }
    ctx->pc = 0x1B5A40u;
    SET_GPR_U32(ctx, 31, 0x1B5A48u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B5A40u, 0x1B5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A48u;
label_1b5a48:
    // 0x1b5a48: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b5a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5a4c:
    // 0x1b5a4c: 0xc064aec  jal         func_192BB0
label_1b5a50:
    if (ctx->pc == 0x1B5A50u) {
        ctx->pc = 0x1B5A54u;
        goto label_1b5a54;
    }
    ctx->pc = 0x1B5A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B5A54u);
    ctx->pc = 0x192BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192BB0u, 0x1B5A4Cu, 0x1B5A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A54u;
label_1b5a54:
    // 0x1b5a54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b5a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5a58:
    // 0x1b5a58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5a5c:
    // 0x1b5a5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5a60:
    // 0x1b5a60: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b5a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b5a64:
    // 0x1b5a64: 0x3e00008  jr          $ra
label_1b5a68:
    if (ctx->pc == 0x1B5A68u) {
        ctx->pc = 0x1B5A6Cu;
        goto label_1b5a6c;
    }
    ctx->pc = 0x1B5A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5A6Cu;
label_1b5a6c:
    // 0x1b5a6c: 0x0  nop
    ctx->pc = 0x1b5a6cu;
    // NOP
label_1b5a70:
    // 0x1b5a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b5a74:
    // 0x1b5a74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b5a78:
    // 0x1b5a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b5a7c:
    // 0x1b5a7c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b5a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1b5a80:
    // 0x1b5a80: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b5a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5a84:
    // 0x1b5a84: 0xc06479c  jal         func_191E70
label_1b5a88:
    if (ctx->pc == 0x1B5A88u) {
        ctx->pc = 0x1B5A8Cu;
        goto label_1b5a8c;
    }
    ctx->pc = 0x1B5A84u;
    SET_GPR_U32(ctx, 31, 0x1B5A8Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5A84u, 0x1B5A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A8Cu;
label_1b5a8c:
    // 0x1b5a8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b5a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a90:
    // 0x1b5a90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5a94:
    // 0x1b5a94: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b5a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1b5a98:
    // 0x1b5a98: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1b5a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1b5a9c:
    // 0x1b5a9c: 0xc05612c  jal         func_1584B0
label_1b5aa0:
    if (ctx->pc == 0x1B5AA0u) {
        ctx->pc = 0x1B5AA4u;
        goto label_1b5aa4;
    }
    ctx->pc = 0x1B5A9Cu;
    SET_GPR_U32(ctx, 31, 0x1B5AA4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B5A9Cu, 0x1B5AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AA4u;
label_1b5aa4:
    // 0x1b5aa4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b5aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5aa8:
    // 0x1b5aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5aac:
    // 0x1b5aac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b5aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5ab0:
    // 0x1b5ab0: 0xc08c8dc  jal         func_232370
label_1b5ab4:
    if (ctx->pc == 0x1B5AB4u) {
        ctx->pc = 0x1B5AB8u;
        goto label_1b5ab8;
    }
    ctx->pc = 0x1B5AB0u;
    SET_GPR_U32(ctx, 31, 0x1B5AB8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B5AB0u, 0x1B5AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AB8u;
label_1b5ab8:
    // 0x1b5ab8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b5ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5abc:
    // 0x1b5abc: 0xc06479c  jal         func_191E70
label_1b5ac0:
    if (ctx->pc == 0x1B5AC0u) {
        ctx->pc = 0x1B5AC4u;
        goto label_1b5ac4;
    }
    ctx->pc = 0x1B5ABCu;
    SET_GPR_U32(ctx, 31, 0x1B5AC4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5ABCu, 0x1B5AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AC4u;
label_1b5ac4:
    // 0x1b5ac4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b5ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5ac8:
    // 0x1b5ac8: 0x246403c4  addiu       $a0, $v1, 0x3C4
    ctx->pc = 0x1b5ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 964));
label_1b5acc:
    // 0x1b5acc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b5accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5ad0:
    // 0x1b5ad0: 0xc0844d0  jal         func_211340
label_1b5ad4:
    if (ctx->pc == 0x1B5AD4u) {
        ctx->pc = 0x1B5AD8u;
        goto label_1b5ad8;
    }
    ctx->pc = 0x1B5AD0u;
    SET_GPR_U32(ctx, 31, 0x1B5AD8u);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x1B5AD0u, 0x1B5AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AD8u;
label_1b5ad8:
    // 0x1b5ad8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b5ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5adc:
    // 0x1b5adc: 0xc06479c  jal         func_191E70
label_1b5ae0:
    if (ctx->pc == 0x1B5AE0u) {
        ctx->pc = 0x1B5AE4u;
        goto label_1b5ae4;
    }
    ctx->pc = 0x1B5ADCu;
    SET_GPR_U32(ctx, 31, 0x1B5AE4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B5ADCu, 0x1B5AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AE4u;
label_1b5ae4:
    // 0x1b5ae4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b5ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5ae8:
    // 0x1b5ae8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5aec:
    // 0x1b5aec: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b5aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1b5af0:
    // 0x1b5af0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1b5af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1b5af4:
    // 0x1b5af4: 0xc05612c  jal         func_1584B0
label_1b5af8:
    if (ctx->pc == 0x1B5AF8u) {
        ctx->pc = 0x1B5AFCu;
        goto label_1b5afc;
    }
    ctx->pc = 0x1B5AF4u;
    SET_GPR_U32(ctx, 31, 0x1B5AFCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B5AF4u, 0x1B5AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AFCu;
label_1b5afc:
    // 0x1b5afc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b5afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5b00:
    // 0x1b5b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b04:
    // 0x1b5b04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b08:
    // 0x1b5b08: 0xc08c8dc  jal         func_232370
label_1b5b0c:
    if (ctx->pc == 0x1B5B0Cu) {
        ctx->pc = 0x1B5B10u;
        goto label_1b5b10;
    }
    ctx->pc = 0x1B5B08u;
    SET_GPR_U32(ctx, 31, 0x1B5B10u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B5B08u, 0x1B5B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B10u;
label_1b5b10:
    // 0x1b5b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5b14:
    // 0x1b5b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5b18:
    // 0x1b5b18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b5b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b5b1c:
    // 0x1b5b1c: 0x3e00008  jr          $ra
label_1b5b20:
    if (ctx->pc == 0x1B5B20u) {
        ctx->pc = 0x1B5B24u;
        goto label_1b5b24;
    }
    ctx->pc = 0x1B5B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5B24u;
label_1b5b24:
    // 0x1b5b24: 0x0  nop
    ctx->pc = 0x1b5b24u;
    // NOP
label_1b5b28:
    // 0x1b5b28: 0x0  nop
    ctx->pc = 0x1b5b28u;
    // NOP
label_1b5b2c:
    // 0x1b5b2c: 0x0  nop
    ctx->pc = 0x1b5b2cu;
    // NOP
label_1b5b30:
    // 0x1b5b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b5b34:
    // 0x1b5b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5b38:
    // 0x1b5b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b5b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1b5b3c:
    // 0x1b5b3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b5b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1b5b40:
    // 0x1b5b40: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1b5b40u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1b5b44:
    // 0x1b5b44: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1b5b44u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1b5b48:
    // 0x1b5b48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b5b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5b4c:
    // 0x1b5b4c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b5b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5b50:
    // 0x1b5b50: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1b5b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5b54:
    // 0x1b5b54: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1b5b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b5b58:
    // 0x1b5b58: 0xc064e90  jal         func_193A40
label_1b5b5c:
    if (ctx->pc == 0x1B5B5Cu) {
        ctx->pc = 0x1B5B60u;
        goto label_1b5b60;
    }
    ctx->pc = 0x1B5B58u;
    SET_GPR_U32(ctx, 31, 0x1B5B60u);
    ctx->pc = 0x193A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A40u, 0x1B5B58u, 0x1B5B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B60u;
label_1b5b60:
    // 0x1b5b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5b64:
    // 0x1b5b64: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b5b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b5b68:
    // 0x1b5b68: 0x3e00008  jr          $ra
label_1b5b6c:
    if (ctx->pc == 0x1B5B6Cu) {
        ctx->pc = 0x1B5B70u;
        goto label_1b5b70;
    }
    ctx->pc = 0x1B5B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5B70u;
label_1b5b70:
    // 0x1b5b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b5b74:
    // 0x1b5b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5b78:
    // 0x1b5b78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b5b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1b5b7c:
    // 0x1b5b7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b5b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1b5b80:
    // 0x1b5b80: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1b5b80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1b5b84:
    // 0x1b5b84: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1b5b84u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1b5b88:
    // 0x1b5b88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b5b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5b8c:
    // 0x1b5b8c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b5b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5b90:
    // 0x1b5b90: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1b5b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5b94:
    // 0x1b5b94: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1b5b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b5b98:
    // 0x1b5b98: 0xc064f2c  jal         func_193CB0
label_1b5b9c:
    if (ctx->pc == 0x1B5B9Cu) {
        ctx->pc = 0x1B5BA0u;
        goto label_1b5ba0;
    }
    ctx->pc = 0x1B5B98u;
    SET_GPR_U32(ctx, 31, 0x1B5BA0u);
    ctx->pc = 0x193CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CB0u, 0x1B5B98u, 0x1B5BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5BA0u;
label_1b5ba0:
    // 0x1b5ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5ba4:
    // 0x1b5ba4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b5ba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b5ba8:
    // 0x1b5ba8: 0x3e00008  jr          $ra
label_1b5bac:
    if (ctx->pc == 0x1B5BACu) {
        ctx->pc = 0x1B5BB0u;
        goto label_1b5bb0;
    }
    ctx->pc = 0x1B5BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5BB0u;
label_1b5bb0:
    // 0x1b5bb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b5bb4:
    // 0x1b5bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5bb8:
    // 0x1b5bb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b5bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1b5bbc:
    // 0x1b5bbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b5bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1b5bc0:
    // 0x1b5bc0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1b5bc0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1b5bc4:
    // 0x1b5bc4: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1b5bc4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1b5bc8:
    // 0x1b5bc8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b5bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5bcc:
    // 0x1b5bcc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b5bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5bd0:
    // 0x1b5bd0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1b5bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5bd4:
    // 0x1b5bd4: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1b5bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b5bd8:
    // 0x1b5bd8: 0xc064ff8  jal         func_193FE0
label_1b5bdc:
    if (ctx->pc == 0x1B5BDCu) {
        ctx->pc = 0x1B5BE0u;
        goto label_1b5be0;
    }
    ctx->pc = 0x1B5BD8u;
    SET_GPR_U32(ctx, 31, 0x1B5BE0u);
    ctx->pc = 0x193FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FE0u, 0x1B5BD8u, 0x1B5BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5BE0u;
label_1b5be0:
    // 0x1b5be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5be4:
    // 0x1b5be4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b5be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b5be8:
    // 0x1b5be8: 0x3e00008  jr          $ra
label_1b5bec:
    if (ctx->pc == 0x1B5BECu) {
        ctx->pc = 0x1B5BF0u;
        goto label_1b5bf0;
    }
    ctx->pc = 0x1B5BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5BF0u;
label_1b5bf0:
    // 0x1b5bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b5bf4:
    // 0x1b5bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5bf8:
    // 0x1b5bf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b5bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1b5bfc:
    // 0x1b5bfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b5bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1b5c00:
    // 0x1b5c00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b5c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5c04:
    // 0x1b5c04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b5c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5c08:
    // 0x1b5c08: 0xc0650f0  jal         func_1943C0
label_1b5c0c:
    if (ctx->pc == 0x1B5C0Cu) {
        ctx->pc = 0x1B5C10u;
        goto label_1b5c10;
    }
    ctx->pc = 0x1B5C08u;
    SET_GPR_U32(ctx, 31, 0x1B5C10u);
    ctx->pc = 0x1943C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943C0u, 0x1B5C08u, 0x1B5C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C10u;
label_1b5c10:
    // 0x1b5c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5c14:
    // 0x1b5c14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b5c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b5c18:
    // 0x1b5c18: 0x3e00008  jr          $ra
label_1b5c1c:
    if (ctx->pc == 0x1B5C1Cu) {
        ctx->pc = 0x1B5C20u;
        goto label_1b5c20;
    }
    ctx->pc = 0x1B5C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5C20u;
label_1b5c20:
    // 0x1b5c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b5c24:
    // 0x1b5c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5c28:
    // 0x1b5c28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1b5c2c:
    // 0x1b5c2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b5c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1b5c30:
    // 0x1b5c30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b5c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5c34:
    // 0x1b5c34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b5c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5c38:
    // 0x1b5c38: 0xc0650f4  jal         func_1943D0
label_1b5c3c:
    if (ctx->pc == 0x1B5C3Cu) {
        ctx->pc = 0x1B5C40u;
        goto label_1b5c40;
    }
    ctx->pc = 0x1B5C38u;
    SET_GPR_U32(ctx, 31, 0x1B5C40u);
    ctx->pc = 0x1943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943D0u, 0x1B5C38u, 0x1B5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C40u;
label_1b5c40:
    // 0x1b5c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5c44:
    // 0x1b5c44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b5c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b5c48:
    // 0x1b5c48: 0x3e00008  jr          $ra
label_1b5c4c:
    if (ctx->pc == 0x1B5C4Cu) {
        ctx->pc = 0x1B5C50u;
        goto label_1b5c50;
    }
    ctx->pc = 0x1B5C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5C50u;
label_1b5c50:
    // 0x1b5c50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b5c54:
    // 0x1b5c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b5c58:
    // 0x1b5c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b5c5c:
    // 0x1b5c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b5c60:
    // 0x1b5c60: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1b5c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1b5c64:
    // 0x1b5c64: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b5c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1b5c68:
    // 0x1b5c68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b5c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b5c6c:
    // 0x1b5c6c: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
label_1b5c70:
    if (ctx->pc == 0x1B5C70u) {
        ctx->pc = 0x1B5C74u;
        goto label_1b5c74;
    }
    ctx->pc = 0x1B5C6Cu;
    {
        const bool branch_taken_0x1b5c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5c6c) {
            ctx->pc = 0x1B5DD0u;
            goto label_1b5dd0;
        }
    }
    ctx->pc = 0x1B5C74u;
label_1b5c74:
    // 0x1b5c74: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1b5c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1b5c78:
    // 0x1b5c78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b5c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b5c7c:
    // 0x1b5c7c: 0x10030054  beq         $zero, $v1, . + 4 + (0x54 << 2)
label_1b5c80:
    if (ctx->pc == 0x1B5C80u) {
        ctx->pc = 0x1B5C84u;
        goto label_1b5c84;
    }
    ctx->pc = 0x1B5C7Cu;
    {
        const bool branch_taken_0x1b5c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b5c7c) {
            ctx->pc = 0x1B5DD0u;
            goto label_1b5dd0;
        }
    }
    ctx->pc = 0x1B5C84u;
label_1b5c84:
    // 0x1b5c84: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1b5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1b5c88:
    // 0x1b5c88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b5c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5c8c:
    // 0x1b5c8c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1b5c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1b5c90:
    // 0x1b5c90: 0xc085538  jal         func_2154E0
label_1b5c94:
    if (ctx->pc == 0x1B5C94u) {
        ctx->pc = 0x1B5C98u;
        goto label_1b5c98;
    }
    ctx->pc = 0x1B5C90u;
    SET_GPR_U32(ctx, 31, 0x1B5C98u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1B5C90u, 0x1B5C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C98u;
label_1b5c98:
    // 0x1b5c98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b5c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5c9c:
    // 0x1b5c9c: 0x1010004c  beq         $zero, $s0, . + 4 + (0x4C << 2)
label_1b5ca0:
    if (ctx->pc == 0x1B5CA0u) {
        ctx->pc = 0x1B5CA4u;
        goto label_1b5ca4;
    }
    ctx->pc = 0x1B5C9Cu;
    {
        const bool branch_taken_0x1b5c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1b5c9c) {
            ctx->pc = 0x1B5DD0u;
            goto label_1b5dd0;
        }
    }
    ctx->pc = 0x1B5CA4u;
label_1b5ca4:
    // 0x1b5ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5ca8:
    // 0x1b5ca8: 0xc040aa8  jal         func_102AA0
label_1b5cac:
    if (ctx->pc == 0x1B5CACu) {
        ctx->pc = 0x1B5CB0u;
        goto label_1b5cb0;
    }
    ctx->pc = 0x1B5CA8u;
    SET_GPR_U32(ctx, 31, 0x1B5CB0u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1B5CA8u, 0x1B5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CB0u;
label_1b5cb0:
    // 0x1b5cb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b5cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5cb4:
    // 0x1b5cb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5cb8:
    // 0x1b5cb8: 0xc040a90  jal         func_102A40
label_1b5cbc:
    if (ctx->pc == 0x1B5CBCu) {
        ctx->pc = 0x1B5CC0u;
        goto label_1b5cc0;
    }
    ctx->pc = 0x1B5CB8u;
    SET_GPR_U32(ctx, 31, 0x1B5CC0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1B5CB8u, 0x1B5CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CC0u;
label_1b5cc0:
    // 0x1b5cc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5cc4:
    // 0x1b5cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5cc8:
    // 0x1b5cc8: 0xc040aa8  jal         func_102AA0
label_1b5ccc:
    if (ctx->pc == 0x1B5CCCu) {
        ctx->pc = 0x1B5CD0u;
        goto label_1b5cd0;
    }
    ctx->pc = 0x1B5CC8u;
    SET_GPR_U32(ctx, 31, 0x1B5CD0u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1B5CC8u, 0x1B5CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CD0u;
label_1b5cd0:
    // 0x1b5cd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b5cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5cd4:
    // 0x1b5cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5cd8:
    // 0x1b5cd8: 0xc040a90  jal         func_102A40
label_1b5cdc:
    if (ctx->pc == 0x1B5CDCu) {
        ctx->pc = 0x1B5CE0u;
        goto label_1b5ce0;
    }
    ctx->pc = 0x1B5CD8u;
    SET_GPR_U32(ctx, 31, 0x1B5CE0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1B5CD8u, 0x1B5CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CE0u;
label_1b5ce0:
    // 0x1b5ce0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b5ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5ce4:
    // 0x1b5ce4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1b5ce8:
    // 0x1b5ce8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b5ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b5cec:
    // 0x1b5cec: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b5cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5cf0:
    // 0x1b5cf0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1b5cf0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1b5cf4:
    // 0x1b5cf4: 0x0  nop
    ctx->pc = 0x1b5cf4u;
    // NOP
label_1b5cf8:
    // 0x1b5cf8: 0x0  nop
    ctx->pc = 0x1b5cf8u;
    // NOP
label_1b5cfc:
    // 0x1b5cfc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b5cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b5d00:
    // 0x1b5d00: 0xc094de0  jal         func_253780
label_1b5d04:
    if (ctx->pc == 0x1B5D04u) {
        ctx->pc = 0x1B5D08u;
        goto label_1b5d08;
    }
    ctx->pc = 0x1B5D00u;
    SET_GPR_U32(ctx, 31, 0x1B5D08u);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1B5D00u, 0x1B5D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D08u;
label_1b5d08:
    // 0x1b5d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5d0c:
    // 0x1b5d0c: 0xc040aa8  jal         func_102AA0
label_1b5d10:
    if (ctx->pc == 0x1B5D10u) {
        ctx->pc = 0x1B5D14u;
        goto label_1b5d14;
    }
    ctx->pc = 0x1B5D0Cu;
    SET_GPR_U32(ctx, 31, 0x1B5D14u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1B5D0Cu, 0x1B5D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D14u;
label_1b5d14:
    // 0x1b5d14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b5d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5d18:
    // 0x1b5d18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5d1c:
    // 0x1b5d1c: 0xc040a90  jal         func_102A40
label_1b5d20:
    if (ctx->pc == 0x1B5D20u) {
        ctx->pc = 0x1B5D24u;
        goto label_1b5d24;
    }
    ctx->pc = 0x1B5D1Cu;
    SET_GPR_U32(ctx, 31, 0x1B5D24u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1B5D1Cu, 0x1B5D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D24u;
label_1b5d24:
    // 0x1b5d24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5d28:
    // 0x1b5d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5d2c:
    // 0x1b5d2c: 0xc040aa8  jal         func_102AA0
label_1b5d30:
    if (ctx->pc == 0x1B5D30u) {
        ctx->pc = 0x1B5D34u;
        goto label_1b5d34;
    }
    ctx->pc = 0x1B5D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B5D34u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1B5D2Cu, 0x1B5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D34u;
label_1b5d34:
    // 0x1b5d34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b5d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5d38:
    // 0x1b5d38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5d3c:
    // 0x1b5d3c: 0xc040a90  jal         func_102A40
label_1b5d40:
    if (ctx->pc == 0x1B5D40u) {
        ctx->pc = 0x1B5D44u;
        goto label_1b5d44;
    }
    ctx->pc = 0x1B5D3Cu;
    SET_GPR_U32(ctx, 31, 0x1B5D44u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1B5D3Cu, 0x1B5D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D44u;
label_1b5d44:
    // 0x1b5d44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b5d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5d48:
    // 0x1b5d48: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1b5d4c:
    // 0x1b5d4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b5d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b5d50:
    // 0x1b5d50: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b5d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5d54:
    // 0x1b5d54: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1b5d54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1b5d58:
    // 0x1b5d58: 0x0  nop
    ctx->pc = 0x1b5d58u;
    // NOP
label_1b5d5c:
    // 0x1b5d5c: 0x0  nop
    ctx->pc = 0x1b5d5cu;
    // NOP
label_1b5d60:
    // 0x1b5d60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b5d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b5d64:
    // 0x1b5d64: 0xc094de0  jal         func_253780
label_1b5d68:
    if (ctx->pc == 0x1B5D68u) {
        ctx->pc = 0x1B5D6Cu;
        goto label_1b5d6c;
    }
    ctx->pc = 0x1B5D64u;
    SET_GPR_U32(ctx, 31, 0x1B5D6Cu);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1B5D64u, 0x1B5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D6Cu;
label_1b5d6c:
    // 0x1b5d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5d70:
    // 0x1b5d70: 0xc040aa8  jal         func_102AA0
label_1b5d74:
    if (ctx->pc == 0x1B5D74u) {
        ctx->pc = 0x1B5D78u;
        goto label_1b5d78;
    }
    ctx->pc = 0x1B5D70u;
    SET_GPR_U32(ctx, 31, 0x1B5D78u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1B5D70u, 0x1B5D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D78u;
label_1b5d78:
    // 0x1b5d78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b5d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5d7c:
    // 0x1b5d7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b5d80:
    // 0x1b5d80: 0xc040a90  jal         func_102A40
label_1b5d84:
    if (ctx->pc == 0x1B5D84u) {
        ctx->pc = 0x1B5D88u;
        goto label_1b5d88;
    }
    ctx->pc = 0x1B5D80u;
    SET_GPR_U32(ctx, 31, 0x1B5D88u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1B5D80u, 0x1B5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D88u;
label_1b5d88:
    // 0x1b5d88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5d8c:
    // 0x1b5d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5d90:
    // 0x1b5d90: 0xc040aa8  jal         func_102AA0
label_1b5d94:
    if (ctx->pc == 0x1B5D94u) {
        ctx->pc = 0x1B5D98u;
        goto label_1b5d98;
    }
    ctx->pc = 0x1B5D90u;
    SET_GPR_U32(ctx, 31, 0x1B5D98u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1B5D90u, 0x1B5D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5D98u;
label_1b5d98:
    // 0x1b5d98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b5d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5d9c:
    // 0x1b5d9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b5d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b5da0:
    // 0x1b5da0: 0xc040a90  jal         func_102A40
label_1b5da4:
    if (ctx->pc == 0x1B5DA4u) {
        ctx->pc = 0x1B5DA8u;
        goto label_1b5da8;
    }
    ctx->pc = 0x1B5DA0u;
    SET_GPR_U32(ctx, 31, 0x1B5DA8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1B5DA0u, 0x1B5DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5DA8u;
label_1b5da8:
    // 0x1b5da8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b5da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5dac:
    // 0x1b5dac: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1b5db0:
    // 0x1b5db0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b5db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b5db4:
    // 0x1b5db4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b5db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5db8:
    // 0x1b5db8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1b5db8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1b5dbc:
    // 0x1b5dbc: 0x0  nop
    ctx->pc = 0x1b5dbcu;
    // NOP
label_1b5dc0:
    // 0x1b5dc0: 0x0  nop
    ctx->pc = 0x1b5dc0u;
    // NOP
label_1b5dc4:
    // 0x1b5dc4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b5dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b5dc8:
    // 0x1b5dc8: 0xc094de0  jal         func_253780
label_1b5dcc:
    if (ctx->pc == 0x1B5DCCu) {
        ctx->pc = 0x1B5DD0u;
        goto label_1b5dd0;
    }
    ctx->pc = 0x1B5DC8u;
    SET_GPR_U32(ctx, 31, 0x1B5DD0u);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1B5DC8u, 0x1B5DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5DD0u;
label_1b5dd0:
    // 0x1b5dd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b5dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5dd4:
    // 0x1b5dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5dd8:
    // 0x1b5dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5ddc:
    // 0x1b5ddc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b5ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b5de0:
    // 0x1b5de0: 0x3e00008  jr          $ra
label_1b5de4:
    if (ctx->pc == 0x1B5DE4u) {
        ctx->pc = 0x1B5DE8u;
        goto label_1b5de8;
    }
    ctx->pc = 0x1B5DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5DE8u;
label_1b5de8:
    // 0x1b5de8: 0x0  nop
    ctx->pc = 0x1b5de8u;
    // NOP
label_1b5dec:
    // 0x1b5dec: 0x0  nop
    ctx->pc = 0x1b5decu;
    // NOP
    ctx->pc = 0x1b5df0u;
}
