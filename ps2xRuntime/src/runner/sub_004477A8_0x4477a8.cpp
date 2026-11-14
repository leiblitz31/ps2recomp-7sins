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

// Function: sub_004477A8
// Address: 0x4477a8 - 0x4481d0
void sub_004477A8_0x4477a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004477A8_0x4477a8");
#endif

    switch (ctx->pc) {
        case 0x4477a8u: goto label_4477a8;
        case 0x4477acu: goto label_4477ac;
        case 0x4477b0u: goto label_4477b0;
        case 0x4477b4u: goto label_4477b4;
        case 0x4477b8u: goto label_4477b8;
        case 0x4477bcu: goto label_4477bc;
        case 0x4477c0u: goto label_4477c0;
        case 0x4477c4u: goto label_4477c4;
        case 0x4477c8u: goto label_4477c8;
        case 0x4477ccu: goto label_4477cc;
        case 0x4477d0u: goto label_4477d0;
        case 0x4477d4u: goto label_4477d4;
        case 0x4477d8u: goto label_4477d8;
        case 0x4477dcu: goto label_4477dc;
        case 0x4477e0u: goto label_4477e0;
        case 0x4477e4u: goto label_4477e4;
        case 0x4477e8u: goto label_4477e8;
        case 0x4477ecu: goto label_4477ec;
        case 0x4477f0u: goto label_4477f0;
        case 0x4477f4u: goto label_4477f4;
        case 0x4477f8u: goto label_4477f8;
        case 0x4477fcu: goto label_4477fc;
        case 0x447800u: goto label_447800;
        case 0x447804u: goto label_447804;
        case 0x447808u: goto label_447808;
        case 0x44780cu: goto label_44780c;
        case 0x447810u: goto label_447810;
        case 0x447814u: goto label_447814;
        case 0x447818u: goto label_447818;
        case 0x44781cu: goto label_44781c;
        case 0x447820u: goto label_447820;
        case 0x447824u: goto label_447824;
        case 0x447828u: goto label_447828;
        case 0x44782cu: goto label_44782c;
        case 0x447830u: goto label_447830;
        case 0x447834u: goto label_447834;
        case 0x447838u: goto label_447838;
        case 0x44783cu: goto label_44783c;
        case 0x447840u: goto label_447840;
        case 0x447844u: goto label_447844;
        case 0x447848u: goto label_447848;
        case 0x44784cu: goto label_44784c;
        case 0x447850u: goto label_447850;
        case 0x447854u: goto label_447854;
        case 0x447858u: goto label_447858;
        case 0x44785cu: goto label_44785c;
        case 0x447860u: goto label_447860;
        case 0x447864u: goto label_447864;
        case 0x447868u: goto label_447868;
        case 0x44786cu: goto label_44786c;
        case 0x447870u: goto label_447870;
        case 0x447874u: goto label_447874;
        case 0x447878u: goto label_447878;
        case 0x44787cu: goto label_44787c;
        case 0x447880u: goto label_447880;
        case 0x447884u: goto label_447884;
        case 0x447888u: goto label_447888;
        case 0x44788cu: goto label_44788c;
        case 0x447890u: goto label_447890;
        case 0x447894u: goto label_447894;
        case 0x447898u: goto label_447898;
        case 0x44789cu: goto label_44789c;
        case 0x4478a0u: goto label_4478a0;
        case 0x4478a4u: goto label_4478a4;
        case 0x4478a8u: goto label_4478a8;
        case 0x4478acu: goto label_4478ac;
        case 0x4478b0u: goto label_4478b0;
        case 0x4478b4u: goto label_4478b4;
        case 0x4478b8u: goto label_4478b8;
        case 0x4478bcu: goto label_4478bc;
        case 0x4478c0u: goto label_4478c0;
        case 0x4478c4u: goto label_4478c4;
        case 0x4478c8u: goto label_4478c8;
        case 0x4478ccu: goto label_4478cc;
        case 0x4478d0u: goto label_4478d0;
        case 0x4478d4u: goto label_4478d4;
        case 0x4478d8u: goto label_4478d8;
        case 0x4478dcu: goto label_4478dc;
        case 0x4478e0u: goto label_4478e0;
        case 0x4478e4u: goto label_4478e4;
        case 0x4478e8u: goto label_4478e8;
        case 0x4478ecu: goto label_4478ec;
        case 0x4478f0u: goto label_4478f0;
        case 0x4478f4u: goto label_4478f4;
        case 0x4478f8u: goto label_4478f8;
        case 0x4478fcu: goto label_4478fc;
        case 0x447900u: goto label_447900;
        case 0x447904u: goto label_447904;
        case 0x447908u: goto label_447908;
        case 0x44790cu: goto label_44790c;
        case 0x447910u: goto label_447910;
        case 0x447914u: goto label_447914;
        case 0x447918u: goto label_447918;
        case 0x44791cu: goto label_44791c;
        case 0x447920u: goto label_447920;
        case 0x447924u: goto label_447924;
        case 0x447928u: goto label_447928;
        case 0x44792cu: goto label_44792c;
        case 0x447930u: goto label_447930;
        case 0x447934u: goto label_447934;
        case 0x447938u: goto label_447938;
        case 0x44793cu: goto label_44793c;
        case 0x447940u: goto label_447940;
        case 0x447944u: goto label_447944;
        case 0x447948u: goto label_447948;
        case 0x44794cu: goto label_44794c;
        case 0x447950u: goto label_447950;
        case 0x447954u: goto label_447954;
        case 0x447958u: goto label_447958;
        case 0x44795cu: goto label_44795c;
        case 0x447960u: goto label_447960;
        case 0x447964u: goto label_447964;
        case 0x447968u: goto label_447968;
        case 0x44796cu: goto label_44796c;
        case 0x447970u: goto label_447970;
        case 0x447974u: goto label_447974;
        case 0x447978u: goto label_447978;
        case 0x44797cu: goto label_44797c;
        case 0x447980u: goto label_447980;
        case 0x447984u: goto label_447984;
        case 0x447988u: goto label_447988;
        case 0x44798cu: goto label_44798c;
        case 0x447990u: goto label_447990;
        case 0x447994u: goto label_447994;
        case 0x447998u: goto label_447998;
        case 0x44799cu: goto label_44799c;
        case 0x4479a0u: goto label_4479a0;
        case 0x4479a4u: goto label_4479a4;
        case 0x4479a8u: goto label_4479a8;
        case 0x4479acu: goto label_4479ac;
        case 0x4479b0u: goto label_4479b0;
        case 0x4479b4u: goto label_4479b4;
        case 0x4479b8u: goto label_4479b8;
        case 0x4479bcu: goto label_4479bc;
        case 0x4479c0u: goto label_4479c0;
        case 0x4479c4u: goto label_4479c4;
        case 0x4479c8u: goto label_4479c8;
        case 0x4479ccu: goto label_4479cc;
        case 0x4479d0u: goto label_4479d0;
        case 0x4479d4u: goto label_4479d4;
        case 0x4479d8u: goto label_4479d8;
        case 0x4479dcu: goto label_4479dc;
        case 0x4479e0u: goto label_4479e0;
        case 0x4479e4u: goto label_4479e4;
        case 0x4479e8u: goto label_4479e8;
        case 0x4479ecu: goto label_4479ec;
        case 0x4479f0u: goto label_4479f0;
        case 0x4479f4u: goto label_4479f4;
        case 0x4479f8u: goto label_4479f8;
        case 0x4479fcu: goto label_4479fc;
        case 0x447a00u: goto label_447a00;
        case 0x447a04u: goto label_447a04;
        case 0x447a08u: goto label_447a08;
        case 0x447a0cu: goto label_447a0c;
        case 0x447a10u: goto label_447a10;
        case 0x447a14u: goto label_447a14;
        case 0x447a18u: goto label_447a18;
        case 0x447a1cu: goto label_447a1c;
        case 0x447a20u: goto label_447a20;
        case 0x447a24u: goto label_447a24;
        case 0x447a28u: goto label_447a28;
        case 0x447a2cu: goto label_447a2c;
        case 0x447a30u: goto label_447a30;
        case 0x447a34u: goto label_447a34;
        case 0x447a38u: goto label_447a38;
        case 0x447a3cu: goto label_447a3c;
        case 0x447a40u: goto label_447a40;
        case 0x447a44u: goto label_447a44;
        case 0x447a48u: goto label_447a48;
        case 0x447a4cu: goto label_447a4c;
        case 0x447a50u: goto label_447a50;
        case 0x447a54u: goto label_447a54;
        case 0x447a58u: goto label_447a58;
        case 0x447a5cu: goto label_447a5c;
        case 0x447a60u: goto label_447a60;
        case 0x447a64u: goto label_447a64;
        case 0x447a68u: goto label_447a68;
        case 0x447a6cu: goto label_447a6c;
        case 0x447a70u: goto label_447a70;
        case 0x447a74u: goto label_447a74;
        case 0x447a78u: goto label_447a78;
        case 0x447a7cu: goto label_447a7c;
        case 0x447a80u: goto label_447a80;
        case 0x447a84u: goto label_447a84;
        case 0x447a88u: goto label_447a88;
        case 0x447a8cu: goto label_447a8c;
        case 0x447a90u: goto label_447a90;
        case 0x447a94u: goto label_447a94;
        case 0x447a98u: goto label_447a98;
        case 0x447a9cu: goto label_447a9c;
        case 0x447aa0u: goto label_447aa0;
        case 0x447aa4u: goto label_447aa4;
        case 0x447aa8u: goto label_447aa8;
        case 0x447aacu: goto label_447aac;
        case 0x447ab0u: goto label_447ab0;
        case 0x447ab4u: goto label_447ab4;
        case 0x447ab8u: goto label_447ab8;
        case 0x447abcu: goto label_447abc;
        case 0x447ac0u: goto label_447ac0;
        case 0x447ac4u: goto label_447ac4;
        case 0x447ac8u: goto label_447ac8;
        case 0x447accu: goto label_447acc;
        case 0x447ad0u: goto label_447ad0;
        case 0x447ad4u: goto label_447ad4;
        case 0x447ad8u: goto label_447ad8;
        case 0x447adcu: goto label_447adc;
        case 0x447ae0u: goto label_447ae0;
        case 0x447ae4u: goto label_447ae4;
        case 0x447ae8u: goto label_447ae8;
        case 0x447aecu: goto label_447aec;
        case 0x447af0u: goto label_447af0;
        case 0x447af4u: goto label_447af4;
        case 0x447af8u: goto label_447af8;
        case 0x447afcu: goto label_447afc;
        case 0x447b00u: goto label_447b00;
        case 0x447b04u: goto label_447b04;
        case 0x447b08u: goto label_447b08;
        case 0x447b0cu: goto label_447b0c;
        case 0x447b10u: goto label_447b10;
        case 0x447b14u: goto label_447b14;
        case 0x447b18u: goto label_447b18;
        case 0x447b1cu: goto label_447b1c;
        case 0x447b20u: goto label_447b20;
        case 0x447b24u: goto label_447b24;
        case 0x447b28u: goto label_447b28;
        case 0x447b2cu: goto label_447b2c;
        case 0x447b30u: goto label_447b30;
        case 0x447b34u: goto label_447b34;
        case 0x447b38u: goto label_447b38;
        case 0x447b3cu: goto label_447b3c;
        case 0x447b40u: goto label_447b40;
        case 0x447b44u: goto label_447b44;
        case 0x447b48u: goto label_447b48;
        case 0x447b4cu: goto label_447b4c;
        case 0x447b50u: goto label_447b50;
        case 0x447b54u: goto label_447b54;
        case 0x447b58u: goto label_447b58;
        case 0x447b5cu: goto label_447b5c;
        case 0x447b60u: goto label_447b60;
        case 0x447b64u: goto label_447b64;
        case 0x447b68u: goto label_447b68;
        case 0x447b6cu: goto label_447b6c;
        case 0x447b70u: goto label_447b70;
        case 0x447b74u: goto label_447b74;
        case 0x447b78u: goto label_447b78;
        case 0x447b7cu: goto label_447b7c;
        case 0x447b80u: goto label_447b80;
        case 0x447b84u: goto label_447b84;
        case 0x447b88u: goto label_447b88;
        case 0x447b8cu: goto label_447b8c;
        case 0x447b90u: goto label_447b90;
        case 0x447b94u: goto label_447b94;
        case 0x447b98u: goto label_447b98;
        case 0x447b9cu: goto label_447b9c;
        case 0x447ba0u: goto label_447ba0;
        case 0x447ba4u: goto label_447ba4;
        case 0x447ba8u: goto label_447ba8;
        case 0x447bacu: goto label_447bac;
        case 0x447bb0u: goto label_447bb0;
        case 0x447bb4u: goto label_447bb4;
        case 0x447bb8u: goto label_447bb8;
        case 0x447bbcu: goto label_447bbc;
        case 0x447bc0u: goto label_447bc0;
        case 0x447bc4u: goto label_447bc4;
        case 0x447bc8u: goto label_447bc8;
        case 0x447bccu: goto label_447bcc;
        case 0x447bd0u: goto label_447bd0;
        case 0x447bd4u: goto label_447bd4;
        case 0x447bd8u: goto label_447bd8;
        case 0x447bdcu: goto label_447bdc;
        case 0x447be0u: goto label_447be0;
        case 0x447be4u: goto label_447be4;
        case 0x447be8u: goto label_447be8;
        case 0x447becu: goto label_447bec;
        case 0x447bf0u: goto label_447bf0;
        case 0x447bf4u: goto label_447bf4;
        case 0x447bf8u: goto label_447bf8;
        case 0x447bfcu: goto label_447bfc;
        case 0x447c00u: goto label_447c00;
        case 0x447c04u: goto label_447c04;
        case 0x447c08u: goto label_447c08;
        case 0x447c0cu: goto label_447c0c;
        case 0x447c10u: goto label_447c10;
        case 0x447c14u: goto label_447c14;
        case 0x447c18u: goto label_447c18;
        case 0x447c1cu: goto label_447c1c;
        case 0x447c20u: goto label_447c20;
        case 0x447c24u: goto label_447c24;
        case 0x447c28u: goto label_447c28;
        case 0x447c2cu: goto label_447c2c;
        case 0x447c30u: goto label_447c30;
        case 0x447c34u: goto label_447c34;
        case 0x447c38u: goto label_447c38;
        case 0x447c3cu: goto label_447c3c;
        case 0x447c40u: goto label_447c40;
        case 0x447c44u: goto label_447c44;
        case 0x447c48u: goto label_447c48;
        case 0x447c4cu: goto label_447c4c;
        case 0x447c50u: goto label_447c50;
        case 0x447c54u: goto label_447c54;
        case 0x447c58u: goto label_447c58;
        case 0x447c5cu: goto label_447c5c;
        case 0x447c60u: goto label_447c60;
        case 0x447c64u: goto label_447c64;
        case 0x447c68u: goto label_447c68;
        case 0x447c6cu: goto label_447c6c;
        case 0x447c70u: goto label_447c70;
        case 0x447c74u: goto label_447c74;
        case 0x447c78u: goto label_447c78;
        case 0x447c7cu: goto label_447c7c;
        case 0x447c80u: goto label_447c80;
        case 0x447c84u: goto label_447c84;
        case 0x447c88u: goto label_447c88;
        case 0x447c8cu: goto label_447c8c;
        case 0x447c90u: goto label_447c90;
        case 0x447c94u: goto label_447c94;
        case 0x447c98u: goto label_447c98;
        case 0x447c9cu: goto label_447c9c;
        case 0x447ca0u: goto label_447ca0;
        case 0x447ca4u: goto label_447ca4;
        case 0x447ca8u: goto label_447ca8;
        case 0x447cacu: goto label_447cac;
        case 0x447cb0u: goto label_447cb0;
        case 0x447cb4u: goto label_447cb4;
        case 0x447cb8u: goto label_447cb8;
        case 0x447cbcu: goto label_447cbc;
        case 0x447cc0u: goto label_447cc0;
        case 0x447cc4u: goto label_447cc4;
        case 0x447cc8u: goto label_447cc8;
        case 0x447cccu: goto label_447ccc;
        case 0x447cd0u: goto label_447cd0;
        case 0x447cd4u: goto label_447cd4;
        case 0x447cd8u: goto label_447cd8;
        case 0x447cdcu: goto label_447cdc;
        case 0x447ce0u: goto label_447ce0;
        case 0x447ce4u: goto label_447ce4;
        case 0x447ce8u: goto label_447ce8;
        case 0x447cecu: goto label_447cec;
        case 0x447cf0u: goto label_447cf0;
        case 0x447cf4u: goto label_447cf4;
        case 0x447cf8u: goto label_447cf8;
        case 0x447cfcu: goto label_447cfc;
        case 0x447d00u: goto label_447d00;
        case 0x447d04u: goto label_447d04;
        case 0x447d08u: goto label_447d08;
        case 0x447d0cu: goto label_447d0c;
        case 0x447d10u: goto label_447d10;
        case 0x447d14u: goto label_447d14;
        case 0x447d18u: goto label_447d18;
        case 0x447d1cu: goto label_447d1c;
        case 0x447d20u: goto label_447d20;
        case 0x447d24u: goto label_447d24;
        case 0x447d28u: goto label_447d28;
        case 0x447d2cu: goto label_447d2c;
        case 0x447d30u: goto label_447d30;
        case 0x447d34u: goto label_447d34;
        case 0x447d38u: goto label_447d38;
        case 0x447d3cu: goto label_447d3c;
        case 0x447d40u: goto label_447d40;
        case 0x447d44u: goto label_447d44;
        case 0x447d48u: goto label_447d48;
        case 0x447d4cu: goto label_447d4c;
        case 0x447d50u: goto label_447d50;
        case 0x447d54u: goto label_447d54;
        case 0x447d58u: goto label_447d58;
        case 0x447d5cu: goto label_447d5c;
        case 0x447d60u: goto label_447d60;
        case 0x447d64u: goto label_447d64;
        case 0x447d68u: goto label_447d68;
        case 0x447d6cu: goto label_447d6c;
        case 0x447d70u: goto label_447d70;
        case 0x447d74u: goto label_447d74;
        case 0x447d78u: goto label_447d78;
        case 0x447d7cu: goto label_447d7c;
        case 0x447d80u: goto label_447d80;
        case 0x447d84u: goto label_447d84;
        case 0x447d88u: goto label_447d88;
        case 0x447d8cu: goto label_447d8c;
        case 0x447d90u: goto label_447d90;
        case 0x447d94u: goto label_447d94;
        case 0x447d98u: goto label_447d98;
        case 0x447d9cu: goto label_447d9c;
        case 0x447da0u: goto label_447da0;
        case 0x447da4u: goto label_447da4;
        case 0x447da8u: goto label_447da8;
        case 0x447dacu: goto label_447dac;
        case 0x447db0u: goto label_447db0;
        case 0x447db4u: goto label_447db4;
        case 0x447db8u: goto label_447db8;
        case 0x447dbcu: goto label_447dbc;
        case 0x447dc0u: goto label_447dc0;
        case 0x447dc4u: goto label_447dc4;
        case 0x447dc8u: goto label_447dc8;
        case 0x447dccu: goto label_447dcc;
        case 0x447dd0u: goto label_447dd0;
        case 0x447dd4u: goto label_447dd4;
        case 0x447dd8u: goto label_447dd8;
        case 0x447ddcu: goto label_447ddc;
        case 0x447de0u: goto label_447de0;
        case 0x447de4u: goto label_447de4;
        case 0x447de8u: goto label_447de8;
        case 0x447decu: goto label_447dec;
        case 0x447df0u: goto label_447df0;
        case 0x447df4u: goto label_447df4;
        case 0x447df8u: goto label_447df8;
        case 0x447dfcu: goto label_447dfc;
        case 0x447e00u: goto label_447e00;
        case 0x447e04u: goto label_447e04;
        case 0x447e08u: goto label_447e08;
        case 0x447e0cu: goto label_447e0c;
        case 0x447e10u: goto label_447e10;
        case 0x447e14u: goto label_447e14;
        case 0x447e18u: goto label_447e18;
        case 0x447e1cu: goto label_447e1c;
        case 0x447e20u: goto label_447e20;
        case 0x447e24u: goto label_447e24;
        case 0x447e28u: goto label_447e28;
        case 0x447e2cu: goto label_447e2c;
        case 0x447e30u: goto label_447e30;
        case 0x447e34u: goto label_447e34;
        case 0x447e38u: goto label_447e38;
        case 0x447e3cu: goto label_447e3c;
        case 0x447e40u: goto label_447e40;
        case 0x447e44u: goto label_447e44;
        case 0x447e48u: goto label_447e48;
        case 0x447e4cu: goto label_447e4c;
        case 0x447e50u: goto label_447e50;
        case 0x447e54u: goto label_447e54;
        case 0x447e58u: goto label_447e58;
        case 0x447e5cu: goto label_447e5c;
        case 0x447e60u: goto label_447e60;
        case 0x447e64u: goto label_447e64;
        case 0x447e68u: goto label_447e68;
        case 0x447e6cu: goto label_447e6c;
        case 0x447e70u: goto label_447e70;
        case 0x447e74u: goto label_447e74;
        case 0x447e78u: goto label_447e78;
        case 0x447e7cu: goto label_447e7c;
        case 0x447e80u: goto label_447e80;
        case 0x447e84u: goto label_447e84;
        case 0x447e88u: goto label_447e88;
        case 0x447e8cu: goto label_447e8c;
        case 0x447e90u: goto label_447e90;
        case 0x447e94u: goto label_447e94;
        case 0x447e98u: goto label_447e98;
        case 0x447e9cu: goto label_447e9c;
        case 0x447ea0u: goto label_447ea0;
        case 0x447ea4u: goto label_447ea4;
        case 0x447ea8u: goto label_447ea8;
        case 0x447eacu: goto label_447eac;
        case 0x447eb0u: goto label_447eb0;
        case 0x447eb4u: goto label_447eb4;
        case 0x447eb8u: goto label_447eb8;
        case 0x447ebcu: goto label_447ebc;
        case 0x447ec0u: goto label_447ec0;
        case 0x447ec4u: goto label_447ec4;
        case 0x447ec8u: goto label_447ec8;
        case 0x447eccu: goto label_447ecc;
        case 0x447ed0u: goto label_447ed0;
        case 0x447ed4u: goto label_447ed4;
        case 0x447ed8u: goto label_447ed8;
        case 0x447edcu: goto label_447edc;
        case 0x447ee0u: goto label_447ee0;
        case 0x447ee4u: goto label_447ee4;
        case 0x447ee8u: goto label_447ee8;
        case 0x447eecu: goto label_447eec;
        case 0x447ef0u: goto label_447ef0;
        case 0x447ef4u: goto label_447ef4;
        case 0x447ef8u: goto label_447ef8;
        case 0x447efcu: goto label_447efc;
        case 0x447f00u: goto label_447f00;
        case 0x447f04u: goto label_447f04;
        case 0x447f08u: goto label_447f08;
        case 0x447f0cu: goto label_447f0c;
        case 0x447f10u: goto label_447f10;
        case 0x447f14u: goto label_447f14;
        case 0x447f18u: goto label_447f18;
        case 0x447f1cu: goto label_447f1c;
        case 0x447f20u: goto label_447f20;
        case 0x447f24u: goto label_447f24;
        case 0x447f28u: goto label_447f28;
        case 0x447f2cu: goto label_447f2c;
        case 0x447f30u: goto label_447f30;
        case 0x447f34u: goto label_447f34;
        case 0x447f38u: goto label_447f38;
        case 0x447f3cu: goto label_447f3c;
        case 0x447f40u: goto label_447f40;
        case 0x447f44u: goto label_447f44;
        case 0x447f48u: goto label_447f48;
        case 0x447f4cu: goto label_447f4c;
        case 0x447f50u: goto label_447f50;
        case 0x447f54u: goto label_447f54;
        case 0x447f58u: goto label_447f58;
        case 0x447f5cu: goto label_447f5c;
        case 0x447f60u: goto label_447f60;
        case 0x447f64u: goto label_447f64;
        case 0x447f68u: goto label_447f68;
        case 0x447f6cu: goto label_447f6c;
        case 0x447f70u: goto label_447f70;
        case 0x447f74u: goto label_447f74;
        case 0x447f78u: goto label_447f78;
        case 0x447f7cu: goto label_447f7c;
        case 0x447f80u: goto label_447f80;
        case 0x447f84u: goto label_447f84;
        case 0x447f88u: goto label_447f88;
        case 0x447f8cu: goto label_447f8c;
        case 0x447f90u: goto label_447f90;
        case 0x447f94u: goto label_447f94;
        case 0x447f98u: goto label_447f98;
        case 0x447f9cu: goto label_447f9c;
        case 0x447fa0u: goto label_447fa0;
        case 0x447fa4u: goto label_447fa4;
        case 0x447fa8u: goto label_447fa8;
        case 0x447facu: goto label_447fac;
        case 0x447fb0u: goto label_447fb0;
        case 0x447fb4u: goto label_447fb4;
        case 0x447fb8u: goto label_447fb8;
        case 0x447fbcu: goto label_447fbc;
        case 0x447fc0u: goto label_447fc0;
        case 0x447fc4u: goto label_447fc4;
        case 0x447fc8u: goto label_447fc8;
        case 0x447fccu: goto label_447fcc;
        case 0x447fd0u: goto label_447fd0;
        case 0x447fd4u: goto label_447fd4;
        case 0x447fd8u: goto label_447fd8;
        case 0x447fdcu: goto label_447fdc;
        case 0x447fe0u: goto label_447fe0;
        case 0x447fe4u: goto label_447fe4;
        case 0x447fe8u: goto label_447fe8;
        case 0x447fecu: goto label_447fec;
        case 0x447ff0u: goto label_447ff0;
        case 0x447ff4u: goto label_447ff4;
        case 0x447ff8u: goto label_447ff8;
        case 0x447ffcu: goto label_447ffc;
        case 0x448000u: goto label_448000;
        case 0x448004u: goto label_448004;
        case 0x448008u: goto label_448008;
        case 0x44800cu: goto label_44800c;
        case 0x448010u: goto label_448010;
        case 0x448014u: goto label_448014;
        case 0x448018u: goto label_448018;
        case 0x44801cu: goto label_44801c;
        case 0x448020u: goto label_448020;
        case 0x448024u: goto label_448024;
        case 0x448028u: goto label_448028;
        case 0x44802cu: goto label_44802c;
        case 0x448030u: goto label_448030;
        case 0x448034u: goto label_448034;
        case 0x448038u: goto label_448038;
        case 0x44803cu: goto label_44803c;
        case 0x448040u: goto label_448040;
        case 0x448044u: goto label_448044;
        case 0x448048u: goto label_448048;
        case 0x44804cu: goto label_44804c;
        case 0x448050u: goto label_448050;
        case 0x448054u: goto label_448054;
        case 0x448058u: goto label_448058;
        case 0x44805cu: goto label_44805c;
        case 0x448060u: goto label_448060;
        case 0x448064u: goto label_448064;
        case 0x448068u: goto label_448068;
        case 0x44806cu: goto label_44806c;
        case 0x448070u: goto label_448070;
        case 0x448074u: goto label_448074;
        case 0x448078u: goto label_448078;
        case 0x44807cu: goto label_44807c;
        case 0x448080u: goto label_448080;
        case 0x448084u: goto label_448084;
        case 0x448088u: goto label_448088;
        case 0x44808cu: goto label_44808c;
        case 0x448090u: goto label_448090;
        case 0x448094u: goto label_448094;
        case 0x448098u: goto label_448098;
        case 0x44809cu: goto label_44809c;
        case 0x4480a0u: goto label_4480a0;
        case 0x4480a4u: goto label_4480a4;
        case 0x4480a8u: goto label_4480a8;
        case 0x4480acu: goto label_4480ac;
        case 0x4480b0u: goto label_4480b0;
        case 0x4480b4u: goto label_4480b4;
        case 0x4480b8u: goto label_4480b8;
        case 0x4480bcu: goto label_4480bc;
        case 0x4480c0u: goto label_4480c0;
        case 0x4480c4u: goto label_4480c4;
        case 0x4480c8u: goto label_4480c8;
        case 0x4480ccu: goto label_4480cc;
        case 0x4480d0u: goto label_4480d0;
        case 0x4480d4u: goto label_4480d4;
        case 0x4480d8u: goto label_4480d8;
        case 0x4480dcu: goto label_4480dc;
        case 0x4480e0u: goto label_4480e0;
        case 0x4480e4u: goto label_4480e4;
        case 0x4480e8u: goto label_4480e8;
        case 0x4480ecu: goto label_4480ec;
        case 0x4480f0u: goto label_4480f0;
        case 0x4480f4u: goto label_4480f4;
        case 0x4480f8u: goto label_4480f8;
        case 0x4480fcu: goto label_4480fc;
        case 0x448100u: goto label_448100;
        case 0x448104u: goto label_448104;
        case 0x448108u: goto label_448108;
        case 0x44810cu: goto label_44810c;
        case 0x448110u: goto label_448110;
        case 0x448114u: goto label_448114;
        case 0x448118u: goto label_448118;
        case 0x44811cu: goto label_44811c;
        case 0x448120u: goto label_448120;
        case 0x448124u: goto label_448124;
        case 0x448128u: goto label_448128;
        case 0x44812cu: goto label_44812c;
        case 0x448130u: goto label_448130;
        case 0x448134u: goto label_448134;
        case 0x448138u: goto label_448138;
        case 0x44813cu: goto label_44813c;
        case 0x448140u: goto label_448140;
        case 0x448144u: goto label_448144;
        case 0x448148u: goto label_448148;
        case 0x44814cu: goto label_44814c;
        case 0x448150u: goto label_448150;
        case 0x448154u: goto label_448154;
        case 0x448158u: goto label_448158;
        case 0x44815cu: goto label_44815c;
        case 0x448160u: goto label_448160;
        case 0x448164u: goto label_448164;
        case 0x448168u: goto label_448168;
        case 0x44816cu: goto label_44816c;
        case 0x448170u: goto label_448170;
        case 0x448174u: goto label_448174;
        case 0x448178u: goto label_448178;
        case 0x44817cu: goto label_44817c;
        case 0x448180u: goto label_448180;
        case 0x448184u: goto label_448184;
        case 0x448188u: goto label_448188;
        case 0x44818cu: goto label_44818c;
        case 0x448190u: goto label_448190;
        case 0x448194u: goto label_448194;
        case 0x448198u: goto label_448198;
        case 0x44819cu: goto label_44819c;
        case 0x4481a0u: goto label_4481a0;
        case 0x4481a4u: goto label_4481a4;
        case 0x4481a8u: goto label_4481a8;
        case 0x4481acu: goto label_4481ac;
        case 0x4481b0u: goto label_4481b0;
        case 0x4481b4u: goto label_4481b4;
        case 0x4481b8u: goto label_4481b8;
        case 0x4481bcu: goto label_4481bc;
        case 0x4481c0u: goto label_4481c0;
        case 0x4481c4u: goto label_4481c4;
        case 0x4481c8u: goto label_4481c8;
        case 0x4481ccu: goto label_4481cc;
        default: break;
    }

    ctx->pc = 0x4477a8u;

label_4477a8:
    // 0x4477a8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4477a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4477ac:
    // 0x4477ac: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x4477acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_4477b0:
    // 0x4477b0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x4477b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_4477b4:
    // 0x4477b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4477b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4477b8:
    // 0x4477b8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x4477b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_4477bc:
    // 0x4477bc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x4477bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_4477c0:
    // 0x4477c0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x4477c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_4477c4:
    // 0x4477c4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x4477c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_4477c8:
    // 0x4477c8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4477c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4477cc:
    // 0x4477cc: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x4477ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_4477d0:
    // 0x4477d0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x4477d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_4477d4:
    // 0x4477d4: 0x1280025b  beqz        $s4, . + 4 + (0x25B << 2)
label_4477d8:
    if (ctx->pc == 0x4477D8u) {
        ctx->pc = 0x4477D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4477D4u;
        // 0x4477d8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4477DCu;
        goto label_4477dc;
    }
    ctx->pc = 0x4477D4u;
    {
        const bool branch_taken_0x4477d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4477D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4477D4u;
        // 0x4477d8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4477d4) {
            ctx->pc = 0x448144u;
            goto label_448144;
        }
    }
    ctx->pc = 0x4477DCu;
label_4477dc:
    // 0x4477dc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4477dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4477e0:
    // 0x4477e0: 0x10400263  beqz        $v0, . + 4 + (0x263 << 2)
label_4477e4:
    if (ctx->pc == 0x4477E4u) {
        ctx->pc = 0x4477E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4477E0u;
        // 0x4477e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4477E8u;
        goto label_4477e8;
    }
    ctx->pc = 0x4477E0u;
    {
        const bool branch_taken_0x4477e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4477E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4477E0u;
        // 0x4477e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4477e0) {
            ctx->pc = 0x448170u;
            goto label_448170;
        }
    }
    ctx->pc = 0x4477E8u;
label_4477e8:
    // 0x4477e8: 0x8e8c0004  lw          $t4, 0x4($s4)
    ctx->pc = 0x4477e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4477ec:
    // 0x4477ec: 0x11800252  beqz        $t4, . + 4 + (0x252 << 2)
label_4477f0:
    if (ctx->pc == 0x4477F0u) {
        ctx->pc = 0x4477F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4477ECu;
        // 0x4477f0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4477F4u;
        goto label_4477f4;
    }
    ctx->pc = 0x4477ECu;
    {
        const bool branch_taken_0x4477ec = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x4477F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4477ECu;
        // 0x4477f0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4477ec) {
            ctx->pc = 0x448138u;
            goto label_448138;
        }
    }
    ctx->pc = 0x4477F4u;
label_4477f4:
    // 0x4477f4: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x4477f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_4477f8:
    // 0x4477f8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x4477f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4477fc:
    // 0x4477fc: 0x6c102b  sltu        $v0, $v1, $t4
    ctx->pc = 0x4477fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_447800:
    // 0x447800: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_447804:
    if (ctx->pc == 0x447804u) {
        ctx->pc = 0x447804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447800u;
        // 0x447804: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447808u;
        goto label_447808;
    }
    ctx->pc = 0x447800u;
    {
        const bool branch_taken_0x447800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447800u;
        // 0x447804: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447800) {
            ctx->pc = 0x447824u;
            goto label_447824;
        }
    }
    ctx->pc = 0x447808u;
label_447808:
    // 0x447808: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x447808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_44780c:
    // 0x44780c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x44780cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_447810:
    // 0x447810: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x447810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_447814:
    // 0x447814: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x447814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_447818:
    // 0x447818: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x447818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44781c:
    // 0x44781c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_447820:
    if (ctx->pc == 0x447820u) {
        ctx->pc = 0x447820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44781Cu;
        // 0x447820: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447824u;
        goto label_447824;
    }
    ctx->pc = 0x44781Cu;
    {
        const bool branch_taken_0x44781c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x447820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44781Cu;
        // 0x447820: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44781c) {
            ctx->pc = 0x447848u;
            goto label_447848;
        }
    }
    ctx->pc = 0x447824u;
label_447824:
    // 0x447824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x447824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_447828:
    // 0x447828: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x447828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_44782c:
    // 0x44782c: 0xc1035f6  jal         func_40D7D8
label_447830:
    if (ctx->pc == 0x447830u) {
        ctx->pc = 0x447830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44782Cu;
        // 0x447830: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447834u;
        goto label_447834;
    }
    ctx->pc = 0x44782Cu;
    SET_GPR_U32(ctx, 31, 0x447834u);
    ctx->pc = 0x447830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44782Cu;
    // 0x447830: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44782Cu, 0x447834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447834u;
label_447834:
    // 0x447834: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x447834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_447838:
    // 0x447838: 0xc103628  jal         func_40D8A0
label_44783c:
    if (ctx->pc == 0x44783Cu) {
        ctx->pc = 0x44783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447838u;
        // 0x44783c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447840u;
        goto label_447840;
    }
    ctx->pc = 0x447838u;
    SET_GPR_U32(ctx, 31, 0x447840u);
    ctx->pc = 0x44783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447838u;
    // 0x44783c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x447838u, 0x447840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447840u;
label_447840:
    // 0x447840: 0x10000257  b           . + 4 + (0x257 << 2)
label_447844:
    if (ctx->pc == 0x447844u) {
        ctx->pc = 0x447844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447840u;
        // 0x447844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447848u;
        goto label_447848;
    }
    ctx->pc = 0x447840u;
    {
        const bool branch_taken_0x447840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447840u;
        // 0x447844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447840) {
            ctx->pc = 0x4481A0u;
            goto label_4481a0;
        }
    }
    ctx->pc = 0x447848u;
label_447848:
    // 0x447848: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x447848u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
label_44784c:
    // 0x44784c: 0x8f95bf20  lw          $s5, -0x40E0($gp)
    ctx->pc = 0x44784cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
label_447850:
    // 0x447850: 0x8e970024  lw          $s7, 0x24($s4)
    ctx->pc = 0x447850u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_447854:
    // 0x447854: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x447854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_447858:
    // 0x447858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x447858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44785c:
    // 0x44785c: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x44785cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_447860:
    // 0x447860: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x447860u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
label_447864:
    // 0x447864: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x447864u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_447868:
    // 0x447868: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x447868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44786c:
    // 0x44786c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x44786cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_447870:
    // 0x447870: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x447870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_447874:
    // 0x447874: 0x1c0982d  daddu       $s3, $t6, $zero
    ctx->pc = 0x447874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_447878:
    // 0x447878: 0x1240004b  beqz        $s2, . + 4 + (0x4B << 2)
label_44787c:
    if (ctx->pc == 0x44787Cu) {
        ctx->pc = 0x44787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447878u;
        // 0x44787c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x447880u;
        goto label_447880;
    }
    ctx->pc = 0x447878u;
    {
        const bool branch_taken_0x447878 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x44787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447878u;
        // 0x44787c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x447878) {
            ctx->pc = 0x4479A8u;
            goto label_4479a8;
        }
    }
    ctx->pc = 0x447880u;
label_447880:
    // 0x447880: 0x220c02d  daddu       $t8, $s1, $zero
    ctx->pc = 0x447880u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_447884:
    // 0x447884: 0x240f0028  addiu       $t7, $zero, 0x28
    ctx->pc = 0x447884u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_447888:
    // 0x447888: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x447888u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_44788c:
    // 0x44788c: 0x6f2018  mult        $a0, $v1, $t7
    ctx->pc = 0x44788cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_447890:
    // 0x447890: 0x246a0001  addiu       $t2, $v1, 0x1
    ctx->pc = 0x447890u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_447894:
    // 0x447894: 0x981021  addu        $v0, $a0, $t8
    ctx->pc = 0x447894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
label_447898:
    // 0x447898: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x447898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44789c:
    // 0x44789c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x44789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_4478a0:
    // 0x4478a0: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_4478a4:
    if (ctx->pc == 0x4478A4u) {
        ctx->pc = 0x4478A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4478A0u;
        // 0x4478a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4478A8u;
        goto label_4478a8;
    }
    ctx->pc = 0x4478A0u;
    {
        const bool branch_taken_0x4478a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4478A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4478A0u;
        // 0x4478a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4478a0) {
            ctx->pc = 0x447998u;
            goto label_447998;
        }
    }
    ctx->pc = 0x4478A8u;
label_4478a8:
    // 0x4478a8: 0x8c470024  lw          $a3, 0x24($v0)
    ctx->pc = 0x4478a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_4478ac:
    // 0x4478ac: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x4478acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4478b0:
    // 0x4478b0: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x4478b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_4478b4:
    // 0x4478b4: 0x19200017  blez        $t1, . + 4 + (0x17 << 2)
label_4478b8:
    if (ctx->pc == 0x4478B8u) {
        ctx->pc = 0x4478B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4478B4u;
        // 0x4478b8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4478BCu;
        goto label_4478bc;
    }
    ctx->pc = 0x4478B4u;
    {
        const bool branch_taken_0x4478b4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4478B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4478B4u;
        // 0x4478b8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4478b4) {
            ctx->pc = 0x447914u;
            goto label_447914;
        }
    }
    ctx->pc = 0x4478BCu;
label_4478bc:
    // 0x4478bc: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
label_4478c0:
    if (ctx->pc == 0x4478C0u) {
        ctx->pc = 0x4478C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4478BCu;
        // 0x4478c0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4478C4u;
        goto label_4478c4;
    }
    ctx->pc = 0x4478BCu;
    {
        const bool branch_taken_0x4478bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4478bc) {
            ctx->pc = 0x4478C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4478BCu;
            // 0x4478c0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44793Cu;
            goto label_44793c;
        }
    }
    ctx->pc = 0x4478C4u;
label_4478c4:
    // 0x4478c4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x4478c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4478c8:
    // 0x4478c8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_4478cc:
    if (ctx->pc == 0x4478CCu) {
        ctx->pc = 0x4478CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4478C8u;
        // 0x4478cc: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4478D0u;
        goto label_4478d0;
    }
    ctx->pc = 0x4478C8u;
    {
        const bool branch_taken_0x4478c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4478c8) {
            ctx->pc = 0x4478CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4478C8u;
            // 0x4478cc: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447918u;
            goto label_447918;
        }
    }
    ctx->pc = 0x4478D0u;
label_4478d0:
    // 0x4478d0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4478d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4478d4:
    // 0x4478d4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4478d8:
    if (ctx->pc == 0x4478D8u) {
        ctx->pc = 0x4478D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4478D4u;
        // 0x4478d8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4478DCu;
        goto label_4478dc;
    }
    ctx->pc = 0x4478D4u;
    {
        const bool branch_taken_0x4478d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4478d4) {
            ctx->pc = 0x4478D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4478D4u;
            // 0x4478d8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4478FCu;
            goto label_4478fc;
        }
    }
    ctx->pc = 0x4478DCu;
label_4478dc:
    // 0x4478dc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4478dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4478e0:
    // 0x4478e0: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4478e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4478e4:
    // 0x4478e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4478e8:
    if (ctx->pc == 0x4478E8u) {
        ctx->pc = 0x4478E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4478E4u;
        // 0x4478e8: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4478ECu;
        goto label_4478ec;
    }
    ctx->pc = 0x4478E4u;
    {
        const bool branch_taken_0x4478e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4478E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4478E4u;
        // 0x4478e8: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4478e4) {
            ctx->pc = 0x4478F0u;
            goto label_4478f0;
        }
    }
    ctx->pc = 0x4478ECu;
label_4478ec:
    // 0x4478ec: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4478ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4478f0:
    // 0x4478f0: 0x24e4000c  addiu       $a0, $a3, 0xC
    ctx->pc = 0x4478f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_4478f4:
    // 0x4478f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4478f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4478f8:
    // 0x4478f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4478f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4478fc:
    // 0x4478fc: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4478fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_447900:
    // 0x447900: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_447904:
    if (ctx->pc == 0x447904u) {
        ctx->pc = 0x447904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447900u;
        // 0x447904: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x447908u;
        goto label_447908;
    }
    ctx->pc = 0x447900u;
    {
        const bool branch_taken_0x447900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447900u;
        // 0x447904: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x447900) {
            ctx->pc = 0x44790Cu;
            goto label_44790c;
        }
    }
    ctx->pc = 0x447908u;
label_447908:
    // 0x447908: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x447908u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_44790c:
    // 0x44790c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x44790cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_447910:
    // 0x447910: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x447910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_447914:
    // 0x447914: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x447914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_447918:
    // 0x447918: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x447918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44791c:
    // 0x44791c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_447920:
    if (ctx->pc == 0x447920u) {
        ctx->pc = 0x447920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44791Cu;
        // 0x447920: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x447924u;
        goto label_447924;
    }
    ctx->pc = 0x44791Cu;
    {
        const bool branch_taken_0x44791c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44791Cu;
        // 0x447920: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44791c) {
            ctx->pc = 0x447928u;
            goto label_447928;
        }
    }
    ctx->pc = 0x447924u;
label_447924:
    // 0x447924: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x447924u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_447928:
    // 0x447928: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x447928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_44792c:
    // 0x44792c: 0xc9102b  sltu        $v0, $a2, $t1
    ctx->pc = 0x44792cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_447930:
    // 0x447930: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_447934:
    if (ctx->pc == 0x447934u) {
        ctx->pc = 0x447934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447930u;
        // 0x447934: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447938u;
        goto label_447938;
    }
    ctx->pc = 0x447930u;
    {
        const bool branch_taken_0x447930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447930u;
        // 0x447934: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447930) {
            ctx->pc = 0x447998u;
            goto label_447998;
        }
    }
    ctx->pc = 0x447938u;
label_447938:
    // 0x447938: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x447938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44793c:
    // 0x44793c: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x44793cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_447940:
    // 0x447940: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_447944:
    if (ctx->pc == 0x447944u) {
        ctx->pc = 0x447944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447940u;
        // 0x447944: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x447948u;
        goto label_447948;
    }
    ctx->pc = 0x447940u;
    {
        const bool branch_taken_0x447940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447940u;
        // 0x447944: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x447940) {
            ctx->pc = 0x44794Cu;
            goto label_44794c;
        }
    }
    ctx->pc = 0x447948u;
label_447948:
    // 0x447948: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x447948u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_44794c:
    // 0x44794c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x44794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_447950:
    // 0x447950: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x447950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_447954:
    // 0x447954: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_447958:
    if (ctx->pc == 0x447958u) {
        ctx->pc = 0x447958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447954u;
        // 0x447958: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44795Cu;
        goto label_44795c;
    }
    ctx->pc = 0x447954u;
    {
        const bool branch_taken_0x447954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447954u;
        // 0x447958: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x447954) {
            ctx->pc = 0x447960u;
            goto label_447960;
        }
    }
    ctx->pc = 0x44795Cu;
label_44795c:
    // 0x44795c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x44795cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_447960:
    // 0x447960: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x447960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_447964:
    // 0x447964: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x447964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_447968:
    // 0x447968: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_44796c:
    if (ctx->pc == 0x44796Cu) {
        ctx->pc = 0x44796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447968u;
        // 0x44796c: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x447970u;
        goto label_447970;
    }
    ctx->pc = 0x447968u;
    {
        const bool branch_taken_0x447968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447968u;
        // 0x44796c: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x447968) {
            ctx->pc = 0x447974u;
            goto label_447974;
        }
    }
    ctx->pc = 0x447970u;
label_447970:
    // 0x447970: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x447970u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_447974:
    // 0x447974: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x447974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_447978:
    // 0x447978: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x447978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44797c:
    // 0x44797c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_447980:
    if (ctx->pc == 0x447980u) {
        ctx->pc = 0x447980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44797Cu;
        // 0x447980: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x447984u;
        goto label_447984;
    }
    ctx->pc = 0x44797Cu;
    {
        const bool branch_taken_0x44797c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44797Cu;
        // 0x447980: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44797c) {
            ctx->pc = 0x447988u;
            goto label_447988;
        }
    }
    ctx->pc = 0x447984u;
label_447984:
    // 0x447984: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x447984u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_447988:
    // 0x447988: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x447988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_44798c:
    // 0x44798c: 0xc9102b  sltu        $v0, $a2, $t1
    ctx->pc = 0x44798cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_447990:
    // 0x447990: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_447994:
    if (ctx->pc == 0x447994u) {
        ctx->pc = 0x447994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447990u;
        // 0x447994: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447998u;
        goto label_447998;
    }
    ctx->pc = 0x447990u;
    {
        const bool branch_taken_0x447990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x447994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447990u;
        // 0x447994: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447990) {
            ctx->pc = 0x447938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447938;
        }
    }
    ctx->pc = 0x447998u;
label_447998:
    // 0x447998: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x447998u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_44799c:
    // 0x44799c: 0x6b102b  sltu        $v0, $v1, $t3
    ctx->pc = 0x44799cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_4479a0:
    // 0x4479a0: 0x5440ffbb  bnel        $v0, $zero, . + 4 + (-0x45 << 2)
label_4479a4:
    if (ctx->pc == 0x4479A4u) {
        ctx->pc = 0x4479A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4479A0u;
        // 0x4479a4: 0x6f2018  mult        $a0, $v1, $t7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4479A8u;
        goto label_4479a8;
    }
    ctx->pc = 0x4479A0u;
    {
        const bool branch_taken_0x4479a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4479a0) {
            ctx->pc = 0x4479A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4479A0u;
            // 0x4479a4: 0x6f2018  mult        $a0, $v1, $t7 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x447890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447890;
        }
    }
    ctx->pc = 0x4479A8u;
label_4479a8:
    // 0x4479a8: 0x10ad0003  beq         $a1, $t5, . + 4 + (0x3 << 2)
label_4479ac:
    if (ctx->pc == 0x4479ACu) {
        ctx->pc = 0x4479ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4479A8u;
        // 0x4479ac: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4479B0u;
        goto label_4479b0;
    }
    ctx->pc = 0x4479A8u;
    {
        const bool branch_taken_0x4479a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 13));
        ctx->pc = 0x4479ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4479A8u;
        // 0x4479ac: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4479a8) {
            ctx->pc = 0x4479B8u;
            goto label_4479b8;
        }
    }
    ctx->pc = 0x4479B0u;
label_4479b0:
    // 0x4479b0: 0x1000ffad  b           . + 4 + (-0x53 << 2)
label_4479b4:
    if (ctx->pc == 0x4479B4u) {
        ctx->pc = 0x4479B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4479B0u;
        // 0x4479b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4479B8u;
        goto label_4479b8;
    }
    ctx->pc = 0x4479B0u;
    {
        const bool branch_taken_0x4479b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4479B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4479B0u;
        // 0x4479b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4479b0) {
            ctx->pc = 0x447868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447868;
        }
    }
    ctx->pc = 0x4479B8u;
label_4479b8:
    // 0x4479b8: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x4479b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_4479bc:
    // 0x4479bc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4479bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4479c0:
    // 0x4479c0: 0x24a2e880  addiu       $v0, $a1, -0x1780
    ctx->pc = 0x4479c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_4479c4:
    // 0x4479c4: 0x200682d  daddu       $t5, $s0, $zero
    ctx->pc = 0x4479c4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4479c8:
    // 0x4479c8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4479c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4479cc:
    // 0x4479cc: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x4479ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_4479d0:
    // 0x4479d0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x4479d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_4479d4:
    // 0x4479d4: 0xd78c0  sll         $t7, $t5, 3
    ctx->pc = 0x4479d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_4479d8:
    // 0x4479d8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x4479d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4479dc:
    // 0x4479dc: 0x25b0ffff  addiu       $s0, $t5, -0x1
    ctx->pc = 0x4479dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_4479e0:
    // 0x4479e0: 0x647018  mult        $t6, $v1, $a0
    ctx->pc = 0x4479e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_4479e4:
    // 0x4479e4: 0x659018  mult        $s2, $v1, $a1
    ctx->pc = 0x4479e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_4479e8:
    // 0x4479e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4479e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4479ec:
    // 0x4479ec: 0x1180001b  beqz        $t4, . + 4 + (0x1B << 2)
label_4479f0:
    if (ctx->pc == 0x4479F0u) {
        ctx->pc = 0x4479F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4479ECu;
        // 0x4479f0: 0x1823818  mult        $a3, $t4, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4479F4u;
        goto label_4479f4;
    }
    ctx->pc = 0x4479ECu;
    {
        const bool branch_taken_0x4479ec = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x4479F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4479ECu;
        // 0x4479f0: 0x1823818  mult        $a3, $t4, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4479ec) {
            ctx->pc = 0x447A5Cu;
            goto label_447a5c;
        }
    }
    ctx->pc = 0x4479F4u;
label_4479f4:
    // 0x4479f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4479f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4479f8:
    // 0x4479f8: 0x31850003  andi        $a1, $t4, 0x3
    ctx->pc = 0x4479f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
label_4479fc:
    // 0x4479fc: 0x1980000c  blez        $t4, . + 4 + (0xC << 2)
label_447a00:
    if (ctx->pc == 0x447A00u) {
        ctx->pc = 0x447A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4479FCu;
        // 0x447a00: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447A04u;
        goto label_447a04;
    }
    ctx->pc = 0x4479FCu;
    {
        const bool branch_taken_0x4479fc = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x447A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4479FCu;
        // 0x447a00: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4479fc) {
            ctx->pc = 0x447A30u;
            goto label_447a30;
        }
    }
    ctx->pc = 0x447A04u;
label_447a04:
    // 0x447a04: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
label_447a08:
    if (ctx->pc == 0x447A08u) {
        ctx->pc = 0x447A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447A04u;
        // 0x447a08: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447A0Cu;
        goto label_447a0c;
    }
    ctx->pc = 0x447A04u;
    {
        const bool branch_taken_0x447a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x447a04) {
            ctx->pc = 0x447A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447A04u;
            // 0x447a08: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447A44u;
            goto label_447a44;
        }
    }
    ctx->pc = 0x447A0Cu;
label_447a0c:
    // 0x447a0c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x447a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_447a10:
    // 0x447a10: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_447a14:
    if (ctx->pc == 0x447A14u) {
        ctx->pc = 0x447A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447A10u;
        // 0x447a14: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447A18u;
        goto label_447a18;
    }
    ctx->pc = 0x447A10u;
    {
        const bool branch_taken_0x447a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x447a10) {
            ctx->pc = 0x447A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447A10u;
            // 0x447a14: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447A34u;
            goto label_447a34;
        }
    }
    ctx->pc = 0x447A18u;
label_447a18:
    // 0x447a18: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x447a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_447a1c:
    // 0x447a1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_447a20:
    if (ctx->pc == 0x447A20u) {
        ctx->pc = 0x447A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447A1Cu;
        // 0x447a20: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447A24u;
        goto label_447a24;
    }
    ctx->pc = 0x447A1Cu;
    {
        const bool branch_taken_0x447a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x447A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447A1Cu;
        // 0x447a20: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447a1c) {
            ctx->pc = 0x447A2Cu;
            goto label_447a2c;
        }
    }
    ctx->pc = 0x447A24u;
label_447a24:
    // 0x447a24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x447a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_447a28:
    // 0x447a28: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x447a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_447a2c:
    // 0x447a2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x447a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_447a30:
    // 0x447a30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x447a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_447a34:
    // 0x447a34: 0x8c102b  sltu        $v0, $a0, $t4
    ctx->pc = 0x447a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_447a38:
    // 0x447a38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_447a3c:
    if (ctx->pc == 0x447A3Cu) {
        ctx->pc = 0x447A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447A38u;
        // 0x447a3c: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447A40u;
        goto label_447a40;
    }
    ctx->pc = 0x447A38u;
    {
        const bool branch_taken_0x447a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447A38u;
        // 0x447a3c: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447a38) {
            ctx->pc = 0x447A5Cu;
            goto label_447a5c;
        }
    }
    ctx->pc = 0x447A40u;
label_447a40:
    // 0x447a40: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x447a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_447a44:
    // 0x447a44: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x447a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_447a48:
    // 0x447a48: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x447a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_447a4c:
    // 0x447a4c: 0x8c102b  sltu        $v0, $a0, $t4
    ctx->pc = 0x447a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_447a50:
    // 0x447a50: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x447a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_447a54:
    // 0x447a54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_447a58:
    if (ctx->pc == 0x447A58u) {
        ctx->pc = 0x447A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447A54u;
        // 0x447a58: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447A5Cu;
        goto label_447a5c;
    }
    ctx->pc = 0x447A54u;
    {
        const bool branch_taken_0x447a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x447A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447A54u;
        // 0x447a58: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447a54) {
            ctx->pc = 0x447A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447a40;
        }
    }
    ctx->pc = 0x447A5Cu;
label_447a5c:
    // 0x447a5c: 0x18d2018  mult        $a0, $t4, $t5
    ctx->pc = 0x447a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_447a60:
    // 0x447a60: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x447a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_447a64:
    // 0x447a64: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x447a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_447a68:
    // 0x447a68: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x447a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_447a6c:
    // 0x447a6c: 0x1a24818  mult        $t1, $t5, $v0
    ctx->pc = 0x447a6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_447a70:
    // 0x447a70: 0x1831818  mult        $v1, $t4, $v1
    ctx->pc = 0x447a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_447a74:
    // 0x447a74: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x447a74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
label_447a78:
    // 0x447a78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x447a78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_447a7c:
    // 0x447a7c: 0x852818  mult        $a1, $a0, $a1
    ctx->pc = 0x447a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_447a80:
    // 0x447a80: 0x1933018  mult        $a2, $t4, $s3
    ctx->pc = 0x447a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_447a84:
    // 0x447a84: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x447a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_447a88:
    // 0x447a88: 0x12f4021  addu        $t0, $t1, $t7
    ctx->pc = 0x447a88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
label_447a8c:
    // 0x447a8c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x447a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_447a90:
    // 0x447a90: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x447a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_447a94:
    // 0x447a94: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x447a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_447a98:
    // 0x447a98: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x447a98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_447a9c:
    // 0x447a9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x447a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_447aa0:
    // 0x447aa0: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x447aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_447aa4:
    // 0x447aa4: 0x1180004a  beqz        $t4, . + 4 + (0x4A << 2)
label_447aa8:
    if (ctx->pc == 0x447AA8u) {
        ctx->pc = 0x447AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447AA4u;
        // 0x447aa8: 0x1c37021  addu        $t6, $t6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447AACu;
        goto label_447aac;
    }
    ctx->pc = 0x447AA4u;
    {
        const bool branch_taken_0x447aa4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x447AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447AA4u;
        // 0x447aa8: 0x1c37021  addu        $t6, $t6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447aa4) {
            ctx->pc = 0x447BD0u;
            goto label_447bd0;
        }
    }
    ctx->pc = 0x447AACu;
label_447aac:
    // 0x447aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x447aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_447ab0:
    // 0x447ab0: 0x31830003  andi        $v1, $t4, 0x3
    ctx->pc = 0x447ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
label_447ab4:
    // 0x447ab4: 0x1980001a  blez        $t4, . + 4 + (0x1A << 2)
label_447ab8:
    if (ctx->pc == 0x447AB8u) {
        ctx->pc = 0x447AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447AB4u;
        // 0x447ab8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447ABCu;
        goto label_447abc;
    }
    ctx->pc = 0x447AB4u;
    {
        const bool branch_taken_0x447ab4 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x447AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447AB4u;
        // 0x447ab8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447ab4) {
            ctx->pc = 0x447B20u;
            goto label_447b20;
        }
    }
    ctx->pc = 0x447ABCu;
label_447abc:
    // 0x447abc: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_447ac0:
    if (ctx->pc == 0x447AC0u) {
        ctx->pc = 0x447AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447ABCu;
        // 0x447ac0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x447AC4u;
        goto label_447ac4;
    }
    ctx->pc = 0x447ABCu;
    {
        const bool branch_taken_0x447abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x447AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447ABCu;
        // 0x447ac0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x447abc) {
            ctx->pc = 0x447B4Cu;
            goto label_447b4c;
        }
    }
    ctx->pc = 0x447AC4u;
label_447ac4:
    // 0x447ac4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_447ac8:
    if (ctx->pc == 0x447AC8u) {
        ctx->pc = 0x447AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447AC4u;
        // 0x447ac8: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447ACCu;
        goto label_447acc;
    }
    ctx->pc = 0x447AC4u;
    {
        const bool branch_taken_0x447ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x447ac4) {
            ctx->pc = 0x447AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447AC4u;
            // 0x447ac8: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447B24u;
            goto label_447b24;
        }
    }
    ctx->pc = 0x447ACCu;
label_447acc:
    // 0x447acc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x447accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_447ad0:
    // 0x447ad0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_447ad4:
    if (ctx->pc == 0x447AD4u) {
        ctx->pc = 0x447AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447AD0u;
        // 0x447ad4: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447AD8u;
        goto label_447ad8;
    }
    ctx->pc = 0x447AD0u;
    {
        const bool branch_taken_0x447ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x447ad0) {
            ctx->pc = 0x447AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447AD0u;
            // 0x447ad4: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447B00u;
            goto label_447b00;
        }
    }
    ctx->pc = 0x447AD8u;
label_447ad8:
    // 0x447ad8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x447ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_447adc:
    // 0x447adc: 0x24860028  addiu       $a2, $a0, 0x28
    ctx->pc = 0x447adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_447ae0:
    // 0x447ae0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x447ae0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_447ae4:
    // 0x447ae4: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x447ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_447ae8:
    // 0x447ae8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x447ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_447aec:
    // 0x447aec: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x447aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_447af0:
    // 0x447af0: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x447af0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_447af4:
    // 0x447af4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x447af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_447af8:
    // 0x447af8: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x447af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_447afc:
    // 0x447afc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x447afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_447b00:
    // 0x447b00: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x447b00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_447b04:
    // 0x447b04: 0x24c60028  addiu       $a2, $a2, 0x28
    ctx->pc = 0x447b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
label_447b08:
    // 0x447b08: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x447b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_447b0c:
    // 0x447b0c: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x447b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_447b10:
    // 0x447b10: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x447b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_447b14:
    // 0x447b14: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x447b14u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_447b18:
    // 0x447b18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x447b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_447b1c:
    // 0x447b1c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x447b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_447b20:
    // 0x447b20: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x447b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_447b24:
    // 0x447b24: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x447b24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_447b28:
    // 0x447b28: 0x24c60028  addiu       $a2, $a2, 0x28
    ctx->pc = 0x447b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
label_447b2c:
    // 0x447b2c: 0x14c582b  sltu        $t3, $t2, $t4
    ctx->pc = 0x447b2cu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_447b30:
    // 0x447b30: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x447b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_447b34:
    // 0x447b34: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x447b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_447b38:
    // 0x447b38: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x447b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_447b3c:
    // 0x447b3c: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x447b3cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_447b40:
    // 0x447b40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x447b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_447b44:
    // 0x447b44: 0x11600022  beqz        $t3, . + 4 + (0x22 << 2)
label_447b48:
    if (ctx->pc == 0x447B48u) {
        ctx->pc = 0x447B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447B44u;
        // 0x447b48: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447B4Cu;
        goto label_447b4c;
    }
    ctx->pc = 0x447B44u;
    {
        const bool branch_taken_0x447b44 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x447B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447B44u;
        // 0x447b48: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447b44) {
            ctx->pc = 0x447BD0u;
            goto label_447bd0;
        }
    }
    ctx->pc = 0x447B4Cu;
label_447b4c:
    // 0x447b4c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x447b4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_447b50:
    // 0x447b50: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x447b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_447b54:
    // 0x447b54: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x447b54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_447b58:
    // 0x447b58: 0x8d270028  lw          $a3, 0x28($t1)
    ctx->pc = 0x447b58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
label_447b5c:
    // 0x447b5c: 0x14c582b  sltu        $t3, $t2, $t4
    ctx->pc = 0x447b5cu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_447b60:
    // 0x447b60: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x447b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_447b64:
    // 0x447b64: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x447b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_447b68:
    // 0x447b68: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x447b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_447b6c:
    // 0x447b6c: 0x8ce50034  lw          $a1, 0x34($a3)
    ctx->pc = 0x447b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_447b70:
    // 0x447b70: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x447b70u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_447b74:
    // 0x447b74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x447b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_447b78:
    // 0x447b78: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x447b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_447b7c:
    // 0x447b7c: 0x8d260050  lw          $a2, 0x50($t1)
    ctx->pc = 0x447b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
label_447b80:
    // 0x447b80: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x447b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_447b84:
    // 0x447b84: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x447b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_447b88:
    // 0x447b88: 0x45400b  movn        $t0, $v0, $a1
    ctx->pc = 0x447b88u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
label_447b8c:
    // 0x447b8c: 0x8d270078  lw          $a3, 0x78($t1)
    ctx->pc = 0x447b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
label_447b90:
    // 0x447b90: 0x8cc50034  lw          $a1, 0x34($a2)
    ctx->pc = 0x447b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_447b94:
    // 0x447b94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x447b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_447b98:
    // 0x447b98: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x447b98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_447b9c:
    // 0x447b9c: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x447b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_447ba0:
    // 0x447ba0: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x447ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_447ba4:
    // 0x447ba4: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x447ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_447ba8:
    // 0x447ba8: 0x45400b  movn        $t0, $v0, $a1
    ctx->pc = 0x447ba8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
label_447bac:
    // 0x447bac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x447bacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_447bb0:
    // 0x447bb0: 0x8ce50034  lw          $a1, 0x34($a3)
    ctx->pc = 0x447bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_447bb4:
    // 0x447bb4: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x447bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_447bb8:
    // 0x447bb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x447bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_447bbc:
    // 0x447bbc: 0x252900a0  addiu       $t1, $t1, 0xA0
    ctx->pc = 0x447bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
label_447bc0:
    // 0x447bc0: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x447bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_447bc4:
    // 0x447bc4: 0x45400b  movn        $t0, $v0, $a1
    ctx->pc = 0x447bc4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
label_447bc8:
    // 0x447bc8: 0x1560ffe1  bnez        $t3, . + 4 + (-0x1F << 2)
label_447bcc:
    if (ctx->pc == 0x447BCCu) {
        ctx->pc = 0x447BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447BC8u;
        // 0x447bcc: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447BD0u;
        goto label_447bd0;
    }
    ctx->pc = 0x447BC8u;
    {
        const bool branch_taken_0x447bc8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x447BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447BC8u;
        // 0x447bcc: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447bc8) {
            ctx->pc = 0x447B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447b50;
        }
    }
    ctx->pc = 0x447BD0u;
label_447bd0:
    // 0x447bd0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x447bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_447bd4:
    // 0x447bd4: 0x25030030  addiu       $v1, $t0, 0x30
    ctx->pc = 0x447bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_447bd8:
    // 0x447bd8: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x447bd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_447bdc:
    // 0x447bdc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x447bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_447be0:
    // 0x447be0: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x447be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_447be4:
    // 0x447be4: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x447be4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
label_447be8:
    // 0x447be8: 0x20e102b  sltu        $v0, $s0, $t6
    ctx->pc = 0x447be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_447bec:
    // 0x447bec: 0x1c2800b  movn        $s0, $t6, $v0
    ctx->pc = 0x447becu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 14));
label_447bf0:
    // 0x447bf0: 0x2f0182b  sltu        $v1, $s7, $s0
    ctx->pc = 0x447bf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_447bf4:
    // 0x447bf4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_447bf8:
    if (ctx->pc == 0x447BF8u) {
        ctx->pc = 0x447BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447BF4u;
        // 0x447bf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447BFCu;
        goto label_447bfc;
    }
    ctx->pc = 0x447BF4u;
    {
        const bool branch_taken_0x447bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x447BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447BF4u;
        // 0x447bf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447bf4) {
            ctx->pc = 0x447C0Cu;
            goto label_447c0c;
        }
    }
    ctx->pc = 0x447BFCu;
label_447bfc:
    // 0x447bfc: 0xc1118a0  jal         func_446280
label_447c00:
    if (ctx->pc == 0x447C00u) {
        ctx->pc = 0x447C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447BFCu;
        // 0x447c00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447C04u;
        goto label_447c04;
    }
    ctx->pc = 0x447BFCu;
    SET_GPR_U32(ctx, 31, 0x447C04u);
    ctx->pc = 0x447C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447BFCu;
    // 0x447c00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446280u, 0x447BFCu, 0x447C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447C04u;
label_447c04:
    // 0x447c04: 0x50400166  beql        $v0, $zero, . + 4 + (0x166 << 2)
label_447c08:
    if (ctx->pc == 0x447C08u) {
        ctx->pc = 0x447C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447C04u;
        // 0x447c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447C0Cu;
        goto label_447c0c;
    }
    ctx->pc = 0x447C04u;
    {
        const bool branch_taken_0x447c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447c04) {
            ctx->pc = 0x447C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447C04u;
            // 0x447c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4481A0u;
            goto label_4481a0;
        }
    }
    ctx->pc = 0x447C0Cu;
label_447c0c:
    // 0x447c0c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x447c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_447c10:
    // 0x447c10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x447c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_447c14:
    // 0x447c14: 0xaf80af34  sw          $zero, -0x50CC($gp)
    ctx->pc = 0x447c14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946612), GPR_U32(ctx, 0));
label_447c18:
    // 0x447c18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x447c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_447c1c:
    // 0x447c1c: 0xc111cca  jal         func_447328
label_447c20:
    if (ctx->pc == 0x447C20u) {
        ctx->pc = 0x447C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447C1Cu;
        // 0x447c20: 0xaf82af30  sw          $v0, -0x50D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447C24u;
        goto label_447c24;
    }
    ctx->pc = 0x447C1Cu;
    SET_GPR_U32(ctx, 31, 0x447C24u);
    ctx->pc = 0x447C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447C1Cu;
    // 0x447c20: 0xaf82af30  sw          $v0, -0x50D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447328u, 0x447C1Cu, 0x447C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447C24u;
label_447c24:
    // 0x447c24: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x447c24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_447c28:
    // 0x447c28: 0x1280015d  beqz        $s4, . + 4 + (0x15D << 2)
label_447c2c:
    if (ctx->pc == 0x447C2Cu) {
        ctx->pc = 0x447C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447C28u;
        // 0x447c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447C30u;
        goto label_447c30;
    }
    ctx->pc = 0x447C28u;
    {
        const bool branch_taken_0x447c28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x447C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447C28u;
        // 0x447c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447c28) {
            ctx->pc = 0x4481A0u;
            goto label_4481a0;
        }
    }
    ctx->pc = 0x447C30u;
label_447c30:
    // 0x447c30: 0x8f82bf20  lw          $v0, -0x40E0($gp)
    ctx->pc = 0x447c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
label_447c34:
    // 0x447c34: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x447c34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
label_447c38:
    // 0x447c38: 0x2544e880  addiu       $a0, $t2, -0x1780
    ctx->pc = 0x447c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961280));
label_447c3c:
    // 0x447c3c: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x447c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_447c40:
    // 0x447c40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x447c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_447c44:
    // 0x447c44: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x447c44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_447c48:
    // 0x447c48: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x447c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_447c4c:
    // 0x447c4c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x447c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_447c50:
    // 0x447c50: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x447c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_447c54:
    // 0x447c54: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x447c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_447c58:
    // 0x447c58: 0x892818  mult        $a1, $a0, $t1
    ctx->pc = 0x447c58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_447c5c:
    // 0x447c5c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x447c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_447c60:
    // 0x447c60: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x447c60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_447c64:
    // 0x447c64: 0x24f1ffff  addiu       $s1, $a3, -0x1
    ctx->pc = 0x447c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_447c68:
    // 0x447c68: 0x504021  addu        $t0, $v0, $s0
    ctx->pc = 0x447c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_447c6c:
    // 0x447c6c: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x447c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_447c70:
    // 0x447c70: 0x2508fff4  addiu       $t0, $t0, -0xC
    ctx->pc = 0x447c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967284));
label_447c74:
    // 0x447c74: 0xc5a821  addu        $s5, $a2, $a1
    ctx->pc = 0x447c74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_447c78:
    // 0x447c78: 0x2a49821  addu        $s3, $s5, $a0
    ctx->pc = 0x447c78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_447c7c:
    // 0x447c7c: 0x620006c  bltz        $s1, . + 4 + (0x6C << 2)
label_447c80:
    if (ctx->pc == 0x447C80u) {
        ctx->pc = 0x447C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447C7Cu;
        // 0x447c80: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447C84u;
        goto label_447c84;
    }
    ctx->pc = 0x447C7Cu;
    {
        const bool branch_taken_0x447c7c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x447C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447C7Cu;
        // 0x447c80: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447c7c) {
            ctx->pc = 0x447E30u;
            goto label_447e30;
        }
    }
    ctx->pc = 0x447C84u;
label_447c84:
    // 0x447c84: 0x111027  nor         $v0, $zero, $s1
    ctx->pc = 0x447c84u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
label_447c88:
    // 0x447c88: 0x2294818  mult        $t1, $s1, $t1
    ctx->pc = 0x447c88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_447c8c:
    // 0x447c8c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x447c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_447c90:
    // 0x447c90: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x447c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_447c94:
    // 0x447c94: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_447c98:
    if (ctx->pc == 0x447C98u) {
        ctx->pc = 0x447C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447C94u;
        // 0x447c98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447C9Cu;
        goto label_447c9c;
    }
    ctx->pc = 0x447C94u;
    {
        const bool branch_taken_0x447c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x447C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447C94u;
        // 0x447c98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447c94) {
            ctx->pc = 0x447D6Cu;
            goto label_447d6c;
        }
    }
    ctx->pc = 0x447C9Cu;
label_447c9c:
    // 0x447c9c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x447c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_447ca0:
    // 0x447ca0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_447ca4:
    if (ctx->pc == 0x447CA4u) {
        ctx->pc = 0x447CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447CA0u;
        // 0x447ca4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x447CA8u;
        goto label_447ca8;
    }
    ctx->pc = 0x447CA0u;
    {
        const bool branch_taken_0x447ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447CA0u;
        // 0x447ca4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x447ca0) {
            ctx->pc = 0x447D2Cu;
            goto label_447d2c;
        }
    }
    ctx->pc = 0x447CA8u;
label_447ca8:
    // 0x447ca8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_447cac:
    if (ctx->pc == 0x447CACu) {
        ctx->pc = 0x447CB0u;
        goto label_447cb0;
    }
    ctx->pc = 0x447CA8u;
    {
        const bool branch_taken_0x447ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447ca8) {
            ctx->pc = 0x447CF0u;
            goto label_447cf0;
        }
    }
    ctx->pc = 0x447CB0u;
label_447cb0:
    // 0x447cb0: 0x6a6b0007  ldl         $t3, 0x7($s3)
    ctx->pc = 0x447cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_447cb4:
    // 0x447cb4: 0x6e6b0000  ldr         $t3, 0x0($s3)
    ctx->pc = 0x447cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_447cb8:
    // 0x447cb8: 0x8e6c0008  lw          $t4, 0x8($s3)
    ctx->pc = 0x447cb8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_447cbc:
    // 0x447cbc: 0xb10b0007  sdl         $t3, 0x7($t0)
    ctx->pc = 0x447cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_447cc0:
    // 0x447cc0: 0xb50b0000  sdr         $t3, 0x0($t0)
    ctx->pc = 0x447cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_447cc4:
    // 0x447cc4: 0x2504fff4  addiu       $a0, $t0, -0xC
    ctx->pc = 0x447cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967284));
label_447cc8:
    // 0x447cc8: 0xad0c0008  sw          $t4, 0x8($t0)
    ctx->pc = 0x447cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 12));
label_447ccc:
    // 0x447ccc: 0x24f1fffe  addiu       $s1, $a3, -0x2
    ctx->pc = 0x447cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_447cd0:
    // 0x447cd0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x447cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_447cd4:
    // 0x447cd4: 0x2662fff4  addiu       $v0, $s3, -0xC
    ctx->pc = 0x447cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
label_447cd8:
    // 0x447cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x447cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_447cdc:
    // 0x447cdc: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x447cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_447ce0:
    // 0x447ce0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x447ce0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_447ce4:
    // 0x447ce4: 0xac68001c  sw          $t0, 0x1C($v1)
    ctx->pc = 0x447ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 8));
label_447ce8:
    // 0x447ce8: 0x2529ffd8  addiu       $t1, $t1, -0x28
    ctx->pc = 0x447ce8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967256));
label_447cec:
    // 0x447cec: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x447cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_447cf0:
    // 0x447cf0: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x447cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_447cf4:
    // 0x447cf4: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x447cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_447cf8:
    // 0x447cf8: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x447cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_447cfc:
    // 0x447cfc: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x447cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_447d00:
    // 0x447d00: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x447d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_447d04:
    // 0x447d04: 0x2673fff4  addiu       $s3, $s3, -0xC
    ctx->pc = 0x447d04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
label_447d08:
    // 0x447d08: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x447d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_447d0c:
    // 0x447d0c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x447d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_447d10:
    // 0x447d10: 0x24a5fff4  addiu       $a1, $a1, -0xC
    ctx->pc = 0x447d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
label_447d14:
    // 0x447d14: 0x2484fff4  addiu       $a0, $a0, -0xC
    ctx->pc = 0x447d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
label_447d18:
    // 0x447d18: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x447d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_447d1c:
    // 0x447d1c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x447d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_447d20:
    // 0x447d20: 0xac48001c  sw          $t0, 0x1C($v0)
    ctx->pc = 0x447d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 8));
label_447d24:
    // 0x447d24: 0x2529ffd8  addiu       $t1, $t1, -0x28
    ctx->pc = 0x447d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967256));
label_447d28:
    // 0x447d28: 0x2508fff4  addiu       $t0, $t0, -0xC
    ctx->pc = 0x447d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967284));
label_447d2c:
    // 0x447d2c: 0x68ac0007  ldl         $t4, 0x7($a1)
    ctx->pc = 0x447d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_447d30:
    // 0x447d30: 0x6cac0000  ldr         $t4, 0x0($a1)
    ctx->pc = 0x447d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_447d34:
    // 0x447d34: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x447d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_447d38:
    // 0x447d38: 0xb08c0007  sdl         $t4, 0x7($a0)
    ctx->pc = 0x447d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_447d3c:
    // 0x447d3c: 0xb48c0000  sdr         $t4, 0x0($a0)
    ctx->pc = 0x447d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_447d40:
    // 0x447d40: 0x2673fff4  addiu       $s3, $s3, -0xC
    ctx->pc = 0x447d40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
label_447d44:
    // 0x447d44: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x447d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_447d48:
    // 0x447d48: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x447d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_447d4c:
    // 0x447d4c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x447d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_447d50:
    // 0x447d50: 0x24a5fff4  addiu       $a1, $a1, -0xC
    ctx->pc = 0x447d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
label_447d54:
    // 0x447d54: 0x2484fff4  addiu       $a0, $a0, -0xC
    ctx->pc = 0x447d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
label_447d58:
    // 0x447d58: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x447d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_447d5c:
    // 0x447d5c: 0xac48001c  sw          $t0, 0x1C($v0)
    ctx->pc = 0x447d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 8));
label_447d60:
    // 0x447d60: 0x2529ffd8  addiu       $t1, $t1, -0x28
    ctx->pc = 0x447d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967256));
label_447d64:
    // 0x447d64: 0x6200032  bltz        $s1, . + 4 + (0x32 << 2)
label_447d68:
    if (ctx->pc == 0x447D68u) {
        ctx->pc = 0x447D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447D64u;
        // 0x447d68: 0x2508fff4  addiu       $t0, $t0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447D6Cu;
        goto label_447d6c;
    }
    ctx->pc = 0x447D64u;
    {
        const bool branch_taken_0x447d64 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x447D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447D64u;
        // 0x447d68: 0x2508fff4  addiu       $t0, $t0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447d64) {
            ctx->pc = 0x447E30u;
            goto label_447e30;
        }
    }
    ctx->pc = 0x447D6Cu;
label_447d6c:
    // 0x447d6c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x447d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_447d70:
    // 0x447d70: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x447d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_447d74:
    // 0x447d74: 0x0  nop
    ctx->pc = 0x447d74u;
    // NOP
label_447d78:
    // 0x447d78: 0x68ca0007  ldl         $t2, 0x7($a2)
    ctx->pc = 0x447d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_447d7c:
    // 0x447d7c: 0x6cca0000  ldr         $t2, 0x0($a2)
    ctx->pc = 0x447d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_447d80:
    // 0x447d80: 0x8ccb0008  lw          $t3, 0x8($a2)
    ctx->pc = 0x447d80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_447d84:
    // 0x447d84: 0xb0ea0007  sdl         $t2, 0x7($a3)
    ctx->pc = 0x447d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_447d88:
    // 0x447d88: 0xb4ea0000  sdr         $t2, 0x0($a3)
    ctx->pc = 0x447d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_447d8c:
    // 0x447d8c: 0x2503fff4  addiu       $v1, $t0, -0xC
    ctx->pc = 0x447d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967284));
label_447d90:
    // 0x447d90: 0xaceb0008  sw          $t3, 0x8($a3)
    ctx->pc = 0x447d90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 11));
label_447d94:
    // 0x447d94: 0x2504ffe8  addiu       $a0, $t0, -0x18
    ctx->pc = 0x447d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967272));
label_447d98:
    // 0x447d98: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x447d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_447d9c:
    // 0x447d9c: 0x2505ffdc  addiu       $a1, $t0, -0x24
    ctx->pc = 0x447d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967260));
label_447da0:
    // 0x447da0: 0x2673ffd0  addiu       $s3, $s3, -0x30
    ctx->pc = 0x447da0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967248));
label_447da4:
    // 0x447da4: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x447da4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_447da8:
    // 0x447da8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x447da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_447dac:
    // 0x447dac: 0xac48001c  sw          $t0, 0x1C($v0)
    ctx->pc = 0x447dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 8));
label_447db0:
    // 0x447db0: 0x68cafffb  ldl         $t2, -0x5($a2)
    ctx->pc = 0x447db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_447db4:
    // 0x447db4: 0x6ccafff4  ldr         $t2, -0xC($a2)
    ctx->pc = 0x447db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_447db8:
    // 0x447db8: 0x8ccbfffc  lw          $t3, -0x4($a2)
    ctx->pc = 0x447db8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_447dbc:
    // 0x447dbc: 0xb0eafffb  sdl         $t2, -0x5($a3)
    ctx->pc = 0x447dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_447dc0:
    // 0x447dc0: 0xb4eafff4  sdr         $t2, -0xC($a3)
    ctx->pc = 0x447dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_447dc4:
    // 0x447dc4: 0xacebfffc  sw          $t3, -0x4($a3)
    ctx->pc = 0x447dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967292), GPR_U32(ctx, 11));
label_447dc8:
    // 0x447dc8: 0x2508ffd0  addiu       $t0, $t0, -0x30
    ctx->pc = 0x447dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
label_447dcc:
    // 0x447dcc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x447dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_447dd0:
    // 0x447dd0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x447dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_447dd4:
    // 0x447dd4: 0xac43fff4  sw          $v1, -0xC($v0)
    ctx->pc = 0x447dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 3));
label_447dd8:
    // 0x447dd8: 0x68c3ffef  ldl         $v1, -0x11($a2)
    ctx->pc = 0x447dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_447ddc:
    // 0x447ddc: 0x6cc3ffe8  ldr         $v1, -0x18($a2)
    ctx->pc = 0x447ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_447de0:
    // 0x447de0: 0x8ccafff0  lw          $t2, -0x10($a2)
    ctx->pc = 0x447de0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_447de4:
    // 0x447de4: 0xb0e3ffef  sdl         $v1, -0x11($a3)
    ctx->pc = 0x447de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_447de8:
    // 0x447de8: 0xb4e3ffe8  sdr         $v1, -0x18($a3)
    ctx->pc = 0x447de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_447dec:
    // 0x447dec: 0xaceafff0  sw          $t2, -0x10($a3)
    ctx->pc = 0x447decu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967280), GPR_U32(ctx, 10));
label_447df0:
    // 0x447df0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x447df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_447df4:
    // 0x447df4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x447df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_447df8:
    // 0x447df8: 0xac44ffcc  sw          $a0, -0x34($v0)
    ctx->pc = 0x447df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967244), GPR_U32(ctx, 4));
label_447dfc:
    // 0x447dfc: 0x68c2ffe3  ldl         $v0, -0x1D($a2)
    ctx->pc = 0x447dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294967267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_447e00:
    // 0x447e00: 0x6cc2ffdc  ldr         $v0, -0x24($a2)
    ctx->pc = 0x447e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294967260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_447e04:
    // 0x447e04: 0x8cc3ffe4  lw          $v1, -0x1C($a2)
    ctx->pc = 0x447e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967268)));
label_447e08:
    // 0x447e08: 0xb0e2ffe3  sdl         $v0, -0x1D($a3)
    ctx->pc = 0x447e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294967267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_447e0c:
    // 0x447e0c: 0xb4e2ffdc  sdr         $v0, -0x24($a3)
    ctx->pc = 0x447e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294967260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_447e10:
    // 0x447e10: 0xace3ffe4  sw          $v1, -0x1C($a3)
    ctx->pc = 0x447e10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967268), GPR_U32(ctx, 3));
label_447e14:
    // 0x447e14: 0x24c6ffd0  addiu       $a2, $a2, -0x30
    ctx->pc = 0x447e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
label_447e18:
    // 0x447e18: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x447e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
label_447e1c:
    // 0x447e1c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x447e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_447e20:
    // 0x447e20: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x447e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_447e24:
    // 0x447e24: 0xac45ffa4  sw          $a1, -0x5C($v0)
    ctx->pc = 0x447e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967204), GPR_U32(ctx, 5));
label_447e28:
    // 0x447e28: 0x621ffd3  bgez        $s1, . + 4 + (-0x2D << 2)
label_447e2c:
    if (ctx->pc == 0x447E2Cu) {
        ctx->pc = 0x447E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447E28u;
        // 0x447e2c: 0x2529ff60  addiu       $t1, $t1, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447E30u;
        goto label_447e30;
    }
    ctx->pc = 0x447E28u;
    {
        const bool branch_taken_0x447e28 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x447E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447E28u;
        // 0x447e2c: 0x2529ff60  addiu       $t1, $t1, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447e28) {
            ctx->pc = 0x447D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447d78;
        }
    }
    ctx->pc = 0x447E30u;
label_447e30:
    // 0x447e30: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x447e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_447e34:
    // 0x447e34: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x447e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_447e38:
    // 0x447e38: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x447e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_447e3c:
    // 0x447e3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x447e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_447e40:
    // 0x447e40: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x447e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_447e44:
    // 0x447e44: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_447e48:
    if (ctx->pc == 0x447E48u) {
        ctx->pc = 0x447E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447E44u;
        // 0x447e48: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447E4Cu;
        goto label_447e4c;
    }
    ctx->pc = 0x447E44u;
    {
        const bool branch_taken_0x447e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x447E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447E44u;
        // 0x447e48: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447e44) {
            ctx->pc = 0x447EB4u;
            goto label_447eb4;
        }
    }
    ctx->pc = 0x447E4Cu;
label_447e4c:
    // 0x447e4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x447e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_447e50:
    // 0x447e50: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x447e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_447e54:
    // 0x447e54: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x447e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_447e58:
    // 0x447e58: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x447e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_447e5c:
    // 0x447e5c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_447e60:
    if (ctx->pc == 0x447E60u) {
        ctx->pc = 0x447E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447E5Cu;
        // 0x447e60: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447E64u;
        goto label_447e64;
    }
    ctx->pc = 0x447E5Cu;
    {
        const bool branch_taken_0x447e5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x447E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447E5Cu;
        // 0x447e60: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447e5c) {
            ctx->pc = 0x447E6Cu;
            goto label_447e6c;
        }
    }
    ctx->pc = 0x447E64u;
label_447e64:
    // 0x447e64: 0x10000007  b           . + 4 + (0x7 << 2)
label_447e68:
    if (ctx->pc == 0x447E68u) {
        ctx->pc = 0x447E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447E64u;
        // 0x447e68: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447E6Cu;
        goto label_447e6c;
    }
    ctx->pc = 0x447E64u;
    {
        const bool branch_taken_0x447e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447E64u;
        // 0x447e68: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447e64) {
            ctx->pc = 0x447E84u;
            goto label_447e84;
        }
    }
    ctx->pc = 0x447E6Cu;
label_447e6c:
    // 0x447e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x447e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_447e70:
    // 0x447e70: 0xc0bb778  jal         func_2EDDE0
label_447e74:
    if (ctx->pc == 0x447E74u) {
        ctx->pc = 0x447E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447E70u;
        // 0x447e74: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447E78u;
        goto label_447e78;
    }
    ctx->pc = 0x447E70u;
    SET_GPR_U32(ctx, 31, 0x447E78u);
    ctx->pc = 0x447E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447E70u;
    // 0x447e74: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x447E70u, 0x447E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447E78u;
label_447e78:
    // 0x447e78: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x447e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_447e7c:
    // 0x447e7c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x447e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_447e80:
    // 0x447e80: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x447e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_447e84:
    // 0x447e84: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x447e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_447e88:
    // 0x447e88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x447e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_447e8c:
    // 0x447e8c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x447e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_447e90:
    // 0x447e90: 0x26b50080  addiu       $s5, $s5, 0x80
    ctx->pc = 0x447e90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
label_447e94:
    // 0x447e94: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x447e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_447e98:
    // 0x447e98: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x447e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_447e9c:
    // 0x447e9c: 0x224202b  sltu        $a0, $s1, $a0
    ctx->pc = 0x447e9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_447ea0:
    // 0x447ea0: 0x26520028  addiu       $s2, $s2, 0x28
    ctx->pc = 0x447ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_447ea4:
    // 0x447ea4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x447ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_447ea8:
    // 0x447ea8: 0x2c3b021  addu        $s6, $s6, $v1
    ctx->pc = 0x447ea8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_447eac:
    // 0x447eac: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
label_447eb0:
    if (ctx->pc == 0x447EB0u) {
        ctx->pc = 0x447EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447EACu;
        // 0x447eb0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447EB4u;
        goto label_447eb4;
    }
    ctx->pc = 0x447EACu;
    {
        const bool branch_taken_0x447eac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x447EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447EACu;
        // 0x447eb0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447eac) {
            ctx->pc = 0x447E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447e50;
        }
    }
    ctx->pc = 0x447EB4u;
label_447eb4:
    // 0x447eb4: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x447eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_447eb8:
    // 0x447eb8: 0xaf93af30  sw          $s3, -0x50D0($gp)
    ctx->pc = 0x447eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946608), GPR_U32(ctx, 19));
label_447ebc:
    // 0x447ebc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x447ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_447ec0:
    // 0x447ec0: 0xaf82af34  sw          $v0, -0x50CC($gp)
    ctx->pc = 0x447ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946612), GPR_U32(ctx, 2));
label_447ec4:
    // 0x447ec4: 0xc112dd8  jal         func_44B760
label_447ec8:
    if (ctx->pc == 0x447EC8u) {
        ctx->pc = 0x447EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447EC4u;
        // 0x447ec8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447ECCu;
        goto label_447ecc;
    }
    ctx->pc = 0x447EC4u;
    SET_GPR_U32(ctx, 31, 0x447ECCu);
    ctx->pc = 0x447EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447EC4u;
    // 0x447ec8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44B760u, 0x447EC4u, 0x447ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447ECCu;
label_447ecc:
    // 0x447ecc: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
label_447ed0:
    if (ctx->pc == 0x447ED0u) {
        ctx->pc = 0x447ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447ECCu;
        // 0x447ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447ED4u;
        goto label_447ed4;
    }
    ctx->pc = 0x447ECCu;
    {
        const bool branch_taken_0x447ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x447ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447ECCu;
        // 0x447ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447ecc) {
            ctx->pc = 0x4481A0u;
            goto label_4481a0;
        }
    }
    ctx->pc = 0x447ED4u;
label_447ed4:
    // 0x447ed4: 0x8f82af34  lw          $v0, -0x50CC($gp)
    ctx->pc = 0x447ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946612)));
label_447ed8:
    // 0x447ed8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x447ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_447edc:
    // 0x447edc: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x447edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_447ee0:
    // 0x447ee0: 0xc1118a0  jal         func_446280
label_447ee4:
    if (ctx->pc == 0x447EE4u) {
        ctx->pc = 0x447EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447EE0u;
        // 0x447ee4: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447EE8u;
        goto label_447ee8;
    }
    ctx->pc = 0x447EE0u;
    SET_GPR_U32(ctx, 31, 0x447EE8u);
    ctx->pc = 0x447EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447EE0u;
    // 0x447ee4: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446280u, 0x447EE0u, 0x447EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447EE8u;
label_447ee8:
    // 0x447ee8: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
label_447eec:
    if (ctx->pc == 0x447EECu) {
        ctx->pc = 0x447EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447EE8u;
        // 0x447eec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447EF0u;
        goto label_447ef0;
    }
    ctx->pc = 0x447EE8u;
    {
        const bool branch_taken_0x447ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447EE8u;
        // 0x447eec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447ee8) {
            ctx->pc = 0x448194u;
            goto label_448194;
        }
    }
    ctx->pc = 0x447EF0u;
label_447ef0:
    // 0x447ef0: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x447ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_447ef4:
    // 0x447ef4: 0x10c00022  beqz        $a2, . + 4 + (0x22 << 2)
label_447ef8:
    if (ctx->pc == 0x447EF8u) {
        ctx->pc = 0x447EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447EF4u;
        // 0x447ef8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447EFCu;
        goto label_447efc;
    }
    ctx->pc = 0x447EF4u;
    {
        const bool branch_taken_0x447ef4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x447EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447EF4u;
        // 0x447ef8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447ef4) {
            ctx->pc = 0x447F80u;
            goto label_447f80;
        }
    }
    ctx->pc = 0x447EFCu;
label_447efc:
    // 0x447efc: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x447efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_447f00:
    // 0x447f00: 0x30c30003  andi        $v1, $a2, 0x3
    ctx->pc = 0x447f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
label_447f04:
    // 0x447f04: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
label_447f08:
    if (ctx->pc == 0x447F08u) {
        ctx->pc = 0x447F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F04u;
        // 0x447f08: 0x24a4001c  addiu       $a0, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447F0Cu;
        goto label_447f0c;
    }
    ctx->pc = 0x447F04u;
    {
        const bool branch_taken_0x447f04 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x447F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F04u;
        // 0x447f08: 0x24a4001c  addiu       $a0, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f04) {
            ctx->pc = 0x447F44u;
            goto label_447f44;
        }
    }
    ctx->pc = 0x447F0Cu;
label_447f0c:
    // 0x447f0c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_447f10:
    if (ctx->pc == 0x447F10u) {
        ctx->pc = 0x447F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F0Cu;
        // 0x447f10: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447F14u;
        goto label_447f14;
    }
    ctx->pc = 0x447F0Cu;
    {
        const bool branch_taken_0x447f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x447F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F0Cu;
        // 0x447f10: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f0c) {
            ctx->pc = 0x447F60u;
            goto label_447f60;
        }
    }
    ctx->pc = 0x447F14u;
label_447f14:
    // 0x447f14: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x447f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_447f18:
    // 0x447f18: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_447f1c:
    if (ctx->pc == 0x447F1Cu) {
        ctx->pc = 0x447F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F18u;
        // 0x447f1c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447F20u;
        goto label_447f20;
    }
    ctx->pc = 0x447F18u;
    {
        const bool branch_taken_0x447f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x447f18) {
            ctx->pc = 0x447F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447F18u;
            // 0x447f1c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447F48u;
            goto label_447f48;
        }
    }
    ctx->pc = 0x447F20u;
label_447f20:
    // 0x447f20: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x447f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_447f24:
    // 0x447f24: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_447f28:
    if (ctx->pc == 0x447F28u) {
        ctx->pc = 0x447F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F24u;
        // 0x447f28: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447F2Cu;
        goto label_447f2c;
    }
    ctx->pc = 0x447F24u;
    {
        const bool branch_taken_0x447f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x447f24) {
            ctx->pc = 0x447F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447F24u;
            // 0x447f28: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447F3Cu;
            goto label_447f3c;
        }
    }
    ctx->pc = 0x447F2Cu;
label_447f2c:
    // 0x447f2c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x447f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_447f30:
    // 0x447f30: 0x24a40044  addiu       $a0, $a1, 0x44
    ctx->pc = 0x447f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
label_447f34:
    // 0x447f34: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x447f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_447f38:
    // 0x447f38: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x447f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_447f3c:
    // 0x447f3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x447f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_447f40:
    // 0x447f40: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x447f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_447f44:
    // 0x447f44: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x447f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_447f48:
    // 0x447f48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x447f48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_447f4c:
    // 0x447f4c: 0x226182b  sltu        $v1, $s1, $a2
    ctx->pc = 0x447f4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_447f50:
    // 0x447f50: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_447f54:
    if (ctx->pc == 0x447F54u) {
        ctx->pc = 0x447F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F50u;
        // 0x447f54: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447F58u;
        goto label_447f58;
    }
    ctx->pc = 0x447F50u;
    {
        const bool branch_taken_0x447f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x447F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F50u;
        // 0x447f54: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f50) {
            ctx->pc = 0x447F80u;
            goto label_447f80;
        }
    }
    ctx->pc = 0x447F58u;
label_447f58:
    // 0x447f58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x447f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_447f5c:
    // 0x447f5c: 0x0  nop
    ctx->pc = 0x447f5cu;
    // NOP
label_447f60:
    // 0x447f60: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x447f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_447f64:
    // 0x447f64: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x447f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_447f68:
    // 0x447f68: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x447f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_447f6c:
    // 0x447f6c: 0x226182b  sltu        $v1, $s1, $a2
    ctx->pc = 0x447f6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_447f70:
    // 0x447f70: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x447f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_447f74:
    // 0x447f74: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x447f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
label_447f78:
    // 0x447f78: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_447f7c:
    if (ctx->pc == 0x447F7Cu) {
        ctx->pc = 0x447F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F78u;
        // 0x447f7c: 0x244200a0  addiu       $v0, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447F80u;
        goto label_447f80;
    }
    ctx->pc = 0x447F78u;
    {
        const bool branch_taken_0x447f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x447F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F78u;
        // 0x447f7c: 0x244200a0  addiu       $v0, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f78) {
            ctx->pc = 0x447F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447f60;
        }
    }
    ctx->pc = 0x447F80u;
label_447f80:
    // 0x447f80: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x447f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_447f84:
    // 0x447f84: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x447f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_447f88:
    // 0x447f88: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x447f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_447f8c:
    // 0x447f8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x447f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_447f90:
    // 0x447f90: 0x223b018  mult        $s6, $s1, $v1
    ctx->pc = 0x447f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_447f94:
    // 0x447f94: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x447f94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_447f98:
    // 0x447f98: 0x10000019  b           . + 4 + (0x19 << 2)
label_447f9c:
    if (ctx->pc == 0x447F9Cu) {
        ctx->pc = 0x447F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F98u;
        // 0x447f9c: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447FA0u;
        goto label_447fa0;
    }
    ctx->pc = 0x447F98u;
    {
        const bool branch_taken_0x447f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447F98u;
        // 0x447f9c: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f98) {
            ctx->pc = 0x448000u;
            goto label_448000;
        }
    }
    ctx->pc = 0x447FA0u;
label_447fa0:
    // 0x447fa0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x447fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_447fa4:
    // 0x447fa4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_447fa8:
    if (ctx->pc == 0x447FA8u) {
        ctx->pc = 0x447FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FA4u;
        // 0x447fa8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447FACu;
        goto label_447fac;
    }
    ctx->pc = 0x447FA4u;
    {
        const bool branch_taken_0x447fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447fa4) {
            ctx->pc = 0x447FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447FA4u;
            // 0x447fa8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447FF0u;
            goto label_447ff0;
        }
    }
    ctx->pc = 0x447FACu;
label_447fac:
    // 0x447fac: 0x40f809  jalr        $v0
label_447fb0:
    if (ctx->pc == 0x447FB0u) {
        ctx->pc = 0x447FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FACu;
        // 0x447fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447FB4u;
        goto label_447fb4;
    }
    ctx->pc = 0x447FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x447FB4u);
        ctx->pc = 0x447FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FACu;
        // 0x447fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447FACu, 0x447FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x447FB4u;
label_447fb4:
    // 0x447fb4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_447fb8:
    if (ctx->pc == 0x447FB8u) {
        ctx->pc = 0x447FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FB4u;
        // 0x447fb8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447FBCu;
        goto label_447fbc;
    }
    ctx->pc = 0x447FB4u;
    {
        const bool branch_taken_0x447fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x447fb4) {
            ctx->pc = 0x447FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447FB4u;
            // 0x447fb8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447FF0u;
            goto label_447ff0;
        }
    }
    ctx->pc = 0x447FBCu;
label_447fbc:
    // 0x447fbc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x447fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_447fc0:
    // 0x447fc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x447fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_447fc4:
    // 0x447fc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_447fc8:
    if (ctx->pc == 0x447FC8u) {
        ctx->pc = 0x447FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FC4u;
        // 0x447fc8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447FCCu;
        goto label_447fcc;
    }
    ctx->pc = 0x447FC4u;
    {
        const bool branch_taken_0x447fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x447FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FC4u;
        // 0x447fc8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447fc4) {
            ctx->pc = 0x447FE0u;
            goto label_447fe0;
        }
    }
    ctx->pc = 0x447FCCu;
label_447fcc:
    // 0x447fcc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x447fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_447fd0:
    // 0x447fd0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_447fd4:
    if (ctx->pc == 0x447FD4u) {
        ctx->pc = 0x447FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FD0u;
        // 0x447fd4: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447FD8u;
        goto label_447fd8;
    }
    ctx->pc = 0x447FD0u;
    {
        const bool branch_taken_0x447fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447fd0) {
            ctx->pc = 0x447FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447FD0u;
            // 0x447fd4: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447FE4u;
            goto label_447fe4;
        }
    }
    ctx->pc = 0x447FD8u;
label_447fd8:
    // 0x447fd8: 0x40f809  jalr        $v0
label_447fdc:
    if (ctx->pc == 0x447FDCu) {
        ctx->pc = 0x447FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FD8u;
        // 0x447fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447FE0u;
        goto label_447fe0;
    }
    ctx->pc = 0x447FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x447FE0u);
        ctx->pc = 0x447FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FD8u;
        // 0x447fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447FD8u, 0x447FE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x447FE0u;
label_447fe0:
    // 0x447fe0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x447fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_447fe4:
    // 0x447fe4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x447fe4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_447fe8:
    // 0x447fe8: 0x10000019  b           . + 4 + (0x19 << 2)
label_447fec:
    if (ctx->pc == 0x447FECu) {
        ctx->pc = 0x447FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FE8u;
        // 0x447fec: 0x571023  subu        $v0, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x447FF0u;
        goto label_447ff0;
    }
    ctx->pc = 0x447FE8u;
    {
        const bool branch_taken_0x447fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447FE8u;
        // 0x447fec: 0x571023  subu        $v0, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447fe8) {
            ctx->pc = 0x448050u;
            goto label_448050;
        }
    }
    ctx->pc = 0x447FF0u;
label_447ff0:
    // 0x447ff0: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x447ff0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_447ff4:
    // 0x447ff4: 0x26d6ffd8  addiu       $s6, $s6, -0x28
    ctx->pc = 0x447ff4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967256));
label_447ff8:
    // 0x447ff8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x447ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_447ffc:
    // 0x447ffc: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x447ffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_448000:
    // 0x448000: 0x6200014  bltz        $s1, . + 4 + (0x14 << 2)
label_448004:
    if (ctx->pc == 0x448004u) {
        ctx->pc = 0x448008u;
        goto label_448008;
    }
    ctx->pc = 0x448000u;
    {
        const bool branch_taken_0x448000 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x448000) {
            ctx->pc = 0x448054u;
            goto label_448054;
        }
    }
    ctx->pc = 0x448008u;
label_448008:
    // 0x448008: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x448008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_44800c:
    // 0x44800c: 0x2c29021  addu        $s2, $s6, $v0
    ctx->pc = 0x44800cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_448010:
    // 0x448010: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x448010u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_448014:
    // 0x448014: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x448014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_448018:
    // 0x448018: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x448018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44801c:
    // 0x44801c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44801cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_448020:
    // 0x448020: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_448024:
    if (ctx->pc == 0x448024u) {
        ctx->pc = 0x448024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448020u;
        // 0x448024: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448028u;
        goto label_448028;
    }
    ctx->pc = 0x448020u;
    {
        const bool branch_taken_0x448020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x448024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448020u;
        // 0x448024: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448020) {
            ctx->pc = 0x447FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447fa0;
        }
    }
    ctx->pc = 0x448028u;
label_448028:
    // 0x448028: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x448028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_44802c:
    // 0x44802c: 0x5040ffdd  beql        $v0, $zero, . + 4 + (-0x23 << 2)
label_448030:
    if (ctx->pc == 0x448030u) {
        ctx->pc = 0x448030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44802Cu;
        // 0x448030: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448034u;
        goto label_448034;
    }
    ctx->pc = 0x44802Cu;
    {
        const bool branch_taken_0x44802c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44802c) {
            ctx->pc = 0x448030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44802Cu;
            // 0x448030: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447fa4;
        }
    }
    ctx->pc = 0x448034u;
label_448034:
    // 0x448034: 0x40f809  jalr        $v0
label_448038:
    if (ctx->pc == 0x448038u) {
        ctx->pc = 0x448038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448034u;
        // 0x448038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44803Cu;
        goto label_44803c;
    }
    ctx->pc = 0x448034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44803Cu);
        ctx->pc = 0x448038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448034u;
        // 0x448038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x448034u, 0x44803Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44803Cu;
label_44803c:
    // 0x44803c: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
label_448040:
    if (ctx->pc == 0x448040u) {
        ctx->pc = 0x448040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44803Cu;
        // 0x448040: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448044u;
        goto label_448044;
    }
    ctx->pc = 0x44803Cu;
    {
        const bool branch_taken_0x44803c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44803c) {
            ctx->pc = 0x448040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44803Cu;
            // 0x448040: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_447fa4;
        }
    }
    ctx->pc = 0x448044u;
label_448044:
    // 0x448044: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x448044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_448048:
    // 0x448048: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x448048u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44804c:
    // 0x44804c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x44804cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_448050:
    // 0x448050: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x448050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_448054:
    // 0x448054: 0x17c00019  bnez        $fp, . + 4 + (0x19 << 2)
label_448058:
    if (ctx->pc == 0x448058u) {
        ctx->pc = 0x448058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448054u;
        // 0x448058: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44805Cu;
        goto label_44805c;
    }
    ctx->pc = 0x448054u;
    {
        const bool branch_taken_0x448054 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x448058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448054u;
        // 0x448058: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448054) {
            ctx->pc = 0x4480BCu;
            goto label_4480bc;
        }
    }
    ctx->pc = 0x44805Cu;
label_44805c:
    // 0x44805c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x44805cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_448060:
    // 0x448060: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x448060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_448064:
    // 0x448064: 0x10000003  b           . + 4 + (0x3 << 2)
label_448068:
    if (ctx->pc == 0x448068u) {
        ctx->pc = 0x448068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448064u;
        // 0x448068: 0x2238018  mult        $s0, $s1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x44806Cu;
        goto label_44806c;
    }
    ctx->pc = 0x448064u;
    {
        const bool branch_taken_0x448064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448064u;
        // 0x448068: 0x2238018  mult        $s0, $s1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x448064) {
            ctx->pc = 0x448074u;
            goto label_448074;
        }
    }
    ctx->pc = 0x44806Cu;
label_44806c:
    // 0x44806c: 0x0  nop
    ctx->pc = 0x44806cu;
    // NOP
label_448070:
    // 0x448070: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x448070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_448074:
    // 0x448074: 0x620000e  bltz        $s1, . + 4 + (0xE << 2)
label_448078:
    if (ctx->pc == 0x448078u) {
        ctx->pc = 0x44807Cu;
        goto label_44807c;
    }
    ctx->pc = 0x448074u;
    {
        const bool branch_taken_0x448074 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x448074) {
            ctx->pc = 0x4480B0u;
            goto label_4480b0;
        }
    }
    ctx->pc = 0x44807Cu;
label_44807c:
    // 0x44807c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x44807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_448080:
    // 0x448080: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x448080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_448084:
    // 0x448084: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x448084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_448088:
    // 0x448088: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x448088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_44808c:
    // 0x44808c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_448090:
    if (ctx->pc == 0x448090u) {
        ctx->pc = 0x448090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44808Cu;
        // 0x448090: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448094u;
        goto label_448094;
    }
    ctx->pc = 0x44808Cu;
    {
        const bool branch_taken_0x44808c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44808c) {
            ctx->pc = 0x448090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44808Cu;
            // 0x448090: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448070;
        }
    }
    ctx->pc = 0x448094u;
label_448094:
    // 0x448094: 0x40f809  jalr        $v0
label_448098:
    if (ctx->pc == 0x448098u) {
        ctx->pc = 0x448098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448094u;
        // 0x448098: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44809Cu;
        goto label_44809c;
    }
    ctx->pc = 0x448094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44809Cu);
        ctx->pc = 0x448098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448094u;
        // 0x448098: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x448094u, 0x44809Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44809Cu;
label_44809c:
    // 0x44809c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_4480a0:
    if (ctx->pc == 0x4480A0u) {
        ctx->pc = 0x4480A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44809Cu;
        // 0x4480a0: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4480A4u;
        goto label_4480a4;
    }
    ctx->pc = 0x44809Cu;
    {
        const bool branch_taken_0x44809c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44809c) {
            ctx->pc = 0x4480A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44809Cu;
            // 0x4480a0: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448070;
        }
    }
    ctx->pc = 0x4480A4u;
label_4480a4:
    // 0x4480a4: 0x8e8b0004  lw          $t3, 0x4($s4)
    ctx->pc = 0x4480a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4480a8:
    // 0x4480a8: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x4480a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4480ac:
    // 0x4480ac: 0xafab0030  sw          $t3, 0x30($sp)
    ctx->pc = 0x4480acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 11));
label_4480b0:
    // 0x4480b0: 0x13c00022  beqz        $fp, . + 4 + (0x22 << 2)
label_4480b4:
    if (ctx->pc == 0x4480B4u) {
        ctx->pc = 0x4480B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4480B0u;
        // 0x4480b4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4480B8u;
        goto label_4480b8;
    }
    ctx->pc = 0x4480B0u;
    {
        const bool branch_taken_0x4480b0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4480B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4480B0u;
        // 0x4480b4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4480b0) {
            ctx->pc = 0x44813Cu;
            goto label_44813c;
        }
    }
    ctx->pc = 0x4480B8u;
label_4480b8:
    // 0x4480b8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4480b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4480bc:
    // 0x4480bc: 0x8fac0030  lw          $t4, 0x30($sp)
    ctx->pc = 0x4480bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4480c0:
    // 0x4480c0: 0x4c8823  subu        $s1, $v0, $t4
    ctx->pc = 0x4480c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_4480c4:
    // 0x4480c4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4480c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4480c8:
    // 0x4480c8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_4480cc:
    if (ctx->pc == 0x4480CCu) {
        ctx->pc = 0x4480CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4480C8u;
        // 0x4480cc: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4480D0u;
        goto label_4480d0;
    }
    ctx->pc = 0x4480C8u;
    {
        const bool branch_taken_0x4480c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4480CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4480C8u;
        // 0x4480cc: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4480c8) {
            ctx->pc = 0x448190u;
            goto label_448190;
        }
    }
    ctx->pc = 0x4480D0u;
label_4480d0:
    // 0x4480d0: 0x2229018  mult        $s2, $s1, $v0
    ctx->pc = 0x4480d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_4480d4:
    // 0x4480d4: 0x0  nop
    ctx->pc = 0x4480d4u;
    // NOP
label_4480d8:
    // 0x4480d8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x4480d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4480dc:
    // 0x4480dc: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x4480dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4480e0:
    // 0x4480e0: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x4480e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4480e4:
    // 0x4480e4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4480e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4480e8:
    // 0x4480e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4480ec:
    if (ctx->pc == 0x4480ECu) {
        ctx->pc = 0x4480ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4480E8u;
        // 0x4480ec: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4480F0u;
        goto label_4480f0;
    }
    ctx->pc = 0x4480E8u;
    {
        const bool branch_taken_0x4480e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4480e8) {
            ctx->pc = 0x4480ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4480E8u;
            // 0x4480ec: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4480FCu;
            goto label_4480fc;
        }
    }
    ctx->pc = 0x4480F0u;
label_4480f0:
    // 0x4480f0: 0x40f809  jalr        $v0
label_4480f4:
    if (ctx->pc == 0x4480F4u) {
        ctx->pc = 0x4480F8u;
        goto label_4480f8;
    }
    ctx->pc = 0x4480F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4480F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4480F0u, 0x4480F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4480F8u;
label_4480f8:
    // 0x4480f8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x4480f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_4480fc:
    // 0x4480fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4480fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_448100:
    // 0x448100: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_448104:
    if (ctx->pc == 0x448104u) {
        ctx->pc = 0x448104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448100u;
        // 0x448104: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448108u;
        goto label_448108;
    }
    ctx->pc = 0x448100u;
    {
        const bool branch_taken_0x448100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x448104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448100u;
        // 0x448104: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448100) {
            ctx->pc = 0x44811Cu;
            goto label_44811c;
        }
    }
    ctx->pc = 0x448108u;
label_448108:
    // 0x448108: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x448108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_44810c:
    // 0x44810c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_448110:
    if (ctx->pc == 0x448110u) {
        ctx->pc = 0x448110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44810Cu;
        // 0x448110: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448114u;
        goto label_448114;
    }
    ctx->pc = 0x44810Cu;
    {
        const bool branch_taken_0x44810c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44810c) {
            ctx->pc = 0x448110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44810Cu;
            // 0x448110: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448120u;
            goto label_448120;
        }
    }
    ctx->pc = 0x448114u;
label_448114:
    // 0x448114: 0x40f809  jalr        $v0
label_448118:
    if (ctx->pc == 0x448118u) {
        ctx->pc = 0x448118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448114u;
        // 0x448118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44811Cu;
        goto label_44811c;
    }
    ctx->pc = 0x448114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44811Cu);
        ctx->pc = 0x448118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448114u;
        // 0x448118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x448114u, 0x44811Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44811Cu;
label_44811c:
    // 0x44811c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x44811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_448120:
    // 0x448120: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x448120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_448124:
    // 0x448124: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x448124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_448128:
    // 0x448128: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_44812c:
    if (ctx->pc == 0x44812Cu) {
        ctx->pc = 0x44812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448128u;
        // 0x44812c: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448130u;
        goto label_448130;
    }
    ctx->pc = 0x448128u;
    {
        const bool branch_taken_0x448128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448128u;
        // 0x44812c: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448128) {
            ctx->pc = 0x4480D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4480d8;
        }
    }
    ctx->pc = 0x448130u;
label_448130:
    // 0x448130: 0x10000018  b           . + 4 + (0x18 << 2)
label_448134:
    if (ctx->pc == 0x448134u) {
        ctx->pc = 0x448134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448130u;
        // 0x448134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448138u;
        goto label_448138;
    }
    ctx->pc = 0x448130u;
    {
        const bool branch_taken_0x448130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448130u;
        // 0x448134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448130) {
            ctx->pc = 0x448194u;
            goto label_448194;
        }
    }
    ctx->pc = 0x448138u;
label_448138:
    // 0x448138: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x448138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_44813c:
    // 0x44813c: 0x10000018  b           . + 4 + (0x18 << 2)
label_448140:
    if (ctx->pc == 0x448140u) {
        ctx->pc = 0x448140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44813Cu;
        // 0x448140: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448144u;
        goto label_448144;
    }
    ctx->pc = 0x44813Cu;
    {
        const bool branch_taken_0x44813c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44813Cu;
        // 0x448140: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44813c) {
            ctx->pc = 0x4481A0u;
            goto label_4481a0;
        }
    }
    ctx->pc = 0x448144u;
label_448144:
    // 0x448144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x448144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448148:
    // 0x448148: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x448148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_44814c:
    // 0x44814c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x44814cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_448150:
    // 0x448150: 0xc1035f6  jal         func_40D7D8
label_448154:
    if (ctx->pc == 0x448154u) {
        ctx->pc = 0x448154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448150u;
        // 0x448154: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x448158u;
        goto label_448158;
    }
    ctx->pc = 0x448150u;
    SET_GPR_U32(ctx, 31, 0x448158u);
    ctx->pc = 0x448154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448150u;
    // 0x448154: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x448150u, 0x448158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448158u;
label_448158:
    // 0x448158: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x448158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_44815c:
    // 0x44815c: 0xc103628  jal         func_40D8A0
label_448160:
    if (ctx->pc == 0x448160u) {
        ctx->pc = 0x448160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44815Cu;
        // 0x448160: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448164u;
        goto label_448164;
    }
    ctx->pc = 0x44815Cu;
    SET_GPR_U32(ctx, 31, 0x448164u);
    ctx->pc = 0x448160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44815Cu;
    // 0x448160: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44815Cu, 0x448164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448164u;
label_448164:
    // 0x448164: 0x1000000e  b           . + 4 + (0xE << 2)
label_448168:
    if (ctx->pc == 0x448168u) {
        ctx->pc = 0x448168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448164u;
        // 0x448168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44816Cu;
        goto label_44816c;
    }
    ctx->pc = 0x448164u;
    {
        const bool branch_taken_0x448164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448164u;
        // 0x448168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448164) {
            ctx->pc = 0x4481A0u;
            goto label_4481a0;
        }
    }
    ctx->pc = 0x44816Cu;
label_44816c:
    // 0x44816c: 0x0  nop
    ctx->pc = 0x44816cu;
    // NOP
label_448170:
    // 0x448170: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x448170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_448174:
    // 0x448174: 0xc1035f6  jal         func_40D7D8
label_448178:
    if (ctx->pc == 0x448178u) {
        ctx->pc = 0x448178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448174u;
        // 0x448178: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44817Cu;
        goto label_44817c;
    }
    ctx->pc = 0x448174u;
    SET_GPR_U32(ctx, 31, 0x44817Cu);
    ctx->pc = 0x448178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448174u;
    // 0x448178: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x448174u, 0x44817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44817Cu;
label_44817c:
    // 0x44817c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x44817cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_448180:
    // 0x448180: 0xc103628  jal         func_40D8A0
label_448184:
    if (ctx->pc == 0x448184u) {
        ctx->pc = 0x448184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448180u;
        // 0x448184: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448188u;
        goto label_448188;
    }
    ctx->pc = 0x448180u;
    SET_GPR_U32(ctx, 31, 0x448188u);
    ctx->pc = 0x448184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448180u;
    // 0x448184: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x448180u, 0x448188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448188u;
label_448188:
    // 0x448188: 0x10000005  b           . + 4 + (0x5 << 2)
label_44818c:
    if (ctx->pc == 0x44818Cu) {
        ctx->pc = 0x44818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448188u;
        // 0x44818c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448190u;
        goto label_448190;
    }
    ctx->pc = 0x448188u;
    {
        const bool branch_taken_0x448188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448188u;
        // 0x44818c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448188) {
            ctx->pc = 0x4481A0u;
            goto label_4481a0;
        }
    }
    ctx->pc = 0x448190u;
label_448190:
    // 0x448190: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x448190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_448194:
    // 0x448194: 0xc111948  jal         func_446520
label_448198:
    if (ctx->pc == 0x448198u) {
        ctx->pc = 0x448198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448194u;
        // 0x448198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44819Cu;
        goto label_44819c;
    }
    ctx->pc = 0x448194u;
    SET_GPR_U32(ctx, 31, 0x44819Cu);
    ctx->pc = 0x448198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448194u;
    // 0x448198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446520u, 0x448194u, 0x44819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44819Cu;
label_44819c:
    // 0x44819c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44819cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4481a0:
    // 0x4481a0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x4481a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4481a4:
    // 0x4481a4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x4481a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4481a8:
    // 0x4481a8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x4481a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4481ac:
    // 0x4481ac: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x4481acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4481b0:
    // 0x4481b0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x4481b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4481b4:
    // 0x4481b4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x4481b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4481b8:
    // 0x4481b8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4481b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4481bc:
    // 0x4481bc: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x4481bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4481c0:
    // 0x4481c0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x4481c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4481c4:
    // 0x4481c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4481c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4481c8:
    // 0x4481c8: 0x3e00008  jr          $ra
label_4481cc:
    if (ctx->pc == 0x4481CCu) {
        ctx->pc = 0x4481CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4481C8u;
        // 0x4481cc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4481D0u;
        goto label_fallthrough_0x4481c8;
    }
    ctx->pc = 0x4481C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4481CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4481C8u;
        // 0x4481cc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4481C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4481c8:
    ctx->pc = 0x4481D0u;
}
