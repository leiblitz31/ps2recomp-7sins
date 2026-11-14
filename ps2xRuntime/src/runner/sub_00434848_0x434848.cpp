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

// Function: sub_00434848
// Address: 0x434848 - 0x434f58
void sub_00434848_0x434848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00434848_0x434848");
#endif

    switch (ctx->pc) {
        case 0x434848u: goto label_434848;
        case 0x43484cu: goto label_43484c;
        case 0x434850u: goto label_434850;
        case 0x434854u: goto label_434854;
        case 0x434858u: goto label_434858;
        case 0x43485cu: goto label_43485c;
        case 0x434860u: goto label_434860;
        case 0x434864u: goto label_434864;
        case 0x434868u: goto label_434868;
        case 0x43486cu: goto label_43486c;
        case 0x434870u: goto label_434870;
        case 0x434874u: goto label_434874;
        case 0x434878u: goto label_434878;
        case 0x43487cu: goto label_43487c;
        case 0x434880u: goto label_434880;
        case 0x434884u: goto label_434884;
        case 0x434888u: goto label_434888;
        case 0x43488cu: goto label_43488c;
        case 0x434890u: goto label_434890;
        case 0x434894u: goto label_434894;
        case 0x434898u: goto label_434898;
        case 0x43489cu: goto label_43489c;
        case 0x4348a0u: goto label_4348a0;
        case 0x4348a4u: goto label_4348a4;
        case 0x4348a8u: goto label_4348a8;
        case 0x4348acu: goto label_4348ac;
        case 0x4348b0u: goto label_4348b0;
        case 0x4348b4u: goto label_4348b4;
        case 0x4348b8u: goto label_4348b8;
        case 0x4348bcu: goto label_4348bc;
        case 0x4348c0u: goto label_4348c0;
        case 0x4348c4u: goto label_4348c4;
        case 0x4348c8u: goto label_4348c8;
        case 0x4348ccu: goto label_4348cc;
        case 0x4348d0u: goto label_4348d0;
        case 0x4348d4u: goto label_4348d4;
        case 0x4348d8u: goto label_4348d8;
        case 0x4348dcu: goto label_4348dc;
        case 0x4348e0u: goto label_4348e0;
        case 0x4348e4u: goto label_4348e4;
        case 0x4348e8u: goto label_4348e8;
        case 0x4348ecu: goto label_4348ec;
        case 0x4348f0u: goto label_4348f0;
        case 0x4348f4u: goto label_4348f4;
        case 0x4348f8u: goto label_4348f8;
        case 0x4348fcu: goto label_4348fc;
        case 0x434900u: goto label_434900;
        case 0x434904u: goto label_434904;
        case 0x434908u: goto label_434908;
        case 0x43490cu: goto label_43490c;
        case 0x434910u: goto label_434910;
        case 0x434914u: goto label_434914;
        case 0x434918u: goto label_434918;
        case 0x43491cu: goto label_43491c;
        case 0x434920u: goto label_434920;
        case 0x434924u: goto label_434924;
        case 0x434928u: goto label_434928;
        case 0x43492cu: goto label_43492c;
        case 0x434930u: goto label_434930;
        case 0x434934u: goto label_434934;
        case 0x434938u: goto label_434938;
        case 0x43493cu: goto label_43493c;
        case 0x434940u: goto label_434940;
        case 0x434944u: goto label_434944;
        case 0x434948u: goto label_434948;
        case 0x43494cu: goto label_43494c;
        case 0x434950u: goto label_434950;
        case 0x434954u: goto label_434954;
        case 0x434958u: goto label_434958;
        case 0x43495cu: goto label_43495c;
        case 0x434960u: goto label_434960;
        case 0x434964u: goto label_434964;
        case 0x434968u: goto label_434968;
        case 0x43496cu: goto label_43496c;
        case 0x434970u: goto label_434970;
        case 0x434974u: goto label_434974;
        case 0x434978u: goto label_434978;
        case 0x43497cu: goto label_43497c;
        case 0x434980u: goto label_434980;
        case 0x434984u: goto label_434984;
        case 0x434988u: goto label_434988;
        case 0x43498cu: goto label_43498c;
        case 0x434990u: goto label_434990;
        case 0x434994u: goto label_434994;
        case 0x434998u: goto label_434998;
        case 0x43499cu: goto label_43499c;
        case 0x4349a0u: goto label_4349a0;
        case 0x4349a4u: goto label_4349a4;
        case 0x4349a8u: goto label_4349a8;
        case 0x4349acu: goto label_4349ac;
        case 0x4349b0u: goto label_4349b0;
        case 0x4349b4u: goto label_4349b4;
        case 0x4349b8u: goto label_4349b8;
        case 0x4349bcu: goto label_4349bc;
        case 0x4349c0u: goto label_4349c0;
        case 0x4349c4u: goto label_4349c4;
        case 0x4349c8u: goto label_4349c8;
        case 0x4349ccu: goto label_4349cc;
        case 0x4349d0u: goto label_4349d0;
        case 0x4349d4u: goto label_4349d4;
        case 0x4349d8u: goto label_4349d8;
        case 0x4349dcu: goto label_4349dc;
        case 0x4349e0u: goto label_4349e0;
        case 0x4349e4u: goto label_4349e4;
        case 0x4349e8u: goto label_4349e8;
        case 0x4349ecu: goto label_4349ec;
        case 0x4349f0u: goto label_4349f0;
        case 0x4349f4u: goto label_4349f4;
        case 0x4349f8u: goto label_4349f8;
        case 0x4349fcu: goto label_4349fc;
        case 0x434a00u: goto label_434a00;
        case 0x434a04u: goto label_434a04;
        case 0x434a08u: goto label_434a08;
        case 0x434a0cu: goto label_434a0c;
        case 0x434a10u: goto label_434a10;
        case 0x434a14u: goto label_434a14;
        case 0x434a18u: goto label_434a18;
        case 0x434a1cu: goto label_434a1c;
        case 0x434a20u: goto label_434a20;
        case 0x434a24u: goto label_434a24;
        case 0x434a28u: goto label_434a28;
        case 0x434a2cu: goto label_434a2c;
        case 0x434a30u: goto label_434a30;
        case 0x434a34u: goto label_434a34;
        case 0x434a38u: goto label_434a38;
        case 0x434a3cu: goto label_434a3c;
        case 0x434a40u: goto label_434a40;
        case 0x434a44u: goto label_434a44;
        case 0x434a48u: goto label_434a48;
        case 0x434a4cu: goto label_434a4c;
        case 0x434a50u: goto label_434a50;
        case 0x434a54u: goto label_434a54;
        case 0x434a58u: goto label_434a58;
        case 0x434a5cu: goto label_434a5c;
        case 0x434a60u: goto label_434a60;
        case 0x434a64u: goto label_434a64;
        case 0x434a68u: goto label_434a68;
        case 0x434a6cu: goto label_434a6c;
        case 0x434a70u: goto label_434a70;
        case 0x434a74u: goto label_434a74;
        case 0x434a78u: goto label_434a78;
        case 0x434a7cu: goto label_434a7c;
        case 0x434a80u: goto label_434a80;
        case 0x434a84u: goto label_434a84;
        case 0x434a88u: goto label_434a88;
        case 0x434a8cu: goto label_434a8c;
        case 0x434a90u: goto label_434a90;
        case 0x434a94u: goto label_434a94;
        case 0x434a98u: goto label_434a98;
        case 0x434a9cu: goto label_434a9c;
        case 0x434aa0u: goto label_434aa0;
        case 0x434aa4u: goto label_434aa4;
        case 0x434aa8u: goto label_434aa8;
        case 0x434aacu: goto label_434aac;
        case 0x434ab0u: goto label_434ab0;
        case 0x434ab4u: goto label_434ab4;
        case 0x434ab8u: goto label_434ab8;
        case 0x434abcu: goto label_434abc;
        case 0x434ac0u: goto label_434ac0;
        case 0x434ac4u: goto label_434ac4;
        case 0x434ac8u: goto label_434ac8;
        case 0x434accu: goto label_434acc;
        case 0x434ad0u: goto label_434ad0;
        case 0x434ad4u: goto label_434ad4;
        case 0x434ad8u: goto label_434ad8;
        case 0x434adcu: goto label_434adc;
        case 0x434ae0u: goto label_434ae0;
        case 0x434ae4u: goto label_434ae4;
        case 0x434ae8u: goto label_434ae8;
        case 0x434aecu: goto label_434aec;
        case 0x434af0u: goto label_434af0;
        case 0x434af4u: goto label_434af4;
        case 0x434af8u: goto label_434af8;
        case 0x434afcu: goto label_434afc;
        case 0x434b00u: goto label_434b00;
        case 0x434b04u: goto label_434b04;
        case 0x434b08u: goto label_434b08;
        case 0x434b0cu: goto label_434b0c;
        case 0x434b10u: goto label_434b10;
        case 0x434b14u: goto label_434b14;
        case 0x434b18u: goto label_434b18;
        case 0x434b1cu: goto label_434b1c;
        case 0x434b20u: goto label_434b20;
        case 0x434b24u: goto label_434b24;
        case 0x434b28u: goto label_434b28;
        case 0x434b2cu: goto label_434b2c;
        case 0x434b30u: goto label_434b30;
        case 0x434b34u: goto label_434b34;
        case 0x434b38u: goto label_434b38;
        case 0x434b3cu: goto label_434b3c;
        case 0x434b40u: goto label_434b40;
        case 0x434b44u: goto label_434b44;
        case 0x434b48u: goto label_434b48;
        case 0x434b4cu: goto label_434b4c;
        case 0x434b50u: goto label_434b50;
        case 0x434b54u: goto label_434b54;
        case 0x434b58u: goto label_434b58;
        case 0x434b5cu: goto label_434b5c;
        case 0x434b60u: goto label_434b60;
        case 0x434b64u: goto label_434b64;
        case 0x434b68u: goto label_434b68;
        case 0x434b6cu: goto label_434b6c;
        case 0x434b70u: goto label_434b70;
        case 0x434b74u: goto label_434b74;
        case 0x434b78u: goto label_434b78;
        case 0x434b7cu: goto label_434b7c;
        case 0x434b80u: goto label_434b80;
        case 0x434b84u: goto label_434b84;
        case 0x434b88u: goto label_434b88;
        case 0x434b8cu: goto label_434b8c;
        case 0x434b90u: goto label_434b90;
        case 0x434b94u: goto label_434b94;
        case 0x434b98u: goto label_434b98;
        case 0x434b9cu: goto label_434b9c;
        case 0x434ba0u: goto label_434ba0;
        case 0x434ba4u: goto label_434ba4;
        case 0x434ba8u: goto label_434ba8;
        case 0x434bacu: goto label_434bac;
        case 0x434bb0u: goto label_434bb0;
        case 0x434bb4u: goto label_434bb4;
        case 0x434bb8u: goto label_434bb8;
        case 0x434bbcu: goto label_434bbc;
        case 0x434bc0u: goto label_434bc0;
        case 0x434bc4u: goto label_434bc4;
        case 0x434bc8u: goto label_434bc8;
        case 0x434bccu: goto label_434bcc;
        case 0x434bd0u: goto label_434bd0;
        case 0x434bd4u: goto label_434bd4;
        case 0x434bd8u: goto label_434bd8;
        case 0x434bdcu: goto label_434bdc;
        case 0x434be0u: goto label_434be0;
        case 0x434be4u: goto label_434be4;
        case 0x434be8u: goto label_434be8;
        case 0x434becu: goto label_434bec;
        case 0x434bf0u: goto label_434bf0;
        case 0x434bf4u: goto label_434bf4;
        case 0x434bf8u: goto label_434bf8;
        case 0x434bfcu: goto label_434bfc;
        case 0x434c00u: goto label_434c00;
        case 0x434c04u: goto label_434c04;
        case 0x434c08u: goto label_434c08;
        case 0x434c0cu: goto label_434c0c;
        case 0x434c10u: goto label_434c10;
        case 0x434c14u: goto label_434c14;
        case 0x434c18u: goto label_434c18;
        case 0x434c1cu: goto label_434c1c;
        case 0x434c20u: goto label_434c20;
        case 0x434c24u: goto label_434c24;
        case 0x434c28u: goto label_434c28;
        case 0x434c2cu: goto label_434c2c;
        case 0x434c30u: goto label_434c30;
        case 0x434c34u: goto label_434c34;
        case 0x434c38u: goto label_434c38;
        case 0x434c3cu: goto label_434c3c;
        case 0x434c40u: goto label_434c40;
        case 0x434c44u: goto label_434c44;
        case 0x434c48u: goto label_434c48;
        case 0x434c4cu: goto label_434c4c;
        case 0x434c50u: goto label_434c50;
        case 0x434c54u: goto label_434c54;
        case 0x434c58u: goto label_434c58;
        case 0x434c5cu: goto label_434c5c;
        case 0x434c60u: goto label_434c60;
        case 0x434c64u: goto label_434c64;
        case 0x434c68u: goto label_434c68;
        case 0x434c6cu: goto label_434c6c;
        case 0x434c70u: goto label_434c70;
        case 0x434c74u: goto label_434c74;
        case 0x434c78u: goto label_434c78;
        case 0x434c7cu: goto label_434c7c;
        case 0x434c80u: goto label_434c80;
        case 0x434c84u: goto label_434c84;
        case 0x434c88u: goto label_434c88;
        case 0x434c8cu: goto label_434c8c;
        case 0x434c90u: goto label_434c90;
        case 0x434c94u: goto label_434c94;
        case 0x434c98u: goto label_434c98;
        case 0x434c9cu: goto label_434c9c;
        case 0x434ca0u: goto label_434ca0;
        case 0x434ca4u: goto label_434ca4;
        case 0x434ca8u: goto label_434ca8;
        case 0x434cacu: goto label_434cac;
        case 0x434cb0u: goto label_434cb0;
        case 0x434cb4u: goto label_434cb4;
        case 0x434cb8u: goto label_434cb8;
        case 0x434cbcu: goto label_434cbc;
        case 0x434cc0u: goto label_434cc0;
        case 0x434cc4u: goto label_434cc4;
        case 0x434cc8u: goto label_434cc8;
        case 0x434cccu: goto label_434ccc;
        case 0x434cd0u: goto label_434cd0;
        case 0x434cd4u: goto label_434cd4;
        case 0x434cd8u: goto label_434cd8;
        case 0x434cdcu: goto label_434cdc;
        case 0x434ce0u: goto label_434ce0;
        case 0x434ce4u: goto label_434ce4;
        case 0x434ce8u: goto label_434ce8;
        case 0x434cecu: goto label_434cec;
        case 0x434cf0u: goto label_434cf0;
        case 0x434cf4u: goto label_434cf4;
        case 0x434cf8u: goto label_434cf8;
        case 0x434cfcu: goto label_434cfc;
        case 0x434d00u: goto label_434d00;
        case 0x434d04u: goto label_434d04;
        case 0x434d08u: goto label_434d08;
        case 0x434d0cu: goto label_434d0c;
        case 0x434d10u: goto label_434d10;
        case 0x434d14u: goto label_434d14;
        case 0x434d18u: goto label_434d18;
        case 0x434d1cu: goto label_434d1c;
        case 0x434d20u: goto label_434d20;
        case 0x434d24u: goto label_434d24;
        case 0x434d28u: goto label_434d28;
        case 0x434d2cu: goto label_434d2c;
        case 0x434d30u: goto label_434d30;
        case 0x434d34u: goto label_434d34;
        case 0x434d38u: goto label_434d38;
        case 0x434d3cu: goto label_434d3c;
        case 0x434d40u: goto label_434d40;
        case 0x434d44u: goto label_434d44;
        case 0x434d48u: goto label_434d48;
        case 0x434d4cu: goto label_434d4c;
        case 0x434d50u: goto label_434d50;
        case 0x434d54u: goto label_434d54;
        case 0x434d58u: goto label_434d58;
        case 0x434d5cu: goto label_434d5c;
        case 0x434d60u: goto label_434d60;
        case 0x434d64u: goto label_434d64;
        case 0x434d68u: goto label_434d68;
        case 0x434d6cu: goto label_434d6c;
        case 0x434d70u: goto label_434d70;
        case 0x434d74u: goto label_434d74;
        case 0x434d78u: goto label_434d78;
        case 0x434d7cu: goto label_434d7c;
        case 0x434d80u: goto label_434d80;
        case 0x434d84u: goto label_434d84;
        case 0x434d88u: goto label_434d88;
        case 0x434d8cu: goto label_434d8c;
        case 0x434d90u: goto label_434d90;
        case 0x434d94u: goto label_434d94;
        case 0x434d98u: goto label_434d98;
        case 0x434d9cu: goto label_434d9c;
        case 0x434da0u: goto label_434da0;
        case 0x434da4u: goto label_434da4;
        case 0x434da8u: goto label_434da8;
        case 0x434dacu: goto label_434dac;
        case 0x434db0u: goto label_434db0;
        case 0x434db4u: goto label_434db4;
        case 0x434db8u: goto label_434db8;
        case 0x434dbcu: goto label_434dbc;
        case 0x434dc0u: goto label_434dc0;
        case 0x434dc4u: goto label_434dc4;
        case 0x434dc8u: goto label_434dc8;
        case 0x434dccu: goto label_434dcc;
        case 0x434dd0u: goto label_434dd0;
        case 0x434dd4u: goto label_434dd4;
        case 0x434dd8u: goto label_434dd8;
        case 0x434ddcu: goto label_434ddc;
        case 0x434de0u: goto label_434de0;
        case 0x434de4u: goto label_434de4;
        case 0x434de8u: goto label_434de8;
        case 0x434decu: goto label_434dec;
        case 0x434df0u: goto label_434df0;
        case 0x434df4u: goto label_434df4;
        case 0x434df8u: goto label_434df8;
        case 0x434dfcu: goto label_434dfc;
        case 0x434e00u: goto label_434e00;
        case 0x434e04u: goto label_434e04;
        case 0x434e08u: goto label_434e08;
        case 0x434e0cu: goto label_434e0c;
        case 0x434e10u: goto label_434e10;
        case 0x434e14u: goto label_434e14;
        case 0x434e18u: goto label_434e18;
        case 0x434e1cu: goto label_434e1c;
        case 0x434e20u: goto label_434e20;
        case 0x434e24u: goto label_434e24;
        case 0x434e28u: goto label_434e28;
        case 0x434e2cu: goto label_434e2c;
        case 0x434e30u: goto label_434e30;
        case 0x434e34u: goto label_434e34;
        case 0x434e38u: goto label_434e38;
        case 0x434e3cu: goto label_434e3c;
        case 0x434e40u: goto label_434e40;
        case 0x434e44u: goto label_434e44;
        case 0x434e48u: goto label_434e48;
        case 0x434e4cu: goto label_434e4c;
        case 0x434e50u: goto label_434e50;
        case 0x434e54u: goto label_434e54;
        case 0x434e58u: goto label_434e58;
        case 0x434e5cu: goto label_434e5c;
        case 0x434e60u: goto label_434e60;
        case 0x434e64u: goto label_434e64;
        case 0x434e68u: goto label_434e68;
        case 0x434e6cu: goto label_434e6c;
        case 0x434e70u: goto label_434e70;
        case 0x434e74u: goto label_434e74;
        case 0x434e78u: goto label_434e78;
        case 0x434e7cu: goto label_434e7c;
        case 0x434e80u: goto label_434e80;
        case 0x434e84u: goto label_434e84;
        case 0x434e88u: goto label_434e88;
        case 0x434e8cu: goto label_434e8c;
        case 0x434e90u: goto label_434e90;
        case 0x434e94u: goto label_434e94;
        case 0x434e98u: goto label_434e98;
        case 0x434e9cu: goto label_434e9c;
        case 0x434ea0u: goto label_434ea0;
        case 0x434ea4u: goto label_434ea4;
        case 0x434ea8u: goto label_434ea8;
        case 0x434eacu: goto label_434eac;
        case 0x434eb0u: goto label_434eb0;
        case 0x434eb4u: goto label_434eb4;
        case 0x434eb8u: goto label_434eb8;
        case 0x434ebcu: goto label_434ebc;
        case 0x434ec0u: goto label_434ec0;
        case 0x434ec4u: goto label_434ec4;
        case 0x434ec8u: goto label_434ec8;
        case 0x434eccu: goto label_434ecc;
        case 0x434ed0u: goto label_434ed0;
        case 0x434ed4u: goto label_434ed4;
        case 0x434ed8u: goto label_434ed8;
        case 0x434edcu: goto label_434edc;
        case 0x434ee0u: goto label_434ee0;
        case 0x434ee4u: goto label_434ee4;
        case 0x434ee8u: goto label_434ee8;
        case 0x434eecu: goto label_434eec;
        case 0x434ef0u: goto label_434ef0;
        case 0x434ef4u: goto label_434ef4;
        case 0x434ef8u: goto label_434ef8;
        case 0x434efcu: goto label_434efc;
        case 0x434f00u: goto label_434f00;
        case 0x434f04u: goto label_434f04;
        case 0x434f08u: goto label_434f08;
        case 0x434f0cu: goto label_434f0c;
        case 0x434f10u: goto label_434f10;
        case 0x434f14u: goto label_434f14;
        case 0x434f18u: goto label_434f18;
        case 0x434f1cu: goto label_434f1c;
        case 0x434f20u: goto label_434f20;
        case 0x434f24u: goto label_434f24;
        case 0x434f28u: goto label_434f28;
        case 0x434f2cu: goto label_434f2c;
        case 0x434f30u: goto label_434f30;
        case 0x434f34u: goto label_434f34;
        case 0x434f38u: goto label_434f38;
        case 0x434f3cu: goto label_434f3c;
        case 0x434f40u: goto label_434f40;
        case 0x434f44u: goto label_434f44;
        case 0x434f48u: goto label_434f48;
        case 0x434f4cu: goto label_434f4c;
        case 0x434f50u: goto label_434f50;
        case 0x434f54u: goto label_434f54;
        default: break;
    }

    ctx->pc = 0x434848u;

label_434848:
    // 0x434848: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x434848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_43484c:
    // 0x43484c: 0x8f82beb8  lw          $v0, -0x4148($gp)
    ctx->pc = 0x43484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
label_434850:
    // 0x434850: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x434850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_434854:
    // 0x434854: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x434854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_434858:
    // 0x434858: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x434858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43485c:
    // 0x43485c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x43485cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_434860:
    // 0x434860: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x434860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_434864:
    // 0x434864: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x434864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_434868:
    // 0x434868: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x434868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_43486c:
    // 0x43486c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43486cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_434870:
    // 0x434870: 0x92040016  lbu         $a0, 0x16($s0)
    ctx->pc = 0x434870u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_434874:
    // 0x434874: 0x41882  srl         $v1, $a0, 2
    ctx->pc = 0x434874u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_434878:
    // 0x434878: 0x106001af  beqz        $v1, . + 4 + (0x1AF << 2)
label_43487c:
    if (ctx->pc == 0x43487Cu) {
        ctx->pc = 0x43487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434878u;
        // 0x43487c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434880u;
        goto label_434880;
    }
    ctx->pc = 0x434878u;
    {
        const bool branch_taken_0x434878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434878u;
        // 0x43487c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434878) {
            ctx->pc = 0x434F38u;
            goto label_434f38;
        }
    }
    ctx->pc = 0x434880u;
label_434880:
    // 0x434880: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x434880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_434884:
    // 0x434884: 0x8e6f000c  lw          $t7, 0xC($s3)
    ctx->pc = 0x434884u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_434888:
    // 0x434888: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x434888u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_43488c:
    // 0x43488c: 0x30513fff  andi        $s1, $v0, 0x3FFF
    ctx->pc = 0x43488cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_434890:
    // 0x434890: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x434890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_434894:
    // 0x434894: 0x111538  dsll        $v0, $s1, 20
    ctx->pc = 0x434894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 20);
label_434898:
    // 0x434898: 0x11223c  dsll32      $a0, $s1, 8
    ctx->pc = 0x434898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 8));
label_43489c:
    // 0x43489c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x43489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_4348a0:
    // 0x4348a0: 0x2de30041  sltiu       $v1, $t7, 0x41
    ctx->pc = 0x4348a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_4348a4:
    // 0x4348a4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_4348a8:
    if (ctx->pc == 0x4348A8u) {
        ctx->pc = 0x4348A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348A4u;
        // 0x4348a8: 0x448825  or          $s1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4348ACu;
        goto label_4348ac;
    }
    ctx->pc = 0x4348A4u;
    {
        const bool branch_taken_0x4348a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4348A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348A4u;
        // 0x4348a8: 0x448825  or          $s1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4348a4) {
            ctx->pc = 0x4348D4u;
            goto label_4348d4;
        }
    }
    ctx->pc = 0x4348ACu;
label_4348ac:
    // 0x4348ac: 0xf1182  srl         $v0, $t7, 6
    ctx->pc = 0x4348acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 6));
label_4348b0:
    // 0x4348b0: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x4348b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_4348b4:
    // 0x4348b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4348b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4348b8:
    // 0x4348b8: 0xf7842  srl         $t7, $t7, 1
    ctx->pc = 0x4348b8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
label_4348bc:
    // 0x4348bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4348bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4348c0:
    // 0x4348c0: 0x11600004  beqz        $t3, . + 4 + (0x4 << 2)
label_4348c4:
    if (ctx->pc == 0x4348C4u) {
        ctx->pc = 0x4348C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348C0u;
        // 0x4348c4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4348C8u;
        goto label_4348c8;
    }
    ctx->pc = 0x4348C0u;
    {
        const bool branch_taken_0x4348c0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x4348C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348C0u;
        // 0x4348c4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4348c0) {
            ctx->pc = 0x4348D4u;
            goto label_4348d4;
        }
    }
    ctx->pc = 0x4348C8u;
label_4348c8:
    // 0x4348c8: 0x2de20041  sltiu       $v0, $t7, 0x41
    ctx->pc = 0x4348c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_4348cc:
    // 0x4348cc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_4348d0:
    if (ctx->pc == 0x4348D0u) {
        ctx->pc = 0x4348D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348CCu;
        // 0x4348d0: 0xf1182  srl         $v0, $t7, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4348D4u;
        goto label_4348d4;
    }
    ctx->pc = 0x4348CCu;
    {
        const bool branch_taken_0x4348cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4348D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348CCu;
        // 0x4348d0: 0xf1182  srl         $v0, $t7, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4348cc) {
            ctx->pc = 0x4348B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4348b0;
        }
    }
    ctx->pc = 0x4348D4u;
label_4348d4:
    // 0x4348d4: 0x51082  srl         $v0, $a1, 2
    ctx->pc = 0x4348d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
label_4348d8:
    // 0x4348d8: 0x26430009  addiu       $v1, $s2, 0x9
    ctx->pc = 0x4348d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 9));
label_4348dc:
    // 0x4348dc: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x4348dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4348e0:
    // 0x4348e0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4348e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4348e4:
    // 0x4348e4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4348e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4348e8:
    // 0x4348e8: 0xc10a322  jal         func_428C88
label_4348ec:
    if (ctx->pc == 0x4348ECu) {
        ctx->pc = 0x4348ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348E8u;
        // 0x4348ec: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4348F0u;
        goto label_4348f0;
    }
    ctx->pc = 0x4348E8u;
    SET_GPR_U32(ctx, 31, 0x4348F0u);
    ctx->pc = 0x4348ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4348E8u;
    // 0x4348ec: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x4348E8u, 0x4348F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4348F0u;
label_4348f0:
    // 0x4348f0: 0x92030016  lbu         $v1, 0x16($s0)
    ctx->pc = 0x4348f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_4348f4:
    // 0x4348f4: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x4348f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_4348f8:
    // 0x4348f8: 0x3405845a  ori         $a1, $zero, 0x845A
    ctx->pc = 0x4348f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33882);
label_4348fc:
    // 0x4348fc: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x4348fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
label_434900:
    // 0x434900: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x434900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_434904:
    // 0x434904: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x434904u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_434908:
    // 0x434908: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x434908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_43490c:
    // 0x43490c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x43490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_434910:
    // 0x434910: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x434910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_434914:
    // 0x434914: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x434914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_434918:
    // 0x434918: 0x454025  or          $t0, $v0, $a1
    ctx->pc = 0x434918u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_43491c:
    // 0x43491c: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x43491cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434920:
    // 0x434920: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x434920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_434924:
    // 0x434924: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x434924u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_434928:
    // 0x434928: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x434928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_43492c:
    // 0x43492c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43492cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_434930:
    // 0x434930: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x434930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_434934:
    // 0x434934: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x434934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_434938:
    // 0x434938: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x434938u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_43493c:
    // 0x43493c: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x43493cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_434940:
    // 0x434940: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x434940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_434944:
    // 0x434944: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x434944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_434948:
    // 0x434948: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x434948u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
label_43494c:
    // 0x43494c: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x43494cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_434950:
    // 0x434950: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x434950u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434954:
    // 0x434954: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x434954u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
label_434958:
    // 0x434958: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x434958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_43495c:
    // 0x43495c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43495cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_434960:
    // 0x434960: 0xdf84ae38  ld          $a0, -0x51C8($gp)
    ctx->pc = 0x434960u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
label_434964:
    // 0x434964: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x434964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_434968:
    // 0x434968: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x434968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
label_43496c:
    // 0x43496c: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x43496cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_434970:
    // 0x434970: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x434970u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_434974:
    // 0x434974: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x434974u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434978:
    // 0x434978: 0x7c670020  sq          $a3, 0x20($v1)
    ctx->pc = 0x434978u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 7));
label_43497c:
    // 0x43497c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x43497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_434980:
    // 0x434980: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x434980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_434984:
    // 0x434984: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x434984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_434988:
    // 0x434988: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x434988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_43498c:
    // 0x43498c: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x43498cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434990:
    // 0x434990: 0x7c670030  sq          $a3, 0x30($v1)
    ctx->pc = 0x434990u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 7));
label_434994:
    // 0x434994: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x434994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_434998:
    // 0x434998: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x434998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_43499c:
    // 0x43499c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x43499cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4349a0:
    // 0x4349a0: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x4349a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4349a4:
    // 0x4349a4: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x4349a4u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_4349a8:
    // 0x4349a8: 0x7c670040  sq          $a3, 0x40($v1)
    ctx->pc = 0x4349a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 7));
label_4349ac:
    // 0x4349ac: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x4349acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_4349b0:
    // 0x4349b0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4349b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_4349b4:
    // 0x4349b4: 0x8e6f000c  lw          $t7, 0xC($s3)
    ctx->pc = 0x4349b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_4349b8:
    // 0x4349b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4349b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4349bc:
    // 0x4349bc: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x4349bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_4349c0:
    // 0x4349c0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x4349c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_4349c4:
    // 0x4349c4: 0x10400146  beqz        $v0, . + 4 + (0x146 << 2)
label_4349c8:
    if (ctx->pc == 0x4349C8u) {
        ctx->pc = 0x4349C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4349C4u;
        // 0x4349c8: 0x8e6d0010  lw          $t5, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4349CCu;
        goto label_4349cc;
    }
    ctx->pc = 0x4349C4u;
    {
        const bool branch_taken_0x4349c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4349C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4349C4u;
        // 0x4349c8: 0x8e6d0010  lw          $t5, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4349c4) {
            ctx->pc = 0x434EE0u;
            goto label_434ee0;
        }
    }
    ctx->pc = 0x4349CCu;
label_4349cc:
    // 0x4349cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4349ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4349d0:
    // 0x4349d0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4349d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4349d4:
    // 0x4349d4: 0x3463ffe7  ori         $v1, $v1, 0xFFE7
    ctx->pc = 0x4349d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65511);
label_4349d8:
    // 0x4349d8: 0x9e040008  lwu         $a0, 0x8($s0)
    ctx->pc = 0x4349d8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4349dc:
    // 0x4349dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4349dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4349e0:
    // 0x4349e0: 0x2e490006  sltiu       $t1, $s2, 0x6
    ctx->pc = 0x4349e0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_4349e4:
    // 0x4349e4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4349e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_4349e8:
    // 0x4349e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4349e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4349ec:
    // 0x4349ec: 0x1120004a  beqz        $t1, . + 4 + (0x4A << 2)
label_4349f0:
    if (ctx->pc == 0x4349F0u) {
        ctx->pc = 0x4349F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4349ECu;
        // 0x4349f0: 0x824025  or          $t0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4349F4u;
        goto label_4349f4;
    }
    ctx->pc = 0x4349ECu;
    {
        const bool branch_taken_0x4349ec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4349F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4349ECu;
        // 0x4349f0: 0x824025  or          $t0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4349ec) {
            ctx->pc = 0x434B18u;
            goto label_434b18;
        }
    }
    ctx->pc = 0x4349F4u;
label_4349f4:
    // 0x4349f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4349f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4349f8:
    // 0x4349f8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x4349f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_4349fc:
    // 0x4349fc: 0x244211d0  addiu       $v0, $v0, 0x11D0
    ctx->pc = 0x4349fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4560));
label_434a00:
    // 0x434a00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x434a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_434a04:
    // 0x434a04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x434a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_434a08:
    // 0x434a08: 0x800008  jr          $a0
label_434a0c:
    if (ctx->pc == 0x434A0Cu) {
        ctx->pc = 0x434A10u;
        goto label_434a10;
    }
    ctx->pc = 0x434A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x434A10u: goto label_434a10;
            case 0x434A30u: goto label_434a30;
            case 0x434A64u: goto label_434a64;
            case 0x434A9Cu: goto label_434a9c;
            case 0x434AD4u: goto label_434ad4;
            case 0x434B18u: goto label_434b18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434A08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x434A10u;
label_434a10:
    // 0x434a10: 0x9e070018  lwu         $a3, 0x18($s0)
    ctx->pc = 0x434a10u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_434a14:
    // 0x434a14: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x434a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_434a18:
    // 0x434a18: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x434a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_434a1c:
    // 0x434a1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x434a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_434a20:
    // 0x434a20: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x434a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_434a24:
    // 0x434a24: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x434a24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_434a28:
    // 0x434a28: 0x10000026  b           . + 4 + (0x26 << 2)
label_434a2c:
    if (ctx->pc == 0x434A2Cu) {
        ctx->pc = 0x434A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434A28u;
        // 0x434a2c: 0x3c04bc00  lui         $a0, 0xBC00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434A30u;
        goto label_434a30;
    }
    ctx->pc = 0x434A28u;
    {
        const bool branch_taken_0x434a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434A28u;
        // 0x434a2c: 0x3c04bc00  lui         $a0, 0xBC00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434a28) {
            ctx->pc = 0x434AC4u;
            goto label_434ac4;
        }
    }
    ctx->pc = 0x434A30u;
label_434a30:
    // 0x434a30: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x434a30u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_434a34:
    // 0x434a34: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x434a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
label_434a38:
    // 0x434a38: 0x9e040018  lwu         $a0, 0x18($s0)
    ctx->pc = 0x434a38u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_434a3c:
    // 0x434a3c: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x434a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
label_434a40:
    // 0x434a40: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x434a40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_434a44:
    // 0x434a44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x434a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_434a48:
    // 0x434a48: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x434a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_434a4c:
    // 0x434a4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x434a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_434a50:
    // 0x434a50: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x434a50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_434a54:
    // 0x434a54: 0x34a57800  ori         $a1, $a1, 0x7800
    ctx->pc = 0x434a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30720);
label_434a58:
    // 0x434a58: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x434a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_434a5c:
    // 0x434a5c: 0x10000029  b           . + 4 + (0x29 << 2)
label_434a60:
    if (ctx->pc == 0x434A60u) {
        ctx->pc = 0x434A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434A5Cu;
        // 0x434a60: 0x823825  or          $a3, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434A64u;
        goto label_434a64;
    }
    ctx->pc = 0x434A5Cu;
    {
        const bool branch_taken_0x434a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434A5Cu;
        // 0x434a60: 0x823825  or          $a3, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434a5c) {
            ctx->pc = 0x434B04u;
            goto label_434b04;
        }
    }
    ctx->pc = 0x434A64u;
label_434a64:
    // 0x434a64: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x434a64u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_434a68:
    // 0x434a68: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x434a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
label_434a6c:
    // 0x434a6c: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x434a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
label_434a70:
    // 0x434a70: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x434a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_434a74:
    // 0x434a74: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x434a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_434a78:
    // 0x434a78: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x434a78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_434a7c:
    // 0x434a7c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x434a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_434a80:
    // 0x434a80: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x434a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_434a84:
    // 0x434a84: 0x34843400  ori         $a0, $a0, 0x3400
    ctx->pc = 0x434a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13312);
label_434a88:
    // 0x434a88: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x434a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_434a8c:
    // 0x434a8c: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x434a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_434a90:
    // 0x434a90: 0x7123e  dsrl32      $v0, $a3, 8
    ctx->pc = 0x434a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> (32 + 8));
label_434a94:
    // 0x434a94: 0x1000000c  b           . + 4 + (0xC << 2)
label_434a98:
    if (ctx->pc == 0x434A98u) {
        ctx->pc = 0x434A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434A94u;
        // 0x434a98: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434A9Cu;
        goto label_434a9c;
    }
    ctx->pc = 0x434A94u;
    {
        const bool branch_taken_0x434a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434A94u;
        // 0x434a98: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434a94) {
            ctx->pc = 0x434AC8u;
            goto label_434ac8;
        }
    }
    ctx->pc = 0x434A9Cu;
label_434a9c:
    // 0x434a9c: 0x9e070020  lwu         $a3, 0x20($s0)
    ctx->pc = 0x434a9cu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_434aa0:
    // 0x434aa0: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x434aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_434aa4:
    // 0x434aa4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x434aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_434aa8:
    // 0x434aa8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x434aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_434aac:
    // 0x434aac: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x434aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_434ab0:
    // 0x434ab0: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x434ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_434ab4:
    // 0x434ab4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x434ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_434ab8:
    // 0x434ab8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x434ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_434abc:
    // 0x434abc: 0x3484f000  ori         $a0, $a0, 0xF000
    ctx->pc = 0x434abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
label_434ac0:
    // 0x434ac0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x434ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_434ac4:
    // 0x434ac4: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x434ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_434ac8:
    // 0x434ac8: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x434ac8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_434acc:
    // 0x434acc: 0x10000012  b           . + 4 + (0x12 << 2)
label_434ad0:
    if (ctx->pc == 0x434AD0u) {
        ctx->pc = 0x434AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434ACCu;
        // 0x434ad0: 0x104402d  daddu       $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434AD4u;
        goto label_434ad4;
    }
    ctx->pc = 0x434ACCu;
    {
        const bool branch_taken_0x434acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434ACCu;
        // 0x434ad0: 0x104402d  daddu       $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434acc) {
            ctx->pc = 0x434B18u;
            goto label_434b18;
        }
    }
    ctx->pc = 0x434AD4u;
label_434ad4:
    // 0x434ad4: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x434ad4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_434ad8:
    // 0x434ad8: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x434ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
label_434adc:
    // 0x434adc: 0x9e040020  lwu         $a0, 0x20($s0)
    ctx->pc = 0x434adcu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_434ae0:
    // 0x434ae0: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x434ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
label_434ae4:
    // 0x434ae4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x434ae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_434ae8:
    // 0x434ae8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x434ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_434aec:
    // 0x434aec: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x434aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_434af0:
    // 0x434af0: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x434af0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_434af4:
    // 0x434af4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x434af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_434af8:
    // 0x434af8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x434af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_434afc:
    // 0x434afc: 0x34a5ac00  ori         $a1, $a1, 0xAC00
    ctx->pc = 0x434afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44032);
label_434b00:
    // 0x434b00: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x434b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_434b04:
    // 0x434b04: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x434b04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_434b08:
    // 0x434b08: 0x7153a  dsrl        $v0, $a3, 20
    ctx->pc = 0x434b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> 20);
label_434b0c:
    // 0x434b0c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x434b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_434b10:
    // 0x434b10: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x434b10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_434b14:
    // 0x434b14: 0x105402d  daddu       $t0, $t0, $a1
    ctx->pc = 0x434b14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 5));
label_434b18:
    // 0x434b18: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x434b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_434b1c:
    // 0x434b1c: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x434b1cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434b20:
    // 0x434b20: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x434b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_434b24:
    // 0x434b24: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x434b24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_434b28:
    // 0x434b28: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x434b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_434b2c:
    // 0x434b2c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x434b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_434b30:
    // 0x434b30: 0x3c0303f0  lui         $v1, 0x3F0
    ctx->pc = 0x434b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1008 << 16));
label_434b34:
    // 0x434b34: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x434b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_434b38:
    // 0x434b38: 0x11200045  beqz        $t1, . + 4 + (0x45 << 2)
label_434b3c:
    if (ctx->pc == 0x434B3Cu) {
        ctx->pc = 0x434B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B38u;
        // 0x434b3c: 0x34138  dsll        $t0, $v1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x434B40u;
        goto label_434b40;
    }
    ctx->pc = 0x434B38u;
    {
        const bool branch_taken_0x434b38 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x434B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B38u;
        // 0x434b3c: 0x34138  dsll        $t0, $v1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x434b38) {
            ctx->pc = 0x434C50u;
            goto label_434c50;
        }
    }
    ctx->pc = 0x434B40u;
label_434b40:
    // 0x434b40: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x434b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_434b44:
    // 0x434b44: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x434b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_434b48:
    // 0x434b48: 0x244211f0  addiu       $v0, $v0, 0x11F0
    ctx->pc = 0x434b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4592));
label_434b4c:
    // 0x434b4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x434b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_434b50:
    // 0x434b50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x434b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_434b54:
    // 0x434b54: 0x800008  jr          $a0
label_434b58:
    if (ctx->pc == 0x434B58u) {
        ctx->pc = 0x434B5Cu;
        goto label_434b5c;
    }
    ctx->pc = 0x434B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434B54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x434B5Cu;
label_434b5c:
    // 0x434b5c: 0x0  nop
    ctx->pc = 0x434b5cu;
    // NOP
label_434b60:
    // 0x434b60: 0x10000011  b           . + 4 + (0x11 << 2)
label_434b64:
    if (ctx->pc == 0x434B64u) {
        ctx->pc = 0x434B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B60u;
        // 0x434b64: 0x9e070018  lwu         $a3, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434B68u;
        goto label_434b68;
    }
    ctx->pc = 0x434B60u;
    {
        const bool branch_taken_0x434b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B60u;
        // 0x434b64: 0x9e070018  lwu         $a3, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434b60) {
            ctx->pc = 0x434BA8u;
            goto label_434ba8;
        }
    }
    ctx->pc = 0x434B68u;
label_434b68:
    // 0x434b68: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x434b68u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_434b6c:
    // 0x434b6c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x434b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_434b70:
    // 0x434b70: 0x34a5f000  ori         $a1, $a1, 0xF000
    ctx->pc = 0x434b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
label_434b74:
    // 0x434b74: 0x9e030018  lwu         $v1, 0x18($s0)
    ctx->pc = 0x434b74u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_434b78:
    // 0x434b78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x434b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_434b7c:
    // 0x434b7c: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x434b7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_434b80:
    // 0x434b80: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x434b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_434b84:
    // 0x434b84: 0x724ba  dsrl        $a0, $a3, 18
    ctx->pc = 0x434b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 18);
label_434b88:
    // 0x434b88: 0x7167a  dsrl        $v0, $a3, 25
    ctx->pc = 0x434b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> 25);
label_434b8c:
    // 0x434b8c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x434b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_434b90:
    // 0x434b90: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x434b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_434b94:
    // 0x434b94: 0x10000028  b           . + 4 + (0x28 << 2)
label_434b98:
    if (ctx->pc == 0x434B98u) {
        ctx->pc = 0x434B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B94u;
        // 0x434b98: 0x71d3a  dsrl        $v1, $a3, 20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 20);
        ctx->in_delay_slot = false;
        ctx->pc = 0x434B9Cu;
        goto label_434b9c;
    }
    ctx->pc = 0x434B94u;
    {
        const bool branch_taken_0x434b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B94u;
        // 0x434b98: 0x71d3a  dsrl        $v1, $a3, 20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x434b94) {
            ctx->pc = 0x434C38u;
            goto label_434c38;
        }
    }
    ctx->pc = 0x434B9Cu;
label_434b9c:
    // 0x434b9c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_434ba0:
    if (ctx->pc == 0x434BA0u) {
        ctx->pc = 0x434BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B9Cu;
        // 0x434ba0: 0x9e02001c  lwu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434BA4u;
        goto label_434ba4;
    }
    ctx->pc = 0x434B9Cu;
    {
        const bool branch_taken_0x434b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B9Cu;
        // 0x434ba0: 0x9e02001c  lwu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434b9c) {
            ctx->pc = 0x434C14u;
            goto label_434c14;
        }
    }
    ctx->pc = 0x434BA4u;
label_434ba4:
    // 0x434ba4: 0x9e070020  lwu         $a3, 0x20($s0)
    ctx->pc = 0x434ba4u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_434ba8:
    // 0x434ba8: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x434ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
label_434bac:
    // 0x434bac: 0x3484f000  ori         $a0, $a0, 0xF000
    ctx->pc = 0x434bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
label_434bb0:
    // 0x434bb0: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x434bb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_434bb4:
    // 0x434bb4: 0x718b8  dsll        $v1, $a3, 2
    ctx->pc = 0x434bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 2);
label_434bb8:
    // 0x434bb8: 0x7117a  dsrl        $v0, $a3, 5
    ctx->pc = 0x434bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> 5);
label_434bbc:
    // 0x434bbc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x434bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_434bc0:
    // 0x434bc0: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x434bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_434bc4:
    // 0x434bc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x434bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_434bc8:
    // 0x434bc8: 0x30e4001f  andi        $a0, $a3, 0x1F
    ctx->pc = 0x434bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_434bcc:
    // 0x434bcc: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x434bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_434bd0:
    // 0x434bd0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x434bd0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_434bd4:
    // 0x434bd4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_434bd8:
    if (ctx->pc == 0x434BD8u) {
        ctx->pc = 0x434BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434BD4u;
        // 0x434bd8: 0x1034025  or          $t0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434BDCu;
        goto label_434bdc;
    }
    ctx->pc = 0x434BD4u;
    {
        const bool branch_taken_0x434bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434BD4u;
        // 0x434bd8: 0x1034025  or          $t0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434bd4) {
            ctx->pc = 0x434C54u;
            goto label_434c54;
        }
    }
    ctx->pc = 0x434BDCu;
label_434bdc:
    // 0x434bdc: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x434bdcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_434be0:
    // 0x434be0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x434be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_434be4:
    // 0x434be4: 0x34a5f000  ori         $a1, $a1, 0xF000
    ctx->pc = 0x434be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
label_434be8:
    // 0x434be8: 0x9e030020  lwu         $v1, 0x20($s0)
    ctx->pc = 0x434be8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_434bec:
    // 0x434bec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x434becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_434bf0:
    // 0x434bf0: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x434bf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_434bf4:
    // 0x434bf4: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x434bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_434bf8:
    // 0x434bf8: 0x724ba  dsrl        $a0, $a3, 18
    ctx->pc = 0x434bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 18);
label_434bfc:
    // 0x434bfc: 0x7167a  dsrl        $v0, $a3, 25
    ctx->pc = 0x434bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> 25);
label_434c00:
    // 0x434c00: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x434c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_434c04:
    // 0x434c04: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x434c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_434c08:
    // 0x434c08: 0x1000000b  b           . + 4 + (0xB << 2)
label_434c0c:
    if (ctx->pc == 0x434C0Cu) {
        ctx->pc = 0x434C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C08u;
        // 0x434c0c: 0x71d3a  dsrl        $v1, $a3, 20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 20);
        ctx->in_delay_slot = false;
        ctx->pc = 0x434C10u;
        goto label_434c10;
    }
    ctx->pc = 0x434C08u;
    {
        const bool branch_taken_0x434c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C08u;
        // 0x434c0c: 0x71d3a  dsrl        $v1, $a3, 20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> 20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x434c08) {
            ctx->pc = 0x434C38u;
            goto label_434c38;
        }
    }
    ctx->pc = 0x434C10u;
label_434c10:
    // 0x434c10: 0x9e020024  lwu         $v0, 0x24($s0)
    ctx->pc = 0x434c10u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_434c14:
    // 0x434c14: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x434c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_434c18:
    // 0x434c18: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x434c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_434c1c:
    // 0x434c1c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x434c1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_434c20:
    // 0x434c20: 0xf1382d  daddu       $a3, $a3, $s1
    ctx->pc = 0x434c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 17));
label_434c24:
    // 0x434c24: 0x721be  dsrl32      $a0, $a3, 6
    ctx->pc = 0x434c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> (32 + 6));
label_434c28:
    // 0x434c28: 0x7137e  dsrl32      $v0, $a3, 13
    ctx->pc = 0x434c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> (32 + 13));
label_434c2c:
    // 0x434c2c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x434c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_434c30:
    // 0x434c30: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x434c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_434c34:
    // 0x434c34: 0x71a3e  dsrl32      $v1, $a3, 8
    ctx->pc = 0x434c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) >> (32 + 8));
label_434c38:
    // 0x434c38: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x434c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_434c3c:
    // 0x434c3c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x434c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_434c40:
    // 0x434c40: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x434c40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_434c44:
    // 0x434c44: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x434c44u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_434c48:
    // 0x434c48: 0x10000002  b           . + 4 + (0x2 << 2)
label_434c4c:
    if (ctx->pc == 0x434C4Cu) {
        ctx->pc = 0x434C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C48u;
        // 0x434c4c: 0x1044025  or          $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434C50u;
        goto label_434c50;
    }
    ctx->pc = 0x434C48u;
    {
        const bool branch_taken_0x434c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C48u;
        // 0x434c4c: 0x1044025  or          $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434c48) {
            ctx->pc = 0x434C54u;
            goto label_434c54;
        }
    }
    ctx->pc = 0x434C50u;
label_434c50:
    // 0x434c50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x434c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_434c54:
    // 0x434c54: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x434c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_434c58:
    // 0x434c58: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x434c58u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434c5c:
    // 0x434c5c: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x434c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_434c60:
    // 0x434c60: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x434c60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_434c64:
    // 0x434c64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x434c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_434c68:
    // 0x434c68: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x434c68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_434c6c:
    // 0x434c6c: 0x81e3a  dsrl        $v1, $t0, 24
    ctx->pc = 0x434c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 24);
label_434c70:
    // 0x434c70: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x434c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_434c74:
    // 0x434c74: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x434c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_434c78:
    // 0x434c78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_434c7c:
    if (ctx->pc == 0x434C7Cu) {
        ctx->pc = 0x434C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C78u;
        // 0x434c7c: 0x30c20002  andi        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x434C80u;
        goto label_434c80;
    }
    ctx->pc = 0x434C78u;
    {
        const bool branch_taken_0x434c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C78u;
        // 0x434c7c: 0x30c20002  andi        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x434c78) {
            ctx->pc = 0x434C98u;
            goto label_434c98;
        }
    }
    ctx->pc = 0x434C80u;
label_434c80:
    // 0x434c80: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x434c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_434c84:
    // 0x434c84: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_434c88:
    if (ctx->pc == 0x434C88u) {
        ctx->pc = 0x434C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C84u;
        // 0x434c88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434C8Cu;
        goto label_434c8c;
    }
    ctx->pc = 0x434C84u;
    {
        const bool branch_taken_0x434c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x434C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C84u;
        // 0x434c88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434c84) {
            ctx->pc = 0x434CE8u;
            goto label_434ce8;
        }
    }
    ctx->pc = 0x434C8Cu;
label_434c8c:
    // 0x434c8c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_434c90:
    if (ctx->pc == 0x434C90u) {
        ctx->pc = 0x434C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C8Cu;
        // 0x434c90: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434C94u;
        goto label_434c94;
    }
    ctx->pc = 0x434C8Cu;
    {
        const bool branch_taken_0x434c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C8Cu;
        // 0x434c90: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434c8c) {
            ctx->pc = 0x434D40u;
            goto label_434d40;
        }
    }
    ctx->pc = 0x434C94u;
label_434c94:
    // 0x434c94: 0x0  nop
    ctx->pc = 0x434c94u;
    // NOP
label_434c98:
    // 0x434c98: 0x30c50001  andi        $a1, $a2, 0x1
    ctx->pc = 0x434c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_434c9c:
    // 0x434c9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x434c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_434ca0:
    // 0x434ca0: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x434ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_434ca4:
    // 0x434ca4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x434ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_434ca8:
    // 0x434ca8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x434ca8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_434cac:
    // 0x434cac: 0x30c40008  andi        $a0, $a2, 0x8
    ctx->pc = 0x434cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_434cb0:
    // 0x434cb0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x434cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_434cb4:
    // 0x434cb4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x434cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_434cb8:
    // 0x434cb8: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x434cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_434cbc:
    // 0x434cbc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x434cbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_434cc0:
    // 0x434cc0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x434cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_434cc4:
    // 0x434cc4: 0xa25025  or          $t2, $a1, $v0
    ctx->pc = 0x434cc4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_434cc8:
    // 0x434cc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x434cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_434ccc:
    // 0x434ccc: 0x6a182a  slt         $v1, $v1, $t2
    ctx->pc = 0x434cccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_434cd0:
    // 0x434cd0: 0x25420007  addiu       $v0, $t2, 0x7
    ctx->pc = 0x434cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 7));
label_434cd4:
    // 0x434cd4: 0x143100b  movn        $v0, $t2, $v1
    ctx->pc = 0x434cd4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
label_434cd8:
    // 0x434cd8: 0x30490038  andi        $t1, $v0, 0x38
    ctx->pc = 0x434cd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)56);
label_434cdc:
    // 0x434cdc: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x434cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_434ce0:
    // 0x434ce0: 0x10000017  b           . + 4 + (0x17 << 2)
label_434ce4:
    if (ctx->pc == 0x434CE4u) {
        ctx->pc = 0x434CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434CE0u;
        // 0x434ce4: 0x350c0  sll         $t2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434CE8u;
        goto label_434ce8;
    }
    ctx->pc = 0x434CE0u;
    {
        const bool branch_taken_0x434ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434CE0u;
        // 0x434ce4: 0x350c0  sll         $t2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434ce0) {
            ctx->pc = 0x434D40u;
            goto label_434d40;
        }
    }
    ctx->pc = 0x434CE8u;
label_434ce8:
    // 0x434ce8: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x434ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_434cec:
    // 0x434cec: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x434cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_434cf0:
    // 0x434cf0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x434cf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_434cf4:
    // 0x434cf4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x434cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_434cf8:
    // 0x434cf8: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x434cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_434cfc:
    // 0x434cfc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x434cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_434d00:
    // 0x434d00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x434d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_434d04:
    // 0x434d04: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x434d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_434d08:
    // 0x434d08: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x434d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_434d0c:
    // 0x434d0c: 0x30c50010  andi        $a1, $a2, 0x10
    ctx->pc = 0x434d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_434d10:
    // 0x434d10: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x434d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_434d14:
    // 0x434d14: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x434d14u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_434d18:
    // 0x434d18: 0x855025  or          $t2, $a0, $a1
    ctx->pc = 0x434d18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_434d1c:
    // 0x434d1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x434d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_434d20:
    // 0x434d20: 0x6a182a  slt         $v1, $v1, $t2
    ctx->pc = 0x434d20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_434d24:
    // 0x434d24: 0x25420003  addiu       $v0, $t2, 0x3
    ctx->pc = 0x434d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_434d28:
    // 0x434d28: 0x143100b  movn        $v0, $t2, $v1
    ctx->pc = 0x434d28u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
label_434d2c:
    // 0x434d2c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x434d2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_434d30:
    // 0x434d30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x434d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_434d34:
    // 0x434d34: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x434d34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_434d38:
    // 0x434d38: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x434d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_434d3c:
    // 0x434d3c: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x434d3cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_434d40:
    // 0x434d40: 0xf2842  srl         $a1, $t7, 1
    ctx->pc = 0x434d40u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
label_434d44:
    // 0x434d44: 0xd3042  srl         $a2, $t5, 1
    ctx->pc = 0x434d44u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
label_434d48:
    // 0x434d48: 0x1451021  addu        $v0, $t2, $a1
    ctx->pc = 0x434d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_434d4c:
    // 0x434d4c: 0x1266021  addu        $t4, $t1, $a2
    ctx->pc = 0x434d4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_434d50:
    // 0x434d50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x434d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_434d54:
    // 0x434d54: 0x9203c  dsll32      $a0, $t1, 0
    ctx->pc = 0x434d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 0));
label_434d58:
    // 0x434d58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x434d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_434d5c:
    // 0x434d5c: 0x2583ffff  addiu       $v1, $t4, -0x1
    ctx->pc = 0x434d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_434d60:
    // 0x434d60: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x434d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
label_434d64:
    // 0x434d64: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x434d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_434d68:
    // 0x434d68: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x434d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
label_434d6c:
    // 0x434d6c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x434d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_434d70:
    // 0x434d70: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x434d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_434d74:
    // 0x434d74: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x434d74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_434d78:
    // 0x434d78: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x434d78u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434d7c:
    // 0x434d7c: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x434d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_434d80:
    // 0x434d80: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x434d80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_434d84:
    // 0x434d84: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x434d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_434d88:
    // 0x434d88: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x434d88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_434d8c:
    // 0x434d8c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x434d8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_434d90:
    // 0x434d90: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x434d90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_434d94:
    // 0x434d94: 0x11e0003e  beqz        $t7, . + 4 + (0x3E << 2)
label_434d98:
    if (ctx->pc == 0x434D98u) {
        ctx->pc = 0x434D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434D94u;
        // 0x434d98: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434D9Cu;
        goto label_434d9c;
    }
    ctx->pc = 0x434D94u;
    {
        const bool branch_taken_0x434d94 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x434D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434D94u;
        // 0x434d98: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434d94) {
            ctx->pc = 0x434E90u;
            goto label_434e90;
        }
    }
    ctx->pc = 0x434D9Cu;
label_434d9c:
    // 0x434d9c: 0x2de20041  sltiu       $v0, $t7, 0x41
    ctx->pc = 0x434d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_434da0:
    // 0x434da0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x434da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_434da4:
    // 0x434da4: 0x25a40001  addiu       $a0, $t5, 0x1
    ctx->pc = 0x434da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_434da8:
    // 0x434da8: 0x1e2180b  movn        $v1, $t7, $v0
    ctx->pc = 0x434da8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 15));
label_434dac:
    // 0x434dac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x434dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_434db0:
    // 0x434db0: 0xc6d00  sll         $t5, $t4, 20
    ctx->pc = 0x434db0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_434db4:
    // 0x434db4: 0x43500  sll         $a2, $a0, 20
    ctx->pc = 0x434db4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
label_434db8:
    // 0x434db8: 0x9cd00  sll         $t9, $t1, 20
    ctx->pc = 0x434db8u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 9), 20));
label_434dbc:
    // 0x434dbc: 0x246c0010  addiu       $t4, $v1, 0x10
    ctx->pc = 0x434dbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_434dc0:
    // 0x434dc0: 0x3c140010  lui         $s4, 0x10
    ctx->pc = 0x434dc0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16 << 16));
label_434dc4:
    // 0x434dc4: 0x2cb80040  sltiu       $t8, $a1, 0x40
    ctx->pc = 0x434dc4u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_434dc8:
    // 0x434dc8: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x434dc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_434dcc:
    // 0x434dcc: 0x0  nop
    ctx->pc = 0x434dccu;
    // NOP
label_434dd0:
    // 0x434dd0: 0x1d41025  or          $v0, $t6, $s4
    ctx->pc = 0x434dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 20));
label_434dd4:
    // 0x434dd4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x434dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_434dd8:
    // 0x434dd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x434dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_434ddc:
    // 0x434ddc: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x434ddcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_434de0:
    // 0x434de0: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x434de0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434de4:
    // 0x434de4: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x434de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_434de8:
    // 0x434de8: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x434de8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_434dec:
    // 0x434dec: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x434decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_434df0:
    // 0x434df0: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x434df0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_434df4:
    // 0x434df4: 0xb1042  srl         $v0, $t3, 1
    ctx->pc = 0x434df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
label_434df8:
    // 0x434df8: 0x1424821  addu        $t1, $t2, $v0
    ctx->pc = 0x434df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_434dfc:
    // 0x434dfc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x434dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_434e00:
    // 0x434e00: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x434e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_434e04:
    // 0x434e04: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x434e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
label_434e08:
    // 0x434e08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x434e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_434e0c:
    // 0x434e0c: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x434e0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_434e10:
    // 0x434e10: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x434e10u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434e14:
    // 0x434e14: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x434e14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_434e18:
    // 0x434e18: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x434e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_434e1c:
    // 0x434e1c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x434e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_434e20:
    // 0x434e20: 0x1861825  or          $v1, $t4, $a2
    ctx->pc = 0x434e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | GPR_U64(ctx, 6));
label_434e24:
    // 0x434e24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x434e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_434e28:
    // 0x434e28: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x434e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_434e2c:
    // 0x434e2c: 0x3403e  dsrl32      $t0, $v1, 0
    ctx->pc = 0x434e2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) >> (32 + 0));
label_434e30:
    // 0x434e30: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x434e30u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434e34:
    // 0x434e34: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x434e34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
label_434e38:
    // 0x434e38: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x434e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_434e3c:
    // 0x434e3c: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x434e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_434e40:
    // 0x434e40: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x434e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_434e44:
    // 0x434e44: 0x17000002  bnez        $t8, . + 4 + (0x2 << 2)
label_434e48:
    if (ctx->pc == 0x434E48u) {
        ctx->pc = 0x434E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434E44u;
        // 0x434e48: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434E4Cu;
        goto label_434e4c;
    }
    ctx->pc = 0x434E44u;
    {
        const bool branch_taken_0x434e44 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x434E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434E44u;
        // 0x434e48: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434e44) {
            ctx->pc = 0x434E50u;
            goto label_434e50;
        }
    }
    ctx->pc = 0x434E4Cu;
label_434e4c:
    // 0x434e4c: 0x25220020  addiu       $v0, $t1, 0x20
    ctx->pc = 0x434e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_434e50:
    // 0x434e50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x434e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_434e54:
    // 0x434e54: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x434e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_434e58:
    // 0x434e58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x434e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_434e5c:
    // 0x434e5c: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x434e5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_434e60:
    // 0x434e60: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x434e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_434e64:
    // 0x434e64: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x434e64u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434e68:
    // 0x434e68: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x434e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_434e6c:
    // 0x434e6c: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x434e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_434e70:
    // 0x434e70: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x434e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_434e74:
    // 0x434e74: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x434e74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_434e78:
    // 0x434e78: 0x258c0400  addiu       $t4, $t4, 0x400
    ctx->pc = 0x434e78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1024));
label_434e7c:
    // 0x434e7c: 0x256b0040  addiu       $t3, $t3, 0x40
    ctx->pc = 0x434e7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
label_434e80:
    // 0x434e80: 0x16f102b  sltu        $v0, $t3, $t7
    ctx->pc = 0x434e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_434e84:
    // 0x434e84: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_434e88:
    if (ctx->pc == 0x434E88u) {
        ctx->pc = 0x434E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434E84u;
        // 0x434e88: 0x25ce0400  addiu       $t6, $t6, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434E8Cu;
        goto label_434e8c;
    }
    ctx->pc = 0x434E84u;
    {
        const bool branch_taken_0x434e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434E84u;
        // 0x434e88: 0x25ce0400  addiu       $t6, $t6, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434e84) {
            ctx->pc = 0x434DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434dd0;
        }
    }
    ctx->pc = 0x434E8Cu;
label_434e8c:
    // 0x434e8c: 0x0  nop
    ctx->pc = 0x434e8cu;
    // NOP
label_434e90:
    // 0x434e90: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x434e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_434e94:
    // 0x434e94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x434e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_434e98:
    // 0x434e98: 0x70e23b89  pcpyld      $a3, $a3, $v0
    ctx->pc = 0x434e98u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
label_434e9c:
    // 0x434e9c: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x434e9cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_434ea0:
    // 0x434ea0: 0x260682d  daddu       $t5, $s3, $zero
    ctx->pc = 0x434ea0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_434ea4:
    // 0x434ea4: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x434ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_434ea8:
    // 0x434ea8: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x434ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_434eac:
    // 0x434eac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x434eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_434eb0:
    // 0x434eb0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x434eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_434eb4:
    // 0x434eb4: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x434eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
label_434eb8:
    // 0x434eb8: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x434eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_434ebc:
    // 0x434ebc: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x434ebcu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434ec0:
    // 0x434ec0: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x434ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
label_434ec4:
    // 0x434ec4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x434ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_434ec8:
    // 0x434ec8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x434ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_434ecc:
    // 0x434ecc: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x434eccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_434ed0:
    // 0x434ed0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x434ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_434ed4:
    // 0x434ed4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x434ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_434ed8:
    // 0x434ed8: 0x5440febd  bnel        $v0, $zero, . + 4 + (-0x143 << 2)
label_434edc:
    if (ctx->pc == 0x434EDCu) {
        ctx->pc = 0x434EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434ED8u;
        // 0x434edc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434EE0u;
        goto label_434ee0;
    }
    ctx->pc = 0x434ED8u;
    {
        const bool branch_taken_0x434ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x434ed8) {
            ctx->pc = 0x434EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434ED8u;
            // 0x434edc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4349D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4349d0;
        }
    }
    ctx->pc = 0x434EE0u;
label_434ee0:
    // 0x434ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x434ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_434ee4:
    // 0x434ee4: 0xdf88ae48  ld          $t0, -0x51B8($gp)
    ctx->pc = 0x434ee4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_434ee8:
    // 0x434ee8: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x434ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_434eec:
    // 0x434eec: 0xaf82aeb4  sw          $v0, -0x514C($gp)
    ctx->pc = 0x434eecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946484), GPR_U32(ctx, 2));
label_434ef0:
    // 0x434ef0: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x434ef0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434ef4:
    // 0x434ef4: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x434ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_434ef8:
    // 0x434ef8: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x434ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_434efc:
    // 0x434efc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x434efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_434f00:
    // 0x434f00: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x434f00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_434f04:
    // 0x434f04: 0xdf88ae38  ld          $t0, -0x51C8($gp)
    ctx->pc = 0x434f04u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
label_434f08:
    // 0x434f08: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x434f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_434f0c:
    // 0x434f0c: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x434f0cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434f10:
    // 0x434f10: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x434f10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_434f14:
    // 0x434f14: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x434f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_434f18:
    // 0x434f18: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x434f18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_434f1c:
    // 0x434f1c: 0xdf88ae60  ld          $t0, -0x51A0($gp)
    ctx->pc = 0x434f1cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_434f20:
    // 0x434f20: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x434f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_434f24:
    // 0x434f24: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x434f24u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_434f28:
    // 0x434f28: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x434f28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
label_434f2c:
    // 0x434f2c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x434f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_434f30:
    // 0x434f30: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x434f30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_434f34:
    // 0x434f34: 0x0  nop
    ctx->pc = 0x434f34u;
    // NOP
label_434f38:
    // 0x434f38: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x434f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_434f3c:
    // 0x434f3c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x434f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_434f40:
    // 0x434f40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x434f40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_434f44:
    // 0x434f44: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x434f44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_434f48:
    // 0x434f48: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x434f48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_434f4c:
    // 0x434f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x434f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_434f50:
    // 0x434f50: 0x3e00008  jr          $ra
label_434f54:
    if (ctx->pc == 0x434F54u) {
        ctx->pc = 0x434F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434F50u;
        // 0x434f54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434F58u;
        goto label_fallthrough_0x434f50;
    }
    ctx->pc = 0x434F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x434F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434F50u;
        // 0x434f54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x434f50:
    ctx->pc = 0x434F58u;
}
