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

// Function: sub_00107810
// Address: 0x107810 - 0x1081b0
void sub_00107810_0x107810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107810_0x107810");
#endif

    switch (ctx->pc) {
        case 0x107810u: goto label_107810;
        case 0x107814u: goto label_107814;
        case 0x107818u: goto label_107818;
        case 0x10781cu: goto label_10781c;
        case 0x107820u: goto label_107820;
        case 0x107824u: goto label_107824;
        case 0x107828u: goto label_107828;
        case 0x10782cu: goto label_10782c;
        case 0x107830u: goto label_107830;
        case 0x107834u: goto label_107834;
        case 0x107838u: goto label_107838;
        case 0x10783cu: goto label_10783c;
        case 0x107840u: goto label_107840;
        case 0x107844u: goto label_107844;
        case 0x107848u: goto label_107848;
        case 0x10784cu: goto label_10784c;
        case 0x107850u: goto label_107850;
        case 0x107854u: goto label_107854;
        case 0x107858u: goto label_107858;
        case 0x10785cu: goto label_10785c;
        case 0x107860u: goto label_107860;
        case 0x107864u: goto label_107864;
        case 0x107868u: goto label_107868;
        case 0x10786cu: goto label_10786c;
        case 0x107870u: goto label_107870;
        case 0x107874u: goto label_107874;
        case 0x107878u: goto label_107878;
        case 0x10787cu: goto label_10787c;
        case 0x107880u: goto label_107880;
        case 0x107884u: goto label_107884;
        case 0x107888u: goto label_107888;
        case 0x10788cu: goto label_10788c;
        case 0x107890u: goto label_107890;
        case 0x107894u: goto label_107894;
        case 0x107898u: goto label_107898;
        case 0x10789cu: goto label_10789c;
        case 0x1078a0u: goto label_1078a0;
        case 0x1078a4u: goto label_1078a4;
        case 0x1078a8u: goto label_1078a8;
        case 0x1078acu: goto label_1078ac;
        case 0x1078b0u: goto label_1078b0;
        case 0x1078b4u: goto label_1078b4;
        case 0x1078b8u: goto label_1078b8;
        case 0x1078bcu: goto label_1078bc;
        case 0x1078c0u: goto label_1078c0;
        case 0x1078c4u: goto label_1078c4;
        case 0x1078c8u: goto label_1078c8;
        case 0x1078ccu: goto label_1078cc;
        case 0x1078d0u: goto label_1078d0;
        case 0x1078d4u: goto label_1078d4;
        case 0x1078d8u: goto label_1078d8;
        case 0x1078dcu: goto label_1078dc;
        case 0x1078e0u: goto label_1078e0;
        case 0x1078e4u: goto label_1078e4;
        case 0x1078e8u: goto label_1078e8;
        case 0x1078ecu: goto label_1078ec;
        case 0x1078f0u: goto label_1078f0;
        case 0x1078f4u: goto label_1078f4;
        case 0x1078f8u: goto label_1078f8;
        case 0x1078fcu: goto label_1078fc;
        case 0x107900u: goto label_107900;
        case 0x107904u: goto label_107904;
        case 0x107908u: goto label_107908;
        case 0x10790cu: goto label_10790c;
        case 0x107910u: goto label_107910;
        case 0x107914u: goto label_107914;
        case 0x107918u: goto label_107918;
        case 0x10791cu: goto label_10791c;
        case 0x107920u: goto label_107920;
        case 0x107924u: goto label_107924;
        case 0x107928u: goto label_107928;
        case 0x10792cu: goto label_10792c;
        case 0x107930u: goto label_107930;
        case 0x107934u: goto label_107934;
        case 0x107938u: goto label_107938;
        case 0x10793cu: goto label_10793c;
        case 0x107940u: goto label_107940;
        case 0x107944u: goto label_107944;
        case 0x107948u: goto label_107948;
        case 0x10794cu: goto label_10794c;
        case 0x107950u: goto label_107950;
        case 0x107954u: goto label_107954;
        case 0x107958u: goto label_107958;
        case 0x10795cu: goto label_10795c;
        case 0x107960u: goto label_107960;
        case 0x107964u: goto label_107964;
        case 0x107968u: goto label_107968;
        case 0x10796cu: goto label_10796c;
        case 0x107970u: goto label_107970;
        case 0x107974u: goto label_107974;
        case 0x107978u: goto label_107978;
        case 0x10797cu: goto label_10797c;
        case 0x107980u: goto label_107980;
        case 0x107984u: goto label_107984;
        case 0x107988u: goto label_107988;
        case 0x10798cu: goto label_10798c;
        case 0x107990u: goto label_107990;
        case 0x107994u: goto label_107994;
        case 0x107998u: goto label_107998;
        case 0x10799cu: goto label_10799c;
        case 0x1079a0u: goto label_1079a0;
        case 0x1079a4u: goto label_1079a4;
        case 0x1079a8u: goto label_1079a8;
        case 0x1079acu: goto label_1079ac;
        case 0x1079b0u: goto label_1079b0;
        case 0x1079b4u: goto label_1079b4;
        case 0x1079b8u: goto label_1079b8;
        case 0x1079bcu: goto label_1079bc;
        case 0x1079c0u: goto label_1079c0;
        case 0x1079c4u: goto label_1079c4;
        case 0x1079c8u: goto label_1079c8;
        case 0x1079ccu: goto label_1079cc;
        case 0x1079d0u: goto label_1079d0;
        case 0x1079d4u: goto label_1079d4;
        case 0x1079d8u: goto label_1079d8;
        case 0x1079dcu: goto label_1079dc;
        case 0x1079e0u: goto label_1079e0;
        case 0x1079e4u: goto label_1079e4;
        case 0x1079e8u: goto label_1079e8;
        case 0x1079ecu: goto label_1079ec;
        case 0x1079f0u: goto label_1079f0;
        case 0x1079f4u: goto label_1079f4;
        case 0x1079f8u: goto label_1079f8;
        case 0x1079fcu: goto label_1079fc;
        case 0x107a00u: goto label_107a00;
        case 0x107a04u: goto label_107a04;
        case 0x107a08u: goto label_107a08;
        case 0x107a0cu: goto label_107a0c;
        case 0x107a10u: goto label_107a10;
        case 0x107a14u: goto label_107a14;
        case 0x107a18u: goto label_107a18;
        case 0x107a1cu: goto label_107a1c;
        case 0x107a20u: goto label_107a20;
        case 0x107a24u: goto label_107a24;
        case 0x107a28u: goto label_107a28;
        case 0x107a2cu: goto label_107a2c;
        case 0x107a30u: goto label_107a30;
        case 0x107a34u: goto label_107a34;
        case 0x107a38u: goto label_107a38;
        case 0x107a3cu: goto label_107a3c;
        case 0x107a40u: goto label_107a40;
        case 0x107a44u: goto label_107a44;
        case 0x107a48u: goto label_107a48;
        case 0x107a4cu: goto label_107a4c;
        case 0x107a50u: goto label_107a50;
        case 0x107a54u: goto label_107a54;
        case 0x107a58u: goto label_107a58;
        case 0x107a5cu: goto label_107a5c;
        case 0x107a60u: goto label_107a60;
        case 0x107a64u: goto label_107a64;
        case 0x107a68u: goto label_107a68;
        case 0x107a6cu: goto label_107a6c;
        case 0x107a70u: goto label_107a70;
        case 0x107a74u: goto label_107a74;
        case 0x107a78u: goto label_107a78;
        case 0x107a7cu: goto label_107a7c;
        case 0x107a80u: goto label_107a80;
        case 0x107a84u: goto label_107a84;
        case 0x107a88u: goto label_107a88;
        case 0x107a8cu: goto label_107a8c;
        case 0x107a90u: goto label_107a90;
        case 0x107a94u: goto label_107a94;
        case 0x107a98u: goto label_107a98;
        case 0x107a9cu: goto label_107a9c;
        case 0x107aa0u: goto label_107aa0;
        case 0x107aa4u: goto label_107aa4;
        case 0x107aa8u: goto label_107aa8;
        case 0x107aacu: goto label_107aac;
        case 0x107ab0u: goto label_107ab0;
        case 0x107ab4u: goto label_107ab4;
        case 0x107ab8u: goto label_107ab8;
        case 0x107abcu: goto label_107abc;
        case 0x107ac0u: goto label_107ac0;
        case 0x107ac4u: goto label_107ac4;
        case 0x107ac8u: goto label_107ac8;
        case 0x107accu: goto label_107acc;
        case 0x107ad0u: goto label_107ad0;
        case 0x107ad4u: goto label_107ad4;
        case 0x107ad8u: goto label_107ad8;
        case 0x107adcu: goto label_107adc;
        case 0x107ae0u: goto label_107ae0;
        case 0x107ae4u: goto label_107ae4;
        case 0x107ae8u: goto label_107ae8;
        case 0x107aecu: goto label_107aec;
        case 0x107af0u: goto label_107af0;
        case 0x107af4u: goto label_107af4;
        case 0x107af8u: goto label_107af8;
        case 0x107afcu: goto label_107afc;
        case 0x107b00u: goto label_107b00;
        case 0x107b04u: goto label_107b04;
        case 0x107b08u: goto label_107b08;
        case 0x107b0cu: goto label_107b0c;
        case 0x107b10u: goto label_107b10;
        case 0x107b14u: goto label_107b14;
        case 0x107b18u: goto label_107b18;
        case 0x107b1cu: goto label_107b1c;
        case 0x107b20u: goto label_107b20;
        case 0x107b24u: goto label_107b24;
        case 0x107b28u: goto label_107b28;
        case 0x107b2cu: goto label_107b2c;
        case 0x107b30u: goto label_107b30;
        case 0x107b34u: goto label_107b34;
        case 0x107b38u: goto label_107b38;
        case 0x107b3cu: goto label_107b3c;
        case 0x107b40u: goto label_107b40;
        case 0x107b44u: goto label_107b44;
        case 0x107b48u: goto label_107b48;
        case 0x107b4cu: goto label_107b4c;
        case 0x107b50u: goto label_107b50;
        case 0x107b54u: goto label_107b54;
        case 0x107b58u: goto label_107b58;
        case 0x107b5cu: goto label_107b5c;
        case 0x107b60u: goto label_107b60;
        case 0x107b64u: goto label_107b64;
        case 0x107b68u: goto label_107b68;
        case 0x107b6cu: goto label_107b6c;
        case 0x107b70u: goto label_107b70;
        case 0x107b74u: goto label_107b74;
        case 0x107b78u: goto label_107b78;
        case 0x107b7cu: goto label_107b7c;
        case 0x107b80u: goto label_107b80;
        case 0x107b84u: goto label_107b84;
        case 0x107b88u: goto label_107b88;
        case 0x107b8cu: goto label_107b8c;
        case 0x107b90u: goto label_107b90;
        case 0x107b94u: goto label_107b94;
        case 0x107b98u: goto label_107b98;
        case 0x107b9cu: goto label_107b9c;
        case 0x107ba0u: goto label_107ba0;
        case 0x107ba4u: goto label_107ba4;
        case 0x107ba8u: goto label_107ba8;
        case 0x107bacu: goto label_107bac;
        case 0x107bb0u: goto label_107bb0;
        case 0x107bb4u: goto label_107bb4;
        case 0x107bb8u: goto label_107bb8;
        case 0x107bbcu: goto label_107bbc;
        case 0x107bc0u: goto label_107bc0;
        case 0x107bc4u: goto label_107bc4;
        case 0x107bc8u: goto label_107bc8;
        case 0x107bccu: goto label_107bcc;
        case 0x107bd0u: goto label_107bd0;
        case 0x107bd4u: goto label_107bd4;
        case 0x107bd8u: goto label_107bd8;
        case 0x107bdcu: goto label_107bdc;
        case 0x107be0u: goto label_107be0;
        case 0x107be4u: goto label_107be4;
        case 0x107be8u: goto label_107be8;
        case 0x107becu: goto label_107bec;
        case 0x107bf0u: goto label_107bf0;
        case 0x107bf4u: goto label_107bf4;
        case 0x107bf8u: goto label_107bf8;
        case 0x107bfcu: goto label_107bfc;
        case 0x107c00u: goto label_107c00;
        case 0x107c04u: goto label_107c04;
        case 0x107c08u: goto label_107c08;
        case 0x107c0cu: goto label_107c0c;
        case 0x107c10u: goto label_107c10;
        case 0x107c14u: goto label_107c14;
        case 0x107c18u: goto label_107c18;
        case 0x107c1cu: goto label_107c1c;
        case 0x107c20u: goto label_107c20;
        case 0x107c24u: goto label_107c24;
        case 0x107c28u: goto label_107c28;
        case 0x107c2cu: goto label_107c2c;
        case 0x107c30u: goto label_107c30;
        case 0x107c34u: goto label_107c34;
        case 0x107c38u: goto label_107c38;
        case 0x107c3cu: goto label_107c3c;
        case 0x107c40u: goto label_107c40;
        case 0x107c44u: goto label_107c44;
        case 0x107c48u: goto label_107c48;
        case 0x107c4cu: goto label_107c4c;
        case 0x107c50u: goto label_107c50;
        case 0x107c54u: goto label_107c54;
        case 0x107c58u: goto label_107c58;
        case 0x107c5cu: goto label_107c5c;
        case 0x107c60u: goto label_107c60;
        case 0x107c64u: goto label_107c64;
        case 0x107c68u: goto label_107c68;
        case 0x107c6cu: goto label_107c6c;
        case 0x107c70u: goto label_107c70;
        case 0x107c74u: goto label_107c74;
        case 0x107c78u: goto label_107c78;
        case 0x107c7cu: goto label_107c7c;
        case 0x107c80u: goto label_107c80;
        case 0x107c84u: goto label_107c84;
        case 0x107c88u: goto label_107c88;
        case 0x107c8cu: goto label_107c8c;
        case 0x107c90u: goto label_107c90;
        case 0x107c94u: goto label_107c94;
        case 0x107c98u: goto label_107c98;
        case 0x107c9cu: goto label_107c9c;
        case 0x107ca0u: goto label_107ca0;
        case 0x107ca4u: goto label_107ca4;
        case 0x107ca8u: goto label_107ca8;
        case 0x107cacu: goto label_107cac;
        case 0x107cb0u: goto label_107cb0;
        case 0x107cb4u: goto label_107cb4;
        case 0x107cb8u: goto label_107cb8;
        case 0x107cbcu: goto label_107cbc;
        case 0x107cc0u: goto label_107cc0;
        case 0x107cc4u: goto label_107cc4;
        case 0x107cc8u: goto label_107cc8;
        case 0x107cccu: goto label_107ccc;
        case 0x107cd0u: goto label_107cd0;
        case 0x107cd4u: goto label_107cd4;
        case 0x107cd8u: goto label_107cd8;
        case 0x107cdcu: goto label_107cdc;
        case 0x107ce0u: goto label_107ce0;
        case 0x107ce4u: goto label_107ce4;
        case 0x107ce8u: goto label_107ce8;
        case 0x107cecu: goto label_107cec;
        case 0x107cf0u: goto label_107cf0;
        case 0x107cf4u: goto label_107cf4;
        case 0x107cf8u: goto label_107cf8;
        case 0x107cfcu: goto label_107cfc;
        case 0x107d00u: goto label_107d00;
        case 0x107d04u: goto label_107d04;
        case 0x107d08u: goto label_107d08;
        case 0x107d0cu: goto label_107d0c;
        case 0x107d10u: goto label_107d10;
        case 0x107d14u: goto label_107d14;
        case 0x107d18u: goto label_107d18;
        case 0x107d1cu: goto label_107d1c;
        case 0x107d20u: goto label_107d20;
        case 0x107d24u: goto label_107d24;
        case 0x107d28u: goto label_107d28;
        case 0x107d2cu: goto label_107d2c;
        case 0x107d30u: goto label_107d30;
        case 0x107d34u: goto label_107d34;
        case 0x107d38u: goto label_107d38;
        case 0x107d3cu: goto label_107d3c;
        case 0x107d40u: goto label_107d40;
        case 0x107d44u: goto label_107d44;
        case 0x107d48u: goto label_107d48;
        case 0x107d4cu: goto label_107d4c;
        case 0x107d50u: goto label_107d50;
        case 0x107d54u: goto label_107d54;
        case 0x107d58u: goto label_107d58;
        case 0x107d5cu: goto label_107d5c;
        case 0x107d60u: goto label_107d60;
        case 0x107d64u: goto label_107d64;
        case 0x107d68u: goto label_107d68;
        case 0x107d6cu: goto label_107d6c;
        case 0x107d70u: goto label_107d70;
        case 0x107d74u: goto label_107d74;
        case 0x107d78u: goto label_107d78;
        case 0x107d7cu: goto label_107d7c;
        case 0x107d80u: goto label_107d80;
        case 0x107d84u: goto label_107d84;
        case 0x107d88u: goto label_107d88;
        case 0x107d8cu: goto label_107d8c;
        case 0x107d90u: goto label_107d90;
        case 0x107d94u: goto label_107d94;
        case 0x107d98u: goto label_107d98;
        case 0x107d9cu: goto label_107d9c;
        case 0x107da0u: goto label_107da0;
        case 0x107da4u: goto label_107da4;
        case 0x107da8u: goto label_107da8;
        case 0x107dacu: goto label_107dac;
        case 0x107db0u: goto label_107db0;
        case 0x107db4u: goto label_107db4;
        case 0x107db8u: goto label_107db8;
        case 0x107dbcu: goto label_107dbc;
        case 0x107dc0u: goto label_107dc0;
        case 0x107dc4u: goto label_107dc4;
        case 0x107dc8u: goto label_107dc8;
        case 0x107dccu: goto label_107dcc;
        case 0x107dd0u: goto label_107dd0;
        case 0x107dd4u: goto label_107dd4;
        case 0x107dd8u: goto label_107dd8;
        case 0x107ddcu: goto label_107ddc;
        case 0x107de0u: goto label_107de0;
        case 0x107de4u: goto label_107de4;
        case 0x107de8u: goto label_107de8;
        case 0x107decu: goto label_107dec;
        case 0x107df0u: goto label_107df0;
        case 0x107df4u: goto label_107df4;
        case 0x107df8u: goto label_107df8;
        case 0x107dfcu: goto label_107dfc;
        case 0x107e00u: goto label_107e00;
        case 0x107e04u: goto label_107e04;
        case 0x107e08u: goto label_107e08;
        case 0x107e0cu: goto label_107e0c;
        case 0x107e10u: goto label_107e10;
        case 0x107e14u: goto label_107e14;
        case 0x107e18u: goto label_107e18;
        case 0x107e1cu: goto label_107e1c;
        case 0x107e20u: goto label_107e20;
        case 0x107e24u: goto label_107e24;
        case 0x107e28u: goto label_107e28;
        case 0x107e2cu: goto label_107e2c;
        case 0x107e30u: goto label_107e30;
        case 0x107e34u: goto label_107e34;
        case 0x107e38u: goto label_107e38;
        case 0x107e3cu: goto label_107e3c;
        case 0x107e40u: goto label_107e40;
        case 0x107e44u: goto label_107e44;
        case 0x107e48u: goto label_107e48;
        case 0x107e4cu: goto label_107e4c;
        case 0x107e50u: goto label_107e50;
        case 0x107e54u: goto label_107e54;
        case 0x107e58u: goto label_107e58;
        case 0x107e5cu: goto label_107e5c;
        case 0x107e60u: goto label_107e60;
        case 0x107e64u: goto label_107e64;
        case 0x107e68u: goto label_107e68;
        case 0x107e6cu: goto label_107e6c;
        case 0x107e70u: goto label_107e70;
        case 0x107e74u: goto label_107e74;
        case 0x107e78u: goto label_107e78;
        case 0x107e7cu: goto label_107e7c;
        case 0x107e80u: goto label_107e80;
        case 0x107e84u: goto label_107e84;
        case 0x107e88u: goto label_107e88;
        case 0x107e8cu: goto label_107e8c;
        case 0x107e90u: goto label_107e90;
        case 0x107e94u: goto label_107e94;
        case 0x107e98u: goto label_107e98;
        case 0x107e9cu: goto label_107e9c;
        case 0x107ea0u: goto label_107ea0;
        case 0x107ea4u: goto label_107ea4;
        case 0x107ea8u: goto label_107ea8;
        case 0x107eacu: goto label_107eac;
        case 0x107eb0u: goto label_107eb0;
        case 0x107eb4u: goto label_107eb4;
        case 0x107eb8u: goto label_107eb8;
        case 0x107ebcu: goto label_107ebc;
        case 0x107ec0u: goto label_107ec0;
        case 0x107ec4u: goto label_107ec4;
        case 0x107ec8u: goto label_107ec8;
        case 0x107eccu: goto label_107ecc;
        case 0x107ed0u: goto label_107ed0;
        case 0x107ed4u: goto label_107ed4;
        case 0x107ed8u: goto label_107ed8;
        case 0x107edcu: goto label_107edc;
        case 0x107ee0u: goto label_107ee0;
        case 0x107ee4u: goto label_107ee4;
        case 0x107ee8u: goto label_107ee8;
        case 0x107eecu: goto label_107eec;
        case 0x107ef0u: goto label_107ef0;
        case 0x107ef4u: goto label_107ef4;
        case 0x107ef8u: goto label_107ef8;
        case 0x107efcu: goto label_107efc;
        case 0x107f00u: goto label_107f00;
        case 0x107f04u: goto label_107f04;
        case 0x107f08u: goto label_107f08;
        case 0x107f0cu: goto label_107f0c;
        case 0x107f10u: goto label_107f10;
        case 0x107f14u: goto label_107f14;
        case 0x107f18u: goto label_107f18;
        case 0x107f1cu: goto label_107f1c;
        case 0x107f20u: goto label_107f20;
        case 0x107f24u: goto label_107f24;
        case 0x107f28u: goto label_107f28;
        case 0x107f2cu: goto label_107f2c;
        case 0x107f30u: goto label_107f30;
        case 0x107f34u: goto label_107f34;
        case 0x107f38u: goto label_107f38;
        case 0x107f3cu: goto label_107f3c;
        case 0x107f40u: goto label_107f40;
        case 0x107f44u: goto label_107f44;
        case 0x107f48u: goto label_107f48;
        case 0x107f4cu: goto label_107f4c;
        case 0x107f50u: goto label_107f50;
        case 0x107f54u: goto label_107f54;
        case 0x107f58u: goto label_107f58;
        case 0x107f5cu: goto label_107f5c;
        case 0x107f60u: goto label_107f60;
        case 0x107f64u: goto label_107f64;
        case 0x107f68u: goto label_107f68;
        case 0x107f6cu: goto label_107f6c;
        case 0x107f70u: goto label_107f70;
        case 0x107f74u: goto label_107f74;
        case 0x107f78u: goto label_107f78;
        case 0x107f7cu: goto label_107f7c;
        case 0x107f80u: goto label_107f80;
        case 0x107f84u: goto label_107f84;
        case 0x107f88u: goto label_107f88;
        case 0x107f8cu: goto label_107f8c;
        case 0x107f90u: goto label_107f90;
        case 0x107f94u: goto label_107f94;
        case 0x107f98u: goto label_107f98;
        case 0x107f9cu: goto label_107f9c;
        case 0x107fa0u: goto label_107fa0;
        case 0x107fa4u: goto label_107fa4;
        case 0x107fa8u: goto label_107fa8;
        case 0x107facu: goto label_107fac;
        case 0x107fb0u: goto label_107fb0;
        case 0x107fb4u: goto label_107fb4;
        case 0x107fb8u: goto label_107fb8;
        case 0x107fbcu: goto label_107fbc;
        case 0x107fc0u: goto label_107fc0;
        case 0x107fc4u: goto label_107fc4;
        case 0x107fc8u: goto label_107fc8;
        case 0x107fccu: goto label_107fcc;
        case 0x107fd0u: goto label_107fd0;
        case 0x107fd4u: goto label_107fd4;
        case 0x107fd8u: goto label_107fd8;
        case 0x107fdcu: goto label_107fdc;
        case 0x107fe0u: goto label_107fe0;
        case 0x107fe4u: goto label_107fe4;
        case 0x107fe8u: goto label_107fe8;
        case 0x107fecu: goto label_107fec;
        case 0x107ff0u: goto label_107ff0;
        case 0x107ff4u: goto label_107ff4;
        case 0x107ff8u: goto label_107ff8;
        case 0x107ffcu: goto label_107ffc;
        case 0x108000u: goto label_108000;
        case 0x108004u: goto label_108004;
        case 0x108008u: goto label_108008;
        case 0x10800cu: goto label_10800c;
        case 0x108010u: goto label_108010;
        case 0x108014u: goto label_108014;
        case 0x108018u: goto label_108018;
        case 0x10801cu: goto label_10801c;
        case 0x108020u: goto label_108020;
        case 0x108024u: goto label_108024;
        case 0x108028u: goto label_108028;
        case 0x10802cu: goto label_10802c;
        case 0x108030u: goto label_108030;
        case 0x108034u: goto label_108034;
        case 0x108038u: goto label_108038;
        case 0x10803cu: goto label_10803c;
        case 0x108040u: goto label_108040;
        case 0x108044u: goto label_108044;
        case 0x108048u: goto label_108048;
        case 0x10804cu: goto label_10804c;
        case 0x108050u: goto label_108050;
        case 0x108054u: goto label_108054;
        case 0x108058u: goto label_108058;
        case 0x10805cu: goto label_10805c;
        case 0x108060u: goto label_108060;
        case 0x108064u: goto label_108064;
        case 0x108068u: goto label_108068;
        case 0x10806cu: goto label_10806c;
        case 0x108070u: goto label_108070;
        case 0x108074u: goto label_108074;
        case 0x108078u: goto label_108078;
        case 0x10807cu: goto label_10807c;
        case 0x108080u: goto label_108080;
        case 0x108084u: goto label_108084;
        case 0x108088u: goto label_108088;
        case 0x10808cu: goto label_10808c;
        case 0x108090u: goto label_108090;
        case 0x108094u: goto label_108094;
        case 0x108098u: goto label_108098;
        case 0x10809cu: goto label_10809c;
        case 0x1080a0u: goto label_1080a0;
        case 0x1080a4u: goto label_1080a4;
        case 0x1080a8u: goto label_1080a8;
        case 0x1080acu: goto label_1080ac;
        case 0x1080b0u: goto label_1080b0;
        case 0x1080b4u: goto label_1080b4;
        case 0x1080b8u: goto label_1080b8;
        case 0x1080bcu: goto label_1080bc;
        case 0x1080c0u: goto label_1080c0;
        case 0x1080c4u: goto label_1080c4;
        case 0x1080c8u: goto label_1080c8;
        case 0x1080ccu: goto label_1080cc;
        case 0x1080d0u: goto label_1080d0;
        case 0x1080d4u: goto label_1080d4;
        case 0x1080d8u: goto label_1080d8;
        case 0x1080dcu: goto label_1080dc;
        case 0x1080e0u: goto label_1080e0;
        case 0x1080e4u: goto label_1080e4;
        case 0x1080e8u: goto label_1080e8;
        case 0x1080ecu: goto label_1080ec;
        case 0x1080f0u: goto label_1080f0;
        case 0x1080f4u: goto label_1080f4;
        case 0x1080f8u: goto label_1080f8;
        case 0x1080fcu: goto label_1080fc;
        case 0x108100u: goto label_108100;
        case 0x108104u: goto label_108104;
        case 0x108108u: goto label_108108;
        case 0x10810cu: goto label_10810c;
        case 0x108110u: goto label_108110;
        case 0x108114u: goto label_108114;
        case 0x108118u: goto label_108118;
        case 0x10811cu: goto label_10811c;
        case 0x108120u: goto label_108120;
        case 0x108124u: goto label_108124;
        case 0x108128u: goto label_108128;
        case 0x10812cu: goto label_10812c;
        case 0x108130u: goto label_108130;
        case 0x108134u: goto label_108134;
        case 0x108138u: goto label_108138;
        case 0x10813cu: goto label_10813c;
        case 0x108140u: goto label_108140;
        case 0x108144u: goto label_108144;
        case 0x108148u: goto label_108148;
        case 0x10814cu: goto label_10814c;
        case 0x108150u: goto label_108150;
        case 0x108154u: goto label_108154;
        case 0x108158u: goto label_108158;
        case 0x10815cu: goto label_10815c;
        case 0x108160u: goto label_108160;
        case 0x108164u: goto label_108164;
        case 0x108168u: goto label_108168;
        case 0x10816cu: goto label_10816c;
        case 0x108170u: goto label_108170;
        case 0x108174u: goto label_108174;
        case 0x108178u: goto label_108178;
        case 0x10817cu: goto label_10817c;
        case 0x108180u: goto label_108180;
        case 0x108184u: goto label_108184;
        case 0x108188u: goto label_108188;
        case 0x10818cu: goto label_10818c;
        case 0x108190u: goto label_108190;
        case 0x108194u: goto label_108194;
        case 0x108198u: goto label_108198;
        case 0x10819cu: goto label_10819c;
        case 0x1081a0u: goto label_1081a0;
        case 0x1081a4u: goto label_1081a4;
        case 0x1081a8u: goto label_1081a8;
        case 0x1081acu: goto label_1081ac;
        default: break;
    }

    ctx->pc = 0x107810u;

label_107810:
    // 0x107810: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x107810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_107814:
    // 0x107814: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x107814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_107818:
    // 0x107818: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x107818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_10781c:
    // 0x10781c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x10781cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_107820:
    // 0x107820: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x107820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_107824:
    // 0x107824: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x107824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_107828:
    // 0x107828: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x107828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10782c:
    // 0x10782c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_107830:
    // 0x107830: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x107830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_107834:
    // 0x107834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x107834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_107838:
    // 0x107838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x107838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10783c:
    // 0x10783c: 0xafa501c0  sw          $a1, 0x1C0($sp)
    ctx->pc = 0x10783cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 5));
label_107840:
    // 0x107840: 0xafa601d0  sw          $a2, 0x1D0($sp)
    ctx->pc = 0x107840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 6));
label_107844:
    // 0x107844: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x107844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107848:
    // 0x107848: 0xc0422b8  jal         func_108AE0
label_10784c:
    if (ctx->pc == 0x10784Cu) {
        ctx->pc = 0x107850u;
        goto label_107850;
    }
    ctx->pc = 0x107848u;
    SET_GPR_U32(ctx, 31, 0x107850u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x107848u, 0x107850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107850u;
label_107850:
    // 0x107850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107854:
    // 0x107854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x107854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107858:
    // 0x107858: 0xc08ec98  jal         func_23B260
label_10785c:
    if (ctx->pc == 0x10785Cu) {
        ctx->pc = 0x107860u;
        goto label_107860;
    }
    ctx->pc = 0x107858u;
    SET_GPR_U32(ctx, 31, 0x107860u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x107858u, 0x107860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107860u;
label_107860:
    // 0x107860: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x107860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_107864:
    // 0x107864: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x107864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_107868:
    // 0x107868: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x107868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_10786c:
    // 0x10786c: 0xc0422b8  jal         func_108AE0
label_107870:
    if (ctx->pc == 0x107870u) {
        ctx->pc = 0x107874u;
        goto label_107874;
    }
    ctx->pc = 0x10786Cu;
    SET_GPR_U32(ctx, 31, 0x107874u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x10786Cu, 0x107874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107874u;
label_107874:
    // 0x107874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107878:
    // 0x107878: 0x27a501ac  addiu       $a1, $sp, 0x1AC
    ctx->pc = 0x107878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_10787c:
    // 0x10787c: 0xc0422a8  jal         func_108AA0
label_107880:
    if (ctx->pc == 0x107880u) {
        ctx->pc = 0x107884u;
        goto label_107884;
    }
    ctx->pc = 0x10787Cu;
    SET_GPR_U32(ctx, 31, 0x107884u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x10787Cu, 0x107884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107884u;
label_107884:
    // 0x107884: 0x3c047437  lui         $a0, 0x7437
    ctx->pc = 0x107884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29751 << 16));
label_107888:
    // 0x107888: 0x3482736c  ori         $v0, $a0, 0x736C
    ctx->pc = 0x107888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)29548);
label_10788c:
    // 0x10788c: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x10788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_107890:
    // 0x107890: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x107890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107894:
    // 0x107894: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107898:
    // 0x107898: 0xc0422b8  jal         func_108AE0
label_10789c:
    if (ctx->pc == 0x10789Cu) {
        ctx->pc = 0x1078A0u;
        goto label_1078a0;
    }
    ctx->pc = 0x107898u;
    SET_GPR_U32(ctx, 31, 0x1078A0u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x107898u, 0x1078A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078A0u;
label_1078a0:
    // 0x1078a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1078a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1078a4:
    // 0x1078a4: 0x27a501a8  addiu       $a1, $sp, 0x1A8
    ctx->pc = 0x1078a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_1078a8:
    // 0x1078a8: 0xc0422a8  jal         func_108AA0
label_1078ac:
    if (ctx->pc == 0x1078ACu) {
        ctx->pc = 0x1078B0u;
        goto label_1078b0;
    }
    ctx->pc = 0x1078A8u;
    SET_GPR_U32(ctx, 31, 0x1078B0u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x1078A8u, 0x1078B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078B0u;
label_1078b0:
    // 0x1078b0: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x1078b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_1078b4:
    // 0x1078b4: 0x3c067437  lui         $a2, 0x7437
    ctx->pc = 0x1078b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29751 << 16));
label_1078b8:
    // 0x1078b8: 0x34c2736c  ori         $v0, $a2, 0x736C
    ctx->pc = 0x1078b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)29548);
label_1078bc:
    // 0x1078bc: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
label_1078c0:
    if (ctx->pc == 0x1078C0u) {
        ctx->pc = 0x1078C4u;
        goto label_1078c4;
    }
    ctx->pc = 0x1078BCu;
    {
        const bool branch_taken_0x1078bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1078bc) {
            ctx->pc = 0x1078D0u;
            goto label_1078d0;
        }
    }
    ctx->pc = 0x1078C4u;
label_1078c4:
    // 0x1078c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1078c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1078c8:
    // 0x1078c8: 0x1000022a  b           . + 4 + (0x22A << 2)
label_1078cc:
    if (ctx->pc == 0x1078CCu) {
        ctx->pc = 0x1078D0u;
        goto label_1078d0;
    }
    ctx->pc = 0x1078C8u;
    {
        const bool branch_taken_0x1078c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1078c8) {
            ctx->pc = 0x108174u;
            goto label_108174;
        }
    }
    ctx->pc = 0x1078D0u;
label_1078d0:
    // 0x1078d0: 0x8fa701c0  lw          $a3, 0x1C0($sp)
    ctx->pc = 0x1078d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_1078d4:
    // 0x1078d4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1078d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1078d8:
    // 0x1078d8: 0xc08ec90  jal         func_23B240
label_1078dc:
    if (ctx->pc == 0x1078DCu) {
        ctx->pc = 0x1078E0u;
        goto label_1078e0;
    }
    ctx->pc = 0x1078D8u;
    SET_GPR_U32(ctx, 31, 0x1078E0u);
    ctx->pc = 0x23B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B240u, 0x1078D8u, 0x1078E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078E0u;
label_1078e0:
    // 0x1078e0: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x1078e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
label_1078e4:
    // 0x1078e4: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x1078e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_1078e8:
    // 0x1078e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1078e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1078ec:
    // 0x1078ec: 0xc0422b8  jal         func_108AE0
label_1078f0:
    if (ctx->pc == 0x1078F0u) {
        ctx->pc = 0x1078F4u;
        goto label_1078f4;
    }
    ctx->pc = 0x1078ECu;
    SET_GPR_U32(ctx, 31, 0x1078F4u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x1078ECu, 0x1078F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078F4u;
label_1078f4:
    // 0x1078f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1078f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1078f8:
    // 0x1078f8: 0x27a501a4  addiu       $a1, $sp, 0x1A4
    ctx->pc = 0x1078f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_1078fc:
    // 0x1078fc: 0xc0422a8  jal         func_108AA0
label_107900:
    if (ctx->pc == 0x107900u) {
        ctx->pc = 0x107904u;
        goto label_107904;
    }
    ctx->pc = 0x1078FCu;
    SET_GPR_U32(ctx, 31, 0x107904u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x1078FCu, 0x107904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107904u;
label_107904:
    // 0x107904: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x107904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_107908:
    // 0x107908: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x107908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
label_10790c:
    // 0x10790c: 0x8fa501ac  lw          $a1, 0x1AC($sp)
    ctx->pc = 0x10790cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_107910:
    // 0x107910: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x107910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_107914:
    // 0x107914: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_107918:
    if (ctx->pc == 0x107918u) {
        ctx->pc = 0x10791Cu;
        goto label_10791c;
    }
    ctx->pc = 0x107914u;
    {
        const bool branch_taken_0x107914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107914) {
            ctx->pc = 0x10795Cu;
            goto label_10795c;
        }
    }
    ctx->pc = 0x10791Cu;
label_10791c:
    // 0x10791c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x10791cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_107920:
    // 0x107920: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x107920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_107924:
    // 0x107924: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107928:
    // 0x107928: 0x24050543  addiu       $a1, $zero, 0x543
    ctx->pc = 0x107928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1347));
label_10792c:
    // 0x10792c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10792cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107930:
    // 0x107930: 0xc040ab0  jal         func_102AC0
label_107934:
    if (ctx->pc == 0x107934u) {
        ctx->pc = 0x107938u;
        goto label_107938;
    }
    ctx->pc = 0x107930u;
    SET_GPR_U32(ctx, 31, 0x107938u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x107930u, 0x107938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107938u;
label_107938:
    // 0x107938: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x107938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10793c:
    // 0x10793c: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x10793cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
label_107940:
    // 0x107940: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x107940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107944:
    // 0x107944: 0xc0422b8  jal         func_108AE0
label_107948:
    if (ctx->pc == 0x107948u) {
        ctx->pc = 0x10794Cu;
        goto label_10794c;
    }
    ctx->pc = 0x107944u;
    SET_GPR_U32(ctx, 31, 0x10794Cu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x107944u, 0x10794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10794Cu;
label_10794c:
    // 0x10794c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10794cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107950:
    // 0x107950: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x107950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_107954:
    // 0x107954: 0xc042298  jal         func_108A60
label_107958:
    if (ctx->pc == 0x107958u) {
        ctx->pc = 0x10795Cu;
        goto label_10795c;
    }
    ctx->pc = 0x107954u;
    SET_GPR_U32(ctx, 31, 0x10795Cu);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x107954u, 0x10795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10795Cu;
label_10795c:
    // 0x10795c: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x10795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_107960:
    // 0x107960: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x107960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_107964:
    // 0x107964: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107968:
    // 0x107968: 0x24050543  addiu       $a1, $zero, 0x543
    ctx->pc = 0x107968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1347));
label_10796c:
    // 0x10796c: 0x8fa601a0  lw          $a2, 0x1A0($sp)
    ctx->pc = 0x10796cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_107970:
    // 0x107970: 0xc040924  jal         func_102490
label_107974:
    if (ctx->pc == 0x107974u) {
        ctx->pc = 0x107978u;
        goto label_107978;
    }
    ctx->pc = 0x107970u;
    SET_GPR_U32(ctx, 31, 0x107978u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x107970u, 0x107978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107978u;
label_107978:
    // 0x107978: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x107978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_10797c:
    // 0x10797c: 0xc0422b8  jal         func_108AE0
label_107980:
    if (ctx->pc == 0x107980u) {
        ctx->pc = 0x107984u;
        goto label_107984;
    }
    ctx->pc = 0x10797Cu;
    SET_GPR_U32(ctx, 31, 0x107984u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x10797Cu, 0x107984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107984u;
label_107984:
    // 0x107984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107988:
    // 0x107988: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x107988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10798c:
    // 0x10798c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10798cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_107990:
    // 0x107990: 0x320f809  jalr        $t9
label_107994:
    if (ctx->pc == 0x107994u) {
        ctx->pc = 0x107998u;
        goto label_107998;
    }
    ctx->pc = 0x107990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x107998u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107990u, 0x107998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107998u;
label_107998:
    // 0x107998: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x107998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10799c:
    // 0x10799c: 0x144300f9  bne         $v0, $v1, . + 4 + (0xF9 << 2)
label_1079a0:
    if (ctx->pc == 0x1079A0u) {
        ctx->pc = 0x1079A4u;
        goto label_1079a4;
    }
    ctx->pc = 0x10799Cu;
    {
        const bool branch_taken_0x10799c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10799c) {
            ctx->pc = 0x107D84u;
            goto label_107d84;
        }
    }
    ctx->pc = 0x1079A4u;
label_1079a4:
    // 0x1079a4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1079a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1079a8:
    // 0x1079a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1079a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1079ac:
    // 0x1079ac: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1079acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_1079b0:
    // 0x1079b0: 0x24c61680  addiu       $a2, $a2, 0x1680
    ctx->pc = 0x1079b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5760));
label_1079b4:
    // 0x1079b4: 0xc08d48c  jal         func_235230
label_1079b8:
    if (ctx->pc == 0x1079B8u) {
        ctx->pc = 0x1079BCu;
        goto label_1079bc;
    }
    ctx->pc = 0x1079B4u;
    SET_GPR_U32(ctx, 31, 0x1079BCu);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x1079B4u, 0x1079BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1079BCu;
label_1079bc:
    // 0x1079bc: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1079bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_1079c0:
    // 0x1079c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1079c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1079c4:
    // 0x1079c4: 0xc0913ec  jal         func_244FB0
label_1079c8:
    if (ctx->pc == 0x1079C8u) {
        ctx->pc = 0x1079CCu;
        goto label_1079cc;
    }
    ctx->pc = 0x1079C4u;
    SET_GPR_U32(ctx, 31, 0x1079CCu);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x1079C4u, 0x1079CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1079CCu;
label_1079cc:
    // 0x1079cc: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1079ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_1079d0:
    // 0x1079d0: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x1079d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_1079d4:
    // 0x1079d4: 0xc0422b8  jal         func_108AE0
label_1079d8:
    if (ctx->pc == 0x1079D8u) {
        ctx->pc = 0x1079DCu;
        goto label_1079dc;
    }
    ctx->pc = 0x1079D4u;
    SET_GPR_U32(ctx, 31, 0x1079DCu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x1079D4u, 0x1079DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1079DCu;
label_1079dc:
    // 0x1079dc: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x1079dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1079e0:
    // 0x1079e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1079e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1079e4:
    // 0x1079e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1079e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1079e8:
    // 0x1079e8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1079e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1079ec:
    // 0x1079ec: 0x320f809  jalr        $t9
label_1079f0:
    if (ctx->pc == 0x1079F0u) {
        ctx->pc = 0x1079F4u;
        goto label_1079f4;
    }
    ctx->pc = 0x1079ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1079F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1079ECu, 0x1079F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1079F4u;
label_1079f4:
    // 0x1079f4: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1079f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_1079f8:
    // 0x1079f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1079f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1079fc:
    // 0x1079fc: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x1079fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107a00:
    // 0x107a00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x107a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_107a04:
    // 0x107a04: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x107a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_107a08:
    // 0x107a08: 0x320f809  jalr        $t9
label_107a0c:
    if (ctx->pc == 0x107A0Cu) {
        ctx->pc = 0x107A10u;
        goto label_107a10;
    }
    ctx->pc = 0x107A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x107A10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107A08u, 0x107A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107A10u;
label_107a10:
    // 0x107a10: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x107a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_107a14:
    // 0x107a14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x107a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_107a18:
    // 0x107a18: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x107a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_107a1c:
    // 0x107a1c: 0xc085538  jal         func_2154E0
label_107a20:
    if (ctx->pc == 0x107A20u) {
        ctx->pc = 0x107A24u;
        goto label_107a24;
    }
    ctx->pc = 0x107A1Cu;
    SET_GPR_U32(ctx, 31, 0x107A24u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x107A1Cu, 0x107A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A24u;
label_107a24:
    // 0x107a24: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x107a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_107a28:
    // 0x107a28: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x107a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_107a2c:
    // 0x107a2c: 0xc091aa8  jal         func_246AA0
label_107a30:
    if (ctx->pc == 0x107A30u) {
        ctx->pc = 0x107A34u;
        goto label_107a34;
    }
    ctx->pc = 0x107A2Cu;
    SET_GPR_U32(ctx, 31, 0x107A34u);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x107A2Cu, 0x107A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A34u;
label_107a34:
    // 0x107a34: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x107a34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107a38:
    // 0x107a38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x107a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_107a3c:
    // 0x107a3c: 0xc0411f0  jal         func_1047C0
label_107a40:
    if (ctx->pc == 0x107A40u) {
        ctx->pc = 0x107A44u;
        goto label_107a44;
    }
    ctx->pc = 0x107A3Cu;
    SET_GPR_U32(ctx, 31, 0x107A44u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x107A3Cu, 0x107A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A44u;
label_107a44:
    // 0x107a44: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x107a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
label_107a48:
    // 0x107a48: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x107a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107a4c:
    // 0x107a4c: 0xc0422b8  jal         func_108AE0
label_107a50:
    if (ctx->pc == 0x107A50u) {
        ctx->pc = 0x107A54u;
        goto label_107a54;
    }
    ctx->pc = 0x107A4Cu;
    SET_GPR_U32(ctx, 31, 0x107A54u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x107A4Cu, 0x107A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A54u;
label_107a54:
    // 0x107a54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107a58:
    // 0x107a58: 0x27a50198  addiu       $a1, $sp, 0x198
    ctx->pc = 0x107a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_107a5c:
    // 0x107a5c: 0xc0422a8  jal         func_108AA0
label_107a60:
    if (ctx->pc == 0x107A60u) {
        ctx->pc = 0x107A64u;
        goto label_107a64;
    }
    ctx->pc = 0x107A5Cu;
    SET_GPR_U32(ctx, 31, 0x107A64u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x107A5Cu, 0x107A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A64u;
label_107a64:
    // 0x107a64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x107a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_107a68:
    // 0x107a68: 0xc042290  jal         func_108A40
label_107a6c:
    if (ctx->pc == 0x107A6Cu) {
        ctx->pc = 0x107A70u;
        goto label_107a70;
    }
    ctx->pc = 0x107A68u;
    SET_GPR_U32(ctx, 31, 0x107A70u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x107A68u, 0x107A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A70u;
label_107a70:
    // 0x107a70: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x107a70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107a74:
    // 0x107a74: 0x10000017  b           . + 4 + (0x17 << 2)
label_107a78:
    if (ctx->pc == 0x107A78u) {
        ctx->pc = 0x107A7Cu;
        goto label_107a7c;
    }
    ctx->pc = 0x107A74u;
    {
        const bool branch_taken_0x107a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107a74) {
            ctx->pc = 0x107AD4u;
            goto label_107ad4;
        }
    }
    ctx->pc = 0x107A7Cu;
label_107a7c:
    // 0x107a7c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x107a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_107a80:
    // 0x107a80: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x107a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
label_107a84:
    // 0x107a84: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x107a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_107a88:
    // 0x107a88: 0xc0913ec  jal         func_244FB0
label_107a8c:
    if (ctx->pc == 0x107A8Cu) {
        ctx->pc = 0x107A90u;
        goto label_107a90;
    }
    ctx->pc = 0x107A88u;
    SET_GPR_U32(ctx, 31, 0x107A90u);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x107A88u, 0x107A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A90u;
label_107a90:
    // 0x107a90: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x107a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_107a94:
    // 0x107a94: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x107a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107a98:
    // 0x107a98: 0xc0422b8  jal         func_108AE0
label_107a9c:
    if (ctx->pc == 0x107A9Cu) {
        ctx->pc = 0x107AA0u;
        goto label_107aa0;
    }
    ctx->pc = 0x107A98u;
    SET_GPR_U32(ctx, 31, 0x107AA0u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x107A98u, 0x107AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107AA0u;
label_107aa0:
    // 0x107aa0: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x107aa0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_107aa4:
    // 0x107aa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x107aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107aa8:
    // 0x107aa8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x107aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_107aac:
    // 0x107aac: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x107aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_107ab0:
    // 0x107ab0: 0x320f809  jalr        $t9
label_107ab4:
    if (ctx->pc == 0x107AB4u) {
        ctx->pc = 0x107AB8u;
        goto label_107ab8;
    }
    ctx->pc = 0x107AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x107AB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107AB0u, 0x107AB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107AB8u;
label_107ab8:
    // 0x107ab8: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x107ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_107abc:
    // 0x107abc: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x107abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107ac0:
    // 0x107ac0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x107ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_107ac4:
    // 0x107ac4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x107ac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_107ac8:
    // 0x107ac8: 0x320f809  jalr        $t9
label_107acc:
    if (ctx->pc == 0x107ACCu) {
        ctx->pc = 0x107AD0u;
        goto label_107ad0;
    }
    ctx->pc = 0x107AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x107AD0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107AC8u, 0x107AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107AD0u;
label_107ad0:
    // 0x107ad0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x107ad0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_107ad4:
    // 0x107ad4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x107ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_107ad8:
    // 0x107ad8: 0xc042288  jal         func_108A20
label_107adc:
    if (ctx->pc == 0x107ADCu) {
        ctx->pc = 0x107AE0u;
        goto label_107ae0;
    }
    ctx->pc = 0x107AD8u;
    SET_GPR_U32(ctx, 31, 0x107AE0u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x107AD8u, 0x107AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107AE0u;
label_107ae0:
    // 0x107ae0: 0x1682ffe6  bne         $s4, $v0, . + 4 + (-0x1A << 2)
label_107ae4:
    if (ctx->pc == 0x107AE4u) {
        ctx->pc = 0x107AE8u;
        goto label_107ae8;
    }
    ctx->pc = 0x107AE0u;
    {
        const bool branch_taken_0x107ae0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x107ae0) {
            ctx->pc = 0x107A7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107a7c;
        }
    }
    ctx->pc = 0x107AE8u;
label_107ae8:
    // 0x107ae8: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x107ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_107aec:
    // 0x107aec: 0xc091aa0  jal         func_246A80
label_107af0:
    if (ctx->pc == 0x107AF0u) {
        ctx->pc = 0x107AF4u;
        goto label_107af4;
    }
    ctx->pc = 0x107AECu;
    SET_GPR_U32(ctx, 31, 0x107AF4u);
    ctx->pc = 0x246A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246A80u, 0x107AECu, 0x107AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107AF4u;
label_107af4:
    // 0x107af4: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x107af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_107af8:
    // 0x107af8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x107af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_107afc:
    // 0x107afc: 0xc042230  jal         func_1088C0
label_107b00:
    if (ctx->pc == 0x107B00u) {
        ctx->pc = 0x107B04u;
        goto label_107b04;
    }
    ctx->pc = 0x107AFCu;
    SET_GPR_U32(ctx, 31, 0x107B04u);
    ctx->pc = 0x1088C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088C0u, 0x107AFCu, 0x107B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B04u;
label_107b04:
    // 0x107b04: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x107b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_107b08:
    // 0x107b08: 0xc042290  jal         func_108A40
label_107b0c:
    if (ctx->pc == 0x107B0Cu) {
        ctx->pc = 0x107B10u;
        goto label_107b10;
    }
    ctx->pc = 0x107B08u;
    SET_GPR_U32(ctx, 31, 0x107B10u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x107B08u, 0x107B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B10u;
label_107b10:
    // 0x107b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x107b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107b14:
    // 0x107b14: 0x10000030  b           . + 4 + (0x30 << 2)
label_107b18:
    if (ctx->pc == 0x107B18u) {
        ctx->pc = 0x107B1Cu;
        goto label_107b1c;
    }
    ctx->pc = 0x107B14u;
    {
        const bool branch_taken_0x107b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107b14) {
            ctx->pc = 0x107BD8u;
            goto label_107bd8;
        }
    }
    ctx->pc = 0x107B1Cu;
label_107b1c:
    // 0x107b1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107b20:
    // 0x107b20: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x107b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_107b24:
    // 0x107b24: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x107b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_107b28:
    // 0x107b28: 0xc085530  jal         func_2154C0
label_107b2c:
    if (ctx->pc == 0x107B2Cu) {
        ctx->pc = 0x107B30u;
        goto label_107b30;
    }
    ctx->pc = 0x107B28u;
    SET_GPR_U32(ctx, 31, 0x107B30u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x107B28u, 0x107B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B30u;
label_107b30:
    // 0x107b30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x107b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_107b34:
    // 0x107b34: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_107b38:
    if (ctx->pc == 0x107B38u) {
        ctx->pc = 0x107B3Cu;
        goto label_107b3c;
    }
    ctx->pc = 0x107B34u;
    {
        const bool branch_taken_0x107b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x107b34) {
            ctx->pc = 0x107B50u;
            goto label_107b50;
        }
    }
    ctx->pc = 0x107B3Cu;
label_107b3c:
    // 0x107b3c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x107b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_107b40:
    // 0x107b40: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
label_107b44:
    if (ctx->pc == 0x107B44u) {
        ctx->pc = 0x107B48u;
        goto label_107b48;
    }
    ctx->pc = 0x107B40u;
    {
        const bool branch_taken_0x107b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x107b40) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x107B48u;
label_107b48:
    // 0x107b48: 0x1000001e  b           . + 4 + (0x1E << 2)
label_107b4c:
    if (ctx->pc == 0x107B4Cu) {
        ctx->pc = 0x107B50u;
        goto label_107b50;
    }
    ctx->pc = 0x107B48u;
    {
        const bool branch_taken_0x107b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107b48) {
            ctx->pc = 0x107BC4u;
            goto label_107bc4;
        }
    }
    ctx->pc = 0x107B50u;
label_107b50:
    // 0x107b50: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x107b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_107b54:
    // 0x107b54: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x107b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_107b58:
    // 0x107b58: 0xc085538  jal         func_2154E0
label_107b5c:
    if (ctx->pc == 0x107B5Cu) {
        ctx->pc = 0x107B60u;
        goto label_107b60;
    }
    ctx->pc = 0x107B58u;
    SET_GPR_U32(ctx, 31, 0x107B60u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x107B58u, 0x107B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B60u;
label_107b60:
    // 0x107b60: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x107b60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107b64:
    // 0x107b64: 0x1015001b  beq         $zero, $s5, . + 4 + (0x1B << 2)
label_107b68:
    if (ctx->pc == 0x107B68u) {
        ctx->pc = 0x107B6Cu;
        goto label_107b6c;
    }
    ctx->pc = 0x107B64u;
    {
        const bool branch_taken_0x107b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x107b64) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x107B6Cu;
label_107b6c:
    // 0x107b6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x107b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_107b70:
    // 0x107b70: 0xc090fa0  jal         func_243E80
label_107b74:
    if (ctx->pc == 0x107B74u) {
        ctx->pc = 0x107B78u;
        goto label_107b78;
    }
    ctx->pc = 0x107B70u;
    SET_GPR_U32(ctx, 31, 0x107B78u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x107B70u, 0x107B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B78u;
label_107b78:
    // 0x107b78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107b7c:
    // 0x107b7c: 0xc042214  jal         func_108850
label_107b80:
    if (ctx->pc == 0x107B80u) {
        ctx->pc = 0x107B84u;
        goto label_107b84;
    }
    ctx->pc = 0x107B7Cu;
    SET_GPR_U32(ctx, 31, 0x107B84u);
    ctx->pc = 0x108850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108850u, 0x107B7Cu, 0x107B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B84u;
label_107b84:
    // 0x107b84: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_107b88:
    if (ctx->pc == 0x107B88u) {
        ctx->pc = 0x107B8Cu;
        goto label_107b8c;
    }
    ctx->pc = 0x107B84u;
    {
        const bool branch_taken_0x107b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107b84) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x107B8Cu;
label_107b8c:
    // 0x107b8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x107b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_107b90:
    // 0x107b90: 0xc090fa0  jal         func_243E80
label_107b94:
    if (ctx->pc == 0x107B94u) {
        ctx->pc = 0x107B98u;
        goto label_107b98;
    }
    ctx->pc = 0x107B90u;
    SET_GPR_U32(ctx, 31, 0x107B98u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x107B90u, 0x107B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B98u;
label_107b98:
    // 0x107b98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107b9c:
    // 0x107b9c: 0xc0421f8  jal         func_1087E0
label_107ba0:
    if (ctx->pc == 0x107BA0u) {
        ctx->pc = 0x107BA4u;
        goto label_107ba4;
    }
    ctx->pc = 0x107B9Cu;
    SET_GPR_U32(ctx, 31, 0x107BA4u);
    ctx->pc = 0x1087E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087E0u, 0x107B9Cu, 0x107BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BA4u;
label_107ba4:
    // 0x107ba4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_107ba8:
    if (ctx->pc == 0x107BA8u) {
        ctx->pc = 0x107BACu;
        goto label_107bac;
    }
    ctx->pc = 0x107BA4u;
    {
        const bool branch_taken_0x107ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107ba4) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x107BACu;
label_107bac:
    // 0x107bac: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x107bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_107bb0:
    // 0x107bb0: 0x27a5018c  addiu       $a1, $sp, 0x18C
    ctx->pc = 0x107bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_107bb4:
    // 0x107bb4: 0xc042128  jal         func_1084A0
label_107bb8:
    if (ctx->pc == 0x107BB8u) {
        ctx->pc = 0x107BBCu;
        goto label_107bbc;
    }
    ctx->pc = 0x107BB4u;
    SET_GPR_U32(ctx, 31, 0x107BBCu);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x107BB4u, 0x107BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BBCu;
label_107bbc:
    // 0x107bbc: 0x10000005  b           . + 4 + (0x5 << 2)
label_107bc0:
    if (ctx->pc == 0x107BC0u) {
        ctx->pc = 0x107BC4u;
        goto label_107bc4;
    }
    ctx->pc = 0x107BBCu;
    {
        const bool branch_taken_0x107bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107bbc) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x107BC4u;
label_107bc4:
    // 0x107bc4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x107bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_107bc8:
    // 0x107bc8: 0x27a5018c  addiu       $a1, $sp, 0x18C
    ctx->pc = 0x107bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_107bcc:
    // 0x107bcc: 0xc042128  jal         func_1084A0
label_107bd0:
    if (ctx->pc == 0x107BD0u) {
        ctx->pc = 0x107BD4u;
        goto label_107bd4;
    }
    ctx->pc = 0x107BCCu;
    SET_GPR_U32(ctx, 31, 0x107BD4u);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x107BCCu, 0x107BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BD4u;
label_107bd4:
    // 0x107bd4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x107bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_107bd8:
    // 0x107bd8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x107bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_107bdc:
    // 0x107bdc: 0xc042288  jal         func_108A20
label_107be0:
    if (ctx->pc == 0x107BE0u) {
        ctx->pc = 0x107BE4u;
        goto label_107be4;
    }
    ctx->pc = 0x107BDCu;
    SET_GPR_U32(ctx, 31, 0x107BE4u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x107BDCu, 0x107BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BE4u;
label_107be4:
    // 0x107be4: 0x1602ffcd  bne         $s0, $v0, . + 4 + (-0x33 << 2)
label_107be8:
    if (ctx->pc == 0x107BE8u) {
        ctx->pc = 0x107BECu;
        goto label_107bec;
    }
    ctx->pc = 0x107BE4u;
    {
        const bool branch_taken_0x107be4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x107be4) {
            ctx->pc = 0x107B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107b1c;
        }
    }
    ctx->pc = 0x107BECu;
label_107bec:
    // 0x107bec: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x107becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_107bf0:
    // 0x107bf0: 0xc0411f0  jal         func_1047C0
label_107bf4:
    if (ctx->pc == 0x107BF4u) {
        ctx->pc = 0x107BF8u;
        goto label_107bf8;
    }
    ctx->pc = 0x107BF0u;
    SET_GPR_U32(ctx, 31, 0x107BF8u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x107BF0u, 0x107BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BF8u;
label_107bf8:
    // 0x107bf8: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x107bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
label_107bfc:
    // 0x107bfc: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x107bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107c00:
    // 0x107c00: 0xc0422b8  jal         func_108AE0
label_107c04:
    if (ctx->pc == 0x107C04u) {
        ctx->pc = 0x107C08u;
        goto label_107c08;
    }
    ctx->pc = 0x107C00u;
    SET_GPR_U32(ctx, 31, 0x107C08u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x107C00u, 0x107C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C08u;
label_107c08:
    // 0x107c08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107c0c:
    // 0x107c0c: 0x27a50198  addiu       $a1, $sp, 0x198
    ctx->pc = 0x107c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_107c10:
    // 0x107c10: 0xc0422a8  jal         func_108AA0
label_107c14:
    if (ctx->pc == 0x107C14u) {
        ctx->pc = 0x107C18u;
        goto label_107c18;
    }
    ctx->pc = 0x107C10u;
    SET_GPR_U32(ctx, 31, 0x107C18u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x107C10u, 0x107C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C18u;
label_107c18:
    // 0x107c18: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x107c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_107c1c:
    // 0x107c1c: 0xc042290  jal         func_108A40
label_107c20:
    if (ctx->pc == 0x107C20u) {
        ctx->pc = 0x107C24u;
        goto label_107c24;
    }
    ctx->pc = 0x107C1Cu;
    SET_GPR_U32(ctx, 31, 0x107C24u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x107C1Cu, 0x107C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C24u;
label_107c24:
    // 0x107c24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x107c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107c28:
    // 0x107c28: 0x1000004b  b           . + 4 + (0x4B << 2)
label_107c2c:
    if (ctx->pc == 0x107C2Cu) {
        ctx->pc = 0x107C30u;
        goto label_107c30;
    }
    ctx->pc = 0x107C28u;
    {
        const bool branch_taken_0x107c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107c28) {
            ctx->pc = 0x107D58u;
            goto label_107d58;
        }
    }
    ctx->pc = 0x107C30u;
label_107c30:
    // 0x107c30: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x107c30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107c34:
    // 0x107c34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107c38:
    // 0x107c38: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x107c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_107c3c:
    // 0x107c3c: 0xc085538  jal         func_2154E0
label_107c40:
    if (ctx->pc == 0x107C40u) {
        ctx->pc = 0x107C44u;
        goto label_107c44;
    }
    ctx->pc = 0x107C3Cu;
    SET_GPR_U32(ctx, 31, 0x107C44u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x107C3Cu, 0x107C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C44u;
label_107c44:
    // 0x107c44: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x107c44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107c48:
    // 0x107c48: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x107c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_107c4c:
    // 0x107c4c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x107c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_107c50:
    // 0x107c50: 0xc090f80  jal         func_243E00
label_107c54:
    if (ctx->pc == 0x107C54u) {
        ctx->pc = 0x107C58u;
        goto label_107c58;
    }
    ctx->pc = 0x107C50u;
    SET_GPR_U32(ctx, 31, 0x107C58u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x107C50u, 0x107C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C58u;
label_107c58:
    // 0x107c58: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x107c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_107c5c:
    // 0x107c5c: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x107c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_107c60:
    // 0x107c60: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x107c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_107c64:
    // 0x107c64: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x107c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_107c68:
    // 0x107c68: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x107c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107c6c:
    // 0x107c6c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x107c6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_107c70:
    // 0x107c70: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x107c70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_107c74:
    // 0x107c74: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x107c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_107c78:
    // 0x107c78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107c7c:
    // 0x107c7c: 0xc0913ec  jal         func_244FB0
label_107c80:
    if (ctx->pc == 0x107C80u) {
        ctx->pc = 0x107C84u;
        goto label_107c84;
    }
    ctx->pc = 0x107C7Cu;
    SET_GPR_U32(ctx, 31, 0x107C84u);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x107C7Cu, 0x107C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C84u;
label_107c84:
    // 0x107c84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107c88:
    // 0x107c88: 0x2405055f  addiu       $a1, $zero, 0x55F
    ctx->pc = 0x107c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1375));
label_107c8c:
    // 0x107c8c: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x107c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_107c90:
    // 0x107c90: 0xc041bc4  jal         func_106F10
label_107c94:
    if (ctx->pc == 0x107C94u) {
        ctx->pc = 0x107C98u;
        goto label_107c98;
    }
    ctx->pc = 0x107C90u;
    SET_GPR_U32(ctx, 31, 0x107C98u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x107C90u, 0x107C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C98u;
label_107c98:
    // 0x107c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107c9c:
    // 0x107c9c: 0xc0913ec  jal         func_244FB0
label_107ca0:
    if (ctx->pc == 0x107CA0u) {
        ctx->pc = 0x107CA4u;
        goto label_107ca4;
    }
    ctx->pc = 0x107C9Cu;
    SET_GPR_U32(ctx, 31, 0x107CA4u);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x107C9Cu, 0x107CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CA4u;
label_107ca4:
    // 0x107ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107ca8:
    // 0x107ca8: 0x24050560  addiu       $a1, $zero, 0x560
    ctx->pc = 0x107ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
label_107cac:
    // 0x107cac: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x107cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_107cb0:
    // 0x107cb0: 0xc041bc4  jal         func_106F10
label_107cb4:
    if (ctx->pc == 0x107CB4u) {
        ctx->pc = 0x107CB8u;
        goto label_107cb8;
    }
    ctx->pc = 0x107CB0u;
    SET_GPR_U32(ctx, 31, 0x107CB8u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x107CB0u, 0x107CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CB8u;
label_107cb8:
    // 0x107cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107cbc:
    // 0x107cbc: 0xc0913ec  jal         func_244FB0
label_107cc0:
    if (ctx->pc == 0x107CC0u) {
        ctx->pc = 0x107CC4u;
        goto label_107cc4;
    }
    ctx->pc = 0x107CBCu;
    SET_GPR_U32(ctx, 31, 0x107CC4u);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x107CBCu, 0x107CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CC4u;
label_107cc4:
    // 0x107cc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107cc8:
    // 0x107cc8: 0x24050561  addiu       $a1, $zero, 0x561
    ctx->pc = 0x107cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1377));
label_107ccc:
    // 0x107ccc: 0xc7ac0168  lwc1        $f12, 0x168($sp)
    ctx->pc = 0x107cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_107cd0:
    // 0x107cd0: 0xc041bc4  jal         func_106F10
label_107cd4:
    if (ctx->pc == 0x107CD4u) {
        ctx->pc = 0x107CD8u;
        goto label_107cd8;
    }
    ctx->pc = 0x107CD0u;
    SET_GPR_U32(ctx, 31, 0x107CD8u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x107CD0u, 0x107CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CD8u;
label_107cd8:
    // 0x107cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107cdc:
    // 0x107cdc: 0xc0913ec  jal         func_244FB0
label_107ce0:
    if (ctx->pc == 0x107CE0u) {
        ctx->pc = 0x107CE4u;
        goto label_107ce4;
    }
    ctx->pc = 0x107CDCu;
    SET_GPR_U32(ctx, 31, 0x107CE4u);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x107CDCu, 0x107CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CE4u;
label_107ce4:
    // 0x107ce4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x107ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_107ce8:
    // 0x107ce8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x107ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_107cec:
    // 0x107cec: 0xc091010  jal         func_244040
label_107cf0:
    if (ctx->pc == 0x107CF0u) {
        ctx->pc = 0x107CF4u;
        goto label_107cf4;
    }
    ctx->pc = 0x107CECu;
    SET_GPR_U32(ctx, 31, 0x107CF4u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x107CECu, 0x107CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CF4u;
label_107cf4:
    // 0x107cf4: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x107cf4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_107cf8:
    // 0x107cf8: 0x240503fd  addiu       $a1, $zero, 0x3FD
    ctx->pc = 0x107cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
label_107cfc:
    // 0x107cfc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x107cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107d00:
    // 0x107d00: 0xc040924  jal         func_102490
label_107d04:
    if (ctx->pc == 0x107D04u) {
        ctx->pc = 0x107D08u;
        goto label_107d08;
    }
    ctx->pc = 0x107D00u;
    SET_GPR_U32(ctx, 31, 0x107D08u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x107D00u, 0x107D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D08u;
label_107d08:
    // 0x107d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107d0c:
    // 0x107d0c: 0xc0913ec  jal         func_244FB0
label_107d10:
    if (ctx->pc == 0x107D10u) {
        ctx->pc = 0x107D14u;
        goto label_107d14;
    }
    ctx->pc = 0x107D0Cu;
    SET_GPR_U32(ctx, 31, 0x107D14u);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x107D0Cu, 0x107D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D14u;
label_107d14:
    // 0x107d14: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x107d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_107d18:
    // 0x107d18: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x107d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107d1c:
    // 0x107d1c: 0xc0422b8  jal         func_108AE0
label_107d20:
    if (ctx->pc == 0x107D20u) {
        ctx->pc = 0x107D24u;
        goto label_107d24;
    }
    ctx->pc = 0x107D1Cu;
    SET_GPR_U32(ctx, 31, 0x107D24u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x107D1Cu, 0x107D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D24u;
label_107d24:
    // 0x107d24: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x107d24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_107d28:
    // 0x107d28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x107d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107d2c:
    // 0x107d2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x107d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_107d30:
    // 0x107d30: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x107d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_107d34:
    // 0x107d34: 0x320f809  jalr        $t9
label_107d38:
    if (ctx->pc == 0x107D38u) {
        ctx->pc = 0x107D3Cu;
        goto label_107d3c;
    }
    ctx->pc = 0x107D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x107D3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107D34u, 0x107D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107D3Cu;
label_107d3c:
    // 0x107d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107d40:
    // 0x107d40: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x107d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107d44:
    // 0x107d44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x107d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_107d48:
    // 0x107d48: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x107d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_107d4c:
    // 0x107d4c: 0x320f809  jalr        $t9
label_107d50:
    if (ctx->pc == 0x107D50u) {
        ctx->pc = 0x107D54u;
        goto label_107d54;
    }
    ctx->pc = 0x107D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x107D54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107D4Cu, 0x107D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107D54u;
label_107d54:
    // 0x107d54: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x107d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_107d58:
    // 0x107d58: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x107d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_107d5c:
    // 0x107d5c: 0xc042288  jal         func_108A20
label_107d60:
    if (ctx->pc == 0x107D60u) {
        ctx->pc = 0x107D64u;
        goto label_107d64;
    }
    ctx->pc = 0x107D5Cu;
    SET_GPR_U32(ctx, 31, 0x107D64u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x107D5Cu, 0x107D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D64u;
label_107d64:
    // 0x107d64: 0x1602ffb2  bne         $s0, $v0, . + 4 + (-0x4E << 2)
label_107d68:
    if (ctx->pc == 0x107D68u) {
        ctx->pc = 0x107D6Cu;
        goto label_107d6c;
    }
    ctx->pc = 0x107D64u;
    {
        const bool branch_taken_0x107d64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x107d64) {
            ctx->pc = 0x107C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107c30;
        }
    }
    ctx->pc = 0x107D6Cu;
label_107d6c:
    // 0x107d6c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x107d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_107d70:
    // 0x107d70: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x107d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_107d74:
    // 0x107d74: 0xc0420a0  jal         func_108280
label_107d78:
    if (ctx->pc == 0x107D78u) {
        ctx->pc = 0x107D7Cu;
        goto label_107d7c;
    }
    ctx->pc = 0x107D74u;
    SET_GPR_U32(ctx, 31, 0x107D7Cu);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x107D74u, 0x107D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D7Cu;
label_107d7c:
    // 0x107d7c: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_107d80:
    if (ctx->pc == 0x107D80u) {
        ctx->pc = 0x107D84u;
        goto label_107d84;
    }
    ctx->pc = 0x107D7Cu;
    {
        const bool branch_taken_0x107d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107d7c) {
            ctx->pc = 0x108148u;
            goto label_108148;
        }
    }
    ctx->pc = 0x107D84u;
label_107d84:
    // 0x107d84: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x107d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107d88:
    // 0x107d88: 0xc088560  jal         func_221580
label_107d8c:
    if (ctx->pc == 0x107D8Cu) {
        ctx->pc = 0x107D90u;
        goto label_107d90;
    }
    ctx->pc = 0x107D88u;
    SET_GPR_U32(ctx, 31, 0x107D90u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x107D88u, 0x107D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D90u;
label_107d90:
    // 0x107d90: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x107d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_107d94:
    // 0x107d94: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x107d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_107d98:
    // 0x107d98: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x107d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107d9c:
    // 0x107d9c: 0xc088fe8  jal         func_223FA0
label_107da0:
    if (ctx->pc == 0x107DA0u) {
        ctx->pc = 0x107DA4u;
        goto label_107da4;
    }
    ctx->pc = 0x107D9Cu;
    SET_GPR_U32(ctx, 31, 0x107DA4u);
    ctx->pc = 0x223FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223FA0u, 0x107D9Cu, 0x107DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DA4u;
label_107da4:
    // 0x107da4: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x107da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107da8:
    // 0x107da8: 0xc0422b8  jal         func_108AE0
label_107dac:
    if (ctx->pc == 0x107DACu) {
        ctx->pc = 0x107DB0u;
        goto label_107db0;
    }
    ctx->pc = 0x107DA8u;
    SET_GPR_U32(ctx, 31, 0x107DB0u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x107DA8u, 0x107DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DB0u;
label_107db0:
    // 0x107db0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x107db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107db4:
    // 0x107db4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x107db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107db8:
    // 0x107db8: 0xc08904c  jal         func_224130
label_107dbc:
    if (ctx->pc == 0x107DBCu) {
        ctx->pc = 0x107DC0u;
        goto label_107dc0;
    }
    ctx->pc = 0x107DB8u;
    SET_GPR_U32(ctx, 31, 0x107DC0u);
    ctx->pc = 0x224130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224130u, 0x107DB8u, 0x107DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DC0u;
label_107dc0:
    // 0x107dc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x107dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_107dc4:
    // 0x107dc4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x107dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107dc8:
    // 0x107dc8: 0x2405055f  addiu       $a1, $zero, 0x55F
    ctx->pc = 0x107dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1375));
label_107dcc:
    // 0x107dcc: 0xc042090  jal         func_108240
label_107dd0:
    if (ctx->pc == 0x107DD0u) {
        ctx->pc = 0x107DD4u;
        goto label_107dd4;
    }
    ctx->pc = 0x107DCCu;
    SET_GPR_U32(ctx, 31, 0x107DD4u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x107DCCu, 0x107DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DD4u;
label_107dd4:
    // 0x107dd4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x107dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_107dd8:
    // 0x107dd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x107dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_107ddc:
    // 0x107ddc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x107ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107de0:
    // 0x107de0: 0x24050560  addiu       $a1, $zero, 0x560
    ctx->pc = 0x107de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
label_107de4:
    // 0x107de4: 0xc042090  jal         func_108240
label_107de8:
    if (ctx->pc == 0x107DE8u) {
        ctx->pc = 0x107DECu;
        goto label_107dec;
    }
    ctx->pc = 0x107DE4u;
    SET_GPR_U32(ctx, 31, 0x107DECu);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x107DE4u, 0x107DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107DECu;
label_107dec:
    // 0x107dec: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x107decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_107df0:
    // 0x107df0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x107df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_107df4:
    // 0x107df4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x107df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107df8:
    // 0x107df8: 0x24050561  addiu       $a1, $zero, 0x561
    ctx->pc = 0x107df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1377));
label_107dfc:
    // 0x107dfc: 0xc042090  jal         func_108240
label_107e00:
    if (ctx->pc == 0x107E00u) {
        ctx->pc = 0x107E04u;
        goto label_107e04;
    }
    ctx->pc = 0x107DFCu;
    SET_GPR_U32(ctx, 31, 0x107E04u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x107DFCu, 0x107E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E04u;
label_107e04:
    // 0x107e04: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x107e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_107e08:
    // 0x107e08: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x107e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107e0c:
    // 0x107e0c: 0x24050552  addiu       $a1, $zero, 0x552
    ctx->pc = 0x107e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1362));
label_107e10:
    // 0x107e10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107e14:
    // 0x107e14: 0xc042080  jal         func_108200
label_107e18:
    if (ctx->pc == 0x107E18u) {
        ctx->pc = 0x107E1Cu;
        goto label_107e1c;
    }
    ctx->pc = 0x107E14u;
    SET_GPR_U32(ctx, 31, 0x107E1Cu);
    ctx->pc = 0x108200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108200u, 0x107E14u, 0x107E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E1Cu;
label_107e1c:
    // 0x107e1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x107e1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107e20:
    // 0x107e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x107e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_107e24:
    // 0x107e24: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x107e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_107e28:
    // 0x107e28: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x107e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107e2c:
    // 0x107e2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x107e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107e30:
    // 0x107e30: 0xc043448  jal         func_10D120
label_107e34:
    if (ctx->pc == 0x107E34u) {
        ctx->pc = 0x107E38u;
        goto label_107e38;
    }
    ctx->pc = 0x107E30u;
    SET_GPR_U32(ctx, 31, 0x107E38u);
    ctx->pc = 0x10D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D120u, 0x107E30u, 0x107E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E38u;
label_107e38:
    // 0x107e38: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x107e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_107e3c:
    // 0x107e3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x107e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_107e40:
    // 0x107e40: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x107e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_107e44:
    // 0x107e44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x107e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_107e48:
    // 0x107e48: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x107e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107e4c:
    // 0x107e4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x107e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_107e50:
    // 0x107e50: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x107e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_107e54:
    // 0x107e54: 0x320f809  jalr        $t9
label_107e58:
    if (ctx->pc == 0x107E58u) {
        ctx->pc = 0x107E5Cu;
        goto label_107e5c;
    }
    ctx->pc = 0x107E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x107E5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107E54u, 0x107E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107E5Cu;
label_107e5c:
    // 0x107e5c: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x107e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_107e60:
    // 0x107e60: 0xc041008  jal         func_104020
label_107e64:
    if (ctx->pc == 0x107E64u) {
        ctx->pc = 0x107E68u;
        goto label_107e68;
    }
    ctx->pc = 0x107E60u;
    SET_GPR_U32(ctx, 31, 0x107E68u);
    ctx->pc = 0x104020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104020u, 0x107E60u, 0x107E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E68u;
label_107e68:
    // 0x107e68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x107e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107e6c:
    // 0x107e6c: 0x1000000c  b           . + 4 + (0xC << 2)
label_107e70:
    if (ctx->pc == 0x107E70u) {
        ctx->pc = 0x107E74u;
        goto label_107e74;
    }
    ctx->pc = 0x107E6Cu;
    {
        const bool branch_taken_0x107e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107e6c) {
            ctx->pc = 0x107EA0u;
            goto label_107ea0;
        }
    }
    ctx->pc = 0x107E74u;
label_107e74:
    // 0x107e74: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x107e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_107e78:
    // 0x107e78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x107e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_107e7c:
    // 0x107e7c: 0xc08551c  jal         func_215470
label_107e80:
    if (ctx->pc == 0x107E80u) {
        ctx->pc = 0x107E84u;
        goto label_107e84;
    }
    ctx->pc = 0x107E7Cu;
    SET_GPR_U32(ctx, 31, 0x107E84u);
    ctx->pc = 0x215470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215470u, 0x107E7Cu, 0x107E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E84u;
label_107e84:
    // 0x107e84: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x107e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_107e88:
    // 0x107e88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x107e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107e8c:
    // 0x107e8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x107e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_107e90:
    // 0x107e90: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x107e90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_107e94:
    // 0x107e94: 0x320f809  jalr        $t9
label_107e98:
    if (ctx->pc == 0x107E98u) {
        ctx->pc = 0x107E9Cu;
        goto label_107e9c;
    }
    ctx->pc = 0x107E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x107E9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107E94u, 0x107E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107E9Cu;
label_107e9c:
    // 0x107e9c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x107e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_107ea0:
    // 0x107ea0: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x107ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_107ea4:
    // 0x107ea4: 0xc041000  jal         func_104000
label_107ea8:
    if (ctx->pc == 0x107EA8u) {
        ctx->pc = 0x107EACu;
        goto label_107eac;
    }
    ctx->pc = 0x107EA4u;
    SET_GPR_U32(ctx, 31, 0x107EACu);
    ctx->pc = 0x104000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104000u, 0x107EA4u, 0x107EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107EACu;
label_107eac:
    // 0x107eac: 0x1642fff1  bne         $s2, $v0, . + 4 + (-0xF << 2)
label_107eb0:
    if (ctx->pc == 0x107EB0u) {
        ctx->pc = 0x107EB4u;
        goto label_107eb4;
    }
    ctx->pc = 0x107EACu;
    {
        const bool branch_taken_0x107eac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x107eac) {
            ctx->pc = 0x107E74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107e74;
        }
    }
    ctx->pc = 0x107EB4u;
label_107eb4:
    // 0x107eb4: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x107eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107eb8:
    // 0x107eb8: 0xc0422b8  jal         func_108AE0
label_107ebc:
    if (ctx->pc == 0x107EBCu) {
        ctx->pc = 0x107EC0u;
        goto label_107ec0;
    }
    ctx->pc = 0x107EB8u;
    SET_GPR_U32(ctx, 31, 0x107EC0u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x107EB8u, 0x107EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107EC0u;
label_107ec0:
    // 0x107ec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107ec4:
    // 0x107ec4: 0x27a50188  addiu       $a1, $sp, 0x188
    ctx->pc = 0x107ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_107ec8:
    // 0x107ec8: 0xc0422a8  jal         func_108AA0
label_107ecc:
    if (ctx->pc == 0x107ECCu) {
        ctx->pc = 0x107ED0u;
        goto label_107ed0;
    }
    ctx->pc = 0x107EC8u;
    SET_GPR_U32(ctx, 31, 0x107ED0u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x107EC8u, 0x107ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107ED0u;
label_107ed0:
    // 0x107ed0: 0x10000030  b           . + 4 + (0x30 << 2)
label_107ed4:
    if (ctx->pc == 0x107ED4u) {
        ctx->pc = 0x107ED8u;
        goto label_107ed8;
    }
    ctx->pc = 0x107ED0u;
    {
        const bool branch_taken_0x107ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107ed0) {
            ctx->pc = 0x107F94u;
            goto label_107f94;
        }
    }
    ctx->pc = 0x107ED8u;
label_107ed8:
    // 0x107ed8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x107ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107edc:
    // 0x107edc: 0xc088fe8  jal         func_223FA0
label_107ee0:
    if (ctx->pc == 0x107EE0u) {
        ctx->pc = 0x107EE4u;
        goto label_107ee4;
    }
    ctx->pc = 0x107EDCu;
    SET_GPR_U32(ctx, 31, 0x107EE4u);
    ctx->pc = 0x223FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223FA0u, 0x107EDCu, 0x107EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107EE4u;
label_107ee4:
    // 0x107ee4: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x107ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107ee8:
    // 0x107ee8: 0xc0422b8  jal         func_108AE0
label_107eec:
    if (ctx->pc == 0x107EECu) {
        ctx->pc = 0x107EF0u;
        goto label_107ef0;
    }
    ctx->pc = 0x107EE8u;
    SET_GPR_U32(ctx, 31, 0x107EF0u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x107EE8u, 0x107EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107EF0u;
label_107ef0:
    // 0x107ef0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x107ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107ef4:
    // 0x107ef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x107ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107ef8:
    // 0x107ef8: 0xc08904c  jal         func_224130
label_107efc:
    if (ctx->pc == 0x107EFCu) {
        ctx->pc = 0x107F00u;
        goto label_107f00;
    }
    ctx->pc = 0x107EF8u;
    SET_GPR_U32(ctx, 31, 0x107F00u);
    ctx->pc = 0x224130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224130u, 0x107EF8u, 0x107F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F00u;
label_107f00:
    // 0x107f00: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x107f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107f04:
    // 0x107f04: 0x24050552  addiu       $a1, $zero, 0x552
    ctx->pc = 0x107f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1362));
label_107f08:
    // 0x107f08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107f0c:
    // 0x107f0c: 0xc042080  jal         func_108200
label_107f10:
    if (ctx->pc == 0x107F10u) {
        ctx->pc = 0x107F14u;
        goto label_107f14;
    }
    ctx->pc = 0x107F0Cu;
    SET_GPR_U32(ctx, 31, 0x107F14u);
    ctx->pc = 0x108200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108200u, 0x107F0Cu, 0x107F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F14u;
label_107f14:
    // 0x107f14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x107f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107f18:
    // 0x107f18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x107f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_107f1c:
    // 0x107f1c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x107f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107f20:
    // 0x107f20: 0x2405055f  addiu       $a1, $zero, 0x55F
    ctx->pc = 0x107f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1375));
label_107f24:
    // 0x107f24: 0xc042090  jal         func_108240
label_107f28:
    if (ctx->pc == 0x107F28u) {
        ctx->pc = 0x107F2Cu;
        goto label_107f2c;
    }
    ctx->pc = 0x107F24u;
    SET_GPR_U32(ctx, 31, 0x107F2Cu);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x107F24u, 0x107F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F2Cu;
label_107f2c:
    // 0x107f2c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x107f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_107f30:
    // 0x107f30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x107f30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_107f34:
    // 0x107f34: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x107f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107f38:
    // 0x107f38: 0x24050560  addiu       $a1, $zero, 0x560
    ctx->pc = 0x107f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
label_107f3c:
    // 0x107f3c: 0xc042090  jal         func_108240
label_107f40:
    if (ctx->pc == 0x107F40u) {
        ctx->pc = 0x107F44u;
        goto label_107f44;
    }
    ctx->pc = 0x107F3Cu;
    SET_GPR_U32(ctx, 31, 0x107F44u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x107F3Cu, 0x107F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F44u;
label_107f44:
    // 0x107f44: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x107f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_107f48:
    // 0x107f48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x107f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_107f4c:
    // 0x107f4c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x107f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107f50:
    // 0x107f50: 0x24050561  addiu       $a1, $zero, 0x561
    ctx->pc = 0x107f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1377));
label_107f54:
    // 0x107f54: 0xc042090  jal         func_108240
label_107f58:
    if (ctx->pc == 0x107F58u) {
        ctx->pc = 0x107F5Cu;
        goto label_107f5c;
    }
    ctx->pc = 0x107F54u;
    SET_GPR_U32(ctx, 31, 0x107F5Cu);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x107F54u, 0x107F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F5Cu;
label_107f5c:
    // 0x107f5c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x107f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_107f60:
    // 0x107f60: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x107f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_107f64:
    // 0x107f64: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x107f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_107f68:
    // 0x107f68: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x107f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_107f6c:
    // 0x107f6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x107f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107f70:
    // 0x107f70: 0xc043448  jal         func_10D120
label_107f74:
    if (ctx->pc == 0x107F74u) {
        ctx->pc = 0x107F78u;
        goto label_107f78;
    }
    ctx->pc = 0x107F70u;
    SET_GPR_U32(ctx, 31, 0x107F78u);
    ctx->pc = 0x10D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D120u, 0x107F70u, 0x107F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F78u;
label_107f78:
    // 0x107f78: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x107f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
label_107f7c:
    // 0x107f7c: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x107f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_107f80:
    // 0x107f80: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x107f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107f84:
    // 0x107f84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x107f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_107f88:
    // 0x107f88: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x107f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_107f8c:
    // 0x107f8c: 0x320f809  jalr        $t9
label_107f90:
    if (ctx->pc == 0x107F90u) {
        ctx->pc = 0x107F94u;
        goto label_107f94;
    }
    ctx->pc = 0x107F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x107F94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107F8Cu, 0x107F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107F94u;
label_107f94:
    // 0x107f94: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x107f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_107f98:
    // 0x107f98: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x107f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_107f9c:
    // 0x107f9c: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x107f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_107fa0:
    // 0x107fa0: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
label_107fa4:
    if (ctx->pc == 0x107FA4u) {
        ctx->pc = 0x107FA8u;
        goto label_107fa8;
    }
    ctx->pc = 0x107FA0u;
    {
        const bool branch_taken_0x107fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x107fa0) {
            ctx->pc = 0x107ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107ed8;
        }
    }
    ctx->pc = 0x107FA8u;
label_107fa8:
    // 0x107fa8: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x107fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_107fac:
    // 0x107fac: 0xc0422b8  jal         func_108AE0
label_107fb0:
    if (ctx->pc == 0x107FB0u) {
        ctx->pc = 0x107FB4u;
        goto label_107fb4;
    }
    ctx->pc = 0x107FACu;
    SET_GPR_U32(ctx, 31, 0x107FB4u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x107FACu, 0x107FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107FB4u;
label_107fb4:
    // 0x107fb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107fb8:
    // 0x107fb8: 0x27a50188  addiu       $a1, $sp, 0x188
    ctx->pc = 0x107fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_107fbc:
    // 0x107fbc: 0xc0422a8  jal         func_108AA0
label_107fc0:
    if (ctx->pc == 0x107FC0u) {
        ctx->pc = 0x107FC4u;
        goto label_107fc4;
    }
    ctx->pc = 0x107FBCu;
    SET_GPR_U32(ctx, 31, 0x107FC4u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x107FBCu, 0x107FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107FC4u;
label_107fc4:
    // 0x107fc4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x107fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_107fc8:
    // 0x107fc8: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x107fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_107fcc:
    // 0x107fcc: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x107fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_107fd0:
    // 0x107fd0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x107fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_107fd4:
    // 0x107fd4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x107fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_107fd8:
    // 0x107fd8: 0x24a51530  addiu       $a1, $a1, 0x1530
    ctx->pc = 0x107fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5424));
label_107fdc:
    // 0x107fdc: 0x278684c0  addiu       $a2, $gp, -0x7B40
    ctx->pc = 0x107fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935744));
label_107fe0:
    // 0x107fe0: 0xc04206c  jal         func_1081B0
label_107fe4:
    if (ctx->pc == 0x107FE4u) {
        ctx->pc = 0x107FE8u;
        goto label_107fe8;
    }
    ctx->pc = 0x107FE0u;
    SET_GPR_U32(ctx, 31, 0x107FE8u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x107FE0u, 0x107FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107FE8u;
label_107fe8:
    // 0x107fe8: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x107fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_107fec:
    // 0x107fec: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x107fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_107ff0:
    // 0x107ff0: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x107ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_107ff4:
    // 0x107ff4: 0xc08a994  jal         func_22A650
label_107ff8:
    if (ctx->pc == 0x107FF8u) {
        ctx->pc = 0x107FFCu;
        goto label_107ffc;
    }
    ctx->pc = 0x107FF4u;
    SET_GPR_U32(ctx, 31, 0x107FFCu);
    ctx->pc = 0x22A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A650u, 0x107FF4u, 0x107FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107FFCu;
label_107ffc:
    // 0x107ffc: 0x10000047  b           . + 4 + (0x47 << 2)
label_108000:
    if (ctx->pc == 0x108000u) {
        ctx->pc = 0x108004u;
        goto label_108004;
    }
    ctx->pc = 0x107FFCu;
    {
        const bool branch_taken_0x107ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107ffc) {
            ctx->pc = 0x10811Cu;
            goto label_10811c;
        }
    }
    ctx->pc = 0x108004u;
label_108004:
    // 0x108004: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x108004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_108008:
    // 0x108008: 0xc088fe8  jal         func_223FA0
label_10800c:
    if (ctx->pc == 0x10800Cu) {
        ctx->pc = 0x108010u;
        goto label_108010;
    }
    ctx->pc = 0x108008u;
    SET_GPR_U32(ctx, 31, 0x108010u);
    ctx->pc = 0x223FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223FA0u, 0x108008u, 0x108010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108010u;
label_108010:
    // 0x108010: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x108010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_108014:
    // 0x108014: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108018:
    // 0x108018: 0xc0422b8  jal         func_108AE0
label_10801c:
    if (ctx->pc == 0x10801Cu) {
        ctx->pc = 0x108020u;
        goto label_108020;
    }
    ctx->pc = 0x108018u;
    SET_GPR_U32(ctx, 31, 0x108020u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x108018u, 0x108020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108020u;
label_108020:
    // 0x108020: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x108020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_108024:
    // 0x108024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x108024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108028:
    // 0x108028: 0xc08904c  jal         func_224130
label_10802c:
    if (ctx->pc == 0x10802Cu) {
        ctx->pc = 0x108030u;
        goto label_108030;
    }
    ctx->pc = 0x108028u;
    SET_GPR_U32(ctx, 31, 0x108030u);
    ctx->pc = 0x224130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224130u, 0x108028u, 0x108030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108030u;
label_108030:
    // 0x108030: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x108030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_108034:
    // 0x108034: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108038:
    // 0x108038: 0x24020552  addiu       $v0, $zero, 0x552
    ctx->pc = 0x108038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1362));
label_10803c:
    // 0x10803c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10803cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108040:
    // 0x108040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108044:
    // 0x108044: 0xc042080  jal         func_108200
label_108048:
    if (ctx->pc == 0x108048u) {
        ctx->pc = 0x10804Cu;
        goto label_10804c;
    }
    ctx->pc = 0x108044u;
    SET_GPR_U32(ctx, 31, 0x10804Cu);
    ctx->pc = 0x108200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108200u, 0x108044u, 0x10804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10804Cu;
label_10804c:
    // 0x10804c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10804cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108050:
    // 0x108050: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x108050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_108054:
    // 0x108054: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x108054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_108058:
    // 0x108058: 0x2405055f  addiu       $a1, $zero, 0x55F
    ctx->pc = 0x108058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1375));
label_10805c:
    // 0x10805c: 0xc042090  jal         func_108240
label_108060:
    if (ctx->pc == 0x108060u) {
        ctx->pc = 0x108064u;
        goto label_108064;
    }
    ctx->pc = 0x10805Cu;
    SET_GPR_U32(ctx, 31, 0x108064u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x10805Cu, 0x108064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108064u;
label_108064:
    // 0x108064: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x108064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_108068:
    // 0x108068: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x108068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10806c:
    // 0x10806c: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x10806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_108070:
    // 0x108070: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108074:
    // 0x108074: 0x24050560  addiu       $a1, $zero, 0x560
    ctx->pc = 0x108074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
label_108078:
    // 0x108078: 0xc042090  jal         func_108240
label_10807c:
    if (ctx->pc == 0x10807Cu) {
        ctx->pc = 0x108080u;
        goto label_108080;
    }
    ctx->pc = 0x108078u;
    SET_GPR_U32(ctx, 31, 0x108080u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x108078u, 0x108080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108080u;
label_108080:
    // 0x108080: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x108080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_108084:
    // 0x108084: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x108084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_108088:
    // 0x108088: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x108088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_10808c:
    // 0x10808c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10808cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108090:
    // 0x108090: 0x24050561  addiu       $a1, $zero, 0x561
    ctx->pc = 0x108090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1377));
label_108094:
    // 0x108094: 0xc042090  jal         func_108240
label_108098:
    if (ctx->pc == 0x108098u) {
        ctx->pc = 0x10809Cu;
        goto label_10809c;
    }
    ctx->pc = 0x108094u;
    SET_GPR_U32(ctx, 31, 0x10809Cu);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x108094u, 0x10809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10809Cu;
label_10809c:
    // 0x10809c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x10809cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1080a0:
    // 0x1080a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1080a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1080a4:
    // 0x1080a4: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x1080a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1080a8:
    // 0x1080a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1080a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1080ac:
    // 0x1080ac: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x1080acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1080b0:
    // 0x1080b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1080b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1080b4:
    // 0x1080b4: 0xc043448  jal         func_10D120
label_1080b8:
    if (ctx->pc == 0x1080B8u) {
        ctx->pc = 0x1080BCu;
        goto label_1080bc;
    }
    ctx->pc = 0x1080B4u;
    SET_GPR_U32(ctx, 31, 0x1080BCu);
    ctx->pc = 0x10D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D120u, 0x1080B4u, 0x1080BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1080BCu;
label_1080bc:
    // 0x1080bc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1080bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1080c0:
    // 0x1080c0: 0x10170009  beq         $zero, $s7, . + 4 + (0x9 << 2)
label_1080c4:
    if (ctx->pc == 0x1080C4u) {
        ctx->pc = 0x1080C8u;
        goto label_1080c8;
    }
    ctx->pc = 0x1080C0u;
    {
        const bool branch_taken_0x1080c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 23));
        if (branch_taken_0x1080c0) {
            ctx->pc = 0x1080E8u;
            goto label_1080e8;
        }
    }
    ctx->pc = 0x1080C8u;
label_1080c8:
    // 0x1080c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1080c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1080cc:
    // 0x1080cc: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x1080ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_1080d0:
    // 0x1080d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1080d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1080d4:
    // 0x1080d4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1080d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1080d8:
    // 0x1080d8: 0x320f809  jalr        $t9
label_1080dc:
    if (ctx->pc == 0x1080DCu) {
        ctx->pc = 0x1080E0u;
        goto label_1080e0;
    }
    ctx->pc = 0x1080D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1080E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1080D8u, 0x1080E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1080E0u;
label_1080e0:
    // 0x1080e0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1080e4:
    if (ctx->pc == 0x1080E4u) {
        ctx->pc = 0x1080E8u;
        goto label_1080e8;
    }
    ctx->pc = 0x1080E0u;
    {
        const bool branch_taken_0x1080e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1080e0) {
            ctx->pc = 0x10811Cu;
            goto label_10811c;
        }
    }
    ctx->pc = 0x1080E8u;
label_1080e8:
    // 0x1080e8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1080e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1080ec:
    // 0x1080ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1080ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1080f0:
    // 0x1080f0: 0xc09121c  jal         func_244870
label_1080f4:
    if (ctx->pc == 0x1080F4u) {
        ctx->pc = 0x1080F8u;
        goto label_1080f8;
    }
    ctx->pc = 0x1080F0u;
    SET_GPR_U32(ctx, 31, 0x1080F8u);
    ctx->pc = 0x244870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244870u, 0x1080F0u, 0x1080F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1080F8u;
label_1080f8:
    // 0x1080f8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1080f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1080fc:
    // 0x1080fc: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x1080fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_108100:
    // 0x108100: 0xc0912d8  jal         func_244B60
label_108104:
    if (ctx->pc == 0x108104u) {
        ctx->pc = 0x108108u;
        goto label_108108;
    }
    ctx->pc = 0x108100u;
    SET_GPR_U32(ctx, 31, 0x108108u);
    ctx->pc = 0x244B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244B60u, 0x108100u, 0x108108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108108u;
label_108108:
    // 0x108108: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x108108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_10810c:
    // 0x10810c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10810cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108110:
    // 0x108110: 0xc0410dc  jal         func_104370
label_108114:
    if (ctx->pc == 0x108114u) {
        ctx->pc = 0x108118u;
        goto label_108118;
    }
    ctx->pc = 0x108110u;
    SET_GPR_U32(ctx, 31, 0x108118u);
    ctx->pc = 0x104370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104370u, 0x108110u, 0x108118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108118u;
label_108118:
    // 0x108118: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x108118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10811c:
    // 0x10811c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x10811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_108120:
    // 0x108120: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x108120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_108124:
    // 0x108124: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x108124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_108128:
    // 0x108128: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_10812c:
    if (ctx->pc == 0x10812Cu) {
        ctx->pc = 0x108130u;
        goto label_108130;
    }
    ctx->pc = 0x108128u;
    {
        const bool branch_taken_0x108128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108128) {
            ctx->pc = 0x108004u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108004;
        }
    }
    ctx->pc = 0x108130u;
label_108130:
    // 0x108130: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x108130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_108134:
    // 0x108134: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x108134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108138:
    // 0x108138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x108138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10813c:
    // 0x10813c: 0xc0887b4  jal         func_221ED0
label_108140:
    if (ctx->pc == 0x108140u) {
        ctx->pc = 0x108144u;
        goto label_108144;
    }
    ctx->pc = 0x10813Cu;
    SET_GPR_U32(ctx, 31, 0x108144u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x10813Cu, 0x108144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108144u;
label_108144:
    // 0x108144: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x108144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108148:
    // 0x108148: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x108148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_10814c:
    // 0x10814c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108150:
    // 0x108150: 0xc0422b8  jal         func_108AE0
label_108154:
    if (ctx->pc == 0x108154u) {
        ctx->pc = 0x108158u;
        goto label_108158;
    }
    ctx->pc = 0x108150u;
    SET_GPR_U32(ctx, 31, 0x108158u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x108150u, 0x108158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108158u;
label_108158:
    // 0x108158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10815c:
    // 0x10815c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10815cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108160:
    // 0x108160: 0xc08ec98  jal         func_23B260
label_108164:
    if (ctx->pc == 0x108164u) {
        ctx->pc = 0x108168u;
        goto label_108168;
    }
    ctx->pc = 0x108160u;
    SET_GPR_U32(ctx, 31, 0x108168u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x108160u, 0x108168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108168u;
label_108168:
    // 0x108168: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x108168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10816c:
    // 0x10816c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10816cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108170:
    // 0x108170: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x108170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_108174:
    // 0x108174: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x108174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_108178:
    // 0x108178: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x108178u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_10817c:
    // 0x10817c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x10817cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_108180:
    // 0x108180: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x108180u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_108184:
    // 0x108184: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x108184u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_108188:
    // 0x108188: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x108188u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10818c:
    // 0x10818c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10818cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_108190:
    // 0x108190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x108190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_108194:
    // 0x108194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_108198:
    // 0x108198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10819c:
    // 0x10819c: 0x27bd01e0  addiu       $sp, $sp, 0x1E0
    ctx->pc = 0x10819cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1081a0:
    // 0x1081a0: 0x3e00008  jr          $ra
label_1081a4:
    if (ctx->pc == 0x1081A4u) {
        ctx->pc = 0x1081A8u;
        goto label_1081a8;
    }
    ctx->pc = 0x1081A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1081A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1081A8u;
label_1081a8:
    // 0x1081a8: 0x0  nop
    ctx->pc = 0x1081a8u;
    // NOP
label_1081ac:
    // 0x1081ac: 0x0  nop
    ctx->pc = 0x1081acu;
    // NOP
    ctx->pc = 0x1081b0u;
}
