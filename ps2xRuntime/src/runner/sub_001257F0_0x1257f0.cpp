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

// Function: sub_001257F0
// Address: 0x1257f0 - 0x125e90
void sub_001257F0_0x1257f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001257F0_0x1257f0");
#endif

    switch (ctx->pc) {
        case 0x1257f0u: goto label_1257f0;
        case 0x1257f4u: goto label_1257f4;
        case 0x1257f8u: goto label_1257f8;
        case 0x1257fcu: goto label_1257fc;
        case 0x125800u: goto label_125800;
        case 0x125804u: goto label_125804;
        case 0x125808u: goto label_125808;
        case 0x12580cu: goto label_12580c;
        case 0x125810u: goto label_125810;
        case 0x125814u: goto label_125814;
        case 0x125818u: goto label_125818;
        case 0x12581cu: goto label_12581c;
        case 0x125820u: goto label_125820;
        case 0x125824u: goto label_125824;
        case 0x125828u: goto label_125828;
        case 0x12582cu: goto label_12582c;
        case 0x125830u: goto label_125830;
        case 0x125834u: goto label_125834;
        case 0x125838u: goto label_125838;
        case 0x12583cu: goto label_12583c;
        case 0x125840u: goto label_125840;
        case 0x125844u: goto label_125844;
        case 0x125848u: goto label_125848;
        case 0x12584cu: goto label_12584c;
        case 0x125850u: goto label_125850;
        case 0x125854u: goto label_125854;
        case 0x125858u: goto label_125858;
        case 0x12585cu: goto label_12585c;
        case 0x125860u: goto label_125860;
        case 0x125864u: goto label_125864;
        case 0x125868u: goto label_125868;
        case 0x12586cu: goto label_12586c;
        case 0x125870u: goto label_125870;
        case 0x125874u: goto label_125874;
        case 0x125878u: goto label_125878;
        case 0x12587cu: goto label_12587c;
        case 0x125880u: goto label_125880;
        case 0x125884u: goto label_125884;
        case 0x125888u: goto label_125888;
        case 0x12588cu: goto label_12588c;
        case 0x125890u: goto label_125890;
        case 0x125894u: goto label_125894;
        case 0x125898u: goto label_125898;
        case 0x12589cu: goto label_12589c;
        case 0x1258a0u: goto label_1258a0;
        case 0x1258a4u: goto label_1258a4;
        case 0x1258a8u: goto label_1258a8;
        case 0x1258acu: goto label_1258ac;
        case 0x1258b0u: goto label_1258b0;
        case 0x1258b4u: goto label_1258b4;
        case 0x1258b8u: goto label_1258b8;
        case 0x1258bcu: goto label_1258bc;
        case 0x1258c0u: goto label_1258c0;
        case 0x1258c4u: goto label_1258c4;
        case 0x1258c8u: goto label_1258c8;
        case 0x1258ccu: goto label_1258cc;
        case 0x1258d0u: goto label_1258d0;
        case 0x1258d4u: goto label_1258d4;
        case 0x1258d8u: goto label_1258d8;
        case 0x1258dcu: goto label_1258dc;
        case 0x1258e0u: goto label_1258e0;
        case 0x1258e4u: goto label_1258e4;
        case 0x1258e8u: goto label_1258e8;
        case 0x1258ecu: goto label_1258ec;
        case 0x1258f0u: goto label_1258f0;
        case 0x1258f4u: goto label_1258f4;
        case 0x1258f8u: goto label_1258f8;
        case 0x1258fcu: goto label_1258fc;
        case 0x125900u: goto label_125900;
        case 0x125904u: goto label_125904;
        case 0x125908u: goto label_125908;
        case 0x12590cu: goto label_12590c;
        case 0x125910u: goto label_125910;
        case 0x125914u: goto label_125914;
        case 0x125918u: goto label_125918;
        case 0x12591cu: goto label_12591c;
        case 0x125920u: goto label_125920;
        case 0x125924u: goto label_125924;
        case 0x125928u: goto label_125928;
        case 0x12592cu: goto label_12592c;
        case 0x125930u: goto label_125930;
        case 0x125934u: goto label_125934;
        case 0x125938u: goto label_125938;
        case 0x12593cu: goto label_12593c;
        case 0x125940u: goto label_125940;
        case 0x125944u: goto label_125944;
        case 0x125948u: goto label_125948;
        case 0x12594cu: goto label_12594c;
        case 0x125950u: goto label_125950;
        case 0x125954u: goto label_125954;
        case 0x125958u: goto label_125958;
        case 0x12595cu: goto label_12595c;
        case 0x125960u: goto label_125960;
        case 0x125964u: goto label_125964;
        case 0x125968u: goto label_125968;
        case 0x12596cu: goto label_12596c;
        case 0x125970u: goto label_125970;
        case 0x125974u: goto label_125974;
        case 0x125978u: goto label_125978;
        case 0x12597cu: goto label_12597c;
        case 0x125980u: goto label_125980;
        case 0x125984u: goto label_125984;
        case 0x125988u: goto label_125988;
        case 0x12598cu: goto label_12598c;
        case 0x125990u: goto label_125990;
        case 0x125994u: goto label_125994;
        case 0x125998u: goto label_125998;
        case 0x12599cu: goto label_12599c;
        case 0x1259a0u: goto label_1259a0;
        case 0x1259a4u: goto label_1259a4;
        case 0x1259a8u: goto label_1259a8;
        case 0x1259acu: goto label_1259ac;
        case 0x1259b0u: goto label_1259b0;
        case 0x1259b4u: goto label_1259b4;
        case 0x1259b8u: goto label_1259b8;
        case 0x1259bcu: goto label_1259bc;
        case 0x1259c0u: goto label_1259c0;
        case 0x1259c4u: goto label_1259c4;
        case 0x1259c8u: goto label_1259c8;
        case 0x1259ccu: goto label_1259cc;
        case 0x1259d0u: goto label_1259d0;
        case 0x1259d4u: goto label_1259d4;
        case 0x1259d8u: goto label_1259d8;
        case 0x1259dcu: goto label_1259dc;
        case 0x1259e0u: goto label_1259e0;
        case 0x1259e4u: goto label_1259e4;
        case 0x1259e8u: goto label_1259e8;
        case 0x1259ecu: goto label_1259ec;
        case 0x1259f0u: goto label_1259f0;
        case 0x1259f4u: goto label_1259f4;
        case 0x1259f8u: goto label_1259f8;
        case 0x1259fcu: goto label_1259fc;
        case 0x125a00u: goto label_125a00;
        case 0x125a04u: goto label_125a04;
        case 0x125a08u: goto label_125a08;
        case 0x125a0cu: goto label_125a0c;
        case 0x125a10u: goto label_125a10;
        case 0x125a14u: goto label_125a14;
        case 0x125a18u: goto label_125a18;
        case 0x125a1cu: goto label_125a1c;
        case 0x125a20u: goto label_125a20;
        case 0x125a24u: goto label_125a24;
        case 0x125a28u: goto label_125a28;
        case 0x125a2cu: goto label_125a2c;
        case 0x125a30u: goto label_125a30;
        case 0x125a34u: goto label_125a34;
        case 0x125a38u: goto label_125a38;
        case 0x125a3cu: goto label_125a3c;
        case 0x125a40u: goto label_125a40;
        case 0x125a44u: goto label_125a44;
        case 0x125a48u: goto label_125a48;
        case 0x125a4cu: goto label_125a4c;
        case 0x125a50u: goto label_125a50;
        case 0x125a54u: goto label_125a54;
        case 0x125a58u: goto label_125a58;
        case 0x125a5cu: goto label_125a5c;
        case 0x125a60u: goto label_125a60;
        case 0x125a64u: goto label_125a64;
        case 0x125a68u: goto label_125a68;
        case 0x125a6cu: goto label_125a6c;
        case 0x125a70u: goto label_125a70;
        case 0x125a74u: goto label_125a74;
        case 0x125a78u: goto label_125a78;
        case 0x125a7cu: goto label_125a7c;
        case 0x125a80u: goto label_125a80;
        case 0x125a84u: goto label_125a84;
        case 0x125a88u: goto label_125a88;
        case 0x125a8cu: goto label_125a8c;
        case 0x125a90u: goto label_125a90;
        case 0x125a94u: goto label_125a94;
        case 0x125a98u: goto label_125a98;
        case 0x125a9cu: goto label_125a9c;
        case 0x125aa0u: goto label_125aa0;
        case 0x125aa4u: goto label_125aa4;
        case 0x125aa8u: goto label_125aa8;
        case 0x125aacu: goto label_125aac;
        case 0x125ab0u: goto label_125ab0;
        case 0x125ab4u: goto label_125ab4;
        case 0x125ab8u: goto label_125ab8;
        case 0x125abcu: goto label_125abc;
        case 0x125ac0u: goto label_125ac0;
        case 0x125ac4u: goto label_125ac4;
        case 0x125ac8u: goto label_125ac8;
        case 0x125accu: goto label_125acc;
        case 0x125ad0u: goto label_125ad0;
        case 0x125ad4u: goto label_125ad4;
        case 0x125ad8u: goto label_125ad8;
        case 0x125adcu: goto label_125adc;
        case 0x125ae0u: goto label_125ae0;
        case 0x125ae4u: goto label_125ae4;
        case 0x125ae8u: goto label_125ae8;
        case 0x125aecu: goto label_125aec;
        case 0x125af0u: goto label_125af0;
        case 0x125af4u: goto label_125af4;
        case 0x125af8u: goto label_125af8;
        case 0x125afcu: goto label_125afc;
        case 0x125b00u: goto label_125b00;
        case 0x125b04u: goto label_125b04;
        case 0x125b08u: goto label_125b08;
        case 0x125b0cu: goto label_125b0c;
        case 0x125b10u: goto label_125b10;
        case 0x125b14u: goto label_125b14;
        case 0x125b18u: goto label_125b18;
        case 0x125b1cu: goto label_125b1c;
        case 0x125b20u: goto label_125b20;
        case 0x125b24u: goto label_125b24;
        case 0x125b28u: goto label_125b28;
        case 0x125b2cu: goto label_125b2c;
        case 0x125b30u: goto label_125b30;
        case 0x125b34u: goto label_125b34;
        case 0x125b38u: goto label_125b38;
        case 0x125b3cu: goto label_125b3c;
        case 0x125b40u: goto label_125b40;
        case 0x125b44u: goto label_125b44;
        case 0x125b48u: goto label_125b48;
        case 0x125b4cu: goto label_125b4c;
        case 0x125b50u: goto label_125b50;
        case 0x125b54u: goto label_125b54;
        case 0x125b58u: goto label_125b58;
        case 0x125b5cu: goto label_125b5c;
        case 0x125b60u: goto label_125b60;
        case 0x125b64u: goto label_125b64;
        case 0x125b68u: goto label_125b68;
        case 0x125b6cu: goto label_125b6c;
        case 0x125b70u: goto label_125b70;
        case 0x125b74u: goto label_125b74;
        case 0x125b78u: goto label_125b78;
        case 0x125b7cu: goto label_125b7c;
        case 0x125b80u: goto label_125b80;
        case 0x125b84u: goto label_125b84;
        case 0x125b88u: goto label_125b88;
        case 0x125b8cu: goto label_125b8c;
        case 0x125b90u: goto label_125b90;
        case 0x125b94u: goto label_125b94;
        case 0x125b98u: goto label_125b98;
        case 0x125b9cu: goto label_125b9c;
        case 0x125ba0u: goto label_125ba0;
        case 0x125ba4u: goto label_125ba4;
        case 0x125ba8u: goto label_125ba8;
        case 0x125bacu: goto label_125bac;
        case 0x125bb0u: goto label_125bb0;
        case 0x125bb4u: goto label_125bb4;
        case 0x125bb8u: goto label_125bb8;
        case 0x125bbcu: goto label_125bbc;
        case 0x125bc0u: goto label_125bc0;
        case 0x125bc4u: goto label_125bc4;
        case 0x125bc8u: goto label_125bc8;
        case 0x125bccu: goto label_125bcc;
        case 0x125bd0u: goto label_125bd0;
        case 0x125bd4u: goto label_125bd4;
        case 0x125bd8u: goto label_125bd8;
        case 0x125bdcu: goto label_125bdc;
        case 0x125be0u: goto label_125be0;
        case 0x125be4u: goto label_125be4;
        case 0x125be8u: goto label_125be8;
        case 0x125becu: goto label_125bec;
        case 0x125bf0u: goto label_125bf0;
        case 0x125bf4u: goto label_125bf4;
        case 0x125bf8u: goto label_125bf8;
        case 0x125bfcu: goto label_125bfc;
        case 0x125c00u: goto label_125c00;
        case 0x125c04u: goto label_125c04;
        case 0x125c08u: goto label_125c08;
        case 0x125c0cu: goto label_125c0c;
        case 0x125c10u: goto label_125c10;
        case 0x125c14u: goto label_125c14;
        case 0x125c18u: goto label_125c18;
        case 0x125c1cu: goto label_125c1c;
        case 0x125c20u: goto label_125c20;
        case 0x125c24u: goto label_125c24;
        case 0x125c28u: goto label_125c28;
        case 0x125c2cu: goto label_125c2c;
        case 0x125c30u: goto label_125c30;
        case 0x125c34u: goto label_125c34;
        case 0x125c38u: goto label_125c38;
        case 0x125c3cu: goto label_125c3c;
        case 0x125c40u: goto label_125c40;
        case 0x125c44u: goto label_125c44;
        case 0x125c48u: goto label_125c48;
        case 0x125c4cu: goto label_125c4c;
        case 0x125c50u: goto label_125c50;
        case 0x125c54u: goto label_125c54;
        case 0x125c58u: goto label_125c58;
        case 0x125c5cu: goto label_125c5c;
        case 0x125c60u: goto label_125c60;
        case 0x125c64u: goto label_125c64;
        case 0x125c68u: goto label_125c68;
        case 0x125c6cu: goto label_125c6c;
        case 0x125c70u: goto label_125c70;
        case 0x125c74u: goto label_125c74;
        case 0x125c78u: goto label_125c78;
        case 0x125c7cu: goto label_125c7c;
        case 0x125c80u: goto label_125c80;
        case 0x125c84u: goto label_125c84;
        case 0x125c88u: goto label_125c88;
        case 0x125c8cu: goto label_125c8c;
        case 0x125c90u: goto label_125c90;
        case 0x125c94u: goto label_125c94;
        case 0x125c98u: goto label_125c98;
        case 0x125c9cu: goto label_125c9c;
        case 0x125ca0u: goto label_125ca0;
        case 0x125ca4u: goto label_125ca4;
        case 0x125ca8u: goto label_125ca8;
        case 0x125cacu: goto label_125cac;
        case 0x125cb0u: goto label_125cb0;
        case 0x125cb4u: goto label_125cb4;
        case 0x125cb8u: goto label_125cb8;
        case 0x125cbcu: goto label_125cbc;
        case 0x125cc0u: goto label_125cc0;
        case 0x125cc4u: goto label_125cc4;
        case 0x125cc8u: goto label_125cc8;
        case 0x125cccu: goto label_125ccc;
        case 0x125cd0u: goto label_125cd0;
        case 0x125cd4u: goto label_125cd4;
        case 0x125cd8u: goto label_125cd8;
        case 0x125cdcu: goto label_125cdc;
        case 0x125ce0u: goto label_125ce0;
        case 0x125ce4u: goto label_125ce4;
        case 0x125ce8u: goto label_125ce8;
        case 0x125cecu: goto label_125cec;
        case 0x125cf0u: goto label_125cf0;
        case 0x125cf4u: goto label_125cf4;
        case 0x125cf8u: goto label_125cf8;
        case 0x125cfcu: goto label_125cfc;
        case 0x125d00u: goto label_125d00;
        case 0x125d04u: goto label_125d04;
        case 0x125d08u: goto label_125d08;
        case 0x125d0cu: goto label_125d0c;
        case 0x125d10u: goto label_125d10;
        case 0x125d14u: goto label_125d14;
        case 0x125d18u: goto label_125d18;
        case 0x125d1cu: goto label_125d1c;
        case 0x125d20u: goto label_125d20;
        case 0x125d24u: goto label_125d24;
        case 0x125d28u: goto label_125d28;
        case 0x125d2cu: goto label_125d2c;
        case 0x125d30u: goto label_125d30;
        case 0x125d34u: goto label_125d34;
        case 0x125d38u: goto label_125d38;
        case 0x125d3cu: goto label_125d3c;
        case 0x125d40u: goto label_125d40;
        case 0x125d44u: goto label_125d44;
        case 0x125d48u: goto label_125d48;
        case 0x125d4cu: goto label_125d4c;
        case 0x125d50u: goto label_125d50;
        case 0x125d54u: goto label_125d54;
        case 0x125d58u: goto label_125d58;
        case 0x125d5cu: goto label_125d5c;
        case 0x125d60u: goto label_125d60;
        case 0x125d64u: goto label_125d64;
        case 0x125d68u: goto label_125d68;
        case 0x125d6cu: goto label_125d6c;
        case 0x125d70u: goto label_125d70;
        case 0x125d74u: goto label_125d74;
        case 0x125d78u: goto label_125d78;
        case 0x125d7cu: goto label_125d7c;
        case 0x125d80u: goto label_125d80;
        case 0x125d84u: goto label_125d84;
        case 0x125d88u: goto label_125d88;
        case 0x125d8cu: goto label_125d8c;
        case 0x125d90u: goto label_125d90;
        case 0x125d94u: goto label_125d94;
        case 0x125d98u: goto label_125d98;
        case 0x125d9cu: goto label_125d9c;
        case 0x125da0u: goto label_125da0;
        case 0x125da4u: goto label_125da4;
        case 0x125da8u: goto label_125da8;
        case 0x125dacu: goto label_125dac;
        case 0x125db0u: goto label_125db0;
        case 0x125db4u: goto label_125db4;
        case 0x125db8u: goto label_125db8;
        case 0x125dbcu: goto label_125dbc;
        case 0x125dc0u: goto label_125dc0;
        case 0x125dc4u: goto label_125dc4;
        case 0x125dc8u: goto label_125dc8;
        case 0x125dccu: goto label_125dcc;
        case 0x125dd0u: goto label_125dd0;
        case 0x125dd4u: goto label_125dd4;
        case 0x125dd8u: goto label_125dd8;
        case 0x125ddcu: goto label_125ddc;
        case 0x125de0u: goto label_125de0;
        case 0x125de4u: goto label_125de4;
        case 0x125de8u: goto label_125de8;
        case 0x125decu: goto label_125dec;
        case 0x125df0u: goto label_125df0;
        case 0x125df4u: goto label_125df4;
        case 0x125df8u: goto label_125df8;
        case 0x125dfcu: goto label_125dfc;
        case 0x125e00u: goto label_125e00;
        case 0x125e04u: goto label_125e04;
        case 0x125e08u: goto label_125e08;
        case 0x125e0cu: goto label_125e0c;
        case 0x125e10u: goto label_125e10;
        case 0x125e14u: goto label_125e14;
        case 0x125e18u: goto label_125e18;
        case 0x125e1cu: goto label_125e1c;
        case 0x125e20u: goto label_125e20;
        case 0x125e24u: goto label_125e24;
        case 0x125e28u: goto label_125e28;
        case 0x125e2cu: goto label_125e2c;
        case 0x125e30u: goto label_125e30;
        case 0x125e34u: goto label_125e34;
        case 0x125e38u: goto label_125e38;
        case 0x125e3cu: goto label_125e3c;
        case 0x125e40u: goto label_125e40;
        case 0x125e44u: goto label_125e44;
        case 0x125e48u: goto label_125e48;
        case 0x125e4cu: goto label_125e4c;
        case 0x125e50u: goto label_125e50;
        case 0x125e54u: goto label_125e54;
        case 0x125e58u: goto label_125e58;
        case 0x125e5cu: goto label_125e5c;
        case 0x125e60u: goto label_125e60;
        case 0x125e64u: goto label_125e64;
        case 0x125e68u: goto label_125e68;
        case 0x125e6cu: goto label_125e6c;
        case 0x125e70u: goto label_125e70;
        case 0x125e74u: goto label_125e74;
        case 0x125e78u: goto label_125e78;
        case 0x125e7cu: goto label_125e7c;
        case 0x125e80u: goto label_125e80;
        case 0x125e84u: goto label_125e84;
        case 0x125e88u: goto label_125e88;
        case 0x125e8cu: goto label_125e8c;
        default: break;
    }

    ctx->pc = 0x1257f0u;

label_1257f0:
    // 0x1257f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1257f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1257f4:
    // 0x1257f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1257f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1257f8:
    // 0x1257f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1257f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1257fc:
    // 0x1257fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1257fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_125800:
    // 0x125800: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x125800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_125804:
    // 0x125804: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x125804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_125808:
    // 0x125808: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x125808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_12580c:
    // 0x12580c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12580cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_125810:
    // 0x125810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x125810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_125814:
    // 0x125814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_125818:
    // 0x125818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12581c:
    // 0x12581c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x12581cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
label_125820:
    // 0x125820: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x125820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125824:
    // 0x125824: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x125824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_125828:
    // 0x125828: 0xc042330  jal         func_108CC0
label_12582c:
    if (ctx->pc == 0x12582Cu) {
        ctx->pc = 0x125830u;
        goto label_125830;
    }
    ctx->pc = 0x125828u;
    SET_GPR_U32(ctx, 31, 0x125830u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x125828u, 0x125830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125830u;
label_125830:
    // 0x125830: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x125830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_125834:
    // 0x125834: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x125834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_125838:
    // 0x125838: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_12583c:
    if (ctx->pc == 0x12583Cu) {
        ctx->pc = 0x125840u;
        goto label_125840;
    }
    ctx->pc = 0x125838u;
    {
        const bool branch_taken_0x125838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125838) {
            ctx->pc = 0x125850u;
            goto label_125850;
        }
    }
    ctx->pc = 0x125840u;
label_125840:
    // 0x125840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125844:
    // 0x125844: 0xa3a300ef  sb          $v1, 0xEF($sp)
    ctx->pc = 0x125844u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 239), (uint8_t)GPR_U32(ctx, 3));
label_125848:
    // 0x125848: 0x10000002  b           . + 4 + (0x2 << 2)
label_12584c:
    if (ctx->pc == 0x12584Cu) {
        ctx->pc = 0x125850u;
        goto label_125850;
    }
    ctx->pc = 0x125848u;
    {
        const bool branch_taken_0x125848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125848) {
            ctx->pc = 0x125854u;
            goto label_125854;
        }
    }
    ctx->pc = 0x125850u;
label_125850:
    // 0x125850: 0xa3a000ef  sb          $zero, 0xEF($sp)
    ctx->pc = 0x125850u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 239), (uint8_t)GPR_U32(ctx, 0));
label_125854:
    // 0x125854: 0x93a300ef  lbu         $v1, 0xEF($sp)
    ctx->pc = 0x125854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 239)));
label_125858:
    // 0x125858: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x125858u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_12585c:
    // 0x12585c: 0x12000176  beqz        $s0, . + 4 + (0x176 << 2)
label_125860:
    if (ctx->pc == 0x125860u) {
        ctx->pc = 0x125864u;
        goto label_125864;
    }
    ctx->pc = 0x12585Cu;
    {
        const bool branch_taken_0x12585c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12585c) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x125864u;
label_125864:
    // 0x125864: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x125864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_125868:
    // 0x125868: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x125868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_12586c:
    // 0x12586c: 0x24050563  addiu       $a1, $zero, 0x563
    ctx->pc = 0x12586cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1379));
label_125870:
    // 0x125870: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125874:
    // 0x125874: 0xc040ab0  jal         func_102AC0
label_125878:
    if (ctx->pc == 0x125878u) {
        ctx->pc = 0x12587Cu;
        goto label_12587c;
    }
    ctx->pc = 0x125874u;
    SET_GPR_U32(ctx, 31, 0x12587Cu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x125874u, 0x12587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12587Cu;
label_12587c:
    // 0x12587c: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x12587cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_125880:
    // 0x125880: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x125880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_125884:
    // 0x125884: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_125888:
    if (ctx->pc == 0x125888u) {
        ctx->pc = 0x12588Cu;
        goto label_12588c;
    }
    ctx->pc = 0x125884u;
    {
        const bool branch_taken_0x125884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x125884) {
            ctx->pc = 0x12589Cu;
            goto label_12589c;
        }
    }
    ctx->pc = 0x12588Cu;
label_12588c:
    // 0x12588c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125890:
    // 0x125890: 0xa3a300ee  sb          $v1, 0xEE($sp)
    ctx->pc = 0x125890u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 238), (uint8_t)GPR_U32(ctx, 3));
label_125894:
    // 0x125894: 0x10000002  b           . + 4 + (0x2 << 2)
label_125898:
    if (ctx->pc == 0x125898u) {
        ctx->pc = 0x12589Cu;
        goto label_12589c;
    }
    ctx->pc = 0x125894u;
    {
        const bool branch_taken_0x125894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125894) {
            ctx->pc = 0x1258A0u;
            goto label_1258a0;
        }
    }
    ctx->pc = 0x12589Cu;
label_12589c:
    // 0x12589c: 0xa3a000ee  sb          $zero, 0xEE($sp)
    ctx->pc = 0x12589cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 238), (uint8_t)GPR_U32(ctx, 0));
label_1258a0:
    // 0x1258a0: 0x93a300ee  lbu         $v1, 0xEE($sp)
    ctx->pc = 0x1258a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 238)));
label_1258a4:
    // 0x1258a4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1258a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1258a8:
    // 0x1258a8: 0x12000163  beqz        $s0, . + 4 + (0x163 << 2)
label_1258ac:
    if (ctx->pc == 0x1258ACu) {
        ctx->pc = 0x1258B0u;
        goto label_1258b0;
    }
    ctx->pc = 0x1258A8u;
    {
        const bool branch_taken_0x1258a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1258a8) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x1258B0u;
label_1258b0:
    // 0x1258b0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1258b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1258b4:
    // 0x1258b4: 0xc042330  jal         func_108CC0
label_1258b8:
    if (ctx->pc == 0x1258B8u) {
        ctx->pc = 0x1258BCu;
        goto label_1258bc;
    }
    ctx->pc = 0x1258B4u;
    SET_GPR_U32(ctx, 31, 0x1258BCu);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x1258B4u, 0x1258BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1258BCu;
label_1258bc:
    // 0x1258bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1258bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1258c0:
    // 0x1258c0: 0xc048f38  jal         func_123CE0
label_1258c4:
    if (ctx->pc == 0x1258C4u) {
        ctx->pc = 0x1258C8u;
        goto label_1258c8;
    }
    ctx->pc = 0x1258C0u;
    SET_GPR_U32(ctx, 31, 0x1258C8u);
    ctx->pc = 0x123CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CE0u, 0x1258C0u, 0x1258C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1258C8u;
label_1258c8:
    // 0x1258c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1258c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1258cc:
    // 0x1258cc: 0xa3a000ed  sb          $zero, 0xED($sp)
    ctx->pc = 0x1258ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 237), (uint8_t)GPR_U32(ctx, 0));
label_1258d0:
    // 0x1258d0: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_1258d4:
    if (ctx->pc == 0x1258D4u) {
        ctx->pc = 0x1258D8u;
        goto label_1258d8;
    }
    ctx->pc = 0x1258D0u;
    {
        const bool branch_taken_0x1258d0 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x1258d0) {
            ctx->pc = 0x1258ECu;
            goto label_1258ec;
        }
    }
    ctx->pc = 0x1258D8u;
label_1258d8:
    // 0x1258d8: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x1258d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_1258dc:
    // 0x1258dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1258e0:
    if (ctx->pc == 0x1258E0u) {
        ctx->pc = 0x1258E4u;
        goto label_1258e4;
    }
    ctx->pc = 0x1258DCu;
    {
        const bool branch_taken_0x1258dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1258dc) {
            ctx->pc = 0x1258ECu;
            goto label_1258ec;
        }
    }
    ctx->pc = 0x1258E4u;
label_1258e4:
    // 0x1258e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1258e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1258e8:
    // 0x1258e8: 0xa3a300ed  sb          $v1, 0xED($sp)
    ctx->pc = 0x1258e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 237), (uint8_t)GPR_U32(ctx, 3));
label_1258ec:
    // 0x1258ec: 0x93a300ed  lbu         $v1, 0xED($sp)
    ctx->pc = 0x1258ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 237)));
label_1258f0:
    // 0x1258f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1258f4:
    if (ctx->pc == 0x1258F4u) {
        ctx->pc = 0x1258F8u;
        goto label_1258f8;
    }
    ctx->pc = 0x1258F0u;
    {
        const bool branch_taken_0x1258f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1258f0) {
            ctx->pc = 0x125908u;
            goto label_125908;
        }
    }
    ctx->pc = 0x1258F8u;
label_1258f8:
    // 0x1258f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1258f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1258fc:
    // 0x1258fc: 0x307e00ff  andi        $fp, $v1, 0xFF
    ctx->pc = 0x1258fcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_125900:
    // 0x125900: 0x10000002  b           . + 4 + (0x2 << 2)
label_125904:
    if (ctx->pc == 0x125904u) {
        ctx->pc = 0x125908u;
        goto label_125908;
    }
    ctx->pc = 0x125900u;
    {
        const bool branch_taken_0x125900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125900) {
            ctx->pc = 0x12590Cu;
            goto label_12590c;
        }
    }
    ctx->pc = 0x125908u;
label_125908:
    // 0x125908: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x125908u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12590c:
    // 0x12590c: 0x33d000ff  andi        $s0, $fp, 0xFF
    ctx->pc = 0x12590cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_125910:
    // 0x125910: 0x12000149  beqz        $s0, . + 4 + (0x149 << 2)
label_125914:
    if (ctx->pc == 0x125914u) {
        ctx->pc = 0x125918u;
        goto label_125918;
    }
    ctx->pc = 0x125910u;
    {
        const bool branch_taken_0x125910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x125910) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x125918u;
label_125918:
    // 0x125918: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x125918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_12591c:
    // 0x12591c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x12591cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_125920:
    // 0x125920: 0x2405056a  addiu       $a1, $zero, 0x56A
    ctx->pc = 0x125920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1386));
label_125924:
    // 0x125924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125928:
    // 0x125928: 0xc040ab0  jal         func_102AC0
label_12592c:
    if (ctx->pc == 0x12592Cu) {
        ctx->pc = 0x125930u;
        goto label_125930;
    }
    ctx->pc = 0x125928u;
    SET_GPR_U32(ctx, 31, 0x125930u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x125928u, 0x125930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125930u;
label_125930:
    // 0x125930: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x125930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125934:
    // 0x125934: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x125934u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125938:
    // 0x125938: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_12593c:
    if (ctx->pc == 0x12593Cu) {
        ctx->pc = 0x125940u;
        goto label_125940;
    }
    ctx->pc = 0x125938u;
    {
        const bool branch_taken_0x125938 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x125938) {
            ctx->pc = 0x125954u;
            goto label_125954;
        }
    }
    ctx->pc = 0x125940u;
label_125940:
    // 0x125940: 0x2a410004  slti        $at, $s2, 0x4
    ctx->pc = 0x125940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_125944:
    // 0x125944: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_125948:
    if (ctx->pc == 0x125948u) {
        ctx->pc = 0x12594Cu;
        goto label_12594c;
    }
    ctx->pc = 0x125944u;
    {
        const bool branch_taken_0x125944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x125944) {
            ctx->pc = 0x125954u;
            goto label_125954;
        }
    }
    ctx->pc = 0x12594Cu;
label_12594c:
    // 0x12594c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12594cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125950:
    // 0x125950: 0x307700ff  andi        $s7, $v1, 0xFF
    ctx->pc = 0x125950u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_125954:
    // 0x125954: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_125958:
    if (ctx->pc == 0x125958u) {
        ctx->pc = 0x12595Cu;
        goto label_12595c;
    }
    ctx->pc = 0x125954u;
    {
        const bool branch_taken_0x125954 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x125954) {
            ctx->pc = 0x12596Cu;
            goto label_12596c;
        }
    }
    ctx->pc = 0x12595Cu;
label_12595c:
    // 0x12595c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12595cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125960:
    // 0x125960: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x125960u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_125964:
    // 0x125964: 0x10000002  b           . + 4 + (0x2 << 2)
label_125968:
    if (ctx->pc == 0x125968u) {
        ctx->pc = 0x12596Cu;
        goto label_12596c;
    }
    ctx->pc = 0x125964u;
    {
        const bool branch_taken_0x125964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125964) {
            ctx->pc = 0x125970u;
            goto label_125970;
        }
    }
    ctx->pc = 0x12596Cu;
label_12596c:
    // 0x12596c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12596cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125970:
    // 0x125970: 0x32d000ff  andi        $s0, $s6, 0xFF
    ctx->pc = 0x125970u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_125974:
    // 0x125974: 0x12000130  beqz        $s0, . + 4 + (0x130 << 2)
label_125978:
    if (ctx->pc == 0x125978u) {
        ctx->pc = 0x12597Cu;
        goto label_12597c;
    }
    ctx->pc = 0x125974u;
    {
        const bool branch_taken_0x125974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x125974) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x12597Cu;
label_12597c:
    // 0x12597c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x12597cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_125980:
    // 0x125980: 0xc042330  jal         func_108CC0
label_125984:
    if (ctx->pc == 0x125984u) {
        ctx->pc = 0x125988u;
        goto label_125988;
    }
    ctx->pc = 0x125980u;
    SET_GPR_U32(ctx, 31, 0x125988u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x125980u, 0x125988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125988u;
label_125988:
    // 0x125988: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x125988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_12598c:
    // 0x12598c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x12598cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_125990:
    // 0x125990: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_125994:
    if (ctx->pc == 0x125994u) {
        ctx->pc = 0x125998u;
        goto label_125998;
    }
    ctx->pc = 0x125990u;
    {
        const bool branch_taken_0x125990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125990) {
            ctx->pc = 0x1259A8u;
            goto label_1259a8;
        }
    }
    ctx->pc = 0x125998u;
label_125998:
    // 0x125998: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12599c:
    // 0x12599c: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x12599cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1259a0:
    // 0x1259a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1259a4:
    if (ctx->pc == 0x1259A4u) {
        ctx->pc = 0x1259A8u;
        goto label_1259a8;
    }
    ctx->pc = 0x1259A0u;
    {
        const bool branch_taken_0x1259a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1259a0) {
            ctx->pc = 0x1259ACu;
            goto label_1259ac;
        }
    }
    ctx->pc = 0x1259A8u;
label_1259a8:
    // 0x1259a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1259a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1259ac:
    // 0x1259ac: 0x32b000ff  andi        $s0, $s5, 0xFF
    ctx->pc = 0x1259acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_1259b0:
    // 0x1259b0: 0x12000121  beqz        $s0, . + 4 + (0x121 << 2)
label_1259b4:
    if (ctx->pc == 0x1259B4u) {
        ctx->pc = 0x1259B8u;
        goto label_1259b8;
    }
    ctx->pc = 0x1259B0u;
    {
        const bool branch_taken_0x1259b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1259b0) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x1259B8u;
label_1259b8:
    // 0x1259b8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1259b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1259bc:
    // 0x1259bc: 0xc04939c  jal         func_124E70
label_1259c0:
    if (ctx->pc == 0x1259C0u) {
        ctx->pc = 0x1259C4u;
        goto label_1259c4;
    }
    ctx->pc = 0x1259BCu;
    SET_GPR_U32(ctx, 31, 0x1259C4u);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x1259BCu, 0x1259C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1259C4u;
label_1259c4:
    // 0x1259c4: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1259c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_1259c8:
    // 0x1259c8: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1259c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1259cc:
    // 0x1259cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1259d0:
    if (ctx->pc == 0x1259D0u) {
        ctx->pc = 0x1259D4u;
        goto label_1259d4;
    }
    ctx->pc = 0x1259CCu;
    {
        const bool branch_taken_0x1259cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1259cc) {
            ctx->pc = 0x1259E4u;
            goto label_1259e4;
        }
    }
    ctx->pc = 0x1259D4u;
label_1259d4:
    // 0x1259d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1259d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1259d8:
    // 0x1259d8: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x1259d8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1259dc:
    // 0x1259dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1259e0:
    if (ctx->pc == 0x1259E0u) {
        ctx->pc = 0x1259E4u;
        goto label_1259e4;
    }
    ctx->pc = 0x1259DCu;
    {
        const bool branch_taken_0x1259dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1259dc) {
            ctx->pc = 0x1259E8u;
            goto label_1259e8;
        }
    }
    ctx->pc = 0x1259E4u;
label_1259e4:
    // 0x1259e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1259e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1259e8:
    // 0x1259e8: 0x329000ff  andi        $s0, $s4, 0xFF
    ctx->pc = 0x1259e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_1259ec:
    // 0x1259ec: 0x12000112  beqz        $s0, . + 4 + (0x112 << 2)
label_1259f0:
    if (ctx->pc == 0x1259F0u) {
        ctx->pc = 0x1259F4u;
        goto label_1259f4;
    }
    ctx->pc = 0x1259ECu;
    {
        const bool branch_taken_0x1259ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1259ec) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x1259F4u;
label_1259f4:
    // 0x1259f4: 0x8f84b9f0  lw          $a0, -0x4610($gp)
    ctx->pc = 0x1259f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949360)));
label_1259f8:
    // 0x1259f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1259f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1259fc:
    // 0x1259fc: 0x1083008f  beq         $a0, $v1, . + 4 + (0x8F << 2)
label_125a00:
    if (ctx->pc == 0x125A00u) {
        ctx->pc = 0x125A04u;
        goto label_125a04;
    }
    ctx->pc = 0x1259FCu;
    {
        const bool branch_taken_0x1259fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1259fc) {
            ctx->pc = 0x125C3Cu;
            goto label_125c3c;
        }
    }
    ctx->pc = 0x125A04u;
label_125a04:
    // 0x125a04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x125a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_125a08:
    // 0x125a08: 0x10830080  beq         $a0, $v1, . + 4 + (0x80 << 2)
label_125a0c:
    if (ctx->pc == 0x125A0Cu) {
        ctx->pc = 0x125A10u;
        goto label_125a10;
    }
    ctx->pc = 0x125A08u;
    {
        const bool branch_taken_0x125a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x125a08) {
            ctx->pc = 0x125C0Cu;
            goto label_125c0c;
        }
    }
    ctx->pc = 0x125A10u;
label_125a10:
    // 0x125a10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125a14:
    // 0x125a14: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_125a18:
    if (ctx->pc == 0x125A18u) {
        ctx->pc = 0x125A1Cu;
        goto label_125a1c;
    }
    ctx->pc = 0x125A14u;
    {
        const bool branch_taken_0x125a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x125a14) {
            ctx->pc = 0x125A48u;
            goto label_125a48;
        }
    }
    ctx->pc = 0x125A1Cu;
label_125a1c:
    // 0x125a1c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_125a20:
    if (ctx->pc == 0x125A20u) {
        ctx->pc = 0x125A24u;
        goto label_125a24;
    }
    ctx->pc = 0x125A1Cu;
    {
        const bool branch_taken_0x125a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a1c) {
            ctx->pc = 0x125A2Cu;
            goto label_125a2c;
        }
    }
    ctx->pc = 0x125A24u;
label_125a24:
    // 0x125a24: 0x10000104  b           . + 4 + (0x104 << 2)
label_125a28:
    if (ctx->pc == 0x125A28u) {
        ctx->pc = 0x125A2Cu;
        goto label_125a2c;
    }
    ctx->pc = 0x125A24u;
    {
        const bool branch_taken_0x125a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a24) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x125A2Cu;
label_125a2c:
    // 0x125a2c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x125a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_125a30:
    // 0x125a30: 0xc0497ac  jal         func_125EB0
label_125a34:
    if (ctx->pc == 0x125A34u) {
        ctx->pc = 0x125A38u;
        goto label_125a38;
    }
    ctx->pc = 0x125A30u;
    SET_GPR_U32(ctx, 31, 0x125A38u);
    ctx->pc = 0x125EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125EB0u, 0x125A30u, 0x125A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125A38u;
label_125a38:
    // 0x125a38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125a3c:
    // 0x125a3c: 0xaf83b9f0  sw          $v1, -0x4610($gp)
    ctx->pc = 0x125a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 3));
label_125a40:
    // 0x125a40: 0x100000fd  b           . + 4 + (0xFD << 2)
label_125a44:
    if (ctx->pc == 0x125A44u) {
        ctx->pc = 0x125A48u;
        goto label_125a48;
    }
    ctx->pc = 0x125A40u;
    {
        const bool branch_taken_0x125a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a40) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x125A48u;
label_125a48:
    // 0x125a48: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x125a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_125a4c:
    // 0x125a4c: 0xc041b48  jal         func_106D20
label_125a50:
    if (ctx->pc == 0x125A50u) {
        ctx->pc = 0x125A54u;
        goto label_125a54;
    }
    ctx->pc = 0x125A4Cu;
    SET_GPR_U32(ctx, 31, 0x125A54u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x125A4Cu, 0x125A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125A54u;
label_125a54:
    // 0x125a54: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x125a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_125a58:
    // 0x125a58: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x125a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_125a5c:
    // 0x125a5c: 0x24a523d8  addiu       $a1, $a1, 0x23D8
    ctx->pc = 0x125a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9176));
label_125a60:
    // 0x125a60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x125a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_125a64:
    // 0x125a64: 0x27878b50  addiu       $a3, $gp, -0x74B0
    ctx->pc = 0x125a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
label_125a68:
    // 0x125a68: 0xc0424a8  jal         func_1092A0
label_125a6c:
    if (ctx->pc == 0x125A6Cu) {
        ctx->pc = 0x125A70u;
        goto label_125a70;
    }
    ctx->pc = 0x125A68u;
    SET_GPR_U32(ctx, 31, 0x125A70u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x125A68u, 0x125A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125A70u;
label_125a70:
    // 0x125a70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x125a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_125a74:
    // 0x125a74: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x125a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_125a78:
    // 0x125a78: 0xac43b4b0  sw          $v1, -0x4B50($v0)
    ctx->pc = 0x125a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948016), GPR_U32(ctx, 3));
label_125a7c:
    // 0x125a7c: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x125a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_125a80:
    // 0x125a80: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x125a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_125a84:
    // 0x125a84: 0xac43b4b4  sw          $v1, -0x4B4C($v0)
    ctx->pc = 0x125a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948020), GPR_U32(ctx, 3));
label_125a88:
    // 0x125a88: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x125a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_125a8c:
    // 0x125a8c: 0xac53b4b8  sw          $s3, -0x4B48($v0)
    ctx->pc = 0x125a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948024), GPR_U32(ctx, 19));
label_125a90:
    // 0x125a90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125a94:
    // 0x125a94: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x125a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_125a98:
    // 0x125a98: 0xac43b4e0  sw          $v1, -0x4B20($v0)
    ctx->pc = 0x125a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948064), GPR_U32(ctx, 3));
label_125a9c:
    // 0x125a9c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x125a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_125aa0:
    // 0x125aa0: 0x2484b4e4  addiu       $a0, $a0, -0x4B1C
    ctx->pc = 0x125aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948068));
label_125aa4:
    // 0x125aa4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x125aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_125aa8:
    // 0x125aa8: 0x24a52280  addiu       $a1, $a1, 0x2280
    ctx->pc = 0x125aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
label_125aac:
    // 0x125aac: 0xc0bc5c6  jal         func_2F1718
label_125ab0:
    if (ctx->pc == 0x125AB0u) {
        ctx->pc = 0x125AB4u;
        goto label_125ab4;
    }
    ctx->pc = 0x125AACu;
    SET_GPR_U32(ctx, 31, 0x125AB4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x125AACu, 0x125AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125AB4u;
label_125ab4:
    // 0x125ab4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x125ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125ab8:
    // 0x125ab8: 0x10000044  b           . + 4 + (0x44 << 2)
label_125abc:
    if (ctx->pc == 0x125ABCu) {
        ctx->pc = 0x125AC0u;
        goto label_125ac0;
    }
    ctx->pc = 0x125AB8u;
    {
        const bool branch_taken_0x125ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125ab8) {
            ctx->pc = 0x125BCCu;
            goto label_125bcc;
        }
    }
    ctx->pc = 0x125AC0u;
label_125ac0:
    // 0x125ac0: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x125ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_125ac4:
    // 0x125ac4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x125ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_125ac8:
    // 0x125ac8: 0xc041b48  jal         func_106D20
label_125acc:
    if (ctx->pc == 0x125ACCu) {
        ctx->pc = 0x125AD0u;
        goto label_125ad0;
    }
    ctx->pc = 0x125AC8u;
    SET_GPR_U32(ctx, 31, 0x125AD0u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x125AC8u, 0x125AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125AD0u;
label_125ad0:
    // 0x125ad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125ad4:
    // 0x125ad4: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_125ad8:
    if (ctx->pc == 0x125AD8u) {
        ctx->pc = 0x125ADCu;
        goto label_125adc;
    }
    ctx->pc = 0x125AD4u;
    {
        const bool branch_taken_0x125ad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x125ad4) {
            ctx->pc = 0x125AE4u;
            goto label_125ae4;
        }
    }
    ctx->pc = 0x125ADCu;
label_125adc:
    // 0x125adc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_125ae0:
    if (ctx->pc == 0x125AE0u) {
        ctx->pc = 0x125AE4u;
        goto label_125ae4;
    }
    ctx->pc = 0x125ADCu;
    {
        const bool branch_taken_0x125adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125adc) {
            ctx->pc = 0x125B50u;
            goto label_125b50;
        }
    }
    ctx->pc = 0x125AE4u;
label_125ae4:
    // 0x125ae4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x125ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_125ae8:
    // 0x125ae8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x125ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_125aec:
    // 0x125aec: 0x24a523d8  addiu       $a1, $a1, 0x23D8
    ctx->pc = 0x125aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9176));
label_125af0:
    // 0x125af0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x125af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_125af4:
    // 0x125af4: 0x27878b50  addiu       $a3, $gp, -0x74B0
    ctx->pc = 0x125af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
label_125af8:
    // 0x125af8: 0xc0424a8  jal         func_1092A0
label_125afc:
    if (ctx->pc == 0x125AFCu) {
        ctx->pc = 0x125B00u;
        goto label_125b00;
    }
    ctx->pc = 0x125AF8u;
    SET_GPR_U32(ctx, 31, 0x125B00u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x125AF8u, 0x125B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B00u;
label_125b00:
    // 0x125b00: 0xc048f34  jal         func_123CD0
label_125b04:
    if (ctx->pc == 0x125B04u) {
        ctx->pc = 0x125B08u;
        goto label_125b08;
    }
    ctx->pc = 0x125B00u;
    SET_GPR_U32(ctx, 31, 0x125B08u);
    ctx->pc = 0x123CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CD0u, 0x125B00u, 0x125B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B08u;
label_125b08:
    // 0x125b08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125b0c:
    // 0x125b0c: 0xc0497a4  jal         func_125E90
label_125b10:
    if (ctx->pc == 0x125B10u) {
        ctx->pc = 0x125B14u;
        goto label_125b14;
    }
    ctx->pc = 0x125B0Cu;
    SET_GPR_U32(ctx, 31, 0x125B14u);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x125B0Cu, 0x125B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B14u;
label_125b14:
    // 0x125b14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125b18:
    // 0x125b18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x125b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_125b1c:
    // 0x125b1c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x125b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_125b20:
    // 0x125b20: 0x320f809  jalr        $t9
label_125b24:
    if (ctx->pc == 0x125B24u) {
        ctx->pc = 0x125B28u;
        goto label_125b28;
    }
    ctx->pc = 0x125B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x125B28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125B20u, 0x125B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125B28u;
label_125b28:
    // 0x125b28: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x125b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_125b2c:
    // 0x125b2c: 0xc048f34  jal         func_123CD0
label_125b30:
    if (ctx->pc == 0x125B30u) {
        ctx->pc = 0x125B34u;
        goto label_125b34;
    }
    ctx->pc = 0x125B2Cu;
    SET_GPR_U32(ctx, 31, 0x125B34u);
    ctx->pc = 0x123CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CD0u, 0x125B2Cu, 0x125B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B34u;
label_125b34:
    // 0x125b34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125b38:
    // 0x125b38: 0xc0497a4  jal         func_125E90
label_125b3c:
    if (ctx->pc == 0x125B3Cu) {
        ctx->pc = 0x125B40u;
        goto label_125b40;
    }
    ctx->pc = 0x125B38u;
    SET_GPR_U32(ctx, 31, 0x125B40u);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x125B38u, 0x125B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B40u;
label_125b40:
    // 0x125b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125b44:
    // 0x125b44: 0xc049394  jal         func_124E50
label_125b48:
    if (ctx->pc == 0x125B48u) {
        ctx->pc = 0x125B4Cu;
        goto label_125b4c;
    }
    ctx->pc = 0x125B44u;
    SET_GPR_U32(ctx, 31, 0x125B4Cu);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x125B44u, 0x125B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B4Cu;
label_125b4c:
    // 0x125b4c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x125b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_125b50:
    // 0x125b50: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x125b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_125b54:
    // 0x125b54: 0xc041b38  jal         func_106CE0
label_125b58:
    if (ctx->pc == 0x125B58u) {
        ctx->pc = 0x125B5Cu;
        goto label_125b5c;
    }
    ctx->pc = 0x125B54u;
    SET_GPR_U32(ctx, 31, 0x125B5Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x125B54u, 0x125B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B5Cu;
label_125b5c:
    // 0x125b5c: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x125b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_125b60:
    // 0x125b60: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x125b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_125b64:
    // 0x125b64: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x125b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_125b68:
    // 0x125b68: 0x2463b4b0  addiu       $v1, $v1, -0x4B50
    ctx->pc = 0x125b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948016));
label_125b6c:
    // 0x125b6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x125b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_125b70:
    // 0x125b70: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x125b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
label_125b74:
    // 0x125b74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x125b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125b78:
    // 0x125b78: 0xc0bc5c6  jal         func_2F1718
label_125b7c:
    if (ctx->pc == 0x125B7Cu) {
        ctx->pc = 0x125B80u;
        goto label_125b80;
    }
    ctx->pc = 0x125B78u;
    SET_GPR_U32(ctx, 31, 0x125B80u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x125B78u, 0x125B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B80u;
label_125b80:
    // 0x125b80: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x125b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_125b84:
    // 0x125b84: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x125b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_125b88:
    // 0x125b88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x125b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_125b8c:
    // 0x125b8c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x125b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_125b90:
    // 0x125b90: 0x2442b4b0  addiu       $v0, $v0, -0x4B50
    ctx->pc = 0x125b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948016));
label_125b94:
    // 0x125b94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x125b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_125b98:
    // 0x125b98: 0xac440294  sw          $a0, 0x294($v0)
    ctx->pc = 0x125b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 660), GPR_U32(ctx, 4));
label_125b9c:
    // 0x125b9c: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x125b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_125ba0:
    // 0x125ba0: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x125ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_125ba4:
    // 0x125ba4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x125ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_125ba8:
    // 0x125ba8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x125ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_125bac:
    // 0x125bac: 0x2442b4b0  addiu       $v0, $v0, -0x4B50
    ctx->pc = 0x125bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948016));
label_125bb0:
    // 0x125bb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x125bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_125bb4:
    // 0x125bb4: 0xac4402dc  sw          $a0, 0x2DC($v0)
    ctx->pc = 0x125bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 732), GPR_U32(ctx, 4));
label_125bb8:
    // 0x125bb8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x125bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_125bbc:
    // 0x125bbc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x125bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125bc0:
    // 0x125bc0: 0xc0402d4  jal         func_100B50
label_125bc4:
    if (ctx->pc == 0x125BC4u) {
        ctx->pc = 0x125BC8u;
        goto label_125bc8;
    }
    ctx->pc = 0x125BC0u;
    SET_GPR_U32(ctx, 31, 0x125BC8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x125BC0u, 0x125BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125BC8u;
label_125bc8:
    // 0x125bc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x125bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_125bcc:
    // 0x125bcc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x125bccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_125bd0:
    // 0x125bd0: 0x1420ffbb  bnez        $at, . + 4 + (-0x45 << 2)
label_125bd4:
    if (ctx->pc == 0x125BD4u) {
        ctx->pc = 0x125BD8u;
        goto label_125bd8;
    }
    ctx->pc = 0x125BD0u;
    {
        const bool branch_taken_0x125bd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x125bd0) {
            ctx->pc = 0x125AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125ac0;
        }
    }
    ctx->pc = 0x125BD8u;
label_125bd8:
    // 0x125bd8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x125bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_125bdc:
    // 0x125bdc: 0x2484b4b0  addiu       $a0, $a0, -0x4B50
    ctx->pc = 0x125bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948016));
label_125be0:
    // 0x125be0: 0xc1252b8  jal         func_494AE0
label_125be4:
    if (ctx->pc == 0x125BE4u) {
        ctx->pc = 0x125BE8u;
        goto label_125be8;
    }
    ctx->pc = 0x125BE0u;
    SET_GPR_U32(ctx, 31, 0x125BE8u);
    ctx->pc = 0x494AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494AE0u, 0x125BE0u, 0x125BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125BE8u;
label_125be8:
    // 0x125be8: 0xaf828b34  sw          $v0, -0x74CC($gp)
    ctx->pc = 0x125be8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937396), GPR_U32(ctx, 2));
label_125bec:
    // 0x125bec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x125becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_125bf0:
    // 0x125bf0: 0xaf82b9f0  sw          $v0, -0x4610($gp)
    ctx->pc = 0x125bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 2));
label_125bf4:
    // 0x125bf4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x125bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_125bf8:
    // 0x125bf8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x125bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125bfc:
    // 0x125bfc: 0xc0402d4  jal         func_100B50
label_125c00:
    if (ctx->pc == 0x125C00u) {
        ctx->pc = 0x125C04u;
        goto label_125c04;
    }
    ctx->pc = 0x125BFCu;
    SET_GPR_U32(ctx, 31, 0x125C04u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x125BFCu, 0x125C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C04u;
label_125c04:
    // 0x125c04: 0x1000008c  b           . + 4 + (0x8C << 2)
label_125c08:
    if (ctx->pc == 0x125C08u) {
        ctx->pc = 0x125C0Cu;
        goto label_125c0c;
    }
    ctx->pc = 0x125C04u;
    {
        const bool branch_taken_0x125c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125c04) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x125C0Cu;
label_125c0c:
    // 0x125c0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x125c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125c10:
    // 0x125c10: 0xc125260  jal         func_494980
label_125c14:
    if (ctx->pc == 0x125C14u) {
        ctx->pc = 0x125C18u;
        goto label_125c18;
    }
    ctx->pc = 0x125C10u;
    SET_GPR_U32(ctx, 31, 0x125C18u);
    ctx->pc = 0x494980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494980u, 0x125C10u, 0x125C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C18u;
label_125c18:
    // 0x125c18: 0xaf828b34  sw          $v0, -0x74CC($gp)
    ctx->pc = 0x125c18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937396), GPR_U32(ctx, 2));
label_125c1c:
    // 0x125c1c: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x125c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
label_125c20:
    // 0x125c20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125c24:
    // 0x125c24: 0x10830084  beq         $a0, $v1, . + 4 + (0x84 << 2)
label_125c28:
    if (ctx->pc == 0x125C28u) {
        ctx->pc = 0x125C2Cu;
        goto label_125c2c;
    }
    ctx->pc = 0x125C24u;
    {
        const bool branch_taken_0x125c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x125c24) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x125C2Cu;
label_125c2c:
    // 0x125c2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x125c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_125c30:
    // 0x125c30: 0xaf83b9f0  sw          $v1, -0x4610($gp)
    ctx->pc = 0x125c30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 3));
label_125c34:
    // 0x125c34: 0x10000080  b           . + 4 + (0x80 << 2)
label_125c38:
    if (ctx->pc == 0x125C38u) {
        ctx->pc = 0x125C3Cu;
        goto label_125c3c;
    }
    ctx->pc = 0x125C34u;
    {
        const bool branch_taken_0x125c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125c34) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x125C3Cu;
label_125c3c:
    // 0x125c3c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x125c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125c40:
    // 0x125c40: 0xc088560  jal         func_221580
label_125c44:
    if (ctx->pc == 0x125C44u) {
        ctx->pc = 0x125C48u;
        goto label_125c48;
    }
    ctx->pc = 0x125C40u;
    SET_GPR_U32(ctx, 31, 0x125C48u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x125C40u, 0x125C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C48u;
label_125c48:
    // 0x125c48: 0x8f838b34  lw          $v1, -0x74CC($gp)
    ctx->pc = 0x125c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
label_125c4c:
    // 0x125c4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x125c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_125c50:
    // 0x125c50: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
label_125c54:
    if (ctx->pc == 0x125C54u) {
        ctx->pc = 0x125C58u;
        goto label_125c58;
    }
    ctx->pc = 0x125C50u;
    {
        const bool branch_taken_0x125c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x125c50) {
            ctx->pc = 0x125D78u;
            goto label_125d78;
        }
    }
    ctx->pc = 0x125C58u;
label_125c58:
    // 0x125c58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x125c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_125c5c:
    // 0x125c5c: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
label_125c60:
    if (ctx->pc == 0x125C60u) {
        ctx->pc = 0x125C64u;
        goto label_125c64;
    }
    ctx->pc = 0x125C5Cu;
    {
        const bool branch_taken_0x125c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x125c5c) {
            ctx->pc = 0x125D24u;
            goto label_125d24;
        }
    }
    ctx->pc = 0x125C64u;
label_125c64:
    // 0x125c64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x125c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_125c68:
    // 0x125c68: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_125c6c:
    if (ctx->pc == 0x125C6Cu) {
        ctx->pc = 0x125C70u;
        goto label_125c70;
    }
    ctx->pc = 0x125C68u;
    {
        const bool branch_taken_0x125c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x125c68) {
            ctx->pc = 0x125C78u;
            goto label_125c78;
        }
    }
    ctx->pc = 0x125C70u;
label_125c70:
    // 0x125c70: 0x1000006d  b           . + 4 + (0x6D << 2)
label_125c74:
    if (ctx->pc == 0x125C74u) {
        ctx->pc = 0x125C78u;
        goto label_125c78;
    }
    ctx->pc = 0x125C70u;
    {
        const bool branch_taken_0x125c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125c70) {
            ctx->pc = 0x125E28u;
            goto label_125e28;
        }
    }
    ctx->pc = 0x125C78u;
label_125c78:
    // 0x125c78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x125c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125c7c:
    // 0x125c7c: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x125c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_125c80:
    // 0x125c80: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x125c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_125c84:
    // 0x125c84: 0xc040924  jal         func_102490
label_125c88:
    if (ctx->pc == 0x125C88u) {
        ctx->pc = 0x125C8Cu;
        goto label_125c8c;
    }
    ctx->pc = 0x125C84u;
    SET_GPR_U32(ctx, 31, 0x125C8Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x125C84u, 0x125C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C8Cu;
label_125c8c:
    // 0x125c8c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x125c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_125c90:
    // 0x125c90: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x125c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_125c94:
    // 0x125c94: 0x24050563  addiu       $a1, $zero, 0x563
    ctx->pc = 0x125c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1379));
label_125c98:
    // 0x125c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125c9c:
    // 0x125c9c: 0xc040ab0  jal         func_102AC0
label_125ca0:
    if (ctx->pc == 0x125CA0u) {
        ctx->pc = 0x125CA4u;
        goto label_125ca4;
    }
    ctx->pc = 0x125C9Cu;
    SET_GPR_U32(ctx, 31, 0x125CA4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x125C9Cu, 0x125CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CA4u;
label_125ca4:
    // 0x125ca4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x125ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125ca8:
    // 0x125ca8: 0x24050563  addiu       $a1, $zero, 0x563
    ctx->pc = 0x125ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1379));
label_125cac:
    // 0x125cac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x125cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125cb0:
    // 0x125cb0: 0xc040924  jal         func_102490
label_125cb4:
    if (ctx->pc == 0x125CB4u) {
        ctx->pc = 0x125CB8u;
        goto label_125cb8;
    }
    ctx->pc = 0x125CB0u;
    SET_GPR_U32(ctx, 31, 0x125CB8u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x125CB0u, 0x125CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CB8u;
label_125cb8:
    // 0x125cb8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x125cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_125cbc:
    // 0x125cbc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x125cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_125cc0:
    // 0x125cc0: 0x24050564  addiu       $a1, $zero, 0x564
    ctx->pc = 0x125cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1380));
label_125cc4:
    // 0x125cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125cc8:
    // 0x125cc8: 0xc040ab0  jal         func_102AC0
label_125ccc:
    if (ctx->pc == 0x125CCCu) {
        ctx->pc = 0x125CD0u;
        goto label_125cd0;
    }
    ctx->pc = 0x125CC8u;
    SET_GPR_U32(ctx, 31, 0x125CD0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x125CC8u, 0x125CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CD0u;
label_125cd0:
    // 0x125cd0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x125cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125cd4:
    // 0x125cd4: 0x24050564  addiu       $a1, $zero, 0x564
    ctx->pc = 0x125cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1380));
label_125cd8:
    // 0x125cd8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x125cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125cdc:
    // 0x125cdc: 0xc040924  jal         func_102490
label_125ce0:
    if (ctx->pc == 0x125CE0u) {
        ctx->pc = 0x125CE4u;
        goto label_125ce4;
    }
    ctx->pc = 0x125CDCu;
    SET_GPR_U32(ctx, 31, 0x125CE4u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x125CDCu, 0x125CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CE4u;
label_125ce4:
    // 0x125ce4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x125ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125ce8:
    // 0x125ce8: 0x24050568  addiu       $a1, $zero, 0x568
    ctx->pc = 0x125ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
label_125cec:
    // 0x125cec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x125cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_125cf0:
    // 0x125cf0: 0xc040924  jal         func_102490
label_125cf4:
    if (ctx->pc == 0x125CF4u) {
        ctx->pc = 0x125CF8u;
        goto label_125cf8;
    }
    ctx->pc = 0x125CF0u;
    SET_GPR_U32(ctx, 31, 0x125CF8u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x125CF0u, 0x125CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CF8u;
label_125cf8:
    // 0x125cf8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x125cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125cfc:
    // 0x125cfc: 0x24050554  addiu       $a1, $zero, 0x554
    ctx->pc = 0x125cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1364));
label_125d00:
    // 0x125d00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x125d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125d04:
    // 0x125d04: 0xc041b54  jal         func_106D50
label_125d08:
    if (ctx->pc == 0x125D08u) {
        ctx->pc = 0x125D0Cu;
        goto label_125d0c;
    }
    ctx->pc = 0x125D04u;
    SET_GPR_U32(ctx, 31, 0x125D0Cu);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x125D04u, 0x125D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D0Cu;
label_125d0c:
    // 0x125d0c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x125d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_125d10:
    // 0x125d10: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x125d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125d14:
    // 0x125d14: 0xc08ef28  jal         func_23BCA0
label_125d18:
    if (ctx->pc == 0x125D18u) {
        ctx->pc = 0x125D1Cu;
        goto label_125d1c;
    }
    ctx->pc = 0x125D14u;
    SET_GPR_U32(ctx, 31, 0x125D1Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x125D14u, 0x125D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D1Cu;
label_125d1c:
    // 0x125d1c: 0x10000042  b           . + 4 + (0x42 << 2)
label_125d20:
    if (ctx->pc == 0x125D20u) {
        ctx->pc = 0x125D24u;
        goto label_125d24;
    }
    ctx->pc = 0x125D1Cu;
    {
        const bool branch_taken_0x125d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125d1c) {
            ctx->pc = 0x125E28u;
            goto label_125e28;
        }
    }
    ctx->pc = 0x125D24u;
label_125d24:
    // 0x125d24: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x125d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125d28:
    // 0x125d28: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x125d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_125d2c:
    // 0x125d2c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x125d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_125d30:
    // 0x125d30: 0xc040924  jal         func_102490
label_125d34:
    if (ctx->pc == 0x125D34u) {
        ctx->pc = 0x125D38u;
        goto label_125d38;
    }
    ctx->pc = 0x125D30u;
    SET_GPR_U32(ctx, 31, 0x125D38u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x125D30u, 0x125D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D38u;
label_125d38:
    // 0x125d38: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x125d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125d3c:
    // 0x125d3c: 0x24050567  addiu       $a1, $zero, 0x567
    ctx->pc = 0x125d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1383));
label_125d40:
    // 0x125d40: 0x8f86b9f8  lw          $a2, -0x4608($gp)
    ctx->pc = 0x125d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949368)));
label_125d44:
    // 0x125d44: 0xc040924  jal         func_102490
label_125d48:
    if (ctx->pc == 0x125D48u) {
        ctx->pc = 0x125D4Cu;
        goto label_125d4c;
    }
    ctx->pc = 0x125D44u;
    SET_GPR_U32(ctx, 31, 0x125D4Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x125D44u, 0x125D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D4Cu;
label_125d4c:
    // 0x125d4c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x125d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125d50:
    // 0x125d50: 0x24050554  addiu       $a1, $zero, 0x554
    ctx->pc = 0x125d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1364));
label_125d54:
    // 0x125d54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x125d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125d58:
    // 0x125d58: 0xc041b54  jal         func_106D50
label_125d5c:
    if (ctx->pc == 0x125D5Cu) {
        ctx->pc = 0x125D60u;
        goto label_125d60;
    }
    ctx->pc = 0x125D58u;
    SET_GPR_U32(ctx, 31, 0x125D60u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x125D58u, 0x125D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D60u;
label_125d60:
    // 0x125d60: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x125d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_125d64:
    // 0x125d64: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x125d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125d68:
    // 0x125d68: 0xc08ef28  jal         func_23BCA0
label_125d6c:
    if (ctx->pc == 0x125D6Cu) {
        ctx->pc = 0x125D70u;
        goto label_125d70;
    }
    ctx->pc = 0x125D68u;
    SET_GPR_U32(ctx, 31, 0x125D70u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x125D68u, 0x125D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D70u;
label_125d70:
    // 0x125d70: 0x1000002d  b           . + 4 + (0x2D << 2)
label_125d74:
    if (ctx->pc == 0x125D74u) {
        ctx->pc = 0x125D78u;
        goto label_125d78;
    }
    ctx->pc = 0x125D70u;
    {
        const bool branch_taken_0x125d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125d70) {
            ctx->pc = 0x125E28u;
            goto label_125e28;
        }
    }
    ctx->pc = 0x125D78u;
label_125d78:
    // 0x125d78: 0xc049c5c  jal         func_127170
label_125d7c:
    if (ctx->pc == 0x125D7Cu) {
        ctx->pc = 0x125D80u;
        goto label_125d80;
    }
    ctx->pc = 0x125D78u;
    SET_GPR_U32(ctx, 31, 0x125D80u);
    ctx->pc = 0x127170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127170u, 0x125D78u, 0x125D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D80u;
label_125d80:
    // 0x125d80: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x125d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_125d84:
    // 0x125d84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x125d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125d88:
    // 0x125d88: 0xc0553d4  jal         func_154F50
label_125d8c:
    if (ctx->pc == 0x125D8Cu) {
        ctx->pc = 0x125D90u;
        goto label_125d90;
    }
    ctx->pc = 0x125D88u;
    SET_GPR_U32(ctx, 31, 0x125D90u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x125D88u, 0x125D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D90u;
label_125d90:
    // 0x125d90: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x125d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_125d94:
    // 0x125d94: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x125d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_125d98:
    // 0x125d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x125d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125d9c:
    // 0x125d9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x125d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_125da0:
    // 0x125da0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x125da0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_125da4:
    // 0x125da4: 0x320f809  jalr        $t9
label_125da8:
    if (ctx->pc == 0x125DA8u) {
        ctx->pc = 0x125DACu;
        goto label_125dac;
    }
    ctx->pc = 0x125DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x125DACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125DA4u, 0x125DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125DACu;
label_125dac:
    // 0x125dac: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x125dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_125db0:
    // 0x125db0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x125db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_125db4:
    // 0x125db4: 0x27858b60  addiu       $a1, $gp, -0x74A0
    ctx->pc = 0x125db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937440));
label_125db8:
    // 0x125db8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125dbc:
    // 0x125dbc: 0xc047328  jal         func_11CCA0
label_125dc0:
    if (ctx->pc == 0x125DC0u) {
        ctx->pc = 0x125DC4u;
        goto label_125dc4;
    }
    ctx->pc = 0x125DBCu;
    SET_GPR_U32(ctx, 31, 0x125DC4u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x125DBCu, 0x125DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125DC4u;
label_125dc4:
    // 0x125dc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x125dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_125dc8:
    // 0x125dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125dcc:
    // 0x125dcc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_125dd0:
    if (ctx->pc == 0x125DD0u) {
        ctx->pc = 0x125DD4u;
        goto label_125dd4;
    }
    ctx->pc = 0x125DCCu;
    {
        const bool branch_taken_0x125dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x125dcc) {
            ctx->pc = 0x125E00u;
            goto label_125e00;
        }
    }
    ctx->pc = 0x125DD4u;
label_125dd4:
    // 0x125dd4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x125dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125dd8:
    // 0x125dd8: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x125dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_125ddc:
    // 0x125ddc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x125ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_125de0:
    // 0x125de0: 0xc040924  jal         func_102490
label_125de4:
    if (ctx->pc == 0x125DE4u) {
        ctx->pc = 0x125DE8u;
        goto label_125de8;
    }
    ctx->pc = 0x125DE0u;
    SET_GPR_U32(ctx, 31, 0x125DE8u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x125DE0u, 0x125DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125DE8u;
label_125de8:
    // 0x125de8: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x125de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_125dec:
    // 0x125dec: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x125decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125df0:
    // 0x125df0: 0xc08ef28  jal         func_23BCA0
label_125df4:
    if (ctx->pc == 0x125DF4u) {
        ctx->pc = 0x125DF8u;
        goto label_125df8;
    }
    ctx->pc = 0x125DF0u;
    SET_GPR_U32(ctx, 31, 0x125DF8u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x125DF0u, 0x125DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125DF8u;
label_125df8:
    // 0x125df8: 0x1000000b  b           . + 4 + (0xB << 2)
label_125dfc:
    if (ctx->pc == 0x125DFCu) {
        ctx->pc = 0x125E00u;
        goto label_125e00;
    }
    ctx->pc = 0x125DF8u;
    {
        const bool branch_taken_0x125df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125df8) {
            ctx->pc = 0x125E28u;
            goto label_125e28;
        }
    }
    ctx->pc = 0x125E00u;
label_125e00:
    // 0x125e00: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x125e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125e04:
    // 0x125e04: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x125e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_125e08:
    // 0x125e08: 0x24a523e8  addiu       $a1, $a1, 0x23E8
    ctx->pc = 0x125e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9192));
label_125e0c:
    // 0x125e0c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x125e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_125e10:
    // 0x125e10: 0xc041b24  jal         func_106C90
label_125e14:
    if (ctx->pc == 0x125E14u) {
        ctx->pc = 0x125E18u;
        goto label_125e18;
    }
    ctx->pc = 0x125E10u;
    SET_GPR_U32(ctx, 31, 0x125E18u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x125E10u, 0x125E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E18u;
label_125e18:
    // 0x125e18: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x125e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_125e1c:
    // 0x125e1c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x125e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125e20:
    // 0x125e20: 0xc08ef28  jal         func_23BCA0
label_125e24:
    if (ctx->pc == 0x125E24u) {
        ctx->pc = 0x125E28u;
        goto label_125e28;
    }
    ctx->pc = 0x125E20u;
    SET_GPR_U32(ctx, 31, 0x125E28u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x125E20u, 0x125E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E28u;
label_125e28:
    // 0x125e28: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x125e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_125e2c:
    // 0x125e2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x125e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125e30:
    // 0x125e30: 0xc0887b4  jal         func_221ED0
label_125e34:
    if (ctx->pc == 0x125E34u) {
        ctx->pc = 0x125E38u;
        goto label_125e38;
    }
    ctx->pc = 0x125E30u;
    SET_GPR_U32(ctx, 31, 0x125E38u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x125E30u, 0x125E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E38u;
label_125e38:
    // 0x125e38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x125e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_125e3c:
    // 0x125e3c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x125e3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_125e40:
    // 0x125e40: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x125e40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_125e44:
    // 0x125e44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x125e44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_125e48:
    // 0x125e48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x125e48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_125e4c:
    // 0x125e4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x125e4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_125e50:
    // 0x125e50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x125e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_125e54:
    // 0x125e54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x125e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_125e58:
    // 0x125e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x125e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_125e5c:
    // 0x125e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x125e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_125e60:
    // 0x125e60: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x125e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_125e64:
    // 0x125e64: 0x3e00008  jr          $ra
label_125e68:
    if (ctx->pc == 0x125E68u) {
        ctx->pc = 0x125E6Cu;
        goto label_125e6c;
    }
    ctx->pc = 0x125E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125E6Cu;
label_125e6c:
    // 0x125e6c: 0x0  nop
    ctx->pc = 0x125e6cu;
    // NOP
label_125e70:
    // 0x125e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_125e74:
    // 0x125e74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x125e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_125e78:
    // 0x125e78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x125e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_125e7c:
    // 0x125e7c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x125e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_125e80:
    // 0x125e80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x125e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_125e84:
    // 0x125e84: 0x3e00008  jr          $ra
label_125e88:
    if (ctx->pc == 0x125E88u) {
        ctx->pc = 0x125E8Cu;
        goto label_125e8c;
    }
    ctx->pc = 0x125E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125E8Cu;
label_125e8c:
    // 0x125e8c: 0x0  nop
    ctx->pc = 0x125e8cu;
    // NOP
    ctx->pc = 0x125e90u;
}
