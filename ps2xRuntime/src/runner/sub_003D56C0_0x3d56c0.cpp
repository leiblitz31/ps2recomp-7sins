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

// Function: sub_003D56C0
// Address: 0x3d56c0 - 0x3d5d68
void sub_003D56C0_0x3d56c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D56C0_0x3d56c0");
#endif

    switch (ctx->pc) {
        case 0x3d56c0u: goto label_3d56c0;
        case 0x3d56c4u: goto label_3d56c4;
        case 0x3d56c8u: goto label_3d56c8;
        case 0x3d56ccu: goto label_3d56cc;
        case 0x3d56d0u: goto label_3d56d0;
        case 0x3d56d4u: goto label_3d56d4;
        case 0x3d56d8u: goto label_3d56d8;
        case 0x3d56dcu: goto label_3d56dc;
        case 0x3d56e0u: goto label_3d56e0;
        case 0x3d56e4u: goto label_3d56e4;
        case 0x3d56e8u: goto label_3d56e8;
        case 0x3d56ecu: goto label_3d56ec;
        case 0x3d56f0u: goto label_3d56f0;
        case 0x3d56f4u: goto label_3d56f4;
        case 0x3d56f8u: goto label_3d56f8;
        case 0x3d56fcu: goto label_3d56fc;
        case 0x3d5700u: goto label_3d5700;
        case 0x3d5704u: goto label_3d5704;
        case 0x3d5708u: goto label_3d5708;
        case 0x3d570cu: goto label_3d570c;
        case 0x3d5710u: goto label_3d5710;
        case 0x3d5714u: goto label_3d5714;
        case 0x3d5718u: goto label_3d5718;
        case 0x3d571cu: goto label_3d571c;
        case 0x3d5720u: goto label_3d5720;
        case 0x3d5724u: goto label_3d5724;
        case 0x3d5728u: goto label_3d5728;
        case 0x3d572cu: goto label_3d572c;
        case 0x3d5730u: goto label_3d5730;
        case 0x3d5734u: goto label_3d5734;
        case 0x3d5738u: goto label_3d5738;
        case 0x3d573cu: goto label_3d573c;
        case 0x3d5740u: goto label_3d5740;
        case 0x3d5744u: goto label_3d5744;
        case 0x3d5748u: goto label_3d5748;
        case 0x3d574cu: goto label_3d574c;
        case 0x3d5750u: goto label_3d5750;
        case 0x3d5754u: goto label_3d5754;
        case 0x3d5758u: goto label_3d5758;
        case 0x3d575cu: goto label_3d575c;
        case 0x3d5760u: goto label_3d5760;
        case 0x3d5764u: goto label_3d5764;
        case 0x3d5768u: goto label_3d5768;
        case 0x3d576cu: goto label_3d576c;
        case 0x3d5770u: goto label_3d5770;
        case 0x3d5774u: goto label_3d5774;
        case 0x3d5778u: goto label_3d5778;
        case 0x3d577cu: goto label_3d577c;
        case 0x3d5780u: goto label_3d5780;
        case 0x3d5784u: goto label_3d5784;
        case 0x3d5788u: goto label_3d5788;
        case 0x3d578cu: goto label_3d578c;
        case 0x3d5790u: goto label_3d5790;
        case 0x3d5794u: goto label_3d5794;
        case 0x3d5798u: goto label_3d5798;
        case 0x3d579cu: goto label_3d579c;
        case 0x3d57a0u: goto label_3d57a0;
        case 0x3d57a4u: goto label_3d57a4;
        case 0x3d57a8u: goto label_3d57a8;
        case 0x3d57acu: goto label_3d57ac;
        case 0x3d57b0u: goto label_3d57b0;
        case 0x3d57b4u: goto label_3d57b4;
        case 0x3d57b8u: goto label_3d57b8;
        case 0x3d57bcu: goto label_3d57bc;
        case 0x3d57c0u: goto label_3d57c0;
        case 0x3d57c4u: goto label_3d57c4;
        case 0x3d57c8u: goto label_3d57c8;
        case 0x3d57ccu: goto label_3d57cc;
        case 0x3d57d0u: goto label_3d57d0;
        case 0x3d57d4u: goto label_3d57d4;
        case 0x3d57d8u: goto label_3d57d8;
        case 0x3d57dcu: goto label_3d57dc;
        case 0x3d57e0u: goto label_3d57e0;
        case 0x3d57e4u: goto label_3d57e4;
        case 0x3d57e8u: goto label_3d57e8;
        case 0x3d57ecu: goto label_3d57ec;
        case 0x3d57f0u: goto label_3d57f0;
        case 0x3d57f4u: goto label_3d57f4;
        case 0x3d57f8u: goto label_3d57f8;
        case 0x3d57fcu: goto label_3d57fc;
        case 0x3d5800u: goto label_3d5800;
        case 0x3d5804u: goto label_3d5804;
        case 0x3d5808u: goto label_3d5808;
        case 0x3d580cu: goto label_3d580c;
        case 0x3d5810u: goto label_3d5810;
        case 0x3d5814u: goto label_3d5814;
        case 0x3d5818u: goto label_3d5818;
        case 0x3d581cu: goto label_3d581c;
        case 0x3d5820u: goto label_3d5820;
        case 0x3d5824u: goto label_3d5824;
        case 0x3d5828u: goto label_3d5828;
        case 0x3d582cu: goto label_3d582c;
        case 0x3d5830u: goto label_3d5830;
        case 0x3d5834u: goto label_3d5834;
        case 0x3d5838u: goto label_3d5838;
        case 0x3d583cu: goto label_3d583c;
        case 0x3d5840u: goto label_3d5840;
        case 0x3d5844u: goto label_3d5844;
        case 0x3d5848u: goto label_3d5848;
        case 0x3d584cu: goto label_3d584c;
        case 0x3d5850u: goto label_3d5850;
        case 0x3d5854u: goto label_3d5854;
        case 0x3d5858u: goto label_3d5858;
        case 0x3d585cu: goto label_3d585c;
        case 0x3d5860u: goto label_3d5860;
        case 0x3d5864u: goto label_3d5864;
        case 0x3d5868u: goto label_3d5868;
        case 0x3d586cu: goto label_3d586c;
        case 0x3d5870u: goto label_3d5870;
        case 0x3d5874u: goto label_3d5874;
        case 0x3d5878u: goto label_3d5878;
        case 0x3d587cu: goto label_3d587c;
        case 0x3d5880u: goto label_3d5880;
        case 0x3d5884u: goto label_3d5884;
        case 0x3d5888u: goto label_3d5888;
        case 0x3d588cu: goto label_3d588c;
        case 0x3d5890u: goto label_3d5890;
        case 0x3d5894u: goto label_3d5894;
        case 0x3d5898u: goto label_3d5898;
        case 0x3d589cu: goto label_3d589c;
        case 0x3d58a0u: goto label_3d58a0;
        case 0x3d58a4u: goto label_3d58a4;
        case 0x3d58a8u: goto label_3d58a8;
        case 0x3d58acu: goto label_3d58ac;
        case 0x3d58b0u: goto label_3d58b0;
        case 0x3d58b4u: goto label_3d58b4;
        case 0x3d58b8u: goto label_3d58b8;
        case 0x3d58bcu: goto label_3d58bc;
        case 0x3d58c0u: goto label_3d58c0;
        case 0x3d58c4u: goto label_3d58c4;
        case 0x3d58c8u: goto label_3d58c8;
        case 0x3d58ccu: goto label_3d58cc;
        case 0x3d58d0u: goto label_3d58d0;
        case 0x3d58d4u: goto label_3d58d4;
        case 0x3d58d8u: goto label_3d58d8;
        case 0x3d58dcu: goto label_3d58dc;
        case 0x3d58e0u: goto label_3d58e0;
        case 0x3d58e4u: goto label_3d58e4;
        case 0x3d58e8u: goto label_3d58e8;
        case 0x3d58ecu: goto label_3d58ec;
        case 0x3d58f0u: goto label_3d58f0;
        case 0x3d58f4u: goto label_3d58f4;
        case 0x3d58f8u: goto label_3d58f8;
        case 0x3d58fcu: goto label_3d58fc;
        case 0x3d5900u: goto label_3d5900;
        case 0x3d5904u: goto label_3d5904;
        case 0x3d5908u: goto label_3d5908;
        case 0x3d590cu: goto label_3d590c;
        case 0x3d5910u: goto label_3d5910;
        case 0x3d5914u: goto label_3d5914;
        case 0x3d5918u: goto label_3d5918;
        case 0x3d591cu: goto label_3d591c;
        case 0x3d5920u: goto label_3d5920;
        case 0x3d5924u: goto label_3d5924;
        case 0x3d5928u: goto label_3d5928;
        case 0x3d592cu: goto label_3d592c;
        case 0x3d5930u: goto label_3d5930;
        case 0x3d5934u: goto label_3d5934;
        case 0x3d5938u: goto label_3d5938;
        case 0x3d593cu: goto label_3d593c;
        case 0x3d5940u: goto label_3d5940;
        case 0x3d5944u: goto label_3d5944;
        case 0x3d5948u: goto label_3d5948;
        case 0x3d594cu: goto label_3d594c;
        case 0x3d5950u: goto label_3d5950;
        case 0x3d5954u: goto label_3d5954;
        case 0x3d5958u: goto label_3d5958;
        case 0x3d595cu: goto label_3d595c;
        case 0x3d5960u: goto label_3d5960;
        case 0x3d5964u: goto label_3d5964;
        case 0x3d5968u: goto label_3d5968;
        case 0x3d596cu: goto label_3d596c;
        case 0x3d5970u: goto label_3d5970;
        case 0x3d5974u: goto label_3d5974;
        case 0x3d5978u: goto label_3d5978;
        case 0x3d597cu: goto label_3d597c;
        case 0x3d5980u: goto label_3d5980;
        case 0x3d5984u: goto label_3d5984;
        case 0x3d5988u: goto label_3d5988;
        case 0x3d598cu: goto label_3d598c;
        case 0x3d5990u: goto label_3d5990;
        case 0x3d5994u: goto label_3d5994;
        case 0x3d5998u: goto label_3d5998;
        case 0x3d599cu: goto label_3d599c;
        case 0x3d59a0u: goto label_3d59a0;
        case 0x3d59a4u: goto label_3d59a4;
        case 0x3d59a8u: goto label_3d59a8;
        case 0x3d59acu: goto label_3d59ac;
        case 0x3d59b0u: goto label_3d59b0;
        case 0x3d59b4u: goto label_3d59b4;
        case 0x3d59b8u: goto label_3d59b8;
        case 0x3d59bcu: goto label_3d59bc;
        case 0x3d59c0u: goto label_3d59c0;
        case 0x3d59c4u: goto label_3d59c4;
        case 0x3d59c8u: goto label_3d59c8;
        case 0x3d59ccu: goto label_3d59cc;
        case 0x3d59d0u: goto label_3d59d0;
        case 0x3d59d4u: goto label_3d59d4;
        case 0x3d59d8u: goto label_3d59d8;
        case 0x3d59dcu: goto label_3d59dc;
        case 0x3d59e0u: goto label_3d59e0;
        case 0x3d59e4u: goto label_3d59e4;
        case 0x3d59e8u: goto label_3d59e8;
        case 0x3d59ecu: goto label_3d59ec;
        case 0x3d59f0u: goto label_3d59f0;
        case 0x3d59f4u: goto label_3d59f4;
        case 0x3d59f8u: goto label_3d59f8;
        case 0x3d59fcu: goto label_3d59fc;
        case 0x3d5a00u: goto label_3d5a00;
        case 0x3d5a04u: goto label_3d5a04;
        case 0x3d5a08u: goto label_3d5a08;
        case 0x3d5a0cu: goto label_3d5a0c;
        case 0x3d5a10u: goto label_3d5a10;
        case 0x3d5a14u: goto label_3d5a14;
        case 0x3d5a18u: goto label_3d5a18;
        case 0x3d5a1cu: goto label_3d5a1c;
        case 0x3d5a20u: goto label_3d5a20;
        case 0x3d5a24u: goto label_3d5a24;
        case 0x3d5a28u: goto label_3d5a28;
        case 0x3d5a2cu: goto label_3d5a2c;
        case 0x3d5a30u: goto label_3d5a30;
        case 0x3d5a34u: goto label_3d5a34;
        case 0x3d5a38u: goto label_3d5a38;
        case 0x3d5a3cu: goto label_3d5a3c;
        case 0x3d5a40u: goto label_3d5a40;
        case 0x3d5a44u: goto label_3d5a44;
        case 0x3d5a48u: goto label_3d5a48;
        case 0x3d5a4cu: goto label_3d5a4c;
        case 0x3d5a50u: goto label_3d5a50;
        case 0x3d5a54u: goto label_3d5a54;
        case 0x3d5a58u: goto label_3d5a58;
        case 0x3d5a5cu: goto label_3d5a5c;
        case 0x3d5a60u: goto label_3d5a60;
        case 0x3d5a64u: goto label_3d5a64;
        case 0x3d5a68u: goto label_3d5a68;
        case 0x3d5a6cu: goto label_3d5a6c;
        case 0x3d5a70u: goto label_3d5a70;
        case 0x3d5a74u: goto label_3d5a74;
        case 0x3d5a78u: goto label_3d5a78;
        case 0x3d5a7cu: goto label_3d5a7c;
        case 0x3d5a80u: goto label_3d5a80;
        case 0x3d5a84u: goto label_3d5a84;
        case 0x3d5a88u: goto label_3d5a88;
        case 0x3d5a8cu: goto label_3d5a8c;
        case 0x3d5a90u: goto label_3d5a90;
        case 0x3d5a94u: goto label_3d5a94;
        case 0x3d5a98u: goto label_3d5a98;
        case 0x3d5a9cu: goto label_3d5a9c;
        case 0x3d5aa0u: goto label_3d5aa0;
        case 0x3d5aa4u: goto label_3d5aa4;
        case 0x3d5aa8u: goto label_3d5aa8;
        case 0x3d5aacu: goto label_3d5aac;
        case 0x3d5ab0u: goto label_3d5ab0;
        case 0x3d5ab4u: goto label_3d5ab4;
        case 0x3d5ab8u: goto label_3d5ab8;
        case 0x3d5abcu: goto label_3d5abc;
        case 0x3d5ac0u: goto label_3d5ac0;
        case 0x3d5ac4u: goto label_3d5ac4;
        case 0x3d5ac8u: goto label_3d5ac8;
        case 0x3d5accu: goto label_3d5acc;
        case 0x3d5ad0u: goto label_3d5ad0;
        case 0x3d5ad4u: goto label_3d5ad4;
        case 0x3d5ad8u: goto label_3d5ad8;
        case 0x3d5adcu: goto label_3d5adc;
        case 0x3d5ae0u: goto label_3d5ae0;
        case 0x3d5ae4u: goto label_3d5ae4;
        case 0x3d5ae8u: goto label_3d5ae8;
        case 0x3d5aecu: goto label_3d5aec;
        case 0x3d5af0u: goto label_3d5af0;
        case 0x3d5af4u: goto label_3d5af4;
        case 0x3d5af8u: goto label_3d5af8;
        case 0x3d5afcu: goto label_3d5afc;
        case 0x3d5b00u: goto label_3d5b00;
        case 0x3d5b04u: goto label_3d5b04;
        case 0x3d5b08u: goto label_3d5b08;
        case 0x3d5b0cu: goto label_3d5b0c;
        case 0x3d5b10u: goto label_3d5b10;
        case 0x3d5b14u: goto label_3d5b14;
        case 0x3d5b18u: goto label_3d5b18;
        case 0x3d5b1cu: goto label_3d5b1c;
        case 0x3d5b20u: goto label_3d5b20;
        case 0x3d5b24u: goto label_3d5b24;
        case 0x3d5b28u: goto label_3d5b28;
        case 0x3d5b2cu: goto label_3d5b2c;
        case 0x3d5b30u: goto label_3d5b30;
        case 0x3d5b34u: goto label_3d5b34;
        case 0x3d5b38u: goto label_3d5b38;
        case 0x3d5b3cu: goto label_3d5b3c;
        case 0x3d5b40u: goto label_3d5b40;
        case 0x3d5b44u: goto label_3d5b44;
        case 0x3d5b48u: goto label_3d5b48;
        case 0x3d5b4cu: goto label_3d5b4c;
        case 0x3d5b50u: goto label_3d5b50;
        case 0x3d5b54u: goto label_3d5b54;
        case 0x3d5b58u: goto label_3d5b58;
        case 0x3d5b5cu: goto label_3d5b5c;
        case 0x3d5b60u: goto label_3d5b60;
        case 0x3d5b64u: goto label_3d5b64;
        case 0x3d5b68u: goto label_3d5b68;
        case 0x3d5b6cu: goto label_3d5b6c;
        case 0x3d5b70u: goto label_3d5b70;
        case 0x3d5b74u: goto label_3d5b74;
        case 0x3d5b78u: goto label_3d5b78;
        case 0x3d5b7cu: goto label_3d5b7c;
        case 0x3d5b80u: goto label_3d5b80;
        case 0x3d5b84u: goto label_3d5b84;
        case 0x3d5b88u: goto label_3d5b88;
        case 0x3d5b8cu: goto label_3d5b8c;
        case 0x3d5b90u: goto label_3d5b90;
        case 0x3d5b94u: goto label_3d5b94;
        case 0x3d5b98u: goto label_3d5b98;
        case 0x3d5b9cu: goto label_3d5b9c;
        case 0x3d5ba0u: goto label_3d5ba0;
        case 0x3d5ba4u: goto label_3d5ba4;
        case 0x3d5ba8u: goto label_3d5ba8;
        case 0x3d5bacu: goto label_3d5bac;
        case 0x3d5bb0u: goto label_3d5bb0;
        case 0x3d5bb4u: goto label_3d5bb4;
        case 0x3d5bb8u: goto label_3d5bb8;
        case 0x3d5bbcu: goto label_3d5bbc;
        case 0x3d5bc0u: goto label_3d5bc0;
        case 0x3d5bc4u: goto label_3d5bc4;
        case 0x3d5bc8u: goto label_3d5bc8;
        case 0x3d5bccu: goto label_3d5bcc;
        case 0x3d5bd0u: goto label_3d5bd0;
        case 0x3d5bd4u: goto label_3d5bd4;
        case 0x3d5bd8u: goto label_3d5bd8;
        case 0x3d5bdcu: goto label_3d5bdc;
        case 0x3d5be0u: goto label_3d5be0;
        case 0x3d5be4u: goto label_3d5be4;
        case 0x3d5be8u: goto label_3d5be8;
        case 0x3d5becu: goto label_3d5bec;
        case 0x3d5bf0u: goto label_3d5bf0;
        case 0x3d5bf4u: goto label_3d5bf4;
        case 0x3d5bf8u: goto label_3d5bf8;
        case 0x3d5bfcu: goto label_3d5bfc;
        case 0x3d5c00u: goto label_3d5c00;
        case 0x3d5c04u: goto label_3d5c04;
        case 0x3d5c08u: goto label_3d5c08;
        case 0x3d5c0cu: goto label_3d5c0c;
        case 0x3d5c10u: goto label_3d5c10;
        case 0x3d5c14u: goto label_3d5c14;
        case 0x3d5c18u: goto label_3d5c18;
        case 0x3d5c1cu: goto label_3d5c1c;
        case 0x3d5c20u: goto label_3d5c20;
        case 0x3d5c24u: goto label_3d5c24;
        case 0x3d5c28u: goto label_3d5c28;
        case 0x3d5c2cu: goto label_3d5c2c;
        case 0x3d5c30u: goto label_3d5c30;
        case 0x3d5c34u: goto label_3d5c34;
        case 0x3d5c38u: goto label_3d5c38;
        case 0x3d5c3cu: goto label_3d5c3c;
        case 0x3d5c40u: goto label_3d5c40;
        case 0x3d5c44u: goto label_3d5c44;
        case 0x3d5c48u: goto label_3d5c48;
        case 0x3d5c4cu: goto label_3d5c4c;
        case 0x3d5c50u: goto label_3d5c50;
        case 0x3d5c54u: goto label_3d5c54;
        case 0x3d5c58u: goto label_3d5c58;
        case 0x3d5c5cu: goto label_3d5c5c;
        case 0x3d5c60u: goto label_3d5c60;
        case 0x3d5c64u: goto label_3d5c64;
        case 0x3d5c68u: goto label_3d5c68;
        case 0x3d5c6cu: goto label_3d5c6c;
        case 0x3d5c70u: goto label_3d5c70;
        case 0x3d5c74u: goto label_3d5c74;
        case 0x3d5c78u: goto label_3d5c78;
        case 0x3d5c7cu: goto label_3d5c7c;
        case 0x3d5c80u: goto label_3d5c80;
        case 0x3d5c84u: goto label_3d5c84;
        case 0x3d5c88u: goto label_3d5c88;
        case 0x3d5c8cu: goto label_3d5c8c;
        case 0x3d5c90u: goto label_3d5c90;
        case 0x3d5c94u: goto label_3d5c94;
        case 0x3d5c98u: goto label_3d5c98;
        case 0x3d5c9cu: goto label_3d5c9c;
        case 0x3d5ca0u: goto label_3d5ca0;
        case 0x3d5ca4u: goto label_3d5ca4;
        case 0x3d5ca8u: goto label_3d5ca8;
        case 0x3d5cacu: goto label_3d5cac;
        case 0x3d5cb0u: goto label_3d5cb0;
        case 0x3d5cb4u: goto label_3d5cb4;
        case 0x3d5cb8u: goto label_3d5cb8;
        case 0x3d5cbcu: goto label_3d5cbc;
        case 0x3d5cc0u: goto label_3d5cc0;
        case 0x3d5cc4u: goto label_3d5cc4;
        case 0x3d5cc8u: goto label_3d5cc8;
        case 0x3d5cccu: goto label_3d5ccc;
        case 0x3d5cd0u: goto label_3d5cd0;
        case 0x3d5cd4u: goto label_3d5cd4;
        case 0x3d5cd8u: goto label_3d5cd8;
        case 0x3d5cdcu: goto label_3d5cdc;
        case 0x3d5ce0u: goto label_3d5ce0;
        case 0x3d5ce4u: goto label_3d5ce4;
        case 0x3d5ce8u: goto label_3d5ce8;
        case 0x3d5cecu: goto label_3d5cec;
        case 0x3d5cf0u: goto label_3d5cf0;
        case 0x3d5cf4u: goto label_3d5cf4;
        case 0x3d5cf8u: goto label_3d5cf8;
        case 0x3d5cfcu: goto label_3d5cfc;
        case 0x3d5d00u: goto label_3d5d00;
        case 0x3d5d04u: goto label_3d5d04;
        case 0x3d5d08u: goto label_3d5d08;
        case 0x3d5d0cu: goto label_3d5d0c;
        case 0x3d5d10u: goto label_3d5d10;
        case 0x3d5d14u: goto label_3d5d14;
        case 0x3d5d18u: goto label_3d5d18;
        case 0x3d5d1cu: goto label_3d5d1c;
        case 0x3d5d20u: goto label_3d5d20;
        case 0x3d5d24u: goto label_3d5d24;
        case 0x3d5d28u: goto label_3d5d28;
        case 0x3d5d2cu: goto label_3d5d2c;
        case 0x3d5d30u: goto label_3d5d30;
        case 0x3d5d34u: goto label_3d5d34;
        case 0x3d5d38u: goto label_3d5d38;
        case 0x3d5d3cu: goto label_3d5d3c;
        case 0x3d5d40u: goto label_3d5d40;
        case 0x3d5d44u: goto label_3d5d44;
        case 0x3d5d48u: goto label_3d5d48;
        case 0x3d5d4cu: goto label_3d5d4c;
        case 0x3d5d50u: goto label_3d5d50;
        case 0x3d5d54u: goto label_3d5d54;
        case 0x3d5d58u: goto label_3d5d58;
        case 0x3d5d5cu: goto label_3d5d5c;
        case 0x3d5d60u: goto label_3d5d60;
        case 0x3d5d64u: goto label_3d5d64;
        default: break;
    }

    ctx->pc = 0x3d56c0u;

label_3d56c0:
    // 0x3d56c0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3d56c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_3d56c4:
    // 0x3d56c4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x3d56c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_3d56c8:
    // 0x3d56c8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x3d56c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_3d56cc:
    // 0x3d56cc: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x3d56ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_3d56d0:
    // 0x3d56d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d56d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d56d4:
    // 0x3d56d4: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3d56d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3d56d8:
    // 0x3d56d8: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x3d56d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_3d56dc:
    // 0x3d56dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d56dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d56e0:
    // 0x3d56e0: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x3d56e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_3d56e4:
    // 0x3d56e4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x3d56e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_3d56e8:
    // 0x3d56e8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x3d56e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_3d56ec:
    // 0x3d56ec: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x3d56ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_3d56f0:
    // 0x3d56f0: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x3d56f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_3d56f4:
    // 0x3d56f4: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x3d56f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_3d56f8:
    // 0x3d56f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3d56f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3d56fc:
    // 0x3d56fc: 0xc10480a  jal         func_412028
label_3d5700:
    if (ctx->pc == 0x3D5700u) {
        ctx->pc = 0x3D5700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D56FCu;
        // 0x3d5700: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5704u;
        goto label_3d5704;
    }
    ctx->pc = 0x3D56FCu;
    SET_GPR_U32(ctx, 31, 0x3D5704u);
    ctx->pc = 0x3D5700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D56FCu;
    // 0x3d5700: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3D56FCu, 0x3D5704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5704u;
label_3d5704:
    // 0x3d5704: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x3d5704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_3d5708:
    // 0x3d5708: 0x1443018a  bne         $v0, $v1, . + 4 + (0x18A << 2)
label_3d570c:
    if (ctx->pc == 0x3D570Cu) {
        ctx->pc = 0x3D570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5708u;
        // 0x3d570c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5710u;
        goto label_3d5710;
    }
    ctx->pc = 0x3D5708u;
    {
        const bool branch_taken_0x3d5708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5708u;
        // 0x3d570c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5708) {
            ctx->pc = 0x3D5D34u;
            goto label_3d5d34;
        }
    }
    ctx->pc = 0x3D5710u;
label_3d5710:
    // 0x3d5710: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d5710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3d5714:
    // 0x3d5714: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x3d5714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3d5718:
    // 0x3d5718: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3d5718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3d571c:
    // 0x3d571c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3d571cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3d5720:
    // 0x3d5720: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3d5720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3d5724:
    // 0x3d5724: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d5724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d5728:
    // 0x3d5728: 0x40f809  jalr        $v0
label_3d572c:
    if (ctx->pc == 0x3D572Cu) {
        ctx->pc = 0x3D572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5728u;
        // 0x3d572c: 0x34a501b3  ori         $a1, $a1, 0x1B3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)435);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5730u;
        goto label_3d5730;
    }
    ctx->pc = 0x3D5728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5730u);
        ctx->pc = 0x3D572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5728u;
        // 0x3d572c: 0x34a501b3  ori         $a1, $a1, 0x1B3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)435);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5728u, 0x3D5730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5730u;
label_3d5730:
    // 0x3d5730: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3d5730u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5734:
    // 0x3d5734: 0x56c0000e  bnel        $s6, $zero, . + 4 + (0xE << 2)
label_3d5738:
    if (ctx->pc == 0x3D5738u) {
        ctx->pc = 0x3D5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5734u;
        // 0x3d5738: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D573Cu;
        goto label_3d573c;
    }
    ctx->pc = 0x3D5734u;
    {
        const bool branch_taken_0x3d5734 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5734) {
            ctx->pc = 0x3D5738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5734u;
            // 0x3d5738: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5770u;
            goto label_3d5770;
        }
    }
    ctx->pc = 0x3D573Cu;
label_3d573c:
    // 0x3d573c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x3d573cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3d5740:
    // 0x3d5740: 0x240201b3  addiu       $v0, $zero, 0x1B3
    ctx->pc = 0x3d5740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
label_3d5744:
    // 0x3d5744: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3d5744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3d5748:
    // 0x3d5748: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x3d5748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_3d574c:
    // 0x3d574c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3d574cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d5750:
    // 0x3d5750: 0xc1035f6  jal         func_40D7D8
label_3d5754:
    if (ctx->pc == 0x3D5754u) {
        ctx->pc = 0x3D5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5750u;
        // 0x3d5754: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5758u;
        goto label_3d5758;
    }
    ctx->pc = 0x3D5750u;
    SET_GPR_U32(ctx, 31, 0x3D5758u);
    ctx->pc = 0x3D5754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5750u;
    // 0x3d5754: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3D5750u, 0x3D5758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5758u;
label_3d5758:
    // 0x3d5758: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x3d5758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_3d575c:
    // 0x3d575c: 0xc103628  jal         func_40D8A0
label_3d5760:
    if (ctx->pc == 0x3D5760u) {
        ctx->pc = 0x3D5760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D575Cu;
        // 0x3d5760: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5764u;
        goto label_3d5764;
    }
    ctx->pc = 0x3D575Cu;
    SET_GPR_U32(ctx, 31, 0x3D5764u);
    ctx->pc = 0x3D5760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D575Cu;
    // 0x3d5760: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3D575Cu, 0x3D5764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5764u;
label_3d5764:
    // 0x3d5764: 0x0  nop
    ctx->pc = 0x3d5764u;
    // NOP
label_3d5768:
    // 0x3d5768: 0x10000172  b           . + 4 + (0x172 << 2)
label_3d576c:
    if (ctx->pc == 0x3D576Cu) {
        ctx->pc = 0x3D576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5768u;
        // 0x3d576c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5770u;
        goto label_3d5770;
    }
    ctx->pc = 0x3D5768u;
    {
        const bool branch_taken_0x3d5768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5768u;
        // 0x3d576c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5768) {
            ctx->pc = 0x3D5D34u;
            goto label_3d5d34;
        }
    }
    ctx->pc = 0x3D5770u;
label_3d5770:
    // 0x3d5770: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
label_3d5774:
    if (ctx->pc == 0x3D5774u) {
        ctx->pc = 0x3D5774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5770u;
        // 0x3d5774: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5778u;
        goto label_3d5778;
    }
    ctx->pc = 0x3D5770u;
    {
        const bool branch_taken_0x3d5770 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3D5774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5770u;
        // 0x3d5774: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5770) {
            ctx->pc = 0x3D57DCu;
            goto label_3d57dc;
        }
    }
    ctx->pc = 0x3D5778u;
label_3d5778:
    // 0x3d5778: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x3d5778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d577c:
    // 0x3d577c: 0x0  nop
    ctx->pc = 0x3d577cu;
    // NOP
label_3d5780:
    // 0x3d5780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d5780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d5784:
    // 0x3d5784: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3d5784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3d5788:
    // 0x3d5788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d5788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d578c:
    // 0x3d578c: 0xc103322  jal         func_40CC88
label_3d5790:
    if (ctx->pc == 0x3D5790u) {
        ctx->pc = 0x3D5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D578Cu;
        // 0x3d5790: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5794u;
        goto label_3d5794;
    }
    ctx->pc = 0x3D578Cu;
    SET_GPR_U32(ctx, 31, 0x3D5794u);
    ctx->pc = 0x3D5790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D578Cu;
    // 0x3d5790: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3D578Cu, 0x3D5794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5794u;
label_3d5794:
    // 0x3d5794: 0x10400167  beqz        $v0, . + 4 + (0x167 << 2)
label_3d5798:
    if (ctx->pc == 0x3D5798u) {
        ctx->pc = 0x3D5798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5794u;
        // 0x3d5798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D579Cu;
        goto label_3d579c;
    }
    ctx->pc = 0x3D5794u;
    {
        const bool branch_taken_0x3d5794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5794u;
        // 0x3d5798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5794) {
            ctx->pc = 0x3D5D34u;
            goto label_3d5d34;
        }
    }
    ctx->pc = 0x3D579Cu;
label_3d579c:
    // 0x3d579c: 0xc106f0a  jal         func_41BC28
label_3d57a0:
    if (ctx->pc == 0x3D57A0u) {
        ctx->pc = 0x3D57A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D579Cu;
        // 0x3d57a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D57A4u;
        goto label_3d57a4;
    }
    ctx->pc = 0x3D579Cu;
    SET_GPR_U32(ctx, 31, 0x3D57A4u);
    ctx->pc = 0x3D57A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D579Cu;
    // 0x3d57a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BC28u, 0x3D579Cu, 0x3D57A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D57A4u;
label_3d57a4:
    // 0x3d57a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d57a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d57a8:
    // 0x3d57a8: 0x1080ffef  beqz        $a0, . + 4 + (-0x11 << 2)
label_3d57ac:
    if (ctx->pc == 0x3D57ACu) {
        ctx->pc = 0x3D57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57A8u;
        // 0x3d57ac: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D57B0u;
        goto label_3d57b0;
    }
    ctx->pc = 0x3D57A8u;
    {
        const bool branch_taken_0x3d57a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57A8u;
        // 0x3d57ac: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d57a8) {
            ctx->pc = 0x3D5768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5768;
        }
    }
    ctx->pc = 0x3D57B0u;
label_3d57b0:
    // 0x3d57b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d57b4:
    // 0x3d57b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3d57b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3d57b8:
    // 0x3d57b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3d57bc:
    if (ctx->pc == 0x3D57BCu) {
        ctx->pc = 0x3D57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57B8u;
        // 0x3d57bc: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D57C0u;
        goto label_3d57c0;
    }
    ctx->pc = 0x3D57B8u;
    {
        const bool branch_taken_0x3d57b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57B8u;
        // 0x3d57bc: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d57b8) {
            ctx->pc = 0x3D57CCu;
            goto label_3d57cc;
        }
    }
    ctx->pc = 0x3D57C0u;
label_3d57c0:
    // 0x3d57c0: 0xc106faa  jal         func_41BEA8
label_3d57c4:
    if (ctx->pc == 0x3D57C4u) {
        ctx->pc = 0x3D57C8u;
        goto label_3d57c8;
    }
    ctx->pc = 0x3D57C0u;
    SET_GPR_U32(ctx, 31, 0x3D57C8u);
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x3D57C0u, 0x3D57C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D57C8u;
label_3d57c8:
    // 0x3d57c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3d57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3d57cc:
    // 0x3d57cc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3d57ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3d57d0:
    // 0x3d57d0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3d57d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d57d4:
    // 0x3d57d4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_3d57d8:
    if (ctx->pc == 0x3D57D8u) {
        ctx->pc = 0x3D57D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57D4u;
        // 0x3d57d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D57DCu;
        goto label_3d57dc;
    }
    ctx->pc = 0x3D57D4u;
    {
        const bool branch_taken_0x3d57d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D57D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57D4u;
        // 0x3d57d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d57d4) {
            ctx->pc = 0x3D5780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5780;
        }
    }
    ctx->pc = 0x3D57DCu;
label_3d57dc:
    // 0x3d57dc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3d57dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3d57e0:
    // 0x3d57e0: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x3d57e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d57e4:
    // 0x3d57e4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3d57e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3d57e8:
    // 0x3d57e8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x3d57e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d57ec:
    // 0x3d57ec: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3d57ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d57f0:
    // 0x3d57f0: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x3d57f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d57f4:
    // 0x3d57f4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3d57f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3d57f8:
    // 0x3d57f8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x3d57f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_3d57fc:
    // 0x3d57fc: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x3d57fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
label_3d5800:
    // 0x3d5800: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3d5804:
    if (ctx->pc == 0x3D5804u) {
        ctx->pc = 0x3D5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5800u;
        // 0x3d5804: 0xafa60068  sw          $a2, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5808u;
        goto label_3d5808;
    }
    ctx->pc = 0x3D5800u;
    {
        const bool branch_taken_0x3d5800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5800u;
        // 0x3d5804: 0xafa60068  sw          $a2, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5800) {
            ctx->pc = 0x3D5810u;
            goto label_3d5810;
        }
    }
    ctx->pc = 0x3D5808u;
label_3d5808:
    // 0x3d5808: 0x10000006  b           . + 4 + (0x6 << 2)
label_3d580c:
    if (ctx->pc == 0x3D580Cu) {
        ctx->pc = 0x3D580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5808u;
        // 0x3d580c: 0x34108004  ori         $s0, $zero, 0x8004 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5810u;
        goto label_3d5810;
    }
    ctx->pc = 0x3D5808u;
    {
        const bool branch_taken_0x3d5808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5808u;
        // 0x3d580c: 0x34108004  ori         $s0, $zero, 0x8004 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5808) {
            ctx->pc = 0x3D5824u;
            goto label_3d5824;
        }
    }
    ctx->pc = 0x3D5810u;
label_3d5810:
    // 0x3d5810: 0x93a20044  lbu         $v0, 0x44($sp)
    ctx->pc = 0x3d5810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
label_3d5814:
    // 0x3d5814: 0x34039004  ori         $v1, $zero, 0x9004
    ctx->pc = 0x3d5814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36868);
label_3d5818:
    // 0x3d5818: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d5818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d581c:
    // 0x3d581c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3d581cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3d5820:
    // 0x3d5820: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3d5820u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3d5824:
    // 0x3d5824: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x3d5824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3d5828:
    // 0x3d5828: 0x27a70064  addiu       $a3, $sp, 0x64
    ctx->pc = 0x3d5828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_3d582c:
    // 0x3d582c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3d582cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d5830:
    // 0x3d5830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d5830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5834:
    // 0x3d5834: 0x27a80068  addiu       $t0, $sp, 0x68
    ctx->pc = 0x3d5834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_3d5838:
    // 0x3d5838: 0xc107408  jal         func_41D020
label_3d583c:
    if (ctx->pc == 0x3D583Cu) {
        ctx->pc = 0x3D583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5838u;
        // 0x3d583c: 0x27a9006c  addiu       $t1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5840u;
        goto label_3d5840;
    }
    ctx->pc = 0x3D5838u;
    SET_GPR_U32(ctx, 31, 0x3D5840u);
    ctx->pc = 0x3D583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5838u;
    // 0x3d583c: 0x27a9006c  addiu       $t1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D020u, 0x3D5838u, 0x3D5840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5840u;
label_3d5840:
    // 0x3d5840: 0x8fa7006c  lw          $a3, 0x6C($sp)
    ctx->pc = 0x3d5840u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_3d5844:
    // 0x3d5844: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x3d5844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_3d5848:
    // 0x3d5848: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x3d5848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_3d584c:
    // 0x3d584c: 0x2073825  or          $a3, $s0, $a3
    ctx->pc = 0x3d584cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | GPR_U64(ctx, 7));
label_3d5850:
    // 0x3d5850: 0xc10746c  jal         func_41D1B0
label_3d5854:
    if (ctx->pc == 0x3D5854u) {
        ctx->pc = 0x3D5854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5850u;
        // 0x3d5854: 0x8fa60068  lw          $a2, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5858u;
        goto label_3d5858;
    }
    ctx->pc = 0x3D5850u;
    SET_GPR_U32(ctx, 31, 0x3D5858u);
    ctx->pc = 0x3D5854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5850u;
    // 0x3d5854: 0x8fa60068  lw          $a2, 0x68($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x3D5850u, 0x3D5858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5858u;
label_3d5858:
    // 0x3d5858: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d5858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d585c:
    // 0x3d585c: 0x56a00016  bnel        $s5, $zero, . + 4 + (0x16 << 2)
label_3d5860:
    if (ctx->pc == 0x3D5860u) {
        ctx->pc = 0x3D5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D585Cu;
        // 0x3d5860: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5864u;
        goto label_3d5864;
    }
    ctx->pc = 0x3D585Cu;
    {
        const bool branch_taken_0x3d585c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d585c) {
            ctx->pc = 0x3D5860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D585Cu;
            // 0x3d5860: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D58B8u;
            goto label_3d58b8;
        }
    }
    ctx->pc = 0x3D5864u;
label_3d5864:
    // 0x3d5864: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3d5864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3d5868:
    // 0x3d5868: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x3d5868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d586c:
    // 0x3d586c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3d5870:
    if (ctx->pc == 0x3D5870u) {
        ctx->pc = 0x3D5870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D586Cu;
        // 0x3d5870: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5874u;
        goto label_3d5874;
    }
    ctx->pc = 0x3D586Cu;
    {
        const bool branch_taken_0x3d586c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D586Cu;
        // 0x3d5870: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d586c) {
            ctx->pc = 0x3D589Cu;
            goto label_3d589c;
        }
    }
    ctx->pc = 0x3D5874u;
label_3d5874:
    // 0x3d5874: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x3d5874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d5878:
    // 0x3d5878: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d5878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d587c:
    // 0x3d587c: 0x0  nop
    ctx->pc = 0x3d587cu;
    // NOP
label_3d5880:
    // 0x3d5880: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3d5880u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3d5884:
    // 0x3d5884: 0xc10705c  jal         func_41C170
label_3d5888:
    if (ctx->pc == 0x3D5888u) {
        ctx->pc = 0x3D5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5884u;
        // 0x3d5888: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D588Cu;
        goto label_3d588c;
    }
    ctx->pc = 0x3D5884u;
    SET_GPR_U32(ctx, 31, 0x3D588Cu);
    ctx->pc = 0x3D5888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5884u;
    // 0x3d5888: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D5884u, 0x3D588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D588Cu;
label_3d588c:
    // 0x3d588c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3d588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3d5890:
    // 0x3d5890: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x3d5890u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d5894:
    // 0x3d5894: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_3d5898:
    if (ctx->pc == 0x3D5898u) {
        ctx->pc = 0x3D5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5894u;
        // 0x3d5898: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D589Cu;
        goto label_3d589c;
    }
    ctx->pc = 0x3D5894u;
    {
        const bool branch_taken_0x3d5894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5894) {
            ctx->pc = 0x3D5898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5894u;
            // 0x3d5898: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5880;
        }
    }
    ctx->pc = 0x3D589Cu;
label_3d589c:
    // 0x3d589c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d58a0:
    // 0x3d58a0: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3d58a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3d58a4:
    // 0x3d58a4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3d58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3d58a8:
    // 0x3d58a8: 0x40f809  jalr        $v0
label_3d58ac:
    if (ctx->pc == 0x3D58ACu) {
        ctx->pc = 0x3D58ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58A8u;
        // 0x3d58ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D58B0u;
        goto label_3d58b0;
    }
    ctx->pc = 0x3D58A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D58B0u);
        ctx->pc = 0x3D58ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58A8u;
        // 0x3d58ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D58A8u, 0x3D58B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D58B0u;
label_3d58b0:
    // 0x3d58b0: 0x10000120  b           . + 4 + (0x120 << 2)
label_3d58b4:
    if (ctx->pc == 0x3D58B4u) {
        ctx->pc = 0x3D58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58B0u;
        // 0x3d58b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D58B8u;
        goto label_3d58b8;
    }
    ctx->pc = 0x3D58B0u;
    {
        const bool branch_taken_0x3d58b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58B0u;
        // 0x3d58b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d58b0) {
            ctx->pc = 0x3D5D34u;
            goto label_3d5d34;
        }
    }
    ctx->pc = 0x3D58B8u;
label_3d58b8:
    // 0x3d58b8: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x3d58b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3d58bc:
    // 0x3d58bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d58bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d58c0:
    // 0x3d58c0: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_3d58c4:
    if (ctx->pc == 0x3D58C4u) {
        ctx->pc = 0x3D58C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58C0u;
        // 0x3d58c4: 0x8ea50010  lw          $a1, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D58C8u;
        goto label_3d58c8;
    }
    ctx->pc = 0x3D58C0u;
    {
        const bool branch_taken_0x3d58c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3D58C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58C0u;
        // 0x3d58c4: 0x8ea50010  lw          $a1, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d58c0) {
            ctx->pc = 0x3D58D4u;
            goto label_3d58d4;
        }
    }
    ctx->pc = 0x3D58C8u;
label_3d58c8:
    // 0x3d58c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3d58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d58cc:
    // 0x3d58cc: 0x104500a6  beq         $v0, $a1, . + 4 + (0xA6 << 2)
label_3d58d0:
    if (ctx->pc == 0x3D58D0u) {
        ctx->pc = 0x3D58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58CCu;
        // 0x3d58d0: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D58D4u;
        goto label_3d58d4;
    }
    ctx->pc = 0x3D58CCu;
    {
        const bool branch_taken_0x3d58cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3D58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58CCu;
        // 0x3d58d0: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d58cc) {
            ctx->pc = 0x3D5B68u;
            goto label_3d5b68;
        }
    }
    ctx->pc = 0x3D58D4u;
label_3d58d4:
    // 0x3d58d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3d58d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3d58d8:
    // 0x3d58d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d58d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d58dc:
    // 0x3d58dc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3d58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3d58e0:
    // 0x3d58e0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_3d58e4:
    if (ctx->pc == 0x3D58E4u) {
        ctx->pc = 0x3D58E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58E0u;
        // 0x3d58e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D58E8u;
        goto label_3d58e8;
    }
    ctx->pc = 0x3D58E0u;
    {
        const bool branch_taken_0x3d58e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D58E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58E0u;
        // 0x3d58e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d58e0) {
            ctx->pc = 0x3D5928u;
            goto label_3d5928;
        }
    }
    ctx->pc = 0x3D58E8u;
label_3d58e8:
    // 0x3d58e8: 0xc1074ac  jal         func_41D2B0
label_3d58ec:
    if (ctx->pc == 0x3D58ECu) {
        ctx->pc = 0x3D58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58E8u;
        // 0x3d58ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D58F0u;
        goto label_3d58f0;
    }
    ctx->pc = 0x3D58E8u;
    SET_GPR_U32(ctx, 31, 0x3D58F0u);
    ctx->pc = 0x3D58ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D58E8u;
    // 0x3d58ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x3D58E8u, 0x3D58F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D58F0u;
label_3d58f0:
    // 0x3d58f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d58f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d58f4:
    // 0x3d58f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d58f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d58f8:
    // 0x3d58f8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3d58f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3d58fc:
    // 0x3d58fc: 0xc10746c  jal         func_41D1B0
label_3d5900:
    if (ctx->pc == 0x3D5900u) {
        ctx->pc = 0x3D5900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58FCu;
        // 0x3d5900: 0x36070500  ori         $a3, $s0, 0x500 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1280);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5904u;
        goto label_3d5904;
    }
    ctx->pc = 0x3D58FCu;
    SET_GPR_U32(ctx, 31, 0x3D5904u);
    ctx->pc = 0x3D5900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D58FCu;
    // 0x3d5900: 0x36070500  ori         $a3, $s0, 0x500 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x3D58FCu, 0x3D5904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5904u;
label_3d5904:
    // 0x3d5904: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d5904u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5908:
    // 0x3d5908: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
label_3d590c:
    if (ctx->pc == 0x3D590Cu) {
        ctx->pc = 0x3D590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5908u;
        // 0x3d590c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5910u;
        goto label_3d5910;
    }
    ctx->pc = 0x3D5908u;
    {
        const bool branch_taken_0x3d5908 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5908u;
        // 0x3d590c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5908) {
            ctx->pc = 0x3D592Cu;
            goto label_3d592c;
        }
    }
    ctx->pc = 0x3D5910u;
label_3d5910:
    // 0x3d5910: 0x36070100  ori         $a3, $s0, 0x100
    ctx->pc = 0x3d5910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
label_3d5914:
    // 0x3d5914: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d5914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5918:
    // 0x3d5918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d5918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d591c:
    // 0x3d591c: 0xc10746c  jal         func_41D1B0
label_3d5920:
    if (ctx->pc == 0x3D5920u) {
        ctx->pc = 0x3D5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D591Cu;
        // 0x3d5920: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5924u;
        goto label_3d5924;
    }
    ctx->pc = 0x3D591Cu;
    SET_GPR_U32(ctx, 31, 0x3D5924u);
    ctx->pc = 0x3D5920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D591Cu;
    // 0x3d5920: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x3D591Cu, 0x3D5924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5924u;
label_3d5924:
    // 0x3d5924: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d5924u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5928:
    // 0x3d5928: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d5928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d592c:
    // 0x3d592c: 0xc1074ce  jal         func_41D338
label_3d5930:
    if (ctx->pc == 0x3D5930u) {
        ctx->pc = 0x3D5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D592Cu;
        // 0x3d5930: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5934u;
        goto label_3d5934;
    }
    ctx->pc = 0x3D592Cu;
    SET_GPR_U32(ctx, 31, 0x3D5934u);
    ctx->pc = 0x3D5930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D592Cu;
    // 0x3d5930: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D338u, 0x3D592Cu, 0x3D5934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5934u;
label_3d5934:
    // 0x3d5934: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3d5934u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5938:
    // 0x3d5938: 0x1ae0008a  blez        $s7, . + 4 + (0x8A << 2)
label_3d593c:
    if (ctx->pc == 0x3D593Cu) {
        ctx->pc = 0x3D593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5938u;
        // 0x3d593c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5940u;
        goto label_3d5940;
    }
    ctx->pc = 0x3D5938u;
    {
        const bool branch_taken_0x3d5938 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3D593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5938u;
        // 0x3d593c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5938) {
            ctx->pc = 0x3D5B64u;
            goto label_3d5b64;
        }
    }
    ctx->pc = 0x3D5940u;
label_3d5940:
    // 0x3d5940: 0x1ae0002b  blez        $s7, . + 4 + (0x2B << 2)
label_3d5944:
    if (ctx->pc == 0x3D5944u) {
        ctx->pc = 0x3D5944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5940u;
        // 0x3d5944: 0x32e30003  andi        $v1, $s7, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5948u;
        goto label_3d5948;
    }
    ctx->pc = 0x3D5940u;
    {
        const bool branch_taken_0x3d5940 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3D5944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5940u;
        // 0x3d5944: 0x32e30003  andi        $v1, $s7, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5940) {
            ctx->pc = 0x3D59F0u;
            goto label_3d59f0;
        }
    }
    ctx->pc = 0x3D5948u;
label_3d5948:
    // 0x3d5948: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_3d594c:
    if (ctx->pc == 0x3D594Cu) {
        ctx->pc = 0x3D594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5948u;
        // 0x3d594c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5950u;
        goto label_3d5950;
    }
    ctx->pc = 0x3D5948u;
    {
        const bool branch_taken_0x3d5948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5948u;
        // 0x3d594c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5948) {
            ctx->pc = 0x3D5A40u;
            goto label_3d5a40;
        }
    }
    ctx->pc = 0x3D5950u;
label_3d5950:
    // 0x3d5950: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_3d5954:
    if (ctx->pc == 0x3D5954u) {
        ctx->pc = 0x3D5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5950u;
        // 0x3d5954: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5958u;
        goto label_3d5958;
    }
    ctx->pc = 0x3D5950u;
    {
        const bool branch_taken_0x3d5950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5950) {
            ctx->pc = 0x3D5954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5950u;
            // 0x3d5954: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D59F4u;
            goto label_3d59f4;
        }
    }
    ctx->pc = 0x3D5958u;
label_3d5958:
    // 0x3d5958: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d5958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3d595c:
    // 0x3d595c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_3d5960:
    if (ctx->pc == 0x3D5960u) {
        ctx->pc = 0x3D5960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D595Cu;
        // 0x3d5960: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5964u;
        goto label_3d5964;
    }
    ctx->pc = 0x3D595Cu;
    {
        const bool branch_taken_0x3d595c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d595c) {
            ctx->pc = 0x3D5960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D595Cu;
            // 0x3d5960: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D59ACu;
            goto label_3d59ac;
        }
    }
    ctx->pc = 0x3D5964u;
label_3d5964:
    // 0x3d5964: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x3d5964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3d5968:
    // 0x3d5968: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d5968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d596c:
    // 0x3d596c: 0xc10786a  jal         func_41E1A8
label_3d5970:
    if (ctx->pc == 0x3D5970u) {
        ctx->pc = 0x3D5970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D596Cu;
        // 0x3d5970: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5974u;
        goto label_3d5974;
    }
    ctx->pc = 0x3D596Cu;
    SET_GPR_U32(ctx, 31, 0x3D5974u);
    ctx->pc = 0x3D5970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D596Cu;
    // 0x3d5970: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x3D596Cu, 0x3D5974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5974u;
label_3d5974:
    // 0x3d5974: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d5974u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5978:
    // 0x3d5978: 0x1260ff7b  beqz        $s3, . + 4 + (-0x85 << 2)
label_3d597c:
    if (ctx->pc == 0x3D597Cu) {
        ctx->pc = 0x3D597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5978u;
        // 0x3d597c: 0x26d00004  addiu       $s0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5980u;
        goto label_3d5980;
    }
    ctx->pc = 0x3D5978u;
    {
        const bool branch_taken_0x3d5978 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5978u;
        // 0x3d597c: 0x26d00004  addiu       $s0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5978) {
            ctx->pc = 0x3D5768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5768;
        }
    }
    ctx->pc = 0x3D5980u;
label_3d5980:
    // 0x3d5980: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x3d5980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3d5984:
    // 0x3d5984: 0xc10705c  jal         func_41C170
label_3d5988:
    if (ctx->pc == 0x3D5988u) {
        ctx->pc = 0x3D5988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5984u;
        // 0x3d5988: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D598Cu;
        goto label_3d598c;
    }
    ctx->pc = 0x3D5984u;
    SET_GPR_U32(ctx, 31, 0x3D598Cu);
    ctx->pc = 0x3D5988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5984u;
    // 0x3d5988: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D5984u, 0x3D598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D598Cu;
label_3d598c:
    // 0x3d598c: 0x2a450002  slti        $a1, $s2, 0x2
    ctx->pc = 0x3d598cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5990:
    // 0x3d5990: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x3d5990u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_3d5994:
    // 0x3d5994: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x3d5994u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5998:
    // 0x3d5998: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x3d5998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_3d599c:
    // 0x3d599c: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x3d599cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
label_3d59a0:
    // 0x3d59a0: 0x65900a  movz        $s2, $v1, $a1
    ctx->pc = 0x3d59a0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d59a4:
    // 0x3d59a4: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3d59a4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d59a8:
    // 0x3d59a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d59a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d59ac:
    // 0x3d59ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d59acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d59b0:
    // 0x3d59b0: 0xc10786a  jal         func_41E1A8
label_3d59b4:
    if (ctx->pc == 0x3D59B4u) {
        ctx->pc = 0x3D59B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D59B0u;
        // 0x3d59b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D59B8u;
        goto label_3d59b8;
    }
    ctx->pc = 0x3D59B0u;
    SET_GPR_U32(ctx, 31, 0x3D59B8u);
    ctx->pc = 0x3D59B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D59B0u;
    // 0x3d59b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x3D59B0u, 0x3D59B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D59B8u;
label_3d59b8:
    // 0x3d59b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d59b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d59bc:
    // 0x3d59bc: 0x126000dd  beqz        $s3, . + 4 + (0xDD << 2)
label_3d59c0:
    if (ctx->pc == 0x3D59C0u) {
        ctx->pc = 0x3D59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D59BCu;
        // 0x3d59c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D59C4u;
        goto label_3d59c4;
    }
    ctx->pc = 0x3D59BCu;
    {
        const bool branch_taken_0x3d59bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D59BCu;
        // 0x3d59c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d59bc) {
            ctx->pc = 0x3D5D34u;
            goto label_3d5d34;
        }
    }
    ctx->pc = 0x3D59C4u;
label_3d59c4:
    // 0x3d59c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d59c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d59c8:
    // 0x3d59c8: 0xc10705c  jal         func_41C170
label_3d59cc:
    if (ctx->pc == 0x3D59CCu) {
        ctx->pc = 0x3D59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D59C8u;
        // 0x3d59cc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D59D0u;
        goto label_3d59d0;
    }
    ctx->pc = 0x3D59C8u;
    SET_GPR_U32(ctx, 31, 0x3D59D0u);
    ctx->pc = 0x3D59CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D59C8u;
    // 0x3d59cc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D59C8u, 0x3D59D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D59D0u;
label_3d59d0:
    // 0x3d59d0: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x3d59d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_3d59d4:
    // 0x3d59d4: 0x2a450002  slti        $a1, $s2, 0x2
    ctx->pc = 0x3d59d4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d59d8:
    // 0x3d59d8: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x3d59d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_3d59dc:
    // 0x3d59dc: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x3d59dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d59e0:
    // 0x3d59e0: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x3d59e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_3d59e4:
    // 0x3d59e4: 0x65900a  movz        $s2, $v1, $a1
    ctx->pc = 0x3d59e4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d59e8:
    // 0x3d59e8: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3d59e8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d59ec:
    // 0x3d59ec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3d59ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3d59f0:
    // 0x3d59f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d59f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d59f4:
    // 0x3d59f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d59f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d59f8:
    // 0x3d59f8: 0xc10786a  jal         func_41E1A8
label_3d59fc:
    if (ctx->pc == 0x3D59FCu) {
        ctx->pc = 0x3D59FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D59F8u;
        // 0x3d59fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5A00u;
        goto label_3d5a00;
    }
    ctx->pc = 0x3D59F8u;
    SET_GPR_U32(ctx, 31, 0x3D5A00u);
    ctx->pc = 0x3D59FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D59F8u;
    // 0x3d59fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x3D59F8u, 0x3D5A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5A00u;
label_3d5a00:
    // 0x3d5a00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d5a00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5a04:
    // 0x3d5a04: 0x126000cb  beqz        $s3, . + 4 + (0xCB << 2)
label_3d5a08:
    if (ctx->pc == 0x3D5A08u) {
        ctx->pc = 0x3D5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A04u;
        // 0x3d5a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5A0Cu;
        goto label_3d5a0c;
    }
    ctx->pc = 0x3D5A04u;
    {
        const bool branch_taken_0x3d5a04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A04u;
        // 0x3d5a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5a04) {
            ctx->pc = 0x3D5D34u;
            goto label_3d5d34;
        }
    }
    ctx->pc = 0x3D5A0Cu;
label_3d5a0c:
    // 0x3d5a0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d5a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d5a10:
    // 0x3d5a10: 0xc10705c  jal         func_41C170
label_3d5a14:
    if (ctx->pc == 0x3D5A14u) {
        ctx->pc = 0x3D5A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A10u;
        // 0x3d5a14: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5A18u;
        goto label_3d5a18;
    }
    ctx->pc = 0x3D5A10u;
    SET_GPR_U32(ctx, 31, 0x3D5A18u);
    ctx->pc = 0x3D5A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5A10u;
    // 0x3d5a14: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D5A10u, 0x3D5A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5A18u;
label_3d5a18:
    // 0x3d5a18: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x3d5a18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_3d5a1c:
    // 0x3d5a1c: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x3d5a1cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5a20:
    // 0x3d5a20: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x3d5a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_3d5a24:
    // 0x3d5a24: 0x2a450002  slti        $a1, $s2, 0x2
    ctx->pc = 0x3d5a24u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5a28:
    // 0x3d5a28: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x3d5a28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_3d5a2c:
    // 0x3d5a2c: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3d5a2cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d5a30:
    // 0x3d5a30: 0x65900a  movz        $s2, $v1, $a1
    ctx->pc = 0x3d5a30u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d5a34:
    // 0x3d5a34: 0x297102a  slt         $v0, $s4, $s7
    ctx->pc = 0x3d5a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3d5a38:
    // 0x3d5a38: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_3d5a3c:
    if (ctx->pc == 0x3D5A3Cu) {
        ctx->pc = 0x3D5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A38u;
        // 0x3d5a3c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5A40u;
        goto label_3d5a40;
    }
    ctx->pc = 0x3D5A38u;
    {
        const bool branch_taken_0x3d5a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A38u;
        // 0x3d5a3c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5a38) {
            ctx->pc = 0x3D5B64u;
            goto label_3d5b64;
        }
    }
    ctx->pc = 0x3D5A40u;
label_3d5a40:
    // 0x3d5a40: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3d5a40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5a44:
    // 0x3d5a44: 0x0  nop
    ctx->pc = 0x3d5a44u;
    // NOP
label_3d5a48:
    // 0x3d5a48: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3d5a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d5a4c:
    // 0x3d5a4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d5a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5a50:
    // 0x3d5a50: 0xc10786a  jal         func_41E1A8
label_3d5a54:
    if (ctx->pc == 0x3D5A54u) {
        ctx->pc = 0x3D5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A50u;
        // 0x3d5a54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5A58u;
        goto label_3d5a58;
    }
    ctx->pc = 0x3D5A50u;
    SET_GPR_U32(ctx, 31, 0x3D5A58u);
    ctx->pc = 0x3D5A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5A50u;
    // 0x3d5a54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x3D5A50u, 0x3D5A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5A58u;
label_3d5a58:
    // 0x3d5a58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d5a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5a5c:
    // 0x3d5a5c: 0x120000b5  beqz        $s0, . + 4 + (0xB5 << 2)
label_3d5a60:
    if (ctx->pc == 0x3D5A60u) {
        ctx->pc = 0x3D5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A5Cu;
        // 0x3d5a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5A64u;
        goto label_3d5a64;
    }
    ctx->pc = 0x3D5A5Cu;
    {
        const bool branch_taken_0x3d5a5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A5Cu;
        // 0x3d5a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5a5c) {
            ctx->pc = 0x3D5D34u;
            goto label_3d5d34;
        }
    }
    ctx->pc = 0x3D5A64u;
label_3d5a64:
    // 0x3d5a64: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3d5a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d5a68:
    // 0x3d5a68: 0xc10705c  jal         func_41C170
label_3d5a6c:
    if (ctx->pc == 0x3D5A6Cu) {
        ctx->pc = 0x3D5A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A68u;
        // 0x3d5a6c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5A70u;
        goto label_3d5a70;
    }
    ctx->pc = 0x3D5A68u;
    SET_GPR_U32(ctx, 31, 0x3D5A70u);
    ctx->pc = 0x3D5A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5A68u;
    // 0x3d5a6c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D5A68u, 0x3D5A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5A70u;
label_3d5a70:
    // 0x3d5a70: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x3d5a70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5a74:
    // 0x3d5a74: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x3d5a74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_3d5a78:
    // 0x3d5a78: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3d5a78u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d5a7c:
    // 0x3d5a7c: 0x2a450002  slti        $a1, $s2, 0x2
    ctx->pc = 0x3d5a7cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5a80:
    // 0x3d5a80: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x3d5a80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_3d5a84:
    // 0x3d5a84: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x3d5a84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_3d5a88:
    // 0x3d5a88: 0x65900a  movz        $s2, $v1, $a1
    ctx->pc = 0x3d5a88u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d5a8c:
    // 0x3d5a8c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3d5a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d5a90:
    // 0x3d5a90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d5a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5a94:
    // 0x3d5a94: 0xc10786a  jal         func_41E1A8
label_3d5a98:
    if (ctx->pc == 0x3D5A98u) {
        ctx->pc = 0x3D5A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5A94u;
        // 0x3d5a98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5A9Cu;
        goto label_3d5a9c;
    }
    ctx->pc = 0x3D5A94u;
    SET_GPR_U32(ctx, 31, 0x3D5A9Cu);
    ctx->pc = 0x3D5A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5A94u;
    // 0x3d5a98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x3D5A94u, 0x3D5A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5A9Cu;
label_3d5a9c:
    // 0x3d5a9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d5a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5aa0:
    // 0x3d5aa0: 0x120000a4  beqz        $s0, . + 4 + (0xA4 << 2)
label_3d5aa4:
    if (ctx->pc == 0x3D5AA4u) {
        ctx->pc = 0x3D5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5AA0u;
        // 0x3d5aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5AA8u;
        goto label_3d5aa8;
    }
    ctx->pc = 0x3D5AA0u;
    {
        const bool branch_taken_0x3d5aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5AA0u;
        // 0x3d5aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5aa0) {
            ctx->pc = 0x3D5D34u;
            goto label_3d5d34;
        }
    }
    ctx->pc = 0x3D5AA8u;
label_3d5aa8:
    // 0x3d5aa8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3d5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d5aac:
    // 0x3d5aac: 0xc10705c  jal         func_41C170
label_3d5ab0:
    if (ctx->pc == 0x3D5AB0u) {
        ctx->pc = 0x3D5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5AACu;
        // 0x3d5ab0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5AB4u;
        goto label_3d5ab4;
    }
    ctx->pc = 0x3D5AACu;
    SET_GPR_U32(ctx, 31, 0x3D5AB4u);
    ctx->pc = 0x3D5AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5AACu;
    // 0x3d5ab0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D5AACu, 0x3D5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5AB4u;
label_3d5ab4:
    // 0x3d5ab4: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x3d5ab4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5ab8:
    // 0x3d5ab8: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x3d5ab8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_3d5abc:
    // 0x3d5abc: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3d5abcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d5ac0:
    // 0x3d5ac0: 0x2a450002  slti        $a1, $s2, 0x2
    ctx->pc = 0x3d5ac0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5ac4:
    // 0x3d5ac4: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x3d5ac4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_3d5ac8:
    // 0x3d5ac8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x3d5ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_3d5acc:
    // 0x3d5acc: 0x65900a  movz        $s2, $v1, $a1
    ctx->pc = 0x3d5accu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d5ad0:
    // 0x3d5ad0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3d5ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3d5ad4:
    // 0x3d5ad4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d5ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5ad8:
    // 0x3d5ad8: 0xc10786a  jal         func_41E1A8
label_3d5adc:
    if (ctx->pc == 0x3D5ADCu) {
        ctx->pc = 0x3D5ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5AD8u;
        // 0x3d5adc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5AE0u;
        goto label_3d5ae0;
    }
    ctx->pc = 0x3D5AD8u;
    SET_GPR_U32(ctx, 31, 0x3D5AE0u);
    ctx->pc = 0x3D5ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5AD8u;
    // 0x3d5adc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x3D5AD8u, 0x3D5AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5AE0u;
label_3d5ae0:
    // 0x3d5ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d5ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5ae4:
    // 0x3d5ae4: 0x12000093  beqz        $s0, . + 4 + (0x93 << 2)
label_3d5ae8:
    if (ctx->pc == 0x3D5AE8u) {
        ctx->pc = 0x3D5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5AE4u;
        // 0x3d5ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5AECu;
        goto label_3d5aec;
    }
    ctx->pc = 0x3D5AE4u;
    {
        const bool branch_taken_0x3d5ae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5AE4u;
        // 0x3d5ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5ae4) {
            ctx->pc = 0x3D5D34u;
            goto label_3d5d34;
        }
    }
    ctx->pc = 0x3D5AECu;
label_3d5aec:
    // 0x3d5aec: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3d5aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3d5af0:
    // 0x3d5af0: 0xc10705c  jal         func_41C170
label_3d5af4:
    if (ctx->pc == 0x3D5AF4u) {
        ctx->pc = 0x3D5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5AF0u;
        // 0x3d5af4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5AF8u;
        goto label_3d5af8;
    }
    ctx->pc = 0x3D5AF0u;
    SET_GPR_U32(ctx, 31, 0x3D5AF8u);
    ctx->pc = 0x3D5AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5AF0u;
    // 0x3d5af4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D5AF0u, 0x3D5AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5AF8u;
label_3d5af8:
    // 0x3d5af8: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x3d5af8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5afc:
    // 0x3d5afc: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x3d5afcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_3d5b00:
    // 0x3d5b00: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3d5b00u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d5b04:
    // 0x3d5b04: 0x2a450002  slti        $a1, $s2, 0x2
    ctx->pc = 0x3d5b04u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5b08:
    // 0x3d5b08: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x3d5b08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_3d5b0c:
    // 0x3d5b0c: 0xae700008  sw          $s0, 0x8($s3)
    ctx->pc = 0x3d5b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
label_3d5b10:
    // 0x3d5b10: 0x65900a  movz        $s2, $v1, $a1
    ctx->pc = 0x3d5b10u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d5b14:
    // 0x3d5b14: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x3d5b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3d5b18:
    // 0x3d5b18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d5b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5b1c:
    // 0x3d5b1c: 0xc10786a  jal         func_41E1A8
label_3d5b20:
    if (ctx->pc == 0x3D5B20u) {
        ctx->pc = 0x3D5B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B1Cu;
        // 0x3d5b20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5B24u;
        goto label_3d5b24;
    }
    ctx->pc = 0x3D5B1Cu;
    SET_GPR_U32(ctx, 31, 0x3D5B24u);
    ctx->pc = 0x3D5B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5B1Cu;
    // 0x3d5b20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E1A8u, 0x3D5B1Cu, 0x3D5B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5B24u;
label_3d5b24:
    // 0x3d5b24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d5b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5b28:
    // 0x3d5b28: 0x12000082  beqz        $s0, . + 4 + (0x82 << 2)
label_3d5b2c:
    if (ctx->pc == 0x3D5B2Cu) {
        ctx->pc = 0x3D5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B28u;
        // 0x3d5b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5B30u;
        goto label_3d5b30;
    }
    ctx->pc = 0x3D5B28u;
    {
        const bool branch_taken_0x3d5b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B28u;
        // 0x3d5b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5b28) {
            ctx->pc = 0x3D5D34u;
            goto label_3d5d34;
        }
    }
    ctx->pc = 0x3D5B30u;
label_3d5b30:
    // 0x3d5b30: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x3d5b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3d5b34:
    // 0x3d5b34: 0xc10705c  jal         func_41C170
label_3d5b38:
    if (ctx->pc == 0x3D5B38u) {
        ctx->pc = 0x3D5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B34u;
        // 0x3d5b38: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5B3Cu;
        goto label_3d5b3c;
    }
    ctx->pc = 0x3D5B34u;
    SET_GPR_U32(ctx, 31, 0x3D5B3Cu);
    ctx->pc = 0x3D5B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5B34u;
    // 0x3d5b38: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D5B34u, 0x3D5B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5B3Cu;
label_3d5b3c:
    // 0x3d5b3c: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x3d5b3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_3d5b40:
    // 0x3d5b40: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x3d5b40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5b44:
    // 0x3d5b44: 0xae70000c  sw          $s0, 0xC($s3)
    ctx->pc = 0x3d5b44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 16));
label_3d5b48:
    // 0x3d5b48: 0x2a450002  slti        $a1, $s2, 0x2
    ctx->pc = 0x3d5b48u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5b4c:
    // 0x3d5b4c: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x3d5b4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_3d5b50:
    // 0x3d5b50: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x3d5b50u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d5b54:
    // 0x3d5b54: 0x65900a  movz        $s2, $v1, $a1
    ctx->pc = 0x3d5b54u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3d5b58:
    // 0x3d5b58: 0x297102a  slt         $v0, $s4, $s7
    ctx->pc = 0x3d5b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3d5b5c:
    // 0x3d5b5c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_3d5b60:
    if (ctx->pc == 0x3D5B60u) {
        ctx->pc = 0x3D5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B5Cu;
        // 0x3d5b60: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5B64u;
        goto label_3d5b64;
    }
    ctx->pc = 0x3D5B5Cu;
    {
        const bool branch_taken_0x3d5b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B5Cu;
        // 0x3d5b60: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5b5c) {
            ctx->pc = 0x3D5A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5a48;
        }
    }
    ctx->pc = 0x3D5B64u;
label_3d5b64:
    // 0x3d5b64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3d5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3d5b68:
    // 0x3d5b68: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3d5b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5b6c:
    // 0x3d5b6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3d5b70:
    if (ctx->pc == 0x3D5B70u) {
        ctx->pc = 0x3D5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B6Cu;
        // 0x3d5b70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5B74u;
        goto label_3d5b74;
    }
    ctx->pc = 0x3D5B6Cu;
    {
        const bool branch_taken_0x3d5b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B6Cu;
        // 0x3d5b70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5b6c) {
            ctx->pc = 0x3D5B88u;
            goto label_3d5b88;
        }
    }
    ctx->pc = 0x3D5B74u;
label_3d5b74:
    // 0x3d5b74: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x3d5b74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
label_3d5b78:
    // 0x3d5b78: 0x305e0010  andi        $fp, $v0, 0x10
    ctx->pc = 0x3d5b78u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3d5b7c:
    // 0x3d5b7c: 0x1e1827  nor         $v1, $zero, $fp
    ctx->pc = 0x3d5b7cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
label_3d5b80:
    // 0x3d5b80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3d5b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3d5b84:
    // 0x3d5b84: 0xa2a20023  sb          $v0, 0x23($s5)
    ctx->pc = 0x3d5b84u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 35), (uint8_t)GPR_U32(ctx, 2));
label_3d5b88:
    // 0x3d5b88: 0xc1074ce  jal         func_41D338
label_3d5b8c:
    if (ctx->pc == 0x3D5B8Cu) {
        ctx->pc = 0x3D5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B88u;
        // 0x3d5b8c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5B90u;
        goto label_3d5b90;
    }
    ctx->pc = 0x3D5B88u;
    SET_GPR_U32(ctx, 31, 0x3D5B90u);
    ctx->pc = 0x3D5B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5B88u;
    // 0x3d5b8c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D338u, 0x3D5B88u, 0x3D5B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5B90u;
label_3d5b90:
    // 0x3d5b90: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3d5b90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5b94:
    // 0x3d5b94: 0x1ae0001c  blez        $s7, . + 4 + (0x1C << 2)
label_3d5b98:
    if (ctx->pc == 0x3D5B98u) {
        ctx->pc = 0x3D5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B94u;
        // 0x3d5b98: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5B9Cu;
        goto label_3d5b9c;
    }
    ctx->pc = 0x3D5B94u;
    {
        const bool branch_taken_0x3d5b94 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3D5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B94u;
        // 0x3d5b98: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5b94) {
            ctx->pc = 0x3D5C08u;
            goto label_3d5c08;
        }
    }
    ctx->pc = 0x3D5B9Cu;
label_3d5b9c:
    // 0x3d5b9c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_3d5ba0:
    if (ctx->pc == 0x3D5BA0u) {
        ctx->pc = 0x3D5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B9Cu;
        // 0x3d5ba0: 0x28420002  slti        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5BA4u;
        goto label_3d5ba4;
    }
    ctx->pc = 0x3D5B9Cu;
    {
        const bool branch_taken_0x3d5b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B9Cu;
        // 0x3d5ba0: 0x28420002  slti        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5b9c) {
            ctx->pc = 0x3D5C10u;
            goto label_3d5c10;
        }
    }
    ctx->pc = 0x3D5BA4u;
label_3d5ba4:
    // 0x3d5ba4: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x3d5ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d5ba8:
    // 0x3d5ba8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d5ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d5bac:
    // 0x3d5bac: 0x0  nop
    ctx->pc = 0x3d5bacu;
    // NOP
label_3d5bb0:
    // 0x3d5bb0: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x3d5bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_3d5bb4:
    // 0x3d5bb4: 0xc1075c0  jal         func_41D700
label_3d5bb8:
    if (ctx->pc == 0x3D5BB8u) {
        ctx->pc = 0x3D5BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BB4u;
        // 0x3d5bb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5BBCu;
        goto label_3d5bbc;
    }
    ctx->pc = 0x3D5BB4u;
    SET_GPR_U32(ctx, 31, 0x3D5BBCu);
    ctx->pc = 0x3D5BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5BB4u;
    // 0x3d5bb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x3D5BB4u, 0x3D5BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5BBCu;
label_3d5bbc:
    // 0x3d5bbc: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_3d5bc0:
    if (ctx->pc == 0x3D5BC0u) {
        ctx->pc = 0x3D5BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BBCu;
        // 0x3d5bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5BC4u;
        goto label_3d5bc4;
    }
    ctx->pc = 0x3D5BBCu;
    {
        const bool branch_taken_0x3d5bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BBCu;
        // 0x3d5bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5bbc) {
            ctx->pc = 0x3D5D34u;
            goto label_3d5d34;
        }
    }
    ctx->pc = 0x3D5BC4u;
label_3d5bc4:
    // 0x3d5bc4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3d5bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d5bc8:
    // 0x3d5bc8: 0xc1073c2  jal         func_41CF08
label_3d5bcc:
    if (ctx->pc == 0x3D5BCCu) {
        ctx->pc = 0x3D5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BC8u;
        // 0x3d5bcc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5BD0u;
        goto label_3d5bd0;
    }
    ctx->pc = 0x3D5BC8u;
    SET_GPR_U32(ctx, 31, 0x3D5BD0u);
    ctx->pc = 0x3D5BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5BC8u;
    // 0x3d5bcc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3D5BC8u, 0x3D5BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5BD0u;
label_3d5bd0:
    // 0x3d5bd0: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_3d5bd4:
    if (ctx->pc == 0x3D5BD4u) {
        ctx->pc = 0x3D5BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BD0u;
        // 0x3d5bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5BD8u;
        goto label_3d5bd8;
    }
    ctx->pc = 0x3D5BD0u;
    {
        const bool branch_taken_0x3d5bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BD0u;
        // 0x3d5bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5bd0) {
            ctx->pc = 0x3D5D34u;
            goto label_3d5d34;
        }
    }
    ctx->pc = 0x3D5BD8u;
label_3d5bd8:
    // 0x3d5bd8: 0xc1075d0  jal         func_41D740
label_3d5bdc:
    if (ctx->pc == 0x3D5BDCu) {
        ctx->pc = 0x3D5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BD8u;
        // 0x3d5bdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5BE0u;
        goto label_3d5be0;
    }
    ctx->pc = 0x3D5BD8u;
    SET_GPR_U32(ctx, 31, 0x3D5BE0u);
    ctx->pc = 0x3D5BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5BD8u;
    // 0x3d5bdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x3D5BD8u, 0x3D5BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5BE0u;
label_3d5be0:
    // 0x3d5be0: 0x1040fee1  beqz        $v0, . + 4 + (-0x11F << 2)
label_3d5be4:
    if (ctx->pc == 0x3D5BE4u) {
        ctx->pc = 0x3D5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BE0u;
        // 0x3d5be4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5BE8u;
        goto label_3d5be8;
    }
    ctx->pc = 0x3D5BE0u;
    {
        const bool branch_taken_0x3d5be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BE0u;
        // 0x3d5be4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5be0) {
            ctx->pc = 0x3D5768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5768;
        }
    }
    ctx->pc = 0x3D5BE8u;
label_3d5be8:
    // 0x3d5be8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d5be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d5bec:
    // 0x3d5bec: 0xc10705c  jal         func_41C170
label_3d5bf0:
    if (ctx->pc == 0x3D5BF0u) {
        ctx->pc = 0x3D5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BECu;
        // 0x3d5bf0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5BF4u;
        goto label_3d5bf4;
    }
    ctx->pc = 0x3D5BECu;
    SET_GPR_U32(ctx, 31, 0x3D5BF4u);
    ctx->pc = 0x3D5BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5BECu;
    // 0x3d5bf0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D5BECu, 0x3D5BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5BF4u;
label_3d5bf4:
    // 0x3d5bf4: 0x297182a  slt         $v1, $s4, $s7
    ctx->pc = 0x3d5bf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3d5bf8:
    // 0x3d5bf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3d5bfc:
    if (ctx->pc == 0x3D5BFCu) {
        ctx->pc = 0x3D5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BF8u;
        // 0x3d5bfc: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C00u;
        goto label_3d5c00;
    }
    ctx->pc = 0x3D5BF8u;
    {
        const bool branch_taken_0x3d5bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BF8u;
        // 0x3d5bfc: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5bf8) {
            ctx->pc = 0x3D5C08u;
            goto label_3d5c08;
        }
    }
    ctx->pc = 0x3D5C00u;
label_3d5c00:
    // 0x3d5c00: 0x1682ffeb  bne         $s4, $v0, . + 4 + (-0x15 << 2)
label_3d5c04:
    if (ctx->pc == 0x3D5C04u) {
        ctx->pc = 0x3D5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C00u;
        // 0x3d5c04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C08u;
        goto label_3d5c08;
    }
    ctx->pc = 0x3D5C00u;
    {
        const bool branch_taken_0x3d5c00 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C00u;
        // 0x3d5c04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5c00) {
            ctx->pc = 0x3D5BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5bb0;
        }
    }
    ctx->pc = 0x3D5C08u;
label_3d5c08:
    // 0x3d5c08: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3d5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3d5c0c:
    // 0x3d5c0c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3d5c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5c10:
    // 0x3d5c10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3d5c14:
    if (ctx->pc == 0x3D5C14u) {
        ctx->pc = 0x3D5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C10u;
        // 0x3d5c14: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C18u;
        goto label_3d5c18;
    }
    ctx->pc = 0x3D5C10u;
    {
        const bool branch_taken_0x3d5c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C10u;
        // 0x3d5c14: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5c10) {
            ctx->pc = 0x3D5C28u;
            goto label_3d5c28;
        }
    }
    ctx->pc = 0x3D5C18u;
label_3d5c18:
    // 0x3d5c18: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x3d5c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
label_3d5c1c:
    // 0x3d5c1c: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x3d5c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
label_3d5c20:
    // 0x3d5c20: 0xa2a20023  sb          $v0, 0x23($s5)
    ctx->pc = 0x3d5c20u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 35), (uint8_t)GPR_U32(ctx, 2));
label_3d5c24:
    // 0x3d5c24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3d5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3d5c28:
    // 0x3d5c28: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3d5c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d5c2c:
    // 0x3d5c2c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3d5c30:
    if (ctx->pc == 0x3D5C30u) {
        ctx->pc = 0x3D5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C2Cu;
        // 0x3d5c30: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C34u;
        goto label_3d5c34;
    }
    ctx->pc = 0x3D5C2Cu;
    {
        const bool branch_taken_0x3d5c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C2Cu;
        // 0x3d5c30: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5c2c) {
            ctx->pc = 0x3D5C5Cu;
            goto label_3d5c5c;
        }
    }
    ctx->pc = 0x3D5C34u;
label_3d5c34:
    // 0x3d5c34: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x3d5c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_3d5c38:
    // 0x3d5c38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d5c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d5c3c:
    // 0x3d5c3c: 0x0  nop
    ctx->pc = 0x3d5c3cu;
    // NOP
label_3d5c40:
    // 0x3d5c40: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3d5c40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3d5c44:
    // 0x3d5c44: 0xc10705c  jal         func_41C170
label_3d5c48:
    if (ctx->pc == 0x3D5C48u) {
        ctx->pc = 0x3D5C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C44u;
        // 0x3d5c48: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C4Cu;
        goto label_3d5c4c;
    }
    ctx->pc = 0x3D5C44u;
    SET_GPR_U32(ctx, 31, 0x3D5C4Cu);
    ctx->pc = 0x3D5C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5C44u;
    // 0x3d5c48: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D5C44u, 0x3D5C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5C4Cu;
label_3d5c4c:
    // 0x3d5c4c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3d5c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3d5c50:
    // 0x3d5c50: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x3d5c50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d5c54:
    // 0x3d5c54: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_3d5c58:
    if (ctx->pc == 0x3D5C58u) {
        ctx->pc = 0x3D5C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C54u;
        // 0x3d5c58: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C5Cu;
        goto label_3d5c5c;
    }
    ctx->pc = 0x3D5C54u;
    {
        const bool branch_taken_0x3d5c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5c54) {
            ctx->pc = 0x3D5C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5C54u;
            // 0x3d5c58: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5c40;
        }
    }
    ctx->pc = 0x3D5C5Cu;
label_3d5c5c:
    // 0x3d5c5c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d5c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d5c60:
    // 0x3d5c60: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3d5c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3d5c64:
    // 0x3d5c64: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3d5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3d5c68:
    // 0x3d5c68: 0x40f809  jalr        $v0
label_3d5c6c:
    if (ctx->pc == 0x3D5C6Cu) {
        ctx->pc = 0x3D5C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C68u;
        // 0x3d5c6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C70u;
        goto label_3d5c70;
    }
    ctx->pc = 0x3D5C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5C70u);
        ctx->pc = 0x3D5C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C68u;
        // 0x3d5c6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5C68u, 0x3D5C70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5C70u;
label_3d5c70:
    // 0x3d5c70: 0xc10820a  jal         func_420828
label_3d5c74:
    if (ctx->pc == 0x3D5C74u) {
        ctx->pc = 0x3D5C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C70u;
        // 0x3d5c74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C78u;
        goto label_3d5c78;
    }
    ctx->pc = 0x3D5C70u;
    SET_GPR_U32(ctx, 31, 0x3D5C78u);
    ctx->pc = 0x3D5C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5C70u;
    // 0x3d5c74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420828u, 0x3D5C70u, 0x3D5C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5C78u;
label_3d5c78:
    // 0x3d5c78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d5c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5c7c:
    // 0x3d5c7c: 0x1200feba  beqz        $s0, . + 4 + (-0x146 << 2)
label_3d5c80:
    if (ctx->pc == 0x3D5C80u) {
        ctx->pc = 0x3D5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C7Cu;
        // 0x3d5c80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C84u;
        goto label_3d5c84;
    }
    ctx->pc = 0x3D5C7Cu;
    {
        const bool branch_taken_0x3d5c7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C7Cu;
        // 0x3d5c80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5c7c) {
            ctx->pc = 0x3D5768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5768;
        }
    }
    ctx->pc = 0x3D5C84u;
label_3d5c84:
    // 0x3d5c84: 0xc10815c  jal         func_420570
label_3d5c88:
    if (ctx->pc == 0x3D5C88u) {
        ctx->pc = 0x3D5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C84u;
        // 0x3d5c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C8Cu;
        goto label_3d5c8c;
    }
    ctx->pc = 0x3D5C84u;
    SET_GPR_U32(ctx, 31, 0x3D5C8Cu);
    ctx->pc = 0x3D5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5C84u;
    // 0x3d5c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420570u, 0x3D5C84u, 0x3D5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5C8Cu;
label_3d5c8c:
    // 0x3d5c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5c90:
    // 0x3d5c90: 0xc108184  jal         func_420610
label_3d5c94:
    if (ctx->pc == 0x3D5C94u) {
        ctx->pc = 0x3D5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C90u;
        // 0x3d5c94: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5C98u;
        goto label_3d5c98;
    }
    ctx->pc = 0x3D5C90u;
    SET_GPR_U32(ctx, 31, 0x3D5C98u);
    ctx->pc = 0x3D5C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5C90u;
    // 0x3d5c94: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420610u, 0x3D5C90u, 0x3D5C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5C98u;
label_3d5c98:
    // 0x3d5c98: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x3d5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d5c9c:
    // 0x3d5c9c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d5ca0:
    // 0x3d5ca0: 0x93a40044  lbu         $a0, 0x44($sp)
    ctx->pc = 0x3d5ca0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
label_3d5ca4:
    // 0x3d5ca4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3d5ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3d5ca8:
    // 0x3d5ca8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3d5ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d5cac:
    // 0x3d5cac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d5cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3d5cb0:
    // 0x3d5cb0: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x3d5cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_3d5cb4:
    // 0x3d5cb4: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x3d5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3d5cb8:
    // 0x3d5cb8: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x3d5cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_3d5cbc:
    // 0x3d5cbc: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x3d5cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
label_3d5cc0:
    // 0x3d5cc0: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x3d5cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_3d5cc4:
    // 0x3d5cc4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_3d5cc8:
    if (ctx->pc == 0x3D5CC8u) {
        ctx->pc = 0x3D5CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CC4u;
        // 0x3d5cc8: 0x32302  srl         $a0, $v1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5CCCu;
        goto label_3d5ccc;
    }
    ctx->pc = 0x3D5CC4u;
    {
        const bool branch_taken_0x3d5cc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CC4u;
        // 0x3d5cc8: 0x32302  srl         $a0, $v1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5cc4) {
            ctx->pc = 0x3D5CE0u;
            goto label_3d5ce0;
        }
    }
    ctx->pc = 0x3D5CCCu;
label_3d5ccc:
    // 0x3d5ccc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_3d5cd0:
    if (ctx->pc == 0x3D5CD0u) {
        ctx->pc = 0x3D5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CCCu;
        // 0x3d5cd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5CD4u;
        goto label_3d5cd4;
    }
    ctx->pc = 0x3D5CCCu;
    {
        const bool branch_taken_0x3d5ccc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CCCu;
        // 0x3d5cd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5ccc) {
            ctx->pc = 0x3D5CE4u;
            goto label_3d5ce4;
        }
    }
    ctx->pc = 0x3D5CD4u;
label_3d5cd4:
    // 0x3d5cd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d5cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d5cd8:
    // 0x3d5cd8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d5cdc:
    if (ctx->pc == 0x3D5CDCu) {
        ctx->pc = 0x3D5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CD8u;
        // 0x3d5cdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5CE0u;
        goto label_3d5ce0;
    }
    ctx->pc = 0x3D5CD8u;
    {
        const bool branch_taken_0x3d5cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CD8u;
        // 0x3d5cdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5cd8) {
            ctx->pc = 0x3D5CE4u;
            goto label_3d5ce4;
        }
    }
    ctx->pc = 0x3D5CE0u;
label_3d5ce0:
    // 0x3d5ce0: 0xa4200a  movz        $a0, $a1, $a0
    ctx->pc = 0x3d5ce0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_3d5ce4:
    // 0x3d5ce4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x3d5ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d5ce8:
    // 0x3d5ce8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d5cec:
    // 0x3d5cec: 0x3442f0ff  ori         $v0, $v0, 0xF0FF
    ctx->pc = 0x3d5cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61695);
label_3d5cf0:
    // 0x3d5cf0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x3d5cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_3d5cf4:
    // 0x3d5cf4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3d5cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d5cf8:
    // 0x3d5cf8: 0x30a50f00  andi        $a1, $a1, 0xF00
    ctx->pc = 0x3d5cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3840);
label_3d5cfc:
    // 0x3d5cfc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d5d00:
    // 0x3d5d00: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3d5d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_3d5d04:
    // 0x3d5d04: 0x34420fff  ori         $v0, $v0, 0xFFF
    ctx->pc = 0x3d5d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4095);
label_3d5d08:
    // 0x3d5d08: 0x42300  sll         $a0, $a0, 12
    ctx->pc = 0x3d5d08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
label_3d5d0c:
    // 0x3d5d0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3d5d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d5d10:
    // 0x3d5d10: 0x3084f000  andi        $a0, $a0, 0xF000
    ctx->pc = 0x3d5d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
label_3d5d14:
    // 0x3d5d14: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x3d5d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_3d5d18:
    // 0x3d5d18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d5d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3d5d1c:
    // 0x3d5d1c: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x3d5d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_3d5d20:
    // 0x3d5d20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d5d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5d24:
    // 0x3d5d24: 0xc10826c  jal         func_4209B0
label_3d5d28:
    if (ctx->pc == 0x3D5D28u) {
        ctx->pc = 0x3D5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D24u;
        // 0x3d5d28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5D2Cu;
        goto label_3d5d2c;
    }
    ctx->pc = 0x3D5D24u;
    SET_GPR_U32(ctx, 31, 0x3D5D2Cu);
    ctx->pc = 0x3D5D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5D24u;
    // 0x3d5d28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4209B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4209B0u, 0x3D5D24u, 0x3D5D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5D2Cu;
label_3d5d2c:
    // 0x3d5d2c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x3d5d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_3d5d30:
    // 0x3d5d30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d5d34:
    // 0x3d5d34: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x3d5d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3d5d38:
    // 0x3d5d38: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x3d5d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3d5d3c:
    // 0x3d5d3c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x3d5d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3d5d40:
    // 0x3d5d40: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x3d5d40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3d5d44:
    // 0x3d5d44: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x3d5d44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3d5d48:
    // 0x3d5d48: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x3d5d48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3d5d4c:
    // 0x3d5d4c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x3d5d4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3d5d50:
    // 0x3d5d50: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x3d5d50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3d5d54:
    // 0x3d5d54: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3d5d54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3d5d58:
    // 0x3d5d58: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3d5d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3d5d5c:
    // 0x3d5d5c: 0x3e00008  jr          $ra
label_3d5d60:
    if (ctx->pc == 0x3D5D60u) {
        ctx->pc = 0x3D5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D5Cu;
        // 0x3d5d60: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5D64u;
        goto label_3d5d64;
    }
    ctx->pc = 0x3D5D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D5Cu;
        // 0x3d5d60: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5D64u;
label_3d5d64:
    // 0x3d5d64: 0x0  nop
    ctx->pc = 0x3d5d64u;
    // NOP
    ctx->pc = 0x3d5d68u;
}
